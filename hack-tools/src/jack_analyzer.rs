use tree_sitter::{Node, Query, QueryCursor};

pub fn syntax_analysis(code: &str) -> String {
    let mut parser = tree_sitter::Parser::new();
    parser.set_language(tree_sitter_jack::language()).unwrap();

    let tree = parser.parse(code, None).unwrap();

    let mut has_error = false;
    let query = Query::new(tree_sitter_hack_asm::language(), "(ERROR) @error").unwrap();
    let mut query_cursor = QueryCursor::new();
    for m in query_cursor.matches(&query, tree.root_node(), code.as_bytes()) {
        has_error = true;
        let node = m.captures[0].node;
        let start = node.start_position();
        let end = node.end_position();
        eprintln!(
            "parse error: {}:{}:{}: {}",
            start.row + 1,
            start.column + 1,
            end.column + 1,
            node.utf8_text(code.as_bytes()).unwrap()
        );
    }
    if has_error {
        std::process::exit(1);
    }

    let mut out = String::new();

    rec(
        tree.root_node().child_by_field_name("class").unwrap(),
        code,
        0,
        &mut out,
    )
    .unwrap();

    out
}

fn rec<W: std::fmt::Write>(
    node: Node,
    code: &str,
    indent: usize,
    out: &mut W,
) -> Result<(), std::fmt::Error> {
    let kind = node.kind();
    let space = " ".repeat(indent * 2);

    match node.kind() {
        "class" | "constructor" | "function" | "method" | "field" | "static" | "var" | "int"
        | "char" | "boolean" | "void" | "true" | "false" | "null" | "this" | "let" | "do"
        | "if" | "else" | "while" | "return"
            if !node.is_named() =>
        {
            writeln!(out, "{space}<keyword> {} </keyword>", node.kind())?;
        }
        "{" | "}" | "(" | ")" | "[" | "]" | "." | "," | ";" | "+" | "-" | "*" | "/" | "&" | "|"
        | "<" | ">" | "=" | "~" => {
            writeln!(
                out,
                "{space}<symbol> {} </symbol>",
                html_escape::encode_text(node.kind())
            )?;
        }
        "stringConstant" if node.is_named() => {
            writeln!(
                out,
                "{space}<stringConstant> {} </stringConstant>",
                html_escape::encode_text(
                    node.utf8_text(code.as_bytes())
                        .unwrap()
                        .trim_start_matches('"')
                        .trim_end_matches('"')
                )
            )?;
        }
        "integerConstant" if node.is_named() => {
            writeln!(
                out,
                "{space}<integerConstant> {} </integerConstant>",
                node.utf8_text(code.as_bytes()).unwrap()
            )?;
        }
        "identifier" if node.is_named() => {
            writeln!(
                out,
                "{space}<identifier> {} </identifier>",
                html_escape::encode_text(node.utf8_text(code.as_bytes()).unwrap())
            )?;
        }
        "keywordConstant" if node.is_named() => {
            writeln!(
                out,
                "{space}<keyword> {} </keyword>",
                html_escape::encode_text(node.utf8_text(code.as_bytes()).unwrap())
            )?;
        }
        "type" if node.is_named() => {
            let mut walker = node.walk();
            if walker.goto_first_child() {
                loop {
                    let node = walker.node();
                    if !node.is_extra() {
                        rec(node, code, indent, out)?;
                    }
                    if !walker.goto_next_sibling() {
                        break;
                    }
                }
            }
        }
        "op" | "unalyOp" | "parameter" | "op_term" | "lvalue" if node.is_named() => {
            let mut walker = node.walk();
            if walker.goto_first_child() {
                loop {
                    let node = walker.node();
                    if !node.is_extra() {
                        rec(node, code, indent, out)?;
                    }
                    if !walker.goto_next_sibling() {
                        break;
                    }
                }
            }
        }
        "statement" if node.is_named() => {
            let mut prev = node.prev_sibling();
            while prev.map(|n| n.is_extra()).unwrap_or(false) {
                prev = prev.unwrap().prev_sibling();
            }
            if prev.map(|n| n.kind()) != Some("statement") {
                writeln!(out, "{space}<statements>")?;
            }
            let mut walker = node.walk();
            if walker.goto_first_child() {
                loop {
                    let node = walker.node();
                    if !node.is_extra() {
                        rec(node, code, indent + 1, out)?;
                    }
                    if !walker.goto_next_sibling() {
                        break;
                    }
                }
            }
            let mut next = node.next_sibling();
            while next.map(|n| n.is_extra()).unwrap_or(false) {
                next = next.unwrap().next_sibling();
            }
            if next.map(|n| n.kind()) != Some("statement") {
                writeln!(out, "{space}</statements>")?;
            }
        }
        "subroutineCall" if node.is_named() => {
            let mut walker = node.walk();
            if walker.goto_first_child() {
                let mut last_lparen = false;
                loop {
                    let node = walker.node();
                    if !node.is_extra() {
                        if node.kind() == ")" && last_lparen {
                            writeln!(out, "{space}<expressionList>")?;
                            writeln!(out, "{space}</expressionList>")?;
                        }
                        last_lparen = node.kind() == "(";
                        rec(node, code, indent, out)?;
                    }
                    if !walker.goto_next_sibling() {
                        break;
                    }
                }
            }
        }
        "subroutineDec" if node.is_named() => {
            writeln!(out, "{space}<{kind}>")?;
            let mut walker = node.walk();
            if walker.goto_first_child() {
                let mut last_lparen = false;
                loop {
                    let node = walker.node();
                    if !node.is_extra() {
                        if node.kind() == ")" && last_lparen {
                            writeln!(out, "{space}  <parameterList>")?;
                            writeln!(out, "{space}  </parameterList>")?;
                        }
                        last_lparen = node.kind() == "(";
                        rec(node, code, indent + 1, out)?;
                    }
                    if !walker.goto_next_sibling() {
                        break;
                    }
                }
            }
            writeln!(out, "{space}</{kind}>")?;
        }
        /*
        "expression" if node.is_named() => {
            writeln!(out, "{space}<{kind}>", kind = node.kind())?;
            let mut walker = node.walk();
            if walker.goto_first_child() {
                if walker.node().kind() == "term" {
                    walker.goto_first_child();
                }
                loop {
                    let node = walker.node();
                    if !node.is_extra() {
                        rec(node, code, indent + 1, out)?;
                    }
                    if !walker.goto_next_sibling() {
                        break;
                    }
                }
            }
            writeln!(out, "{space}</{kind}>", kind = node.kind())?;
        }
        */
        _ => {
            writeln!(out, "{space}<{kind}>")?;
            let mut walker = node.walk();
            if walker.goto_first_child() {
                loop {
                    let node = walker.node();
                    if !node.is_extra() {
                        rec(node, code, indent + 1, out)?;
                    }
                    if !walker.goto_next_sibling() {
                        break;
                    }
                }
            }
            writeln!(out, "{space}</{kind}>")?;
        }
    }

    Ok(())
}
