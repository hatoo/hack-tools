build:
    RUSTFLAGS="-C target-feature=+crt-static" cargo build --target x86_64-unknown-linux-gnu --release

test-8:
    cargo run -- vm nand2tetris/projects/08/ProgramFlow/BasicLoop/BasicLoop.vm && sh ./nand2tetris/tools/CPUEmulator.sh nand2tetris/projects/08/ProgramFlow/BasicLoop/BasicLoop.tst
    cargo run -- vm nand2tetris/projects/08/ProgramFlow/FibonacciSeries/FibonacciSeries.vm && sh ./nand2tetris/tools/CPUEmulator.sh nand2tetris/projects/08/ProgramFlow/FibonacciSeries/FibonacciSeries.tst
    cargo run -- vm nand2tetris/projects/08/FunctionCalls/SimpleFunction/SimpleFunction.vm && sh ./nand2tetris/tools/CPUEmulator.sh nand2tetris/projects/08/FunctionCalls/SimpleFunction/SimpleFunction.tst
    cargo run -- vm nand2tetris/projects/08/FunctionCalls/FibonacciElement && sh ./nand2tetris/tools/CPUEmulator.sh nand2tetris/projects/08/FunctionCalls/FibonacciElement/FibonacciElement.tst
    cargo run -- vm nand2tetris/projects/08/FunctionCalls/StaticsTest && sh ./nand2tetris/tools/CPUEmulator.sh nand2tetris/projects/08/FunctionCalls/StaticsTest/StaticsTest.tst