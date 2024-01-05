use std::io::Write;

use tree_sitter::{Query, QueryCursor};

pub fn run_vm_transpile(code: &str) {
    let mut parser = tree_sitter::Parser::new();
    parser
        .set_language(tree_sitter_hack_vm::language())
        .unwrap();

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

    let root = tree.root_node();
    let mut walker = root.walk();

    if !walker.goto_first_child() {
        return;
    }

    let mut stdout = std::io::stdout();

    // writeln!(stdout, "@256\nD=A\n@SP\nM=D").unwrap();

    loop {
        let node = walker.node();

        if node.kind() == "command" {
            let node = node.child(0).unwrap();

            writeln!(stdout, "// {}", node.utf8_text(code.as_bytes()).unwrap()).unwrap();
            match node.kind() {
                "stack_op" => {
                    let action = node
                        .child_by_field_name("action")
                        .unwrap()
                        .utf8_text(code.as_bytes())
                        .unwrap();
                    let segment = node
                        .child_by_field_name("segment")
                        .unwrap()
                        .utf8_text(code.as_bytes())
                        .unwrap();
                    let index: u16 = node
                        .child_by_field_name("index")
                        .unwrap()
                        .utf8_text(code.as_bytes())
                        .unwrap()
                        .parse()
                        .unwrap();

                    match action {
                        "push" => {
                            let set_d = match segment {
                                "local" | "argument" | "this" | "that" => {
                                    let at = match segment {
                                        "local" => "@LCL",
                                        "argument" => "@ARG",
                                        "this" => "@THIS",
                                        "that" => "@THAT",
                                        _ => unreachable!(),
                                    };
                                    format!("@{}\nD=A\n{}\nA=D+M\nD=M", index, at)
                                }
                                "constant" => format!("@{}\nD=A", index),
                                "temp" => {
                                    let index = index + 5;
                                    format!("@{}\nD=M", index)
                                }
                                _ => todo!(),
                            };
                            writeln!(stdout, "{}\n@SP\nM=M+1\nA=M-1\nM=D", set_d).unwrap();
                        }
                        "pop" => {
                            let set_r13 = match segment {
                                "local" | "argument" | "this" | "that" => {
                                    let at = match segment {
                                        "local" => "@LCL",
                                        "argument" => "@ARG",
                                        "this" => "@THIS",
                                        "that" => "@THAT",
                                        _ => unreachable!(),
                                    };

                                    format!("{}\nD=M\n@{}\nD=D+A\n@R13\nM=D", at, index)
                                }
                                "temp" => {
                                    let index = index + 5;
                                    format!("@{}\nD=A\n@R13\nM=D", index)
                                }
                                _ => todo!(),
                            };
                            writeln!(stdout, "{}\n@SP\nM=M-1\nA=M\nD=M\n@R13\nA=M\nM=D", set_r13)
                                .unwrap();
                        }
                        _ => unreachable!(),
                    }
                }
                "arithmetic_op" => {
                    let op = node.utf8_text(code.as_bytes()).unwrap();

                    match op {
                        "add" | "sub" | "and" | "or" => {
                            let op = match op {
                                "add" => "+",
                                "sub" => "-",
                                "and" => "&",
                                "or" => "|",
                                _ => unreachable!(),
                            };
                            writeln!(stdout, "@SP\nM=M-1\nA=M\nD=M\nA=A-1\nM=M{}D", op).unwrap();
                        }
                        _ => todo!(),
                    }
                }
                _ => unreachable!(),
            }
        }

        if !walker.goto_next_sibling() {
            break;
        }
    }
}