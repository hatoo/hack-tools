use tree_sitter::{Node, Query, QueryCursor, TreeCursor};

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
        "identifier" if node.is_named() => {
            writeln!(
                out,
                "{space}<identifier> {} </identifier>",
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
