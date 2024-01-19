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

        class: ($) => seq('class', field('name', $.identifier), '{', field('var_dec', repeat($.classVarDec)), field('subroutine_dec', repeat($.subroutineDec)), '}'),
        classVarDec: ($) => seq(field('modifier', choice('static', 'field')), field('type', $.type), field('identifier', $.identifier), repeat(seq(',', field('identifier', $.identifier))), ';'),
        type: ($) => choice('int', 'char', 'boolean', $.identifier),
        subroutineBody: ($) => seq('{', field('var_dec', repeat($.varDec)), field('statement', repeat($.statement)), '}'),
        subroutineDec: ($) => seq(field('modifier', choice('constructor', 'function', 'method')), field('return_type', choice('void', $.type)), field('name', $.identifier), '(', field('parameter_list', optional($.parameterList)), ')', field('body', $.subroutineBody)),
        parameterList: ($) => seq(field('parameter', $.parameter), repeat(seq(',', field('parameter', $.parameter)))),
        parameter: ($) => seq(field('type', $.type), field('identifier', $.identifier)),
        varDec: ($) => seq('var', field('type', $.type), field('identifier', $.identifier), repeat(seq(',', field('identifier', $.identifier))), ';'),

        // Statements

        statement: ($) => choice($.letStatement, $.ifStatement, $.whileStatement, $.doStatement, $.returnStatement),
        letStatement: ($) => seq('let', field('lvalue', $.lvalue), '=', field('expression', $.expression), ';'),
        ifStatement: ($) => seq('if', '(', $.expression, ')', '{', repeat($.statement), '}', optional(seq('else', '{', repeat($.statement), '}'))),
        whileStatement: ($) => seq('while', '(', $.expression, ')', '{', repeat($.statement), '}'),
        doStatement: ($) => seq('do', $.subroutineCall, ';'),
        returnStatement: ($) => seq('return', optional($.expression), ';'),

        // misc

        lvalue: ($) => seq(field('identifier', $.identifier), optional(seq('[', field('expression', $.expression), ']'))),
        var_index: ($) => seq(field('identifier', $.identifier), '[', field('expression', $.expression), ']'),
        paren: ($) => seq('(', field('expression', $.expression), ')'),
        unaly: ($) => seq(field('op', $.unalyOp), field('term', $.term)),


        // Expressions

        expression: ($) => seq(field('term', $.term), field('op_term', repeat($.op_term))),
        op_term: ($) => seq(field('op', $.op), field('term', $.term)),
        term: ($) => prec.left(1, choice(field('integer_constant', $.integerConstant), field('string_constant', $.stringConstant), field('keyword_constant', $.keywordConstant),
            field('var_index', $.var_index), field('identifier', $.identifier), field('paren', $.paren), field('unaly', $.unaly), field('subroutine_call', $.subroutineCall))),
        subroutineCall: ($) => seq(field('identifier', $.identifier), optional(seq('.', field('dot_identifier', $.identifier))), '(', field("expression_list", optional($.expressionList)), ')'),
        expressionList: ($) => seq(field('expression', $.expression), repeat(seq(',', field('expression', $.expression)))),
        op: ($) => choice('+', '-', '*', '/', '&', '|', '<', '>', '='),
        unalyOp: ($) => choice('-', '~'),
        keywordConstant: ($) => choice('true', 'false', 'null', 'this'),
    }
});
