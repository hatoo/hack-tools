module.exports = grammar({
    name: 'jack',

    extras: ($) => [
        $.comment,
        $.ws,
    ],

    rules: {
        source_file: ($) => field("class", $.class),

        comment: _ => token(choice(
            seq('//', /(\\+(.|\r?\n)|[^\\\n])*/),
            seq(
                '/*',
                /[^*]*\*+([^/*][^*]*\*+)*/,
                '/',
            ),
        )),
        ws: ($) => token(/\s+/),

        // Lexical elements

        integerConstant: ($) => /\d+/,
        stringConstant: ($) => seq('"', field("value", /[^"\n]*/), '"'),
        identifier: ($) => /[a-zA-Z_][a-zA-Z_0-9]*/,

        // program structure

        class: ($) => seq('class', $.identifier, '{', repeat($.classVarDec), repeat($.subroutineDec), '}'),
        classVarDec: ($) => seq(choice('static', 'field'), $.type, $.identifier, repeat(seq(',', $.identifier)), ';'),
        type: ($) => choice('int', 'char', 'boolean', $.identifier),
        subroutineBody: ($) => seq('{', repeat($.varDec), repeat($.statement), '}'),
        subroutineDec: ($) => seq(choice('constructor', 'function', 'method'), choice('void', $.type), $.identifier, $.parameterList, $.subroutineBody),
        parameterList: ($) => seq('(', optional(seq($.type, $.identifier, repeat(seq(',', $.type, $.identifier)))), ')'),
        varDec: ($) => seq('var', $.type, $.identifier, repeat(seq(',', $.identifier)), ';'),

        // Statements

        statement: ($) => choice($.letStatement, $.ifStatement, $.whileStatement, $.doStatement, $.returnStatement),
        letStatement: ($) => seq('let', $.identifier, optional(seq('[', $.expression, ']')), '=', $.expression, ';'),
        ifStatement: ($) => seq('if', '(', $.expression, ')', '{', repeat($.statement), '}', optional(seq('else', '{', repeat($.statement), '}'))),
        whileStatement: ($) => seq('while', '(', $.expression, ')', '{', repeat($.statement), '}'),
        doStatement: ($) => seq('do', $.subroutineCall, ';'),
        returnStatement: ($) => seq('return', optional($.expression), ';'),

        // Expressions

        expression: ($) => seq($.term, repeat(seq($.op, $.term))),
        term: ($) => prec.left(1, choice($.integerConstant, $.stringConstant, $.keywordConstant, seq($.identifier, '[', $.expression, ']'), $.identifier, seq('(', $.expression, ')'), seq($.unalyOp, $.term), seq($.term, $.op, $.term), $.subroutineCall)),
        subroutineCall: ($) => choice(seq($.identifier, $.expressionList), seq($.identifier, '.', $.identifier, $.expressionList)),
        expressionList: ($) => seq('(', optional(seq($.expression, repeat(seq(',', $.expression)))), ')'),
        op: ($) => choice('+', '-', '*', '/', '&', '|', '<', '>', '='),
        unalyOp: ($) => choice('-', '~'),
        keywordConstant: ($) => choice('true', 'false', 'null', 'this'),
    }
});
