use asm::run_asm;
use clap::Parser;
use std::{fs, io::Read, path::PathBuf};
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
    Vm { input: Option<PathBuf> },
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
            let code = if let Some(path) = input {
                fs::read_to_string(path).unwrap()
            } else {
                let mut code = String::new();
                std::io::stdin().read_to_string(&mut code).unwrap();
                code
            };

            run_vm_transpile(&code);
        }
    }
}
