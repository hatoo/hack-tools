module.exports = grammar({
    name: 'hack_asm',

    extras: ($) => [
        $.comment,
        $.ws,
    ],

    rules: {
        // TODO: add the actual grammar rules
        source_file: ($) => repeat($.mnemonic),

        comment: ($) => token(seq("//", /.*/)),
        ws: ($) => token(/\s+/),

        mnemonic: ($) => choice(field("inst", $.inst), field("label", $.label)),

        label: ($) => seq("(", field("label", $.ident), ")"),
        inst: ($) => choice(field("ainst", $.ainst), field("cinst", $.cinst)),

        ainst: ($) => seq("@", field("value", $.value)),
        cinst: ($) => seq(optional(
            seq(field("dest", $.dest), "=")
        ), field("comp", $.comp), optional(seq(";", field("jump", $.jump))
        )),

        dest: ($) => choice(
            "M",
            "D",
            "MD",
            "A",
            "AM",
            "AD",
            "AMD"
        ),

        comp: ($) => choice(
            "0",
            "1",
            "-1",
            "D",
            "A",
            "!D",
            "!A",
            "-D",
            "-A",
            "D+1",
            "A+1",
            "D-1",
            "A-1",
            "D+A",
            "D-A",
            "A-D",
            "D&A",
            "D|A",
            "M",
            "!M",
            "-M",
            "M+1",
            "M-1",
            "D+M",
            "D-M",
            "M-D",
            "D&M",
            "D|M"
        ),

        jump: ($) => choice(
            "JGT",
            "JEQ",
            "JGE",
            "JLT",
            "JNE",
            "JLE",
            "JMP"
        ),

        value: ($) => choice(field("ident", $.ident), field("num", $.num)),
        ident: ($) => /[$._a-zA-Z][$._a-zA-Z0-9]*/,
        num: ($) => /\d+/
    }
});
