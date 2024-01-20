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

    fn lookup_type(&self, name: &str) -> Option<String> {
        if let Some((ty, _)) = self.local_vars.get(name) {
            return Some(ty.clone());
        }
        if let Some((ty, _)) = self.argument_vars.get(name) {
            return Some(ty.clone());
        }
        if let Some((ty, _)) = self.field_vars.get(name) {
            return Some(ty.clone());
        }
        if let Some((ty, _)) = self.static_vars.get(name) {
            return Some(ty.clone());
        }
        None
    }
}

pub fn jack_to_vm<W: std::io::Write>(code: &str, out: &mut W) -> std::io::Result<()> {
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
        let name = subrountine_dec
            .child_by_field_name("name")
            .unwrap()
            .utf8_text(code.as_bytes())
            .unwrap();
        let modifier = subrountine_dec
            .child_by_field_name("modifier")
            .unwrap()
            .utf8_text(code.as_bytes())
            .unwrap();
        let mut argument_vars = HashMap::new();
        if modifier == "method" {
            argument_vars.insert("this".to_string(), ("this".to_string(), 0));
        }
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

        match modifier {
            "constructor" => {
                writeln!(out, "function {}.{} {}", class_name, name, local_vars.len())?;
                writeln!(out, "push constant {}", field_vars.len())?;
                writeln!(out, "call Memory.alloc 1")?;
                writeln!(out, "pop pointer 0")?;
            }
            "function" => {
                writeln!(out, "function {}.{} {}", class_name, name, local_vars.len())?;
            }
            "method" => {
                writeln!(out, "function {}.{} {}", class_name, name, local_vars.len())?;
                writeln!(out, "push argument 0")?;
                writeln!(out, "pop pointer 0")?;
            }
            _ => unimplemented!(),
        }

        let mut label_counter = 0;

        for statement in body.children_by_field_name("statement", &mut body.walk()) {
            write_statement(
                &statement,
                class_name,
                name,
                code,
                &symbol_table,
                &mut label_counter,
                out,
            )?;
        }
    }

    Ok(())
}

fn write_statement<W: std::io::Write>(
    statement: &Node,
    class_name: &str,
    function_name: &str,
    code: &str,
    symbol_table: &SymbolTable,
    label_counter: &mut usize,
    out: &mut W,
) -> Result<(), std::io::Error> {
    let statement = statement.child(0).unwrap();

    let mut label = || {
        *label_counter += 1;
        format!("{}.{}_{}", class_name, function_name, label_counter)
    };

    match statement.kind() {
        "letStatement" => {
            writeln!(out, "// letStatement").unwrap();
            let lvalue = statement.child_by_field_name("lvalue").unwrap();

            let l_identifier = lvalue
                .child_by_field_name("identifier")
                .unwrap()
                .utf8_text(code.as_bytes())
                .unwrap();
            let expression = statement.child_by_field_name("expression").unwrap();

            if let Some(index_expression) = lvalue.child_by_field_name("expression") {
                writeln!(out, "push {}", symbol_table.lookup(l_identifier).unwrap())?;
                write_expression(&index_expression, class_name, code, &symbol_table, out).unwrap();
                writeln!(out, "add")?;
                write_expression(&expression, class_name, code, &symbol_table, out)?;

                writeln!(out, "pop temp 0")?;
                writeln!(out, "pop pointer 1")?;
                writeln!(out, "push temp 0")?;
                writeln!(out, "pop that 0")?;
            } else {
                write_expression(&expression, class_name, code, &symbol_table, out)?;
                writeln!(out, "pop {}", symbol_table.lookup(l_identifier).unwrap())?;
            }
        }
        "ifStatement" => {
            writeln!(out, "// ifStatement").unwrap();
            let cond = statement.child_by_field_name("cond").unwrap();
            write_expression(&cond, class_name, code, &symbol_table, out)?;

            let label_true = label();
            let label_end = label();
            writeln!(out, "if-goto {}", label_true)?;

            for else_statement in
                statement.children_by_field_name("else_statement", &mut statement.walk())
            {
                write_statement(
                    &else_statement,
                    class_name,
                    function_name,
                    code,
                    symbol_table,
                    label_counter,
                    out,
                )?;
            }

            writeln!(out, "goto {}", label_end)?;
            writeln!(out, "label {}", label_true)?;

            for statement in statement.children_by_field_name("statement", &mut statement.walk()) {
                write_statement(
                    &statement,
                    class_name,
                    function_name,
                    code,
                    symbol_table,
                    label_counter,
                    out,
                )?;
            }

            writeln!(out, "label {}", label_end)?;
        }
        "whileStatement" => {
            writeln!(out, "// whileStatement").unwrap();
            let cond = statement.child_by_field_name("cond").unwrap();

            let label_start = label();
            let label_end = label();

            writeln!(out, "label {}", label_start)?;
            write_expression(&cond, class_name, code, &symbol_table, out)?;
            writeln!(out, "not")?;
            writeln!(out, "if-goto {}", label_end)?;

            for statement in statement.children_by_field_name("statement", &mut statement.walk()) {
                write_statement(
                    &statement,
                    class_name,
                    function_name,
                    code,
                    symbol_table,
                    label_counter,
                    out,
                )?;
            }

            writeln!(out, "goto {}", label_start)?;
            writeln!(out, "label {}", label_end)?;
        }
        "doStatement" => {
            writeln!(out, "// doStatement").unwrap();
            let subroutine_call = statement.child_by_field_name("subroutine_call").unwrap();
            write_subroutine_call(&subroutine_call, class_name, code, symbol_table, out)?;
            writeln!(out, "pop temp 0")?;
        }
        "returnStatement" => {
            writeln!(out, "// returnStatement").unwrap();
            if let Some(expression) = statement.child_by_field_name("expression") {
                write_expression(&expression, class_name, code, symbol_table, out)?;
            } else {
                writeln!(out, "push constant 0")?;
            }
            writeln!(out, "return")?;
        }
        _ => {
            unimplemented!()
        }
    }
    Ok(())
}

