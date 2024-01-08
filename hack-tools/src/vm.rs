use std::fmt::Write;

use tree_sitter::{Query, QueryCursor};

pub fn vm_transpile(class_name: &str, code: &str) -> String {
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
        return String::new();
    }

    let mut out = String::new();

    let mut local_label_counter = 0;
    let mut local_label = move |function_name: &str| -> String {
        let l = format!(
            "{}.{}$TMP_LABEL_{}",
            class_name, function_name, local_label_counter
        );
        local_label_counter += 1;
        l
    };

    let mut ret_addr_counter = 0;
    let mut ret_addr = move |function_name: &str| -> String {
        let l = format!("{}$ret.{}", function_name, ret_addr_counter);
        ret_addr_counter += 1;
        l
    };

    let mut current_function = None;

    loop {
        let node = walker.node();

        if node.kind() == "command" {
            let node = node.child(0).unwrap();

            writeln!(out, "// {}", node.utf8_text(code.as_bytes()).unwrap()).unwrap();
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
                                "pointer" => {
                                    let index = match index {
                                        0 => "@THIS",
                                        1 => "@THAT",
                                        _ => unreachable!(),
                                    };
                                    format!("{}\nD=M", index)
                                }
                                "constant" => format!("@{}\nD=A", index),
                                "temp" => {
                                    let index = index + 5;
                                    format!("@{}\nD=M", index)
                                }
                                "static" => {
                                    format!("@{}.{}\nD=M", class_name, index)
                                }
                                _ => todo!(),
                            };
                            writeln!(out, "{}\n@SP\nM=M+1\nA=M-1\nM=D", set_d).unwrap();
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
                                "pointer" => {
                                    let index = match index {
                                        0 => "@THIS",
                                        1 => "@THAT",
                                        _ => unreachable!(),
                                    };
                                    format!("{}\nD=A\n@R13\nM=D", index)
                                }
                                "temp" => {
                                    let index = index + 5;
                                    format!("@{}\nD=A\n@R13\nM=D", index)
                                }
                                "static" => {
                                    format!("@{}.{}\nD=A\n@R13\nM=D", class_name, index)
                                }
                                _ => todo!(),
                            };
                            writeln!(out, "{}\n@SP\nM=M-1\nA=M\nD=M\n@R13\nA=M\nM=D", set_r13)
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
                            writeln!(out, "@SP\nM=M-1\nA=M\nD=M\nA=A-1\nM=M{}D", op).unwrap();
                        }
                        "neg" | "not" => {
                            let op = match op {
                                "neg" => "-",
                                "not" => "!",
                                _ => unreachable!(),
                            };
                            writeln!(out, "@SP\nA=M-1\nM={}M", op).unwrap();
                        }
                        "eq" | "gt" | "lt" => {
                            let op = match op {
                                "eq" => "JEQ",
                                "gt" => "JGT",
                                "lt" => "JLT",
                                _ => unreachable!(),
                            };
                            let label_true =
                                local_label(current_function.as_deref().unwrap_or_default());
                            let label_end =
                                local_label(current_function.as_deref().unwrap_or_default());
                            writeln!(
                                out,
                                "@SP\nM=M-1\nA=M\nD=M\nA=A-1\nD=M-D\n@{}\nD;{}",
                                label_true, op
                            )
                            .unwrap();
                            writeln!(out, "@SP\nA=M-1\nM=0\n@{}\n0;JMP", label_end).unwrap();
                            writeln!(out, "({})\n@SP\nA=M-1\nM=-1\n({})", label_true, label_end)
                                .unwrap();
                        }
                        op => todo!("{}", op),
                    }
                }
                "label" => {
                    let label = node
                        .child_by_field_name("label")
                        .unwrap()
                        .utf8_text(code.as_bytes())
                        .unwrap();

                    writeln!(
                        out,
                        "({}${})",
                        current_function.as_deref().unwrap_or_default(),
                        label
                    )
                    .unwrap();
                }
                "goto" => {
                    let label = node
                        .child_by_field_name("label")
                        .unwrap()
                        .utf8_text(code.as_bytes())
                        .unwrap();

                    writeln!(
                        out,
                        "@{}${}\n0;JMP",
                        current_function.as_deref().unwrap_or_default(),
                        label
                    )
                    .unwrap();
                }
                "if_goto" => {
                    let label = node
                        .child_by_field_name("label")
                        .unwrap()
                        .utf8_text(code.as_bytes())
                        .unwrap();

                    writeln!(
                        out,
                        "@SP\nM=M-1\nA=M\nD=M\n@{}${}\nD;JNE",
                        current_function.as_deref().unwrap_or_default(),
                        label
                    )
                    .unwrap();
                }
                "function" => {
                    let function_name = node
                        .child_by_field_name("name")
                        .unwrap()
                        .utf8_text(code.as_bytes())
                        .unwrap();
                    let num_locals: u16 = node
                        .child_by_field_name("num_locals")
                        .unwrap()
                        .utf8_text(code.as_bytes())
                        .unwrap()
                        .parse()
                        .unwrap();

                    current_function = Some(function_name.to_string());

                    writeln!(out, "({})", function_name).unwrap();
                    writeln!(out, "@SP\nD=M\n@LCL\nM=D").unwrap();
                    for _ in 0..num_locals {
                        writeln!(out, "@SP\nM=M+1\nA=M-1\nM=0").unwrap();
                    }
                }
                "return" => {
                    writeln!(out, "@LCL\nD=M\n@R13\nM=D").unwrap();
                    writeln!(out, "@5\nD=D-A\nA=D\nD=M\n@R14\nM=D").unwrap();
                    writeln!(out, "@SP\nM=M-1\nA=M\nD=M\n@ARG\nA=M\nM=D").unwrap();
                    writeln!(out, "@ARG\nD=M+1\n@SP\nM=D").unwrap();
                    writeln!(out, "@R13\nD=M\n@1\nA=D-A\nD=M\n@THAT\nM=D").unwrap();
                    writeln!(out, "@R13\nD=M\n@2\nA=D-A\nD=M\n@THIS\nM=D").unwrap();
                    writeln!(out, "@R13\nD=M\n@3\nA=D-A\nD=M\n@ARG\nM=D").unwrap();
                    writeln!(out, "@R13\nD=M\n@4\nA=D-A\nD=M\n@LCL\nM=D").unwrap();
                    writeln!(out, "@R14\nA=M\n0;JMP").unwrap();
                }
                "call" => {
                    let function_name = node
                        .child_by_field_name("name")
                        .unwrap()
                        .utf8_text(code.as_bytes())
                        .unwrap();
                    let num_args: u16 = node
                        .child_by_field_name("num_args")
                        .unwrap()
                        .utf8_text(code.as_bytes())
                        .unwrap()
                        .parse()
                        .unwrap();

                    let ret_label = ret_addr(current_function.as_deref().unwrap_or_default());

                    writeln!(out, "@{}\nD=A\n@SP\nA=M\nM=D\n@SP\nM=M+1", ret_label).unwrap();
                    writeln!(out, "@LCL\nD=M\n@SP\nA=M\nM=D\n@SP\nM=M+1").unwrap();
                    writeln!(out, "@ARG\nD=M\n@SP\nA=M\nM=D\n@SP\nM=M+1").unwrap();
                    writeln!(out, "@THIS\nD=M\n@SP\nA=M\nM=D\n@SP\nM=M+1").unwrap();
                    writeln!(out, "@THAT\nD=M\n@SP\nA=M\nM=D\n@SP\nM=M+1").unwrap();
                    writeln!(out, "@SP\nD=M\n@5\nD=D-A\n@{}\nD=D-A\n@ARG\nM=D", num_args).unwrap();
                    writeln!(out, "@SP\nD=M\n@LCL\nM=D").unwrap();
                    writeln!(out, "@{}\n0;JMP", function_name).unwrap();
                    writeln!(out, "({})", ret_label).unwrap();
                }
                kind => unreachable!("Unknown kind {}", kind),
            }
        }

        if !walker.goto_next_sibling() {
            break;
        }
    }

    out
}
