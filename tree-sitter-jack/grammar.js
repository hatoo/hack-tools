module.exports = grammar({
    name: 'hack_vm',

    extras: ($) => [
        $.comment,
        $.ws,
    ],

    rules: {
        source_file: ($) => repeat($.command),

        comment: ($) => choice(token(seq("//", /.*/)), token(seq("/*", /[^*]*\*+([^/*][^*]*\*+)*/, "/"))),
        ws: ($) => token(/\s+/),

        // Lexical elements

        integerConstant: ($) => /\d+/,
        stringConstant: ($) => seq('"', field("value", /[^"\n]*/), '"'),
        identifier: ($) => /[a-zA-Z_][a-zA-Z_0-9]*/,

        // program structure

        class: ($) => seq('class', $.className, '{', '}'),
        className: ($) => $.identifier,
        subroutineName: ($) => $.identifier,
        varName: ($) => $.identifier,

        // Statements

        statements: ($) => repeat($.statement),
        statement: ($) => choice($.letStatement, $.ifStatement, $.whileStatement, $.doStatement, $.returnStatement),
        letStatement: ($) => seq('let', $.varName, optional(seq('[', $.expression, ']')), '=', $.expression, ';'),
        ifStatement: ($) => seq('if', '(', $.expression, ')', '{', $.statements, '}', optional(seq('else', '{', $.statements, '}'))),
        whileStatement: ($) => seq('while', '(', $.expression, ')', '{', $.statements, '}'),
        doStatement: ($) => seq('do', $.subroutineCall, ';'),
        returnStatement: ($) => seq('return', optional($.expression), ';'),

        // Expressions

        expression: ($) => seq($.term, repeat(seq($.op, $.term))),
        term: ($) => choice($.integerConstant, $.stringConstant, $.keywordConstant, seq($.varName, '[', $.expression, ']'), $.varName, seq('(', $.expression, ')'), seq($.unalyOp, $.term), seq($.term, $.op, $.term), $.subroutineCall),
        subroutineCall: ($) => choice(seq($.subroutineName, '(', $.expressionList, ')'), seq($.identifier, '.', $.subroutineName, '(', $.expressionList, ')')),
        expressionList: ($) => optional(seq($.expression, repeat(seq(',', $.expression)))),
        op: ($) => choice('+', '-', '*', '/', '&', '|', '<', '>', '='),
        unalyOp: ($) => choice('-', '~'),
        keywordConstant: ($) => choice('true', 'false', 'null', 'this'),
    }
});
