build:
    RUSTFLAGS="-C target-feature=+crt-static" cargo build --target x86_64-unknown-linux-gnu --release

test-8:
    cargo run -- vm nand2tetris/projects/08/ProgramFlow/BasicLoop/BasicLoop.vm && sh ./nand2tetris/tools/CPUEmulator.sh nand2tetris/projects/08/ProgramFlow/BasicLoop/BasicLoop.tst
    cargo run -- vm nand2tetris/projects/08/ProgramFlow/FibonacciSeries/FibonacciSeries.vm && sh ./nand2tetris/tools/CPUEmulator.sh nand2tetris/projects/08/ProgramFlow/FibonacciSeries/FibonacciSeries.tst
    cargo run -- vm nand2tetris/projects/08/FunctionCalls/SimpleFunction/SimpleFunction.vm && sh ./nand2tetris/tools/CPUEmulator.sh nand2tetris/projects/08/FunctionCalls/SimpleFunction/SimpleFunction.tst
    cargo run -- vm nand2tetris/projects/08/FunctionCalls/FibonacciElement && sh ./nand2tetris/tools/CPUEmulator.sh nand2tetris/projects/08/FunctionCalls/FibonacciElement/FibonacciElement.tst
    cargo run -- vm nand2tetris/projects/08/FunctionCalls/StaticsTest && sh ./nand2tetris/tools/CPUEmulator.sh nand2tetris/projects/08/FunctionCalls/StaticsTest/StaticsTest.tst

test-10:
    rm -rf nand2tetris/projects/10-tmp/ || true
    cp -r nand2tetris/projects/10/ nand2tetris/projects/10-tmp/
    cargo run -- jack-analyzer nand2tetris/projects/10-tmp/ExpressionLessSquare
    diff --strip-trailing-cr nand2tetris/projects/10-tmp/ExpressionLessSquare/Main.xml nand2tetris/projects/10/ExpressionLessSquare/Main.xml
    cargo run -- jack-analyzer nand2tetris/projects/10-tmp/ArrayTest
    diff --strip-trailing-cr nand2tetris/projects/10-tmp/ArrayTest/Main.xml nand2tetris/projects/10/ArrayTest/Main.xml
    cargo run -- jack-analyzer nand2tetris/projects/10-tmp/Square
    diff --strip-trailing-cr nand2tetris/projects/10-tmp/Square/Main.xml nand2tetris/projects/10/Square/Main.xml
    diff --strip-trailing-cr nand2tetris/projects/10-tmp/Square/Square.xml nand2tetris/projects/10/Square/Square.xml
    diff --strip-trailing-cr nand2tetris/projects/10-tmp/Square/SquareGame.xml nand2tetris/projects/10/Square/SquareGame.xml

test-11:
    cargo run -- jack nand2tetris/projects/11/Seven