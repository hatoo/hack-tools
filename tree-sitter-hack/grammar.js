module.exports = grammar({
    name: 'hack',

    extras: ($) => [
        $.comment,
        $.ws,
    ],

    rules: {
        // TODO: add the actual grammar rules
        source_file: ($) => repeat($.mnemonic),

        comment: ($) => token(seq("//", /.*/)),
        ws: ($) => token(/\s+/),

        mnemonic: ($) => choice($.inst, $.label),

        label: ($) => seq("(", $.ident, ")"),
        inst: ($) => choice($.ainst, $.cinst),

        ainst: ($) => seq("@", $.value),
        cinst: ($) => seq(optional(
            seq($.dest, "=")
        ), $.comp, optional(seq(";", $.jump)
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

        value: ($) => choice($.ident, $.num),
        ident: ($) => /[$._a-zA-Z][$._a-zA-Z0-9]*/,
        num: ($) => /\d+/
    }
});
