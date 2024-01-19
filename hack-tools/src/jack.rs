use std::collections::HashMap;

use tree_sitter::{Query, QueryCursor};

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
            vars.insert(identifier.to_string(), (ty, len));
        }
    }

    for subrountine_dec in class.children_by_field_name("subroutine_dec", &mut class.walk()) {
        let mut local_vars = HashMap::new();
        if let Some(parameter_list) = subrountine_dec.child_by_field_name("parameter_list") {
            for parameter in
                parameter_list.children_by_field_name("parameter", &mut parameter_list.walk())
            {
                let ty = parameter.child_by_field_name("type").unwrap();
                let ty = ty.utf8_text(code.as_bytes()).unwrap();

                let identifier = parameter.child_by_field_name("identifier").unwrap();
                let identifier = identifier.utf8_text(code.as_bytes()).unwrap();

                let len = local_vars.len();
                local_vars.insert(identifier.to_string(), (ty, len));
            }
        }
    }

    out
}