fn write_expression<W: std::io::Write>(
    expression: &Node,
    class_name: &str,
    code: &str,
    symbol_table: &SymbolTable,
    out: &mut W,
) -> Result<(), std::io::Error> {
    debug_assert_eq!(expression.kind(), "expression");

    let term = expression.child_by_field_name("term").unwrap();

    write_term(&term, class_name, code, symbol_table, out)?;

    for op_term in expression.children_by_field_name("op_term", &mut expression.walk()) {
        let op = op_term
            .child_by_field_name("op")
            .unwrap()
            .utf8_text(code.as_bytes())
            .unwrap();

        let term = op_term.child_by_field_name("term").unwrap();

        write_term(&term, class_name, code, symbol_table, out)?;

        match op {
            "+" => {
                writeln!(out, "add")?;
            }
            "-" => {
                writeln!(out, "sub")?;
            }
            "*" => {
                writeln!(out, "call Math.multiply 2")?;
            }
            "/" => {
                writeln!(out, "call Math.divide 2")?;
            }
            "&" => {
                writeln!(out, "and")?;
            }
            "|" => {
                writeln!(out, "or")?;
            }
            "<" => {
                writeln!(out, "lt")?;
            }
            ">" => {
                writeln!(out, "gt")?;
            }
            "=" => {
                writeln!(out, "eq")?;
            }
            _ => unreachable!(),
        }
    }

    Ok(())
}

