#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 143
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 83
#define ALIAS_COUNT 0
#define TOKEN_COUNT 47
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 27
#define MAX_ALIAS_SEQUENCE_LENGTH 11
#define PRODUCTION_ID_COUNT 43

enum {
  sym_comment = 1,
  sym_ws = 2,
  sym_integerConstant = 3,
  anon_sym_DQUOTE = 4,
  aux_sym_stringConstant_token1 = 5,
  sym_identifier = 6,
  anon_sym_class = 7,
  anon_sym_LBRACE = 8,
  anon_sym_RBRACE = 9,
  anon_sym_static = 10,
  anon_sym_field = 11,
  anon_sym_COMMA = 12,
  anon_sym_SEMI = 13,
  anon_sym_int = 14,
  anon_sym_char = 15,
  anon_sym_boolean = 16,
  anon_sym_constructor = 17,
  anon_sym_function = 18,
  anon_sym_method = 19,
  anon_sym_void = 20,
  anon_sym_LPAREN = 21,
  anon_sym_RPAREN = 22,
  anon_sym_var = 23,
  anon_sym_let = 24,
  anon_sym_EQ = 25,
  anon_sym_if = 26,
  anon_sym_else = 27,
  anon_sym_while = 28,
  anon_sym_do = 29,
  anon_sym_return = 30,
  anon_sym_LBRACK = 31,
  anon_sym_RBRACK = 32,
  anon_sym_DOT = 33,
  anon_sym_PLUS = 34,
  anon_sym_DASH = 35,
  anon_sym_STAR = 36,
  anon_sym_SLASH = 37,
  anon_sym_AMP = 38,
  anon_sym_PIPE = 39,
  anon_sym_LT = 40,
  anon_sym_GT = 41,
  anon_sym_TILDE = 42,
  anon_sym_true = 43,
  anon_sym_false = 44,
  anon_sym_null = 45,
  anon_sym_this = 46,
  sym_source_file = 47,
  sym_stringConstant = 48,
  sym_class = 49,
  sym_classVarDec = 50,
  sym_type = 51,
  sym_subroutineBody = 52,
  sym_subroutineDec = 53,
  sym_parameterList = 54,
  sym_parameter = 55,
  sym_varDec = 56,
  sym_statement = 57,
  sym_letStatement = 58,
  sym_ifStatement = 59,
  sym_whileStatement = 60,
  sym_doStatement = 61,
  sym_returnStatement = 62,
  sym_lvalue = 63,
  sym_var_index = 64,
  sym_paren = 65,
  sym_unaly = 66,
  sym_expression = 67,
  sym_op_term = 68,
  sym_term = 69,
  sym_subroutineCall = 70,
  sym_expressionList = 71,
  sym_op = 72,
  sym_unalyOp = 73,
  sym_keywordConstant = 74,
  aux_sym_class_repeat1 = 75,
  aux_sym_class_repeat2 = 76,
  aux_sym_classVarDec_repeat1 = 77,
  aux_sym_subroutineBody_repeat1 = 78,
  aux_sym_subroutineBody_repeat2 = 79,
  aux_sym_parameterList_repeat1 = 80,
  aux_sym_expression_repeat1 = 81,
  aux_sym_expressionList_repeat1 = 82,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [sym_ws] = "ws",
  [sym_integerConstant] = "integerConstant",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_stringConstant_token1] = "stringConstant_token1",
  [sym_identifier] = "identifier",
  [anon_sym_class] = "class",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_static] = "static",
  [anon_sym_field] = "field",
  [anon_sym_COMMA] = ",",
  [anon_sym_SEMI] = ";",
  [anon_sym_int] = "int",
  [anon_sym_char] = "char",
  [anon_sym_boolean] = "boolean",
  [anon_sym_constructor] = "constructor",
  [anon_sym_function] = "function",
  [anon_sym_method] = "method",
  [anon_sym_void] = "void",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_var] = "var",
  [anon_sym_let] = "let",
  [anon_sym_EQ] = "=",
  [anon_sym_if] = "if",
  [anon_sym_else] = "else",
  [anon_sym_while] = "while",
  [anon_sym_do] = "do",
  [anon_sym_return] = "return",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_DOT] = ".",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_AMP] = "&",
  [anon_sym_PIPE] = "|",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_TILDE] = "~",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_null] = "null",
  [anon_sym_this] = "this",
  [sym_source_file] = "source_file",
  [sym_stringConstant] = "stringConstant",
  [sym_class] = "class",
  [sym_classVarDec] = "classVarDec",
  [sym_type] = "type",
  [sym_subroutineBody] = "subroutineBody",
  [sym_subroutineDec] = "subroutineDec",
  [sym_parameterList] = "parameterList",
  [sym_parameter] = "parameter",
  [sym_varDec] = "varDec",
  [sym_statement] = "statement",
  [sym_letStatement] = "letStatement",
  [sym_ifStatement] = "ifStatement",
  [sym_whileStatement] = "whileStatement",
  [sym_doStatement] = "doStatement",
  [sym_returnStatement] = "returnStatement",
  [sym_lvalue] = "lvalue",
  [sym_var_index] = "var_index",
  [sym_paren] = "paren",
  [sym_unaly] = "unaly",
  [sym_expression] = "expression",
  [sym_op_term] = "op_term",
  [sym_term] = "term",
  [sym_subroutineCall] = "subroutineCall",
  [sym_expressionList] = "expressionList",
  [sym_op] = "op",
  [sym_unalyOp] = "unalyOp",
  [sym_keywordConstant] = "keywordConstant",
  [aux_sym_class_repeat1] = "class_repeat1",
  [aux_sym_class_repeat2] = "class_repeat2",
  [aux_sym_classVarDec_repeat1] = "classVarDec_repeat1",
  [aux_sym_subroutineBody_repeat1] = "subroutineBody_repeat1",
  [aux_sym_subroutineBody_repeat2] = "subroutineBody_repeat2",
  [aux_sym_parameterList_repeat1] = "parameterList_repeat1",
  [aux_sym_expression_repeat1] = "expression_repeat1",
  [aux_sym_expressionList_repeat1] = "expressionList_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_comment] = sym_comment,
  [sym_ws] = sym_ws,
  [sym_integerConstant] = sym_integerConstant,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_stringConstant_token1] = aux_sym_stringConstant_token1,
  [sym_identifier] = sym_identifier,
  [anon_sym_class] = anon_sym_class,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_static] = anon_sym_static,
  [anon_sym_field] = anon_sym_field,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_int] = anon_sym_int,
  [anon_sym_char] = anon_sym_char,
  [anon_sym_boolean] = anon_sym_boolean,
  [anon_sym_constructor] = anon_sym_constructor,
  [anon_sym_function] = anon_sym_function,
  [anon_sym_method] = anon_sym_method,
  [anon_sym_void] = anon_sym_void,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_var] = anon_sym_var,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_while] = anon_sym_while,
  [anon_sym_do] = anon_sym_do,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_null] = anon_sym_null,
  [anon_sym_this] = anon_sym_this,
  [sym_source_file] = sym_source_file,
  [sym_stringConstant] = sym_stringConstant,
  [sym_class] = sym_class,
  [sym_classVarDec] = sym_classVarDec,
  [sym_type] = sym_type,
  [sym_subroutineBody] = sym_subroutineBody,
  [sym_subroutineDec] = sym_subroutineDec,
  [sym_parameterList] = sym_parameterList,
  [sym_parameter] = sym_parameter,
  [sym_varDec] = sym_varDec,
  [sym_statement] = sym_statement,
  [sym_letStatement] = sym_letStatement,
  [sym_ifStatement] = sym_ifStatement,
  [sym_whileStatement] = sym_whileStatement,
  [sym_doStatement] = sym_doStatement,
  [sym_returnStatement] = sym_returnStatement,
  [sym_lvalue] = sym_lvalue,
  [sym_var_index] = sym_var_index,
  [sym_paren] = sym_paren,
  [sym_unaly] = sym_unaly,
  [sym_expression] = sym_expression,
  [sym_op_term] = sym_op_term,
  [sym_term] = sym_term,
  [sym_subroutineCall] = sym_subroutineCall,
  [sym_expressionList] = sym_expressionList,
  [sym_op] = sym_op,
  [sym_unalyOp] = sym_unalyOp,
  [sym_keywordConstant] = sym_keywordConstant,
  [aux_sym_class_repeat1] = aux_sym_class_repeat1,
  [aux_sym_class_repeat2] = aux_sym_class_repeat2,
  [aux_sym_classVarDec_repeat1] = aux_sym_classVarDec_repeat1,
  [aux_sym_subroutineBody_repeat1] = aux_sym_subroutineBody_repeat1,
  [aux_sym_subroutineBody_repeat2] = aux_sym_subroutineBody_repeat2,
  [aux_sym_parameterList_repeat1] = aux_sym_parameterList_repeat1,
  [aux_sym_expression_repeat1] = aux_sym_expression_repeat1,
  [aux_sym_expressionList_repeat1] = aux_sym_expressionList_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_ws] = {
    .visible = true,
    .named = true,
  },
  [sym_integerConstant] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_stringConstant_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_class] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_static] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_field] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_char] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_boolean] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_constructor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_function] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_method] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_void] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_var] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_let] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_while] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_do] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_null] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_this] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_stringConstant] = {
    .visible = true,
    .named = true,
  },
  [sym_class] = {
    .visible = true,
    .named = true,
  },
  [sym_classVarDec] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_subroutineBody] = {
    .visible = true,
    .named = true,
  },
  [sym_subroutineDec] = {
    .visible = true,
    .named = true,
  },
  [sym_parameterList] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_varDec] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_letStatement] = {
    .visible = true,
    .named = true,
  },
  [sym_ifStatement] = {
    .visible = true,
    .named = true,
  },
  [sym_whileStatement] = {
    .visible = true,
    .named = true,
  },
  [sym_doStatement] = {
    .visible = true,
    .named = true,
  },
  [sym_returnStatement] = {
    .visible = true,
    .named = true,
  },
  [sym_lvalue] = {
    .visible = true,
    .named = true,
  },
  [sym_var_index] = {
    .visible = true,
    .named = true,
  },
  [sym_paren] = {
    .visible = true,
    .named = true,
  },
  [sym_unaly] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_op_term] = {
    .visible = true,
    .named = true,
  },
  [sym_term] = {
    .visible = true,
    .named = true,
  },
  [sym_subroutineCall] = {
    .visible = true,
    .named = true,
  },
  [sym_expressionList] = {
    .visible = true,
    .named = true,
  },
  [sym_op] = {
    .visible = true,
    .named = true,
  },
  [sym_unalyOp] = {
    .visible = true,
    .named = true,
  },
  [sym_keywordConstant] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_class_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_class_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_classVarDec_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_subroutineBody_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_subroutineBody_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameterList_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_expressionList_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_body = 1,
  field_class = 2,
  field_dot_identifier = 3,
  field_expression = 4,
  field_expression_list = 5,
  field_identifier = 6,
  field_integer_constant = 7,
  field_keyword_constant = 8,
  field_lvalue = 9,
  field_modifier = 10,
  field_name = 11,
  field_op = 12,
  field_op_term = 13,
  field_parameter = 14,
  field_parameter_list = 15,
  field_paren = 16,
  field_return_type = 17,
  field_statement = 18,
  field_string_constant = 19,
  field_subroutine_call = 20,
  field_subroutine_dec = 21,
  field_term = 22,
  field_type = 23,
  field_unaly = 24,
  field_value = 25,
  field_var_dec = 26,
  field_var_index = 27,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_body] = "body",
  [field_class] = "class",
  [field_dot_identifier] = "dot_identifier",
  [field_expression] = "expression",
  [field_expression_list] = "expression_list",
  [field_identifier] = "identifier",
  [field_integer_constant] = "integer_constant",
  [field_keyword_constant] = "keyword_constant",
  [field_lvalue] = "lvalue",
  [field_modifier] = "modifier",
  [field_name] = "name",
  [field_op] = "op",
  [field_op_term] = "op_term",
  [field_parameter] = "parameter",
  [field_parameter_list] = "parameter_list",
  [field_paren] = "paren",
  [field_return_type] = "return_type",
  [field_statement] = "statement",
  [field_string_constant] = "string_constant",
  [field_subroutine_call] = "subroutine_call",
  [field_subroutine_dec] = "subroutine_dec",
  [field_term] = "term",
  [field_type] = "type",
  [field_unaly] = "unaly",
  [field_value] = "value",
  [field_var_dec] = "var_dec",
  [field_var_index] = "var_index",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 2},
  [5] = {.index = 6, .length = 3},
  [6] = {.index = 9, .length = 3},
  [7] = {.index = 12, .length = 1},
  [8] = {.index = 13, .length = 4},
  [9] = {.index = 17, .length = 2},
  [10] = {.index = 19, .length = 1},
  [11] = {.index = 20, .length = 4},
  [12] = {.index = 24, .length = 2},
  [13] = {.index = 26, .length = 2},
  [14] = {.index = 28, .length = 5},
  [15] = {.index = 33, .length = 1},
  [16] = {.index = 34, .length = 2},
  [17] = {.index = 36, .length = 1},
  [18] = {.index = 37, .length = 1},
  [19] = {.index = 38, .length = 1},
  [20] = {.index = 39, .length = 1},
  [21] = {.index = 40, .length = 1},
  [22] = {.index = 41, .length = 1},
  [23] = {.index = 42, .length = 1},
  [24] = {.index = 43, .length = 1},
  [25] = {.index = 44, .length = 1},
  [26] = {.index = 45, .length = 1},
  [27] = {.index = 46, .length = 1},
  [28] = {.index = 47, .length = 2},
  [29] = {.index = 49, .length = 2},
  [30] = {.index = 51, .length = 2},
  [31] = {.index = 53, .length = 2},
  [32] = {.index = 55, .length = 1},
  [33] = {.index = 56, .length = 1},
  [34] = {.index = 57, .length = 1},
  [35] = {.index = 58, .length = 3},
  [36] = {.index = 61, .length = 2},
  [37] = {.index = 63, .length = 2},
  [38] = {.index = 65, .length = 2},
  [39] = {.index = 67, .length = 2},
  [40] = {.index = 69, .length = 2},
  [41] = {.index = 71, .length = 2},
  [42] = {.index = 73, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_class, 0},
  [1] =
    {field_name, 1},
  [2] =
    {field_name, 1},
    {field_var_dec, 3},
  [4] =
    {field_name, 1},
    {field_subroutine_dec, 3},
  [6] =
    {field_name, 1},
    {field_subroutine_dec, 4},
    {field_var_dec, 3},
  [9] =
    {field_identifier, 2},
    {field_modifier, 0},
    {field_type, 1},
  [12] =
    {field_identifier, 1},
  [13] =
    {field_identifier, 2},
    {field_identifier, 3, .inherited = true},
    {field_modifier, 0},
    {field_type, 1},
  [17] =
    {field_identifier, 0, .inherited = true},
    {field_identifier, 1, .inherited = true},
  [19] =
    {field_parameter, 0},
  [20] =
    {field_body, 5},
    {field_modifier, 0},
    {field_name, 2},
    {field_return_type, 1},
  [24] =
    {field_identifier, 1},
    {field_type, 0},
  [26] =
    {field_parameter, 0},
    {field_parameter, 1, .inherited = true},
  [28] =
    {field_body, 6},
    {field_modifier, 0},
    {field_name, 2},
    {field_parameter_list, 4},
    {field_return_type, 1},
  [33] =
    {field_parameter, 1},
  [34] =
    {field_parameter, 0, .inherited = true},
    {field_parameter, 1, .inherited = true},
  [36] =
    {field_identifier, 0},
  [37] =
    {field_integer_constant, 0},
  [38] =
    {field_string_constant, 0},
  [39] =
    {field_var_index, 0},
  [40] =
    {field_paren, 0},
  [41] =
    {field_unaly, 0},
  [42] =
    {field_term, 0},
  [43] =
    {field_subroutine_call, 0},
  [44] =
    {field_keyword_constant, 0},
  [45] =
    {field_var_dec, 1},
  [46] =
    {field_statement, 1},
  [47] =
    {field_op_term, 1},
    {field_term, 0},
  [49] =
    {field_op, 0},
    {field_term, 1},
  [51] =
    {field_statement, 2},
    {field_var_dec, 1},
  [53] =
    {field_identifier, 2},
    {field_type, 1},
  [55] =
    {field_expression, 0},
  [56] =
    {field_value, 1},
  [57] =
    {field_expression, 1},
  [58] =
    {field_identifier, 2},
    {field_identifier, 3, .inherited = true},
    {field_type, 1},
  [61] =
    {field_expression, 2},
    {field_identifier, 0},
  [63] =
    {field_expression, 3},
    {field_lvalue, 1},
  [65] =
    {field_expression, 0},
    {field_expression, 1, .inherited = true},
  [67] =
    {field_expression_list, 2},
    {field_identifier, 0},
  [69] =
    {field_expression, 0, .inherited = true},
    {field_expression, 1, .inherited = true},
  [71] =
    {field_dot_identifier, 2},
    {field_identifier, 0},
  [73] =
    {field_dot_identifier, 2},
    {field_expression_list, 4},
    {field_identifier, 0},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(82);
      if (lookahead == '"') ADVANCE(94);
      if (lookahead == '&') ADVANCE(163);
      if (lookahead == '(') ADVANCE(146);
      if (lookahead == ')') ADVANCE(147);
      if (lookahead == '*') ADVANCE(161);
      if (lookahead == '+') ADVANCE(159);
      if (lookahead == ',') ADVANCE(133);
      if (lookahead == '-') ADVANCE(160);
      if (lookahead == '.') ADVANCE(158);
      if (lookahead == '/') ADVANCE(162);
      if (lookahead == ';') ADVANCE(134);
      if (lookahead == '<') ADVANCE(165);
      if (lookahead == '=') ADVANCE(150);
      if (lookahead == '>') ADVANCE(166);
      if (lookahead == '[') ADVANCE(156);
      if (lookahead == ']') ADVANCE(157);
      if (lookahead == 'b') ADVANCE(52);
      if (lookahead == 'c') ADVANCE(30);
      if (lookahead == 'd') ADVANCE(51);
      if (lookahead == 'e') ADVANCE(39);
      if (lookahead == 'f') ADVANCE(13);
      if (lookahead == 'i') ADVANCE(29);
      if (lookahead == 'l') ADVANCE(24);
      if (lookahead == 'm') ADVANCE(26);
      if (lookahead == 'n') ADVANCE(77);
      if (lookahead == 'r') ADVANCE(28);
      if (lookahead == 's') ADVANCE(72);
      if (lookahead == 't') ADVANCE(31);
      if (lookahead == 'v') ADVANCE(8);
      if (lookahead == 'w') ADVANCE(32);
      if (lookahead == '{') ADVANCE(129);
      if (lookahead == '|') ADVANCE(164);
      if (lookahead == '}') ADVANCE(130);
      if (lookahead == '~') ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(94);
      if (lookahead == '(') ADVANCE(146);
      if (lookahead == ')') ADVANCE(147);
      if (lookahead == '-') ADVANCE(160);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == ';') ADVANCE(134);
      if (lookahead == 'f') ADVANCE(101);
      if (lookahead == 'n') ADVANCE(126);
      if (lookahead == 't') ADVANCE(108);
      if (lookahead == '~') ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 2:
      if (lookahead == ')') ADVANCE(147);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == 'b') ADVANCE(119);
      if (lookahead == 'c') ADVANCE(109);
      if (lookahead == 'i') ADVANCE(116);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(92);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '/') ADVANCE(85);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '/') ADVANCE(83);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(4);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == 'b') ADVANCE(119);
      if (lookahead == 'c') ADVANCE(109);
      if (lookahead == 'i') ADVANCE(116);
      if (lookahead == 'v') ADVANCE(118);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(92);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 7:
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(92);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(57);
      if (lookahead == 'o') ADVANCE(34);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(65);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(58);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(48);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(73);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(45);
      if (lookahead == 'i') ADVANCE(25);
      if (lookahead == 'u') ADVANCE(46);
      END_STATE();
    case 14:
      if (lookahead == 'c') ADVANCE(131);
      END_STATE();
    case 15:
      if (lookahead == 'c') ADVANCE(75);
      END_STATE();
    case 16:
      if (lookahead == 'c') ADVANCE(76);
      END_STATE();
    case 17:
      if (lookahead == 'd') ADVANCE(144);
      END_STATE();
    case 18:
      if (lookahead == 'd') ADVANCE(132);
      END_STATE();
    case 19:
      if (lookahead == 'd') ADVANCE(143);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(152);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(168);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(170);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(153);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(11);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 29:
      if (lookahead == 'f') ADVANCE(151);
      if (lookahead == 'n') ADVANCE(68);
      END_STATE();
    case 30:
      if (lookahead == 'h') ADVANCE(10);
      if (lookahead == 'l') ADVANCE(9);
      if (lookahead == 'o') ADVANCE(50);
      END_STATE();
    case 31:
      if (lookahead == 'h') ADVANCE(36);
      if (lookahead == 'r') ADVANCE(79);
      END_STATE();
    case 32:
      if (lookahead == 'h') ADVANCE(38);
      END_STATE();
    case 33:
      if (lookahead == 'h') ADVANCE(54);
      END_STATE();
    case 34:
      if (lookahead == 'i') ADVANCE(17);
      END_STATE();
    case 35:
      if (lookahead == 'i') ADVANCE(14);
      END_STATE();
    case 36:
      if (lookahead == 'i') ADVANCE(62);
      END_STATE();
    case 37:
      if (lookahead == 'i') ADVANCE(55);
      END_STATE();
    case 38:
      if (lookahead == 'i') ADVANCE(44);
      END_STATE();
    case 39:
      if (lookahead == 'l') ADVANCE(64);
      END_STATE();
    case 40:
      if (lookahead == 'l') ADVANCE(172);
      END_STATE();
    case 41:
      if (lookahead == 'l') ADVANCE(18);
      END_STATE();
    case 42:
      if (lookahead == 'l') ADVANCE(40);
      END_STATE();
    case 43:
      if (lookahead == 'l') ADVANCE(27);
      END_STATE();
    case 44:
      if (lookahead == 'l') ADVANCE(23);
      END_STATE();
    case 45:
      if (lookahead == 'l') ADVANCE(66);
      END_STATE();
    case 46:
      if (lookahead == 'n') ADVANCE(15);
      END_STATE();
    case 47:
      if (lookahead == 'n') ADVANCE(155);
      END_STATE();
    case 48:
      if (lookahead == 'n') ADVANCE(139);
      END_STATE();
    case 49:
      if (lookahead == 'n') ADVANCE(142);
      END_STATE();
    case 50:
      if (lookahead == 'n') ADVANCE(67);
      END_STATE();
    case 51:
      if (lookahead == 'o') ADVANCE(154);
      END_STATE();
    case 52:
      if (lookahead == 'o') ADVANCE(53);
      END_STATE();
    case 53:
      if (lookahead == 'o') ADVANCE(43);
      END_STATE();
    case 54:
      if (lookahead == 'o') ADVANCE(19);
      END_STATE();
    case 55:
      if (lookahead == 'o') ADVANCE(49);
      END_STATE();
    case 56:
      if (lookahead == 'o') ADVANCE(59);
      END_STATE();
    case 57:
      if (lookahead == 'r') ADVANCE(148);
      END_STATE();
    case 58:
      if (lookahead == 'r') ADVANCE(137);
      END_STATE();
    case 59:
      if (lookahead == 'r') ADVANCE(141);
      END_STATE();
    case 60:
      if (lookahead == 'r') ADVANCE(47);
      END_STATE();
    case 61:
      if (lookahead == 'r') ADVANCE(80);
      END_STATE();
    case 62:
      if (lookahead == 's') ADVANCE(174);
      END_STATE();
    case 63:
      if (lookahead == 's') ADVANCE(128);
      END_STATE();
    case 64:
      if (lookahead == 's') ADVANCE(20);
      END_STATE();
    case 65:
      if (lookahead == 's') ADVANCE(63);
      END_STATE();
    case 66:
      if (lookahead == 's') ADVANCE(22);
      END_STATE();
    case 67:
      if (lookahead == 's') ADVANCE(74);
      END_STATE();
    case 68:
      if (lookahead == 't') ADVANCE(135);
      END_STATE();
    case 69:
      if (lookahead == 't') ADVANCE(149);
      END_STATE();
    case 70:
      if (lookahead == 't') ADVANCE(33);
      END_STATE();
    case 71:
      if (lookahead == 't') ADVANCE(78);
      END_STATE();
    case 72:
      if (lookahead == 't') ADVANCE(12);
      END_STATE();
    case 73:
      if (lookahead == 't') ADVANCE(35);
      END_STATE();
    case 74:
      if (lookahead == 't') ADVANCE(61);
      END_STATE();
    case 75:
      if (lookahead == 't') ADVANCE(37);
      END_STATE();
    case 76:
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 77:
      if (lookahead == 'u') ADVANCE(42);
      END_STATE();
    case 78:
      if (lookahead == 'u') ADVANCE(60);
      END_STATE();
    case 79:
      if (lookahead == 'u') ADVANCE(21);
      END_STATE();
    case 80:
      if (lookahead == 'u') ADVANCE(16);
      END_STATE();
    case 81:
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '\\') ADVANCE(85);
      if (lookahead == '\r') ADVANCE(90);
      if (lookahead == '\\') ADVANCE(89);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '"') ADVANCE(85);
      if (lookahead == '\\') ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(84);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(85);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n' ||
          lookahead == '"') ADVANCE(85);
      if (lookahead == '\r') ADVANCE(87);
      if (lookahead == '\\') ADVANCE(86);
      if (lookahead != 0) ADVANCE(84);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n' ||
          lookahead == '"') ADVANCE(85);
      if (lookahead == '\\') ADVANCE(99);
      if (lookahead != 0) ADVANCE(84);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(100);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '\\') ADVANCE(85);
      if (lookahead == '\r') ADVANCE(90);
      if (lookahead == '\\') ADVANCE(89);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(85);
      if (lookahead == '\\') ADVANCE(81);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_ws);
      if (lookahead == '\n') ADVANCE(92);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(100);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_ws);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(92);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_integerConstant);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_stringConstant_token1);
      if (lookahead == '\n') ADVANCE(92);
      if (lookahead == '/') ADVANCE(96);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(100);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_stringConstant_token1);
      if (lookahead == '*') ADVANCE(98);
      if (lookahead == '/') ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(100);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_stringConstant_token1);
      if (lookahead == '*') ADVANCE(97);
      if (lookahead == '/') ADVANCE(88);
      if (lookahead == '\n' ||
          lookahead == '"') ADVANCE(5);
      if (lookahead != 0) ADVANCE(98);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_stringConstant_token1);
      if (lookahead == '*') ADVANCE(97);
      if (lookahead == '\n' ||
          lookahead == '"') ADVANCE(5);
      if (lookahead != 0) ADVANCE(98);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_stringConstant_token1);
      if (lookahead == '\n' ||
          lookahead == '"') ADVANCE(85);
      if (lookahead == '\r') ADVANCE(87);
      if (lookahead == '\\') ADVANCE(86);
      if (lookahead != 0) ADVANCE(84);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_stringConstant_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(100);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(111);
      if (lookahead == 'r') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_class);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_static);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_field);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_int);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_char);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_char);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_boolean);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_boolean);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_constructor);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_method);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_void);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '/') ADVANCE(85);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_null);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_this);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_this);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 2},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 6},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 2},
  [77] = {.lex_state = 2},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 7},
  [96] = {.lex_state = 7},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 7},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 7},
  [120] = {.lex_state = 7},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 95},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 7},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 7},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 7},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 7},
  [138] = {.lex_state = 7},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_ws] = ACTIONS(3),
    [sym_integerConstant] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_class] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_static] = ACTIONS(1),
    [anon_sym_field] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_int] = ACTIONS(1),
    [anon_sym_char] = ACTIONS(1),
    [anon_sym_boolean] = ACTIONS(1),
    [anon_sym_constructor] = ACTIONS(1),
    [anon_sym_function] = ACTIONS(1),
    [anon_sym_method] = ACTIONS(1),
    [anon_sym_void] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_var] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_while] = ACTIONS(1),
    [anon_sym_do] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_null] = ACTIONS(1),
    [anon_sym_this] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(142),
    [sym_class] = STATE(141),
    [sym_comment] = ACTIONS(3),
    [sym_ws] = ACTIONS(3),
    [anon_sym_class] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 18,
    ACTIONS(7), 1,
      sym_integerConstant,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_RPAREN,
    STATE(13), 1,
      sym_unalyOp,
    STATE(17), 1,
      sym_term,
    STATE(22), 1,
      sym_var_index,
    STATE(24), 1,
      sym_stringConstant,
    STATE(33), 1,
      sym_keywordConstant,
    STATE(34), 1,
      sym_paren,
    STATE(36), 1,
      sym_unaly,
    STATE(44), 1,
      sym_subroutineCall,
    STATE(93), 1,
      sym_expression,
    STATE(130), 1,
      sym_expressionList,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(17), 2,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(19), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_this,
  [60] = 18,
    ACTIONS(7), 1,
      sym_integerConstant,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_RPAREN,
    STATE(13), 1,
      sym_unalyOp,
    STATE(17), 1,
      sym_term,
    STATE(22), 1,
      sym_var_index,
    STATE(24), 1,
      sym_stringConstant,
    STATE(33), 1,
      sym_keywordConstant,
    STATE(34), 1,
      sym_paren,
    STATE(36), 1,
      sym_unaly,
    STATE(44), 1,
      sym_subroutineCall,
    STATE(93), 1,
      sym_expression,
    STATE(124), 1,
      sym_expressionList,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(17), 2,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(19), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_this,
  [120] = 17,
    ACTIONS(7), 1,
      sym_integerConstant,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_SEMI,
    STATE(13), 1,
      sym_unalyOp,
    STATE(17), 1,
      sym_term,
    STATE(22), 1,
      sym_var_index,
    STATE(24), 1,
      sym_stringConstant,
    STATE(33), 1,
      sym_keywordConstant,
    STATE(34), 1,
      sym_paren,
    STATE(36), 1,
      sym_unaly,
    STATE(44), 1,
      sym_subroutineCall,
    STATE(132), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(17), 2,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(19), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_this,
  [177] = 16,
    ACTIONS(7), 1,
      sym_integerConstant,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    STATE(13), 1,
      sym_unalyOp,
    STATE(17), 1,
      sym_term,
    STATE(22), 1,
      sym_var_index,
    STATE(24), 1,
      sym_stringConstant,
    STATE(33), 1,
      sym_keywordConstant,
    STATE(34), 1,
      sym_paren,
    STATE(36), 1,
      sym_unaly,
    STATE(44), 1,
      sym_subroutineCall,
    STATE(106), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(17), 2,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(19), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_this,
  [231] = 16,
    ACTIONS(7), 1,
      sym_integerConstant,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    STATE(13), 1,
      sym_unalyOp,
    STATE(17), 1,
      sym_term,
    STATE(22), 1,
      sym_var_index,
    STATE(24), 1,
      sym_stringConstant,
    STATE(33), 1,
      sym_keywordConstant,
    STATE(34), 1,
      sym_paren,
    STATE(36), 1,
      sym_unaly,
    STATE(44), 1,
      sym_subroutineCall,
    STATE(128), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(17), 2,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(19), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_this,
  [285] = 16,
    ACTIONS(7), 1,
      sym_integerConstant,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    STATE(13), 1,
      sym_unalyOp,
    STATE(17), 1,
      sym_term,
    STATE(22), 1,
      sym_var_index,
    STATE(24), 1,
      sym_stringConstant,
    STATE(33), 1,
      sym_keywordConstant,
    STATE(34), 1,
      sym_paren,
    STATE(36), 1,
      sym_unaly,
    STATE(44), 1,
      sym_subroutineCall,
    STATE(109), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(17), 2,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(19), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_this,
  [339] = 16,
    ACTIONS(7), 1,
      sym_integerConstant,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    STATE(13), 1,
      sym_unalyOp,
    STATE(17), 1,
      sym_term,
    STATE(22), 1,
      sym_var_index,
    STATE(24), 1,
      sym_stringConstant,
    STATE(33), 1,
      sym_keywordConstant,
    STATE(34), 1,
      sym_paren,
    STATE(36), 1,
      sym_unaly,
    STATE(44), 1,
      sym_subroutineCall,
    STATE(121), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(17), 2,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(19), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_this,
  [393] = 16,
    ACTIONS(7), 1,
      sym_integerConstant,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    STATE(13), 1,
      sym_unalyOp,
    STATE(17), 1,
      sym_term,
    STATE(22), 1,
      sym_var_index,
    STATE(24), 1,
      sym_stringConstant,
    STATE(33), 1,
      sym_keywordConstant,
    STATE(34), 1,
      sym_paren,
    STATE(36), 1,
      sym_unaly,
    STATE(44), 1,
      sym_subroutineCall,
    STATE(123), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(17), 2,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(19), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_this,
  [447] = 16,
    ACTIONS(7), 1,
      sym_integerConstant,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    STATE(13), 1,
      sym_unalyOp,
    STATE(17), 1,
      sym_term,
    STATE(22), 1,
      sym_var_index,
    STATE(24), 1,
      sym_stringConstant,
    STATE(33), 1,
      sym_keywordConstant,
    STATE(34), 1,
      sym_paren,
    STATE(36), 1,
      sym_unaly,
    STATE(44), 1,
      sym_subroutineCall,
    STATE(118), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(17), 2,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(19), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_this,
  [501] = 16,
    ACTIONS(7), 1,
      sym_integerConstant,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    STATE(13), 1,
      sym_unalyOp,
    STATE(17), 1,
      sym_term,
    STATE(22), 1,
      sym_var_index,
    STATE(24), 1,
      sym_stringConstant,
    STATE(33), 1,
      sym_keywordConstant,
    STATE(34), 1,
      sym_paren,
    STATE(36), 1,
      sym_unaly,
    STATE(44), 1,
      sym_subroutineCall,
    STATE(97), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(17), 2,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(19), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_this,
  [555] = 15,
    ACTIONS(7), 1,
      sym_integerConstant,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    STATE(13), 1,
      sym_unalyOp,
    STATE(22), 1,
      sym_var_index,
    STATE(24), 1,
      sym_stringConstant,
    STATE(33), 1,
      sym_keywordConstant,
    STATE(34), 1,
      sym_paren,
    STATE(36), 1,
      sym_unaly,
    STATE(40), 1,
      sym_term,
    STATE(44), 1,
      sym_subroutineCall,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(17), 2,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(19), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_this,
  [606] = 15,
    ACTIONS(7), 1,
      sym_integerConstant,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    STATE(13), 1,
      sym_unalyOp,
    STATE(22), 1,
      sym_var_index,
    STATE(24), 1,
      sym_stringConstant,
    STATE(33), 1,
      sym_keywordConstant,
    STATE(34), 1,
      sym_paren,
    STATE(36), 1,
      sym_unaly,
    STATE(44), 1,
      sym_subroutineCall,
    STATE(47), 1,
      sym_term,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(17), 2,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(19), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_this,
  [657] = 6,
    ACTIONS(29), 1,
      anon_sym_SLASH,
    STATE(12), 1,
      sym_op,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(16), 2,
      sym_op_term,
      aux_sym_expression_repeat1,
    ACTIONS(25), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(27), 8,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
  [688] = 11,
    ACTIONS(31), 1,
      anon_sym_RBRACE,
    ACTIONS(33), 1,
      anon_sym_var,
    ACTIONS(35), 1,
      anon_sym_let,
    ACTIONS(37), 1,
      anon_sym_if,
    ACTIONS(39), 1,
      anon_sym_while,
    ACTIONS(41), 1,
      anon_sym_do,
    ACTIONS(43), 1,
      anon_sym_return,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(29), 2,
      sym_statement,
      aux_sym_subroutineBody_repeat2,
    STATE(52), 2,
      sym_varDec,
      aux_sym_subroutineBody_repeat1,
    STATE(64), 5,
      sym_letStatement,
      sym_ifStatement,
      sym_whileStatement,
      sym_doStatement,
      sym_returnStatement,
  [729] = 6,
    ACTIONS(50), 1,
      anon_sym_SLASH,
    STATE(12), 1,
      sym_op,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(16), 2,
      sym_op_term,
      aux_sym_expression_repeat1,
    ACTIONS(45), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(47), 8,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
  [760] = 6,
    ACTIONS(29), 1,
      anon_sym_SLASH,
    STATE(12), 1,
      sym_op,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(14), 2,
      sym_op_term,
      aux_sym_expression_repeat1,
    ACTIONS(53), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(27), 8,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
  [791] = 6,
    ACTIONS(57), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      anon_sym_LBRACK,
    ACTIONS(61), 1,
      anon_sym_DOT,
    ACTIONS(63), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(55), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
  [822] = 11,
    ACTIONS(33), 1,
      anon_sym_var,
    ACTIONS(35), 1,
      anon_sym_let,
    ACTIONS(37), 1,
      anon_sym_if,
    ACTIONS(39), 1,
      anon_sym_while,
    ACTIONS(41), 1,
      anon_sym_do,
    ACTIONS(43), 1,
      anon_sym_return,
    ACTIONS(65), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(15), 2,
      sym_varDec,
      aux_sym_subroutineBody_repeat1,
    STATE(46), 2,
      sym_statement,
      aux_sym_subroutineBody_repeat2,
    STATE(64), 5,
      sym_letStatement,
      sym_ifStatement,
      sym_whileStatement,
      sym_doStatement,
      sym_returnStatement,
  [863] = 9,
    ACTIONS(35), 1,
      anon_sym_let,
    ACTIONS(37), 1,
      anon_sym_if,
    ACTIONS(39), 1,
      anon_sym_while,
    ACTIONS(41), 1,
      anon_sym_do,
    ACTIONS(43), 1,
      anon_sym_return,
    ACTIONS(67), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(37), 2,
      sym_statement,
      aux_sym_subroutineBody_repeat2,
    STATE(64), 5,
      sym_letStatement,
      sym_ifStatement,
      sym_whileStatement,
      sym_doStatement,
      sym_returnStatement,
  [897] = 9,
    ACTIONS(35), 1,
      anon_sym_let,
    ACTIONS(37), 1,
      anon_sym_if,
    ACTIONS(39), 1,
      anon_sym_while,
    ACTIONS(41), 1,
      anon_sym_do,
    ACTIONS(43), 1,
      anon_sym_return,
    ACTIONS(69), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(23), 2,
      sym_statement,
      aux_sym_subroutineBody_repeat2,
    STATE(64), 5,
      sym_letStatement,
      sym_ifStatement,
      sym_whileStatement,
      sym_doStatement,
      sym_returnStatement,
  [931] = 3,
    ACTIONS(73), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(71), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
  [953] = 9,
    ACTIONS(35), 1,
      anon_sym_let,
    ACTIONS(37), 1,
      anon_sym_if,
    ACTIONS(39), 1,
      anon_sym_while,
    ACTIONS(41), 1,
      anon_sym_do,
    ACTIONS(43), 1,
      anon_sym_return,
    ACTIONS(75), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(35), 2,
      sym_statement,
      aux_sym_subroutineBody_repeat2,
    STATE(64), 5,
      sym_letStatement,
      sym_ifStatement,
      sym_whileStatement,
      sym_doStatement,
      sym_returnStatement,
  [987] = 3,
    ACTIONS(79), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(77), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
  [1009] = 3,
    ACTIONS(83), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(81), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
  [1031] = 9,
    ACTIONS(35), 1,
      anon_sym_let,
    ACTIONS(37), 1,
      anon_sym_if,
    ACTIONS(39), 1,
      anon_sym_while,
    ACTIONS(41), 1,
      anon_sym_do,
    ACTIONS(43), 1,
      anon_sym_return,
    ACTIONS(85), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(35), 2,
      sym_statement,
      aux_sym_subroutineBody_repeat2,
    STATE(64), 5,
      sym_letStatement,
      sym_ifStatement,
      sym_whileStatement,
      sym_doStatement,
      sym_returnStatement,
  [1065] = 3,
    ACTIONS(89), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(87), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
  [1087] = 9,
    ACTIONS(35), 1,
      anon_sym_let,
    ACTIONS(37), 1,
      anon_sym_if,
    ACTIONS(39), 1,
      anon_sym_while,
    ACTIONS(41), 1,
      anon_sym_do,
    ACTIONS(43), 1,
      anon_sym_return,
    ACTIONS(91), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(26), 2,
      sym_statement,
      aux_sym_subroutineBody_repeat2,
    STATE(64), 5,
      sym_letStatement,
      sym_ifStatement,
      sym_whileStatement,
      sym_doStatement,
      sym_returnStatement,
  [1121] = 9,
    ACTIONS(35), 1,
      anon_sym_let,
    ACTIONS(37), 1,
      anon_sym_if,
    ACTIONS(39), 1,
      anon_sym_while,
    ACTIONS(41), 1,
      anon_sym_do,
    ACTIONS(43), 1,
      anon_sym_return,
    ACTIONS(93), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(35), 2,
      sym_statement,
      aux_sym_subroutineBody_repeat2,
    STATE(64), 5,
      sym_letStatement,
      sym_ifStatement,
      sym_whileStatement,
      sym_doStatement,
      sym_returnStatement,
  [1155] = 3,
    ACTIONS(97), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(95), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
  [1177] = 3,
    ACTIONS(101), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(99), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
  [1199] = 9,
    ACTIONS(35), 1,
      anon_sym_let,
    ACTIONS(37), 1,
      anon_sym_if,
    ACTIONS(39), 1,
      anon_sym_while,
    ACTIONS(41), 1,
      anon_sym_do,
    ACTIONS(43), 1,
      anon_sym_return,
    ACTIONS(103), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(45), 2,
      sym_statement,
      aux_sym_subroutineBody_repeat2,
    STATE(64), 5,
      sym_letStatement,
      sym_ifStatement,
      sym_whileStatement,
      sym_doStatement,
      sym_returnStatement,
  [1233] = 3,
    ACTIONS(107), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(105), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
  [1255] = 3,
    ACTIONS(111), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(109), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
  [1277] = 9,
    ACTIONS(113), 1,
      anon_sym_RBRACE,
    ACTIONS(115), 1,
      anon_sym_let,
    ACTIONS(118), 1,
      anon_sym_if,
    ACTIONS(121), 1,
      anon_sym_while,
    ACTIONS(124), 1,
      anon_sym_do,
    ACTIONS(127), 1,
      anon_sym_return,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(35), 2,
      sym_statement,
      aux_sym_subroutineBody_repeat2,
    STATE(64), 5,
      sym_letStatement,
      sym_ifStatement,
      sym_whileStatement,
      sym_doStatement,
      sym_returnStatement,
  [1311] = 3,
    ACTIONS(132), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(130), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
  [1333] = 9,
    ACTIONS(35), 1,
      anon_sym_let,
    ACTIONS(37), 1,
      anon_sym_if,
    ACTIONS(39), 1,
      anon_sym_while,
    ACTIONS(41), 1,
      anon_sym_do,
    ACTIONS(43), 1,
      anon_sym_return,
    ACTIONS(91), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(35), 2,
      sym_statement,
      aux_sym_subroutineBody_repeat2,
    STATE(64), 5,
      sym_letStatement,
      sym_ifStatement,
      sym_whileStatement,
      sym_doStatement,
      sym_returnStatement,
  [1367] = 3,
    ACTIONS(136), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(134), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
  [1389] = 3,
    ACTIONS(140), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(138), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
  [1411] = 3,
    ACTIONS(144), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(142), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
  [1433] = 3,
    ACTIONS(148), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(146), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
  [1455] = 3,
    ACTIONS(152), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(150), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
  [1477] = 3,
    ACTIONS(156), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(154), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
  [1499] = 3,
    ACTIONS(160), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(158), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
  [1521] = 9,
    ACTIONS(35), 1,
      anon_sym_let,
    ACTIONS(37), 1,
      anon_sym_if,
    ACTIONS(39), 1,
      anon_sym_while,
    ACTIONS(41), 1,
      anon_sym_do,
    ACTIONS(43), 1,
      anon_sym_return,
    ACTIONS(162), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(35), 2,
      sym_statement,
      aux_sym_subroutineBody_repeat2,
    STATE(64), 5,
      sym_letStatement,
      sym_ifStatement,
      sym_whileStatement,
      sym_doStatement,
      sym_returnStatement,
  [1555] = 9,
    ACTIONS(35), 1,
      anon_sym_let,
    ACTIONS(37), 1,
      anon_sym_if,
    ACTIONS(39), 1,
      anon_sym_while,
    ACTIONS(41), 1,
      anon_sym_do,
    ACTIONS(43), 1,
      anon_sym_return,
    ACTIONS(164), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(35), 2,
      sym_statement,
      aux_sym_subroutineBody_repeat2,
    STATE(64), 5,
      sym_letStatement,
      sym_ifStatement,
      sym_whileStatement,
      sym_doStatement,
      sym_returnStatement,
  [1589] = 3,
    ACTIONS(168), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(166), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
  [1611] = 6,
    ACTIONS(170), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(172), 2,
      anon_sym_static,
      anon_sym_field,
    STATE(54), 2,
      sym_classVarDec,
      aux_sym_class_repeat1,
    STATE(70), 2,
      sym_subroutineDec,
      aux_sym_class_repeat2,
    ACTIONS(174), 3,
      anon_sym_constructor,
      anon_sym_function,
      anon_sym_method,
  [1636] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(176), 5,
      sym_integerConstant,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(178), 5,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_this,
  [1655] = 6,
    ACTIONS(180), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(172), 2,
      anon_sym_static,
      anon_sym_field,
    STATE(48), 2,
      sym_classVarDec,
      aux_sym_class_repeat1,
    STATE(73), 2,
      sym_subroutineDec,
      aux_sym_class_repeat2,
    ACTIONS(174), 3,
      anon_sym_constructor,
      anon_sym_function,
      anon_sym_method,
  [1680] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(182), 5,
      sym_integerConstant,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(184), 5,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_this,
  [1699] = 4,
    ACTIONS(188), 1,
      anon_sym_var,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(52), 2,
      sym_varDec,
      aux_sym_subroutineBody_repeat1,
    ACTIONS(186), 6,
      anon_sym_RBRACE,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_do,
      anon_sym_return,
  [1719] = 6,
    ACTIONS(193), 1,
      anon_sym_RPAREN,
    STATE(91), 1,
      sym_parameter,
    STATE(105), 1,
      sym_parameterList,
    STATE(120), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(191), 4,
      sym_identifier,
      anon_sym_int,
      anon_sym_char,
      anon_sym_boolean,
  [1742] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(197), 2,
      anon_sym_static,
      anon_sym_field,
    STATE(54), 2,
      sym_classVarDec,
      aux_sym_class_repeat1,
    ACTIONS(195), 4,
      anon_sym_RBRACE,
      anon_sym_constructor,
      anon_sym_function,
      anon_sym_method,
  [1761] = 3,
    ACTIONS(202), 1,
      anon_sym_else,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(200), 6,
      anon_sym_RBRACE,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_do,
      anon_sym_return,
  [1777] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(204), 7,
      anon_sym_RBRACE,
      anon_sym_var,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_do,
      anon_sym_return,
  [1791] = 3,
    ACTIONS(208), 1,
      anon_sym_else,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(206), 6,
      anon_sym_RBRACE,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_do,
      anon_sym_return,
  [1807] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(210), 7,
      anon_sym_RBRACE,
      anon_sym_var,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_do,
      anon_sym_return,
  [1821] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(212), 6,
      anon_sym_RBRACE,
      anon_sym_static,
      anon_sym_field,
      anon_sym_constructor,
      anon_sym_function,
      anon_sym_method,
  [1834] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(214), 6,
      anon_sym_RBRACE,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_do,
      anon_sym_return,
  [1847] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(216), 6,
      anon_sym_RBRACE,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_do,
      anon_sym_return,
  [1860] = 4,
    STATE(100), 1,
      sym_parameter,
    STATE(120), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(191), 4,
      sym_identifier,
      anon_sym_int,
      anon_sym_char,
      anon_sym_boolean,
  [1877] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(218), 6,
      anon_sym_RBRACE,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_do,
      anon_sym_return,
  [1890] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(220), 6,
      anon_sym_RBRACE,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_do,
      anon_sym_return,
  [1903] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(222), 6,
      anon_sym_RBRACE,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_do,
      anon_sym_return,
  [1916] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(224), 6,
      anon_sym_RBRACE,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_do,
      anon_sym_return,
  [1929] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(226), 6,
      anon_sym_RBRACE,
      anon_sym_static,
      anon_sym_field,
      anon_sym_constructor,
      anon_sym_function,
      anon_sym_method,
  [1942] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(228), 6,
      anon_sym_RBRACE,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_do,
      anon_sym_return,
  [1955] = 4,
    ACTIONS(230), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(69), 2,
      sym_subroutineDec,
      aux_sym_class_repeat2,
    ACTIONS(232), 3,
      anon_sym_constructor,
      anon_sym_function,
      anon_sym_method,
  [1972] = 4,
    ACTIONS(235), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(69), 2,
      sym_subroutineDec,
      aux_sym_class_repeat2,
    ACTIONS(174), 3,
      anon_sym_constructor,
      anon_sym_function,
      anon_sym_method,
  [1989] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(237), 6,
      anon_sym_RBRACE,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_do,
      anon_sym_return,
  [2002] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(239), 6,
      anon_sym_RBRACE,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_do,
      anon_sym_return,
  [2015] = 4,
    ACTIONS(241), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(69), 2,
      sym_subroutineDec,
      aux_sym_class_repeat2,
    ACTIONS(174), 3,
      anon_sym_constructor,
      anon_sym_function,
      anon_sym_method,
  [2032] = 4,
    ACTIONS(243), 1,
      anon_sym_void,
    STATE(135), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(191), 4,
      sym_identifier,
      anon_sym_int,
      anon_sym_char,
      anon_sym_boolean,
  [2049] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(245), 6,
      anon_sym_RBRACE,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_do,
      anon_sym_return,
  [2062] = 3,
    STATE(127), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(191), 4,
      sym_identifier,
      anon_sym_int,
      anon_sym_char,
      anon_sym_boolean,
  [2076] = 3,
    STATE(137), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(191), 4,
      sym_identifier,
      anon_sym_int,
      anon_sym_char,
      anon_sym_boolean,
  [2090] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(247), 4,
      anon_sym_RBRACE,
      anon_sym_constructor,
      anon_sym_function,
      anon_sym_method,
  [2101] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(249), 4,
      anon_sym_RBRACE,
      anon_sym_constructor,
      anon_sym_function,
      anon_sym_method,
  [2112] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(251), 4,
      anon_sym_RBRACE,
      anon_sym_constructor,
      anon_sym_function,
      anon_sym_method,
  [2123] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(253), 4,
      anon_sym_RBRACE,
      anon_sym_constructor,
      anon_sym_function,
      anon_sym_method,
  [2134] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(255), 4,
      anon_sym_RBRACE,
      anon_sym_constructor,
      anon_sym_function,
      anon_sym_method,
  [2145] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(257), 4,
      anon_sym_RBRACE,
      anon_sym_constructor,
      anon_sym_function,
      anon_sym_method,
  [2156] = 4,
    ACTIONS(259), 1,
      anon_sym_COMMA,
    ACTIONS(262), 1,
      anon_sym_RPAREN,
    STATE(84), 1,
      aux_sym_parameterList_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2170] = 4,
    ACTIONS(264), 1,
      anon_sym_COMMA,
    ACTIONS(266), 1,
      anon_sym_SEMI,
    STATE(94), 1,
      aux_sym_classVarDec_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2184] = 4,
    ACTIONS(264), 1,
      anon_sym_COMMA,
    ACTIONS(268), 1,
      anon_sym_SEMI,
    STATE(88), 1,
      aux_sym_classVarDec_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2198] = 4,
    ACTIONS(270), 1,
      anon_sym_COMMA,
    ACTIONS(273), 1,
      anon_sym_RPAREN,
    STATE(87), 1,
      aux_sym_expressionList_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2212] = 4,
    ACTIONS(264), 1,
      anon_sym_COMMA,
    ACTIONS(275), 1,
      anon_sym_SEMI,
    STATE(89), 1,
      aux_sym_classVarDec_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2226] = 4,
    ACTIONS(277), 1,
      anon_sym_COMMA,
    ACTIONS(280), 1,
      anon_sym_SEMI,
    STATE(89), 1,
      aux_sym_classVarDec_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2240] = 4,
    ACTIONS(282), 1,
      anon_sym_COMMA,
    ACTIONS(284), 1,
      anon_sym_RPAREN,
    STATE(87), 1,
      aux_sym_expressionList_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2254] = 4,
    ACTIONS(286), 1,
      anon_sym_COMMA,
    ACTIONS(288), 1,
      anon_sym_RPAREN,
    STATE(92), 1,
      aux_sym_parameterList_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2268] = 4,
    ACTIONS(286), 1,
      anon_sym_COMMA,
    ACTIONS(290), 1,
      anon_sym_RPAREN,
    STATE(84), 1,
      aux_sym_parameterList_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2282] = 4,
    ACTIONS(282), 1,
      anon_sym_COMMA,
    ACTIONS(292), 1,
      anon_sym_RPAREN,
    STATE(90), 1,
      aux_sym_expressionList_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2296] = 4,
    ACTIONS(264), 1,
      anon_sym_COMMA,
    ACTIONS(294), 1,
      anon_sym_SEMI,
    STATE(89), 1,
      aux_sym_classVarDec_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2310] = 3,
    ACTIONS(296), 1,
      sym_identifier,
    STATE(112), 1,
      sym_lvalue,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2321] = 3,
    ACTIONS(298), 1,
      sym_identifier,
    STATE(117), 1,
      sym_subroutineCall,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2332] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(300), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2341] = 3,
    ACTIONS(302), 1,
      anon_sym_EQ,
    ACTIONS(304), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2352] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(306), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [2361] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(308), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2370] = 3,
    ACTIONS(310), 1,
      anon_sym_LBRACE,
    STATE(78), 1,
      sym_subroutineBody,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2381] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(312), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2390] = 3,
    ACTIONS(310), 1,
      anon_sym_LBRACE,
    STATE(83), 1,
      sym_subroutineBody,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2401] = 3,
    ACTIONS(57), 1,
      anon_sym_LPAREN,
    ACTIONS(61), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2412] = 2,
    ACTIONS(314), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2420] = 2,
    ACTIONS(316), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2428] = 2,
    ACTIONS(318), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2436] = 2,
    ACTIONS(320), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2444] = 2,
    ACTIONS(322), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2452] = 2,
    ACTIONS(324), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2460] = 2,
    ACTIONS(326), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2468] = 2,
    ACTIONS(328), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2476] = 2,
    ACTIONS(330), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2484] = 2,
    ACTIONS(332), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2492] = 2,
    ACTIONS(334), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2500] = 2,
    ACTIONS(336), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2508] = 2,
    ACTIONS(338), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2516] = 2,
    ACTIONS(340), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2524] = 2,
    ACTIONS(342), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2532] = 2,
    ACTIONS(344), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2540] = 2,
    ACTIONS(346), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2548] = 2,
    ACTIONS(350), 1,
      aux_sym_stringConstant_token1,
    ACTIONS(348), 2,
      sym_comment,
      sym_ws,
  [2556] = 2,
    ACTIONS(352), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2564] = 2,
    ACTIONS(354), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2572] = 2,
    ACTIONS(356), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2580] = 2,
    ACTIONS(358), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2588] = 2,
    ACTIONS(360), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2596] = 2,
    ACTIONS(362), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2604] = 2,
    ACTIONS(364), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2612] = 2,
    ACTIONS(366), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2620] = 2,
    ACTIONS(368), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2628] = 2,
    ACTIONS(370), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2636] = 2,
    ACTIONS(372), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2644] = 2,
    ACTIONS(374), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2652] = 2,
    ACTIONS(376), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2660] = 2,
    ACTIONS(378), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2668] = 2,
    ACTIONS(380), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2676] = 2,
    ACTIONS(382), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2684] = 2,
    ACTIONS(384), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2692] = 2,
    ACTIONS(386), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2700] = 2,
    ACTIONS(388), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2708] = 2,
    ACTIONS(390), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 60,
  [SMALL_STATE(4)] = 120,
  [SMALL_STATE(5)] = 177,
  [SMALL_STATE(6)] = 231,
  [SMALL_STATE(7)] = 285,
  [SMALL_STATE(8)] = 339,
  [SMALL_STATE(9)] = 393,
  [SMALL_STATE(10)] = 447,
  [SMALL_STATE(11)] = 501,
  [SMALL_STATE(12)] = 555,
  [SMALL_STATE(13)] = 606,
  [SMALL_STATE(14)] = 657,
  [SMALL_STATE(15)] = 688,
  [SMALL_STATE(16)] = 729,
  [SMALL_STATE(17)] = 760,
  [SMALL_STATE(18)] = 791,
  [SMALL_STATE(19)] = 822,
  [SMALL_STATE(20)] = 863,
  [SMALL_STATE(21)] = 897,
  [SMALL_STATE(22)] = 931,
  [SMALL_STATE(23)] = 953,
  [SMALL_STATE(24)] = 987,
  [SMALL_STATE(25)] = 1009,
  [SMALL_STATE(26)] = 1031,
  [SMALL_STATE(27)] = 1065,
  [SMALL_STATE(28)] = 1087,
  [SMALL_STATE(29)] = 1121,
  [SMALL_STATE(30)] = 1155,
  [SMALL_STATE(31)] = 1177,
  [SMALL_STATE(32)] = 1199,
  [SMALL_STATE(33)] = 1233,
  [SMALL_STATE(34)] = 1255,
  [SMALL_STATE(35)] = 1277,
  [SMALL_STATE(36)] = 1311,
  [SMALL_STATE(37)] = 1333,
  [SMALL_STATE(38)] = 1367,
  [SMALL_STATE(39)] = 1389,
  [SMALL_STATE(40)] = 1411,
  [SMALL_STATE(41)] = 1433,
  [SMALL_STATE(42)] = 1455,
  [SMALL_STATE(43)] = 1477,
  [SMALL_STATE(44)] = 1499,
  [SMALL_STATE(45)] = 1521,
  [SMALL_STATE(46)] = 1555,
  [SMALL_STATE(47)] = 1589,
  [SMALL_STATE(48)] = 1611,
  [SMALL_STATE(49)] = 1636,
  [SMALL_STATE(50)] = 1655,
  [SMALL_STATE(51)] = 1680,
  [SMALL_STATE(52)] = 1699,
  [SMALL_STATE(53)] = 1719,
  [SMALL_STATE(54)] = 1742,
  [SMALL_STATE(55)] = 1761,
  [SMALL_STATE(56)] = 1777,
  [SMALL_STATE(57)] = 1791,
  [SMALL_STATE(58)] = 1807,
  [SMALL_STATE(59)] = 1821,
  [SMALL_STATE(60)] = 1834,
  [SMALL_STATE(61)] = 1847,
  [SMALL_STATE(62)] = 1860,
  [SMALL_STATE(63)] = 1877,
  [SMALL_STATE(64)] = 1890,
  [SMALL_STATE(65)] = 1903,
  [SMALL_STATE(66)] = 1916,
  [SMALL_STATE(67)] = 1929,
  [SMALL_STATE(68)] = 1942,
  [SMALL_STATE(69)] = 1955,
  [SMALL_STATE(70)] = 1972,
  [SMALL_STATE(71)] = 1989,
  [SMALL_STATE(72)] = 2002,
  [SMALL_STATE(73)] = 2015,
  [SMALL_STATE(74)] = 2032,
  [SMALL_STATE(75)] = 2049,
  [SMALL_STATE(76)] = 2062,
  [SMALL_STATE(77)] = 2076,
  [SMALL_STATE(78)] = 2090,
  [SMALL_STATE(79)] = 2101,
  [SMALL_STATE(80)] = 2112,
  [SMALL_STATE(81)] = 2123,
  [SMALL_STATE(82)] = 2134,
  [SMALL_STATE(83)] = 2145,
  [SMALL_STATE(84)] = 2156,
  [SMALL_STATE(85)] = 2170,
  [SMALL_STATE(86)] = 2184,
  [SMALL_STATE(87)] = 2198,
  [SMALL_STATE(88)] = 2212,
  [SMALL_STATE(89)] = 2226,
  [SMALL_STATE(90)] = 2240,
  [SMALL_STATE(91)] = 2254,
  [SMALL_STATE(92)] = 2268,
  [SMALL_STATE(93)] = 2282,
  [SMALL_STATE(94)] = 2296,
  [SMALL_STATE(95)] = 2310,
  [SMALL_STATE(96)] = 2321,
  [SMALL_STATE(97)] = 2332,
  [SMALL_STATE(98)] = 2341,
  [SMALL_STATE(99)] = 2352,
  [SMALL_STATE(100)] = 2361,
  [SMALL_STATE(101)] = 2370,
  [SMALL_STATE(102)] = 2381,
  [SMALL_STATE(103)] = 2390,
  [SMALL_STATE(104)] = 2401,
  [SMALL_STATE(105)] = 2412,
  [SMALL_STATE(106)] = 2420,
  [SMALL_STATE(107)] = 2428,
  [SMALL_STATE(108)] = 2436,
  [SMALL_STATE(109)] = 2444,
  [SMALL_STATE(110)] = 2452,
  [SMALL_STATE(111)] = 2460,
  [SMALL_STATE(112)] = 2468,
  [SMALL_STATE(113)] = 2476,
  [SMALL_STATE(114)] = 2484,
  [SMALL_STATE(115)] = 2492,
  [SMALL_STATE(116)] = 2500,
  [SMALL_STATE(117)] = 2508,
  [SMALL_STATE(118)] = 2516,
  [SMALL_STATE(119)] = 2524,
  [SMALL_STATE(120)] = 2532,
  [SMALL_STATE(121)] = 2540,
  [SMALL_STATE(122)] = 2548,
  [SMALL_STATE(123)] = 2556,
  [SMALL_STATE(124)] = 2564,
  [SMALL_STATE(125)] = 2572,
  [SMALL_STATE(126)] = 2580,
  [SMALL_STATE(127)] = 2588,
  [SMALL_STATE(128)] = 2596,
  [SMALL_STATE(129)] = 2604,
  [SMALL_STATE(130)] = 2612,
  [SMALL_STATE(131)] = 2620,
  [SMALL_STATE(132)] = 2628,
  [SMALL_STATE(133)] = 2636,
  [SMALL_STATE(134)] = 2644,
  [SMALL_STATE(135)] = 2652,
  [SMALL_STATE(136)] = 2660,
  [SMALL_STATE(137)] = 2668,
  [SMALL_STATE(138)] = 2676,
  [SMALL_STATE(139)] = 2684,
  [SMALL_STATE(140)] = 2692,
  [SMALL_STATE(141)] = 2700,
  [SMALL_STATE(142)] = 2708,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 2, .production_id = 28),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2), SHIFT_REPEAT(49),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expression_repeat1, 2), SHIFT_REPEAT(49),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, .production_id = 23),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 1, .production_id = 17),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_term, 1, .production_id = 17),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 1, .production_id = 20),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_term, 1, .production_id = 20),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 1, .production_id = 19),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_term, 1, .production_id = 19),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keywordConstant, 1),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keywordConstant, 1),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_index, 4, .production_id = 36),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_index, 4, .production_id = 36),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subroutineCall, 4, .production_id = 39),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subroutineCall, 4, .production_id = 39),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subroutineCall, 5, .production_id = 41),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subroutineCall, 5, .production_id = 41),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 1, .production_id = 25),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_term, 1, .production_id = 25),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 1, .production_id = 21),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_term, 1, .production_id = 21),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_subroutineBody_repeat2, 2),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_subroutineBody_repeat2, 2), SHIFT_REPEAT(95),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_subroutineBody_repeat2, 2), SHIFT_REPEAT(110),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_subroutineBody_repeat2, 2), SHIFT_REPEAT(108),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_subroutineBody_repeat2, 2), SHIFT_REPEAT(96),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_subroutineBody_repeat2, 2), SHIFT_REPEAT(4),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 1, .production_id = 22),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_term, 1, .production_id = 22),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subroutineCall, 6, .production_id = 42),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subroutineCall, 6, .production_id = 42),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 1, .production_id = 18),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_term, 1, .production_id = 18),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op_term, 2, .production_id = 29),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_op_term, 2, .production_id = 29),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paren, 3, .production_id = 34),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paren, 3, .production_id = 34),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stringConstant, 3, .production_id = 33),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stringConstant, 3, .production_id = 33),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subroutineCall, 3, .production_id = 17),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subroutineCall, 3, .production_id = 17),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 1, .production_id = 24),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_term, 1, .production_id = 24),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unaly, 2, .production_id = 29),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unaly, 2, .production_id = 29),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op, 1),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_op, 1),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unalyOp, 1),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unalyOp, 1),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_subroutineBody_repeat1, 2),
  [188] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_subroutineBody_repeat1, 2), SHIFT_REPEAT(76),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_repeat1, 2),
  [197] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_repeat1, 2), SHIFT_REPEAT(77),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ifStatement, 7),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_varDec, 4, .production_id = 31),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ifStatement, 6),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_varDec, 5, .production_id = 35),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classVarDec, 5, .production_id = 8),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_returnStatement, 3),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ifStatement, 11),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_returnStatement, 2),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_letStatement, 5, .production_id = 37),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doStatement, 3),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classVarDec, 4, .production_id = 6),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_whileStatement, 6),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_repeat2, 2),
  [232] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_repeat2, 2), SHIFT_REPEAT(74),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_whileStatement, 7),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ifStatement, 9),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ifStatement, 10),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subroutineDec, 6, .production_id = 11),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subroutineBody, 3, .production_id = 26),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subroutineBody, 2),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subroutineBody, 3, .production_id = 27),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subroutineBody, 4, .production_id = 30),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subroutineDec, 7, .production_id = 14),
  [259] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameterList_repeat1, 2, .production_id = 16), SHIFT_REPEAT(62),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameterList_repeat1, 2, .production_id = 16),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [270] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expressionList_repeat1, 2, .production_id = 40), SHIFT_REPEAT(11),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expressionList_repeat1, 2, .production_id = 40),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [277] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_classVarDec_repeat1, 2, .production_id = 9), SHIFT_REPEAT(125),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_classVarDec_repeat1, 2, .production_id = 9),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expressionList, 2, .production_id = 38),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameterList, 1, .production_id = 10),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameterList, 2, .production_id = 13),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expressionList, 1, .production_id = 32),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expressionList_repeat1, 2, .production_id = 34),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lvalue, 1, .production_id = 17),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_classVarDec_repeat1, 2, .production_id = 7),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameterList_repeat1, 2, .production_id = 15),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2, .production_id = 12),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lvalue, 4, .production_id = 36),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [348] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [350] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 6, .production_id = 5),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 5, .production_id = 4),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 5, .production_id = 3),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 4, .production_id = 2),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, .production_id = 1),
  [390] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_jack(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
