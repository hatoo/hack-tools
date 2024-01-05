module.exports = grammar({
    name: 'hack_vm',

    extras: ($) => [
        $.comment,
        $.ws,
    ],

    rules: {
        source_file: ($) => repeat($.command),

        command: ($) => choice($.arithmetic_op, $.stack_op),

        comment: ($) => token(seq("//", /.*/)),
        ws: ($) => token(/\s+/),

        stack_op: ($) => choice(
            seq("push", $.segment, $.num),
            seq("pop", $.segment, $.num)
        ),

        arithmetic_op: ($) => choice(
            "add",
            "sub",
            "neg",
            "eq",
            "gt",
            "lt",
            "and",
            "or",
            "not"
        ),

        segment: ($) => choice(
            "argument",
            "local",
            "static",
            "constant",
            "this",
            "that",
            "pointer",
            "temp"
        ),

        value: ($) => choice($.ident, $.num),
        ident: ($) => /[$._a-zA-Z][$._a-zA-Z0-9]*/,
        num: ($) => /\d+/
    }
});
