use asm::run_asm;
use clap::Parser;
use std::{
    ffi::OsStr,
    fs::{self, File, OpenOptions},
    io::{Read, Write},
    path::PathBuf,
};
use vm::vm_to_asm;

mod asm;
mod jack;
mod jack_analyzer;
mod vm;

#[derive(clap::Parser)]
struct Opt {
    #[clap(subcommand)]
    subcommand: Subcommands,
}

#[derive(clap::Subcommand)]
enum Subcommands {
    #[clap(alias = "asm", about = "Hack assembly to binary")]
    As {
        input: Option<PathBuf>,
    },
    #[clap(alias = "transpile", about = "Hack virtual machine to assembly")]
    Vm {
        inputs: Vec<PathBuf>,
    },
    JackAnalyzer {
        inputs: Vec<PathBuf>,
    },
    Jack {
        inputs: Vec<PathBuf>,
    },
}

fn main() {
    let opt = Opt::parse();

    match opt.subcommand {
        Subcommands::As { input } => {
            if let Some(path) = input {
                let code = fs::read_to_string(&path).unwrap();
                let mut out = OpenOptions::new()
                    .write(true)
                    .create(true)
                    .open(path.with_extension("hack"))
                    .unwrap();

                for opcode in run_asm(&code) {
                    writeln!(out, "{:016b}", opcode).unwrap();
                }
            } else {
                let mut code = String::new();
                std::io::stdin().read_to_string(&mut code).unwrap();
                for opcode in run_asm(&code) {
                    println!("{:016b}", opcode);
                }
            }
        }
        Subcommands::Vm { inputs } => {
            if inputs.is_empty() {
                let mut code = String::new();
                std::io::stdin().read_to_string(&mut code).unwrap();
                vm_to_asm("Undefined", &code, &mut std::io::stdout()).unwrap()
            } else if inputs.len() == 1 && inputs[0].is_dir() {
                let path = inputs[0].clone();

                let mut file_name = path.file_name().unwrap().to_os_string();
                file_name.push(".asm");

                let mut out = OpenOptions::new()
                    .write(true)
                    .create(true)
                    .open(path.join(file_name))
                    .unwrap();

                writeln!(out, "@261\nD=A\n@SP\nM=D\n@Sys.init\n0;JMP").unwrap();

                for entry in fs::read_dir(path).unwrap() {
                    let path = entry.unwrap().path();

                    if path.is_file() && path.extension() == Some(OsStr::new("vm")) {
                        let class_name = path.file_stem().unwrap().to_str().unwrap();

                        vm_to_asm(class_name, &fs::read_to_string(&path).unwrap(), &mut out)
                            .unwrap();
                    }
                }
            } else {
                for path in inputs {
                    assert!(path.is_file());

                    let class_name = path.file_stem().unwrap().to_str().unwrap();

                    let mut out = OpenOptions::new()
                        .write(true)
                        .create(true)
                        .open(path.with_extension("asm"))
                        .unwrap();

                    vm_to_asm(class_name, &fs::read_to_string(&path).unwrap(), &mut out).unwrap();
                }
            }
        }
        Subcommands::JackAnalyzer { inputs } => {
            if inputs.is_empty() {
                let mut code = String::new();
                std::io::stdin().read_to_string(&mut code).unwrap();
                jack_analyzer::syntax_analysis(&code, &mut std::io::stdout()).unwrap();
            } else {
                for (input, mut out) in files(inputs, "jack", "vm").unwrap() {
                    jack_analyzer::syntax_analysis(&input, &mut out).unwrap();
                }
            }
        }
        Subcommands::Jack { inputs } => {
            if inputs.is_empty() {
                let mut code = String::new();
                std::io::stdin().read_to_string(&mut code).unwrap();
                jack::jack_to_vm(&code, &mut std::io::stdout()).unwrap();
            } else {
                for (input, mut out) in files(inputs, "jack", "vm").unwrap() {
                    jack::jack_to_vm(&input, &mut out).unwrap();
                }
            }
        }
    }
}

fn files(
    inputs: Vec<PathBuf>,
    in_extension: &str,
    out_extension: &str,
) -> std::io::Result<Vec<(String, File)>> {
    let mut out = Vec::new();
    let in_extension = OsStr::new(in_extension);

    for path in inputs {
        if path.is_dir() {
            for entry in std::fs::read_dir(path)? {
                let entry_path = entry?.path();

                if entry_path.is_file() && entry_path.extension() == Some(in_extension) {
                    let file = OpenOptions::new()
                        .write(true)
                        .create(true)
                        .truncate(true)
                        .open(entry_path.with_extension(out_extension))?;
                    out.push((std::fs::read_to_string(&entry_path)?, file))
                }
            }
        } else {
            let file = OpenOptions::new()
                .write(true)
                .create(true)
                .truncate(true)
                .open(&path.with_extension(out_extension))?;
            out.push((std::fs::read_to_string(&path)?, file))
        }
    }
    Ok(out)
}
