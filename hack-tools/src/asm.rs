use std::collections::HashMap;

use tree_sitter::{Node, Query, QueryCursor};

pub fn run_asm(code: &str) -> Vec<u16> {
    let mut parser = tree_sitter::Parser::new();
    parser
        .set_language(tree_sitter_hack_asm::language())
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

    let mut table = label_table(tree.root_node(), code);

    decode(tree.root_node(), code, &mut table)
}

fn label_table(root: Node, code: &str) -> HashMap<String, u16> {
    let mut table = [
        ("R0", 0),
        ("R1", 1),
        ("R2", 2),
        ("R3", 3),
        ("R4", 4),
        ("R5", 5),
        ("R6", 6),
        ("R7", 7),
        ("R8", 8),
        ("R9", 9),
        ("R10", 10),
        ("R11", 11),
        ("R12", 12),
        ("R13", 13),
        ("R14", 14),
        ("R15", 15),
        ("SCREEN", 16384),
        ("KBD", 24576),
        ("SP", 0),
        ("LCL", 1),
        ("ARG", 2),
        ("THIS", 3),
        ("THAT", 4),
    ]
    .into_iter()
    .map(|(k, v)| (k.to_string(), v))
    .collect::<HashMap<_, _>>();

    let mut walker = root.walk();

    if !walker.goto_first_child() {
        return table;
    }

    let mut addr = 0;

    loop {
        let node = walker.node();
        if node.kind() == "mnemonic" {
            if let Some(label) = node.child_by_field_name("label") {
                let label = label
                    .child_by_field_name("label")
                    .unwrap()
                    .utf8_text(code.as_bytes())
                    .unwrap()
                    .to_string();
                assert!(table.insert(label, addr).is_none());
            } else {
                addr += 1;
            }
        }

        if !walker.goto_next_sibling() {
            break;
        }
    }

    table
}

fn decode(root: Node, code: &str, table: &mut HashMap<String, u16>) -> Vec<u16> {
    let mut result = Vec::new();

    let mut walker = root.walk();

    if !walker.goto_first_child() {
        return result;
    }

    let mut var_addr = 16;

    loop {
        let node = walker.node();
        if node.kind() == "mnemonic" {
            if let Some(inst) = node.child_by_field_name("inst") {
                let opcode = if let Some(ainst) = inst.child_by_field_name("ainst") {
                    let value = ainst.child_by_field_name("value").unwrap();

                    if let Some(num) = value.child_by_field_name("num") {
                        let num = num
                            .utf8_text(code.as_bytes())
                            .unwrap()
                            .parse::<u16>()
                            .unwrap();
                        assert!(num >> 15 == 0);

                        num
                    } else {
                        let label = value
                            .child_by_field_name("ident")
                            .unwrap()
                            .utf8_text(code.as_bytes())
                            .unwrap();
                        let addr = if let Some(label) = table.get(label) {
                            *label
                        } else {
                            let addr = var_addr;
                            var_addr += 1;
                            table.insert(label.to_string(), addr);
                            addr
                        };
                        assert!(addr >> 15 == 0);
                        addr
                    }
                } else {
                    // cinst

                    let cinst = inst.child_by_field_name("cinst").unwrap();

                    let mut dest_bits = 0;

                    if let Some(dest) = cinst.child_by_field_name("dest") {
                        dest_bits = match dest.utf8_text(code.as_bytes()).unwrap() {
                            "M" => 0b001,
                            "D" => 0b010,
                            "MD" => 0b011,
                            "A" => 0b100,
                            "AM" => 0b101,
                            "AD" => 0b110,
                            "AMD" => 0b111,
                            _ => unreachable!(),
                        };
                    }

                    let comp = cinst.child_by_field_name("comp").unwrap();

                    let comp_bits = match comp.utf8_text(code.as_bytes()).unwrap() {
                        "0" => 0b0101010,
                        "1" => 0b0111111,
                        "-1" => 0b0111010,
                        "D" => 0b0001100,
                        "A" => 0b0110000,
                        "!D" => 0b0001101,
                        "!A" => 0b0110001,
                        "-D" => 0b0001111,
                        "-A" => 0b0110011,
                        "D+1" => 0b0011111,
                        "A+1" => 0b0110111,
                        "D-1" => 0b0001110,
                        "A-1" => 0b0110010,
                        "D+A" => 0b0000010,
                        "D-A" => 0b0010011,
                        "A-D" => 0b0000111,
                        "D&A" => 0b0000000,
                        "D|A" => 0b0010101,
                        "M" => 0b1110000,
                        "!M" => 0b1110001,
                        "-M" => 0b1110011,
                        "M+1" => 0b1110111,
                        "M-1" => 0b1110010,
                        "D+M" => 0b1000010,
                        "D-M" => 0b1010011,
                        "M-D" => 0b1000111,
                        "D&M" => 0b1000000,
                        "D|M" => 0b1010101,
                        _ => unreachable!(),
                    };

                    let mut jump_bits = 0;
                    if let Some(jump) = cinst.child_by_field_name("jump") {
                        jump_bits = match jump.utf8_text(code.as_bytes()).unwrap() {
                            "JGT" => 0b001,
                            "JEQ" => 0b010,
                            "JGE" => 0b011,
                            "JLT" => 0b100,
                            "JNE" => 0b101,
                            "JLE" => 0b110,
                            "JMP" => 0b111,
                            _ => unreachable!(),
                        };
                    }

                    (0b111 << 13) | (comp_bits << 6) | (dest_bits << 3) | jump_bits
                };

                result.push(opcode);
            }
        }
        if !walker.goto_next_sibling() {
            break;
        }
    }

    result
}
