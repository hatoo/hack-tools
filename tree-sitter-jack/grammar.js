module.exports = grammar({
    name: 'jack',

    extras: ($) => [
        $.comment,
        $.ws,
    ],

    rules: {
        source_file: ($) => $.class,

        comment: ($) => choice(token(seq("//", /.*/)), token(seq("/*", /[^*]*\*+([^/*][^*]*\*+)*/, "/"))),
        ws: ($) => token(/\s+/),

        // Lexical elements

        integerConstant: ($) => /\d+/,
        stringConstant: ($) => seq('"', field("value", /[^"\n]*/), '"'),
        identifier: ($) => /[a-zA-Z_][a-zA-Z_0-9]*/,

        // program structure

        class: ($) => seq('class', $.className, '{', repeat($.classVarDec), repeat($.subroutineDec), '}'),
        classVarDec: ($) => seq(choice('static', 'field'), $.type, $.varName, repeat(seq(',', $.varName)), ';'),
        type: ($) => choice('int', 'char', 'boolean', $.className),
        subroutineBody: ($) => seq('{', repeat($.varDec), repeat($.statement), '}'),
        subroutineDec: ($) => seq(choice('constructor', 'function', 'method'), choice('void', $.type), $.subroutineName, $.parameterList, $.subroutineBody),
        parameterList: ($) => seq('(', optional(seq($.type, $.varName, repeat(seq(',', $.type, $.varName)))), ')'),
        varDec: ($) => seq('var', $.type, $.varName, repeat(seq(',', $.varName)), ';'),
        class: ($) => seq('class', $.className, '{', '}'),
        className: ($) => $.identifier,
        subroutineName: ($) => $.identifier,
        varName: ($) => $.identifier,

        // Statements

        statement: ($) => choice($.letStatement, $.ifStatement, $.whileStatement, $.doStatement, $.returnStatement),
        letStatement: ($) => seq('let', $.varName, optional(seq('[', $.expression, ']')), '=', $.expression, ';'),
        ifStatement: ($) => seq('if', '(', $.expression, ')', '{', repeat($.statement), '}', optional(seq('else', '{', repeat($.statement), '}'))),
        whileStatement: ($) => seq('while', '(', $.expression, ')', '{', repeat($.statement), '}'),
        doStatement: ($) => seq('do', $.subroutineCall, ';'),
        returnStatement: ($) => seq('return', optional($.expression), ';'),

        // Expressions

        expression: ($) => seq($.term, repeat(seq($.op, $.term))),
        term: ($) => choice($.integerConstant, $.stringConstant, $.keywordConstant, seq($.varName, '[', $.expression, ']'), $.varName, seq('(', $.expression, ')'), seq($.unalyOp, $.term), seq($.term, $.op, $.term), $.subroutineCall),
        subroutineCall: ($) => choice(seq($.subroutineName, $.expressionList), seq($.identifier, '.', $.subroutineName, $.expressionList)),
        expressionList: ($) => seq('(', optional(seq($.expression, repeat(seq(',', $.expression)))), ')'),
        op: ($) => choice('+', '-', '*', '/', '&', '|', '<', '>', '='),
        unalyOp: ($) => choice('-', '~'),
        keywordConstant: ($) => choice('true', 'false', 'null', 'this'),
    }
});
