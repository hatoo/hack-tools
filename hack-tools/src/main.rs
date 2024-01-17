use asm::run_asm;
use clap::Parser;
use std::{
    ffi::OsStr,
    fs::{self, OpenOptions},
    io::{Read, Write},
    path::PathBuf,
};
use vm::vm_to_asm;

mod asm;
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
        input: PathBuf,
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
        Subcommands::JackAnalyzer { input } => {
            println!(
                "{}",
                jack_analyzer::syntax_analysis(&fs::read_to_string(&input).unwrap())
            );
        }
    }
}
