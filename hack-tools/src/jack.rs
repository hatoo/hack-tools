use std::collections::HashMap;

use tree_sitter::{Node, Query, QueryCursor};

struct SymbolTable<'a> {
    static_vars: &'a HashMap<String, (String, usize)>,
    field_vars: &'a HashMap<String, (String, usize)>,
    argument_vars: &'a HashMap<String, (String, usize)>,
    local_vars: &'a HashMap<String, (String, usize)>,
}

impl<'a> SymbolTable<'a> {
    fn lookup(&self, name: &str) -> Option<String> {
        if let Some((_, index)) = self.local_vars.get(name) {
            return Some(format!("local {}", index));
        }
        if let Some((_, index)) = self.argument_vars.get(name) {
            return Some(format!("argument {}", index));
        }
        if let Some((_, index)) = self.field_vars.get(name) {
            return Some(format!("this {}", index));
        }
        if let Some((_, index)) = self.static_vars.get(name) {
            return Some(format!("static {}", index));
        }
        None
    }
}

pub fn jack_to_vm(code: &str) -> String {
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

    let class = tree.root_node().child_by_field_name("class").unwrap();

    let class_name = class
        .child_by_field_name("name")
        .unwrap()
        .utf8_text(code.as_bytes())
        .unwrap();

    let mut static_vars = HashMap::new();
    let mut field_vars = HashMap::new();

    for var_dec in class.children_by_field_name("var_dec", &mut class.walk()) {
        let modifier = var_dec.child_by_field_name("modifier").unwrap();

        let vars = match modifier.utf8_text(code.as_bytes()).unwrap() {
            "static" => &mut static_vars,
            "field" => &mut field_vars,
            _ => unreachable!(),
        };

        let ty = var_dec.child_by_field_name("type").unwrap();
        let ty = ty.utf8_text(code.as_bytes()).unwrap();

        for identifier in var_dec.children_by_field_name("identifier", &mut var_dec.walk()) {
            let identifier = identifier.utf8_text(code.as_bytes()).unwrap();

            let len = vars.len();
            vars.insert(identifier.to_string(), (ty.to_string(), len));
        }
    }

    for subrountine_dec in class.children_by_field_name("subroutine_dec", &mut class.walk()) {
        let mut argument_vars = HashMap::new();
        if let Some(parameter_list) = subrountine_dec.child_by_field_name("parameter_list") {
            for parameter in
                parameter_list.children_by_field_name("parameter", &mut parameter_list.walk())
            {
                let ty = parameter.child_by_field_name("type").unwrap();
                let ty = ty.utf8_text(code.as_bytes()).unwrap();

                let identifier = parameter.child_by_field_name("identifier").unwrap();
                let identifier = identifier.utf8_text(code.as_bytes()).unwrap();

                let len = argument_vars.len();
                argument_vars.insert(identifier.to_string(), (ty.to_string(), len));
            }
        }

        let body = subrountine_dec.child_by_field_name("body").unwrap();

        let mut local_vars = HashMap::new();
        for var_dec in body.children_by_field_name("var_dec", &mut class.walk()) {
            let ty = var_dec.child_by_field_name("type").unwrap();
            let ty = ty.utf8_text(code.as_bytes()).unwrap();

            for identifier in var_dec.children_by_field_name("identifier", &mut var_dec.walk()) {
                let identifier = identifier.utf8_text(code.as_bytes()).unwrap();

                let len = local_vars.len();
                local_vars.insert(identifier.to_string(), (ty.to_string(), len));
            }
        }

        let symbol_table = SymbolTable {
            static_vars: &static_vars,
            field_vars: &field_vars,
            argument_vars: &argument_vars,
            local_vars: &local_vars,
        };

        for statement in body.children_by_field_name("statement", &mut body.walk()) {
            let statement = statement.child(0).unwrap();

            match statement.kind() {
                "letStatement" => {
                    let expression = statement.child_by_field_name("expression").unwrap();
                    write_expression(&expression, code, &symbol_table, &mut out).unwrap();
                }
                _ => {}
            }
        }
    }

    out
}

fn write_expression<W: std::fmt::Write>(
    expression: &Node,
    code: &str,
    symbol_table: &SymbolTable,
    out: &mut W,
) -> Result<(), std::fmt::Error> {
    debug_assert_eq!(expression.kind(), "expression");

    let term = expression.child_by_field_name("term").unwrap();

    write_term(&term, code, symbol_table, out)?;

    Ok(())
}

fn write_term<W: std::fmt::Write>(
    term: &Node,
    code: &str,
    symbol_table: &SymbolTable,
    out: &mut W,
) -> Result<(), std::fmt::Error> {
    debug_assert_eq!(term.kind(), "term");

    if let Some(iconst) = term.child_by_field_name("integer_constant") {
        let value = iconst
            .utf8_text(code.as_bytes())
            .unwrap()
            .parse::<u16>()
            .unwrap();

        writeln!(out, "push constant {}", value)?;
    }

    // todo

    Ok(())
}
