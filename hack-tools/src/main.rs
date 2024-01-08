use asm::run_asm;
use clap::Parser;
use std::{
    ffi::OsStr,
    fs::{self, OpenOptions},
    io::{Read, Write},
    path::PathBuf,
};
use vm::run_vm_transpile;

mod asm;
mod vm;

#[derive(clap::Parser)]
struct Opt {
    #[clap(subcommand)]
    subcommand: Subcommands,
}

#[derive(clap::Subcommand)]
enum Subcommands {
    #[clap(alias = "asm", about = "Hack assembly to binary")]
    As { input: Option<PathBuf> },
    #[clap(alias = "transpile", about = "Hack virtual machine to assembly")]
    Vm { input: Vec<PathBuf> },
}

fn main() {
    let opt = Opt::parse();

    match opt.subcommand {
        Subcommands::As { input } => {
            let code = if let Some(path) = input {
                fs::read_to_string(path).unwrap()
            } else {
                let mut code = String::new();
                std::io::stdin().read_to_string(&mut code).unwrap();
                code
            };

            run_asm(&code);
        }
        Subcommands::Vm { input } => {
            if input.is_empty() {
                let mut code = String::new();
                std::io::stdin().read_to_string(&mut code).unwrap();
                println!("{}", run_vm_transpile("Undefined", &code));
            } else if input.len() == 1 && input[0].is_dir() {
                let mut path = input[0].clone();

                let mut file_name = path.file_name().unwrap().to_os_string();
                file_name.push(".asm");

                assert!(path.pop());

                let mut out = OpenOptions::new()
                    .write(true)
                    .create(true)
                    .open(path.join(file_name))
                    .unwrap();

                // TODO Write boot strap
                for entry in fs::read_dir(path).unwrap() {
                    let path = entry.unwrap().path();

                    if path.is_file() && path.extension() == Some(OsStr::new("vm")) {
                        let class_name = path.file_stem().unwrap().to_str().unwrap();

                        writeln!(
                            out,
                            "{}",
                            run_vm_transpile(class_name, &fs::read_to_string(&path).unwrap())
                        )
                        .unwrap();
                    }
                }
            } else {
                for path in input {
                    assert!(path.is_file());

                    let class_name = path.file_stem().unwrap().to_str().unwrap();

                    let mut out = OpenOptions::new()
                        .write(true)
                        .create(true)
                        .open(path.with_extension("asm"))
                        .unwrap();

                    write!(
                        out,
                        "{}",
                        run_vm_transpile(class_name, &fs::read_to_string(&path).unwrap())
                    )
                    .unwrap();
                }
            }
        }
    }
}