fn write_term<W: std::io::Write>(
    term: &Node,
    class_name: &str,
    code: &str,
    symbol_table: &SymbolTable,
    out: &mut W,
) -> Result<(), std::io::Error> {
    debug_assert_eq!(term.kind(), "term");

    if let Some(iconst) = term.child_by_field_name("integer_constant") {
        let value = iconst
            .utf8_text(code.as_bytes())
            .unwrap()
            .parse::<u16>()
            .unwrap();

        writeln!(out, "push constant {}", value)?;
    } else if let Some(sconst) = term.child_by_field_name("string_constant") {
        let value = sconst
            .utf8_text(code.as_bytes())
            .unwrap()
            .trim_start_matches('"')
            .trim_end_matches('"');

        let len = value.len();

        writeln!(out, "push constant {}", len)?;
        writeln!(out, "call String.new 1")?;

        for c in value.chars() {
            writeln!(out, "push constant {}", c as u16)?;
            writeln!(out, "call String.appendChar 2")?;
        }
    } else if let Some(kconst) = term.child_by_field_name("keyword_constant") {
        let value = kconst.utf8_text(code.as_bytes()).unwrap();

        match value {
            "true" => {
                writeln!(out, "push constant 0")?;
                writeln!(out, "not")?;
            }
            "false" | "null" => {
                writeln!(out, "push constant 0")?;
            }
            "this" => {
                writeln!(out, "push pointer 0")?;
            }
            _ => unreachable!(),
        }
    } else if let Some(identifier) = term.child_by_field_name("identifier") {
        let ident = identifier.utf8_text(code.as_bytes()).unwrap();

        writeln!(out, "push {}", symbol_table.lookup(ident).unwrap())?;
    } else if let Some(var_index) = term.child_by_field_name("var_index") {
        let var_name = var_index
            .child_by_field_name("identifier")
            .unwrap()
            .utf8_text(code.as_bytes())
            .unwrap();

        let index = var_index.child_by_field_name("expression").unwrap();

        writeln!(out, "push {}", symbol_table.lookup(var_name).unwrap())?;
        write_expression(&index, class_name, code, symbol_table, out)?;
        writeln!(out, "add")?;
        writeln!(out, "pop pointer 1")?;
        writeln!(out, "push that 0")?;
    } else if let Some(paren) = term.child_by_field_name("paren") {
        let expression = paren.child_by_field_name("expression").unwrap();

        write_expression(&expression, class_name, code, symbol_table, out)?;
    } else if let Some(unaly) = term.child_by_field_name("unaly") {
        let op = unaly
            .child_by_field_name("op")
            .unwrap()
            .utf8_text(code.as_bytes())
            .unwrap();

        let term = unaly.child_by_field_name("term").unwrap();

        write_term(&term, class_name, code, symbol_table, out)?;

        match op {
            "-" => {
                writeln!(out, "neg")?;
            }
            "~" => {
                writeln!(out, "not")?;
            }
            _ => unreachable!(),
        }
    } else if let Some(subroutine_call) = term.child_by_field_name("subroutine_call") {
        write_subroutine_call(&subroutine_call, class_name, code, symbol_table, out)?;
    } else {
        unimplemented!()
    }

    Ok(())
}

fn write_subroutine_call<W: std::io::Write>(
    scall: &Node,
    class_name: &str,
    code: &str,
    symbol_table: &SymbolTable,
    out: &mut W,
) -> Result<(), std::io::Error> {
    debug_assert_eq!(scall.kind(), "subroutineCall");

    let mut arity = 0;
    let callee = if let Some(dot_identifier) = scall.child_by_field_name("dot_identifier") {
        let left = scall
            .child_by_field_name("identifier")
            .unwrap()
            .utf8_text(code.as_bytes())
            .unwrap();

        if left.chars().next().unwrap().is_uppercase() {
            format!(
                "{}.{}",
                left,
                dot_identifier.utf8_text(code.as_bytes()).unwrap()
            )
        } else {
            writeln!(out, "push {}", symbol_table.lookup(left).unwrap())?;
            arity += 1;
            format!(
                "{}.{}",
                symbol_table.lookup_type(left).unwrap(),
                dot_identifier.utf8_text(code.as_bytes()).unwrap()
            )
        }
    } else {
        writeln!(out, "push pointer 0")?;
        arity += 1;
        format!(
            "{}.{}",
            class_name,
            scall
                .child_by_field_name("identifier")
                .unwrap()
                .utf8_text(code.as_bytes())
                .unwrap()
        )
    };

    if let Some(expression_list) = scall.child_by_field_name("expression_list") {
        for expression in expression_list.children_by_field_name("expression", &mut scall.walk()) {
            write_expression(&expression, class_name, code, symbol_table, out)?;
            arity += 1;
        }
    }

    writeln!(out, "call {} {}", callee, arity)?;

    Ok(())
}
