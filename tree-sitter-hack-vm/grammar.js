module.exports = grammar({
    name: 'hack_vm',

    extras: ($) => [
        $.comment,
        $.ws,
    ],

    rules: {
        source_file: ($) => repeat($.command),

        command: ($) => choice($.arithmetic_op, $.stack_op, $.label, $.goto, $.if_goto, $.function, $.return, $.call),

        comment: ($) => token(seq("//", /.*/)),
        ws: ($) => token(/\s+/),

        label: ($) => seq("label", field("label", $.ident)),
        goto: ($) => seq("goto", field("label", $.ident)),
        if_goto: ($) => seq("if-goto", field("label", $.ident)),

        function: ($) => seq(
            "function",
            field("name", $.ident),
            field("num_locals", $.num),
        ),

        call: ($) => seq("call", field("name", $.ident), field("num_args", $.num)),
        return: ($) => "return",

        stack_op: ($) => choice(
            seq(field("action", "push"), field("segment", $.segment), field("index", $.num)),
            seq(field("action", "pop"), field("segment", $.segment), field("index", $.num))
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
