#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 141
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 79
#define ALIAS_COUNT 0
#define TOKEN_COUNT 47
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 12
#define MAX_ALIAS_SEQUENCE_LENGTH 11
#define PRODUCTION_ID_COUNT 20

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
  anon_sym_LBRACK = 25,
  anon_sym_RBRACK = 26,
  anon_sym_EQ = 27,
  anon_sym_if = 28,
  anon_sym_else = 29,
  anon_sym_while = 30,
  anon_sym_do = 31,
  anon_sym_return = 32,
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
  sym_expression = 63,
  sym_term = 64,
  sym_subroutineCall = 65,
  sym_expressionList = 66,
  sym_op = 67,
  sym_unalyOp = 68,
  sym_keywordConstant = 69,
  aux_sym_class_repeat1 = 70,
  aux_sym_class_repeat2 = 71,
  aux_sym_classVarDec_repeat1 = 72,
  aux_sym_subroutineBody_repeat1 = 73,
  aux_sym_subroutineBody_repeat2 = 74,
  aux_sym_parameterList_repeat1 = 75,
  aux_sym_varDec_repeat1 = 76,
  aux_sym_expression_repeat1 = 77,
  aux_sym_expressionList_repeat1 = 78,
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
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_EQ] = "=",
  [anon_sym_if] = "if",
  [anon_sym_else] = "else",
  [anon_sym_while] = "while",
  [anon_sym_do] = "do",
  [anon_sym_return] = "return",
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
  [sym_expression] = "expression",
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
  [aux_sym_varDec_repeat1] = "varDec_repeat1",
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
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_while] = anon_sym_while,
  [anon_sym_do] = anon_sym_do,
  [anon_sym_return] = anon_sym_return,
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
  [sym_expression] = sym_expression,
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
  [aux_sym_varDec_repeat1] = aux_sym_varDec_repeat1,
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
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
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
  [sym_expression] = {
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
  [aux_sym_varDec_repeat1] = {
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
  field_class = 1,
  field_expressionList = 2,
  field_identifier = 3,
  field_modifier = 4,
  field_name = 5,
  field_parameter = 6,
  field_parameter_list = 7,
  field_return_type = 8,
  field_subroutine_dec = 9,
  field_type = 10,
  field_value = 11,
  field_var_dec = 12,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_class] = "class",
  [field_expressionList] = "expressionList",
  [field_identifier] = "identifier",
  [field_modifier] = "modifier",
  [field_name] = "name",
  [field_parameter] = "parameter",
  [field_parameter_list] = "parameter_list",
  [field_return_type] = "return_type",
  [field_subroutine_dec] = "subroutine_dec",
  [field_type] = "type",
  [field_value] = "value",
  [field_var_dec] = "var_dec",
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
  [11] = {.index = 20, .length = 3},
  [12] = {.index = 23, .length = 2},
  [13] = {.index = 25, .length = 2},
  [14] = {.index = 27, .length = 4},
  [15] = {.index = 31, .length = 1},
  [16] = {.index = 32, .length = 2},
  [17] = {.index = 34, .length = 1},
  [18] = {.index = 35, .length = 1},
  [19] = {.index = 36, .length = 1},
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
    {field_modifier, 0},
    {field_name, 2},
    {field_return_type, 1},
  [23] =
    {field_identifier, 1},
    {field_type, 0},
  [25] =
    {field_parameter, 0},
    {field_parameter, 1, .inherited = true},
  [27] =
    {field_modifier, 0},
    {field_name, 2},
    {field_parameter_list, 4},
    {field_return_type, 1},
  [31] =
    {field_parameter, 1},
  [32] =
    {field_parameter, 0, .inherited = true},
    {field_parameter, 1, .inherited = true},
  [34] =
    {field_value, 1},
  [35] =
    {field_expressionList, 2},
  [36] =
    {field_expressionList, 4},
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
      if (lookahead == '=') ADVANCE(152);
      if (lookahead == '>') ADVANCE(166);
      if (lookahead == '[') ADVANCE(150);
      if (lookahead == ']') ADVANCE(151);
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
      if (lookahead == 'e') ADVANCE(154);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(168);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(170);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(155);
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
      if (lookahead == 'f') ADVANCE(153);
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
      if (lookahead == 'n') ADVANCE(157);
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
      if (lookahead == 'o') ADVANCE(156);
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
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_return);
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
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 1},
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
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 2},
  [69] = {.lex_state = 6},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 2},
  [73] = {.lex_state = 2},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
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
  [94] = {.lex_state = 7},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
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
  [107] = {.lex_state = 7},
  [108] = {.lex_state = 7},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 7},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 7},
  [118] = {.lex_state = 7},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 7},
  [121] = {.lex_state = 7},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 7},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 7},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 95},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 7},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
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
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_while] = ACTIONS(1),
    [anon_sym_do] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
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
    [sym_source_file] = STATE(139),
    [sym_class] = STATE(137),
    [sym_comment] = ACTIONS(3),
    [sym_ws] = ACTIONS(3),
    [anon_sym_class] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
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
    STATE(16), 1,
      sym_unalyOp,
    STATE(17), 1,
      sym_term,
    STATE(85), 1,
      sym_expression,
    STATE(126), 1,
      sym_expressionList,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(17), 2,
      anon_sym_DASH,
      anon_sym_TILDE,
    STATE(34), 3,
      sym_stringConstant,
      sym_subroutineCall,
      sym_keywordConstant,
    ACTIONS(19), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_this,
  [47] = 13,
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
    STATE(16), 1,
      sym_unalyOp,
    STATE(17), 1,
      sym_term,
    STATE(85), 1,
      sym_expression,
    STATE(105), 1,
      sym_expressionList,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(17), 2,
      anon_sym_DASH,
      anon_sym_TILDE,
    STATE(34), 3,
      sym_stringConstant,
      sym_subroutineCall,
      sym_keywordConstant,
    ACTIONS(19), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_this,
  [94] = 12,
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
    STATE(16), 1,
      sym_unalyOp,
    STATE(17), 1,
      sym_term,
    STATE(130), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(17), 2,
      anon_sym_DASH,
      anon_sym_TILDE,
    STATE(34), 3,
      sym_stringConstant,
      sym_subroutineCall,
      sym_keywordConstant,
    ACTIONS(19), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_this,
  [138] = 11,
    ACTIONS(25), 1,
      anon_sym_RBRACE,
    ACTIONS(27), 1,
      anon_sym_var,
    ACTIONS(29), 1,
      anon_sym_let,
    ACTIONS(31), 1,
      anon_sym_if,
    ACTIONS(33), 1,
      anon_sym_while,
    ACTIONS(35), 1,
      anon_sym_do,
    ACTIONS(37), 1,
      anon_sym_return,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(33), 2,
      sym_statement,
      aux_sym_subroutineBody_repeat2,
    STATE(47), 2,
      sym_varDec,
      aux_sym_subroutineBody_repeat1,
    STATE(60), 5,
      sym_letStatement,
      sym_ifStatement,
      sym_whileStatement,
      sym_doStatement,
      sym_returnStatement,
  [179] = 11,
    ACTIONS(7), 1,
      sym_integerConstant,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    STATE(16), 1,
      sym_unalyOp,
    STATE(17), 1,
      sym_term,
    STATE(115), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(17), 2,
      anon_sym_DASH,
      anon_sym_TILDE,
    STATE(34), 3,
      sym_stringConstant,
      sym_subroutineCall,
      sym_keywordConstant,
    ACTIONS(19), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_this,
  [220] = 6,
    ACTIONS(41), 1,
      anon_sym_LPAREN,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      anon_sym_DOT,
    ACTIONS(47), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(39), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
  [251] = 11,
    ACTIONS(27), 1,
      anon_sym_var,
    ACTIONS(29), 1,
      anon_sym_let,
    ACTIONS(31), 1,
      anon_sym_if,
    ACTIONS(33), 1,
      anon_sym_while,
    ACTIONS(35), 1,
      anon_sym_do,
    ACTIONS(37), 1,
      anon_sym_return,
    ACTIONS(49), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(5), 2,
      sym_varDec,
      aux_sym_subroutineBody_repeat1,
    STATE(36), 2,
      sym_statement,
      aux_sym_subroutineBody_repeat2,
    STATE(60), 5,
      sym_letStatement,
      sym_ifStatement,
      sym_whileStatement,
      sym_doStatement,
      sym_returnStatement,
  [292] = 11,
    ACTIONS(7), 1,
      sym_integerConstant,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    STATE(16), 1,
      sym_unalyOp,
    STATE(17), 1,
      sym_term,
    STATE(127), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(17), 2,
      anon_sym_DASH,
      anon_sym_TILDE,
    STATE(34), 3,
      sym_stringConstant,
      sym_subroutineCall,
      sym_keywordConstant,
    ACTIONS(19), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_this,
  [333] = 11,
    ACTIONS(7), 1,
      sym_integerConstant,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    STATE(16), 1,
      sym_unalyOp,
    STATE(17), 1,
      sym_term,
    STATE(113), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(17), 2,
      anon_sym_DASH,
      anon_sym_TILDE,
    STATE(34), 3,
      sym_stringConstant,
      sym_subroutineCall,
      sym_keywordConstant,
    ACTIONS(19), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_this,
  [374] = 11,
    ACTIONS(7), 1,
      sym_integerConstant,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    STATE(16), 1,
      sym_unalyOp,
    STATE(17), 1,
      sym_term,
    STATE(122), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(17), 2,
      anon_sym_DASH,
      anon_sym_TILDE,
    STATE(34), 3,
      sym_stringConstant,
      sym_subroutineCall,
      sym_keywordConstant,
    ACTIONS(19), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_this,
  [415] = 11,
    ACTIONS(7), 1,
      sym_integerConstant,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    STATE(16), 1,
      sym_unalyOp,
    STATE(17), 1,
      sym_term,
    STATE(101), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(17), 2,
      anon_sym_DASH,
      anon_sym_TILDE,
    STATE(34), 3,
      sym_stringConstant,
      sym_subroutineCall,
      sym_keywordConstant,
    ACTIONS(19), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_this,
  [456] = 11,
    ACTIONS(7), 1,
      sym_integerConstant,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    STATE(16), 1,
      sym_unalyOp,
    STATE(17), 1,
      sym_term,
    STATE(99), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(17), 2,
      anon_sym_DASH,
      anon_sym_TILDE,
    STATE(34), 3,
      sym_stringConstant,
      sym_subroutineCall,
      sym_keywordConstant,
    ACTIONS(19), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_this,
  [497] = 11,
    ACTIONS(7), 1,
      sym_integerConstant,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    STATE(16), 1,
      sym_unalyOp,
    STATE(17), 1,
      sym_term,
    STATE(123), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(17), 2,
      anon_sym_DASH,
      anon_sym_TILDE,
    STATE(34), 3,
      sym_stringConstant,
      sym_subroutineCall,
      sym_keywordConstant,
    ACTIONS(19), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_this,
  [538] = 11,
    ACTIONS(7), 1,
      sym_integerConstant,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    STATE(16), 1,
      sym_unalyOp,
    STATE(17), 1,
      sym_term,
    STATE(102), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(17), 2,
      anon_sym_DASH,
      anon_sym_TILDE,
    STATE(34), 3,
      sym_stringConstant,
      sym_subroutineCall,
      sym_keywordConstant,
    ACTIONS(19), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_this,
  [579] = 10,
    ACTIONS(7), 1,
      sym_integerConstant,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    STATE(16), 1,
      sym_unalyOp,
    STATE(24), 1,
      sym_term,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(17), 2,
      anon_sym_DASH,
      anon_sym_TILDE,
    STATE(34), 3,
      sym_stringConstant,
      sym_subroutineCall,
      sym_keywordConstant,
    ACTIONS(19), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_this,
  [617] = 6,
    ACTIONS(55), 1,
      anon_sym_SLASH,
    STATE(18), 1,
      aux_sym_expression_repeat1,
    STATE(20), 1,
      sym_op,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(51), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(53), 8,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
  [647] = 6,
    ACTIONS(55), 1,
      anon_sym_SLASH,
    STATE(19), 1,
      aux_sym_expression_repeat1,
    STATE(20), 1,
      sym_op,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(57), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(53), 8,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
  [677] = 6,
    ACTIONS(64), 1,
      anon_sym_SLASH,
    STATE(19), 1,
      aux_sym_expression_repeat1,
    STATE(20), 1,
      sym_op,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(59), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(61), 8,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
  [707] = 10,
    ACTIONS(7), 1,
      sym_integerConstant,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    STATE(16), 1,
      sym_unalyOp,
    STATE(28), 1,
      sym_term,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(17), 2,
      anon_sym_DASH,
      anon_sym_TILDE,
    STATE(34), 3,
      sym_stringConstant,
      sym_subroutineCall,
      sym_keywordConstant,
    ACTIONS(19), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_this,
  [745] = 3,
    ACTIONS(69), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(67), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
  [767] = 3,
    ACTIONS(73), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(71), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
  [789] = 3,
    ACTIONS(77), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(75), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
  [811] = 3,
    ACTIONS(81), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(79), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
  [833] = 9,
    ACTIONS(29), 1,
      anon_sym_let,
    ACTIONS(31), 1,
      anon_sym_if,
    ACTIONS(33), 1,
      anon_sym_while,
    ACTIONS(35), 1,
      anon_sym_do,
    ACTIONS(37), 1,
      anon_sym_return,
    ACTIONS(83), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(32), 2,
      sym_statement,
      aux_sym_subroutineBody_repeat2,
    STATE(60), 5,
      sym_letStatement,
      sym_ifStatement,
      sym_whileStatement,
      sym_doStatement,
      sym_returnStatement,
  [867] = 3,
    ACTIONS(87), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(85), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
  [889] = 9,
    ACTIONS(29), 1,
      anon_sym_let,
    ACTIONS(31), 1,
      anon_sym_if,
    ACTIONS(33), 1,
      anon_sym_while,
    ACTIONS(35), 1,
      anon_sym_do,
    ACTIONS(37), 1,
      anon_sym_return,
    ACTIONS(89), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(25), 2,
      sym_statement,
      aux_sym_subroutineBody_repeat2,
    STATE(60), 5,
      sym_letStatement,
      sym_ifStatement,
      sym_whileStatement,
      sym_doStatement,
      sym_returnStatement,
  [923] = 3,
    ACTIONS(91), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(59), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
  [945] = 9,
    ACTIONS(29), 1,
      anon_sym_let,
    ACTIONS(31), 1,
      anon_sym_if,
    ACTIONS(33), 1,
      anon_sym_while,
    ACTIONS(35), 1,
      anon_sym_do,
    ACTIONS(37), 1,
      anon_sym_return,
    ACTIONS(93), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(35), 2,
      sym_statement,
      aux_sym_subroutineBody_repeat2,
    STATE(60), 5,
      sym_letStatement,
      sym_ifStatement,
      sym_whileStatement,
      sym_doStatement,
      sym_returnStatement,
  [979] = 9,
    ACTIONS(29), 1,
      anon_sym_let,
    ACTIONS(31), 1,
      anon_sym_if,
    ACTIONS(33), 1,
      anon_sym_while,
    ACTIONS(35), 1,
      anon_sym_do,
    ACTIONS(37), 1,
      anon_sym_return,
    ACTIONS(95), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(38), 2,
      sym_statement,
      aux_sym_subroutineBody_repeat2,
    STATE(60), 5,
      sym_letStatement,
      sym_ifStatement,
      sym_whileStatement,
      sym_doStatement,
      sym_returnStatement,
  [1013] = 3,
    ACTIONS(99), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(97), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
  [1035] = 9,
    ACTIONS(101), 1,
      anon_sym_RBRACE,
    ACTIONS(103), 1,
      anon_sym_let,
    ACTIONS(106), 1,
      anon_sym_if,
    ACTIONS(109), 1,
      anon_sym_while,
    ACTIONS(112), 1,
      anon_sym_do,
    ACTIONS(115), 1,
      anon_sym_return,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(32), 2,
      sym_statement,
      aux_sym_subroutineBody_repeat2,
    STATE(60), 5,
      sym_letStatement,
      sym_ifStatement,
      sym_whileStatement,
      sym_doStatement,
      sym_returnStatement,
  [1069] = 9,
    ACTIONS(29), 1,
      anon_sym_let,
    ACTIONS(31), 1,
      anon_sym_if,
    ACTIONS(33), 1,
      anon_sym_while,
    ACTIONS(35), 1,
      anon_sym_do,
    ACTIONS(37), 1,
      anon_sym_return,
    ACTIONS(118), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(32), 2,
      sym_statement,
      aux_sym_subroutineBody_repeat2,
    STATE(60), 5,
      sym_letStatement,
      sym_ifStatement,
      sym_whileStatement,
      sym_doStatement,
      sym_returnStatement,
  [1103] = 3,
    ACTIONS(47), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(39), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
  [1125] = 9,
    ACTIONS(29), 1,
      anon_sym_let,
    ACTIONS(31), 1,
      anon_sym_if,
    ACTIONS(33), 1,
      anon_sym_while,
    ACTIONS(35), 1,
      anon_sym_do,
    ACTIONS(37), 1,
      anon_sym_return,
    ACTIONS(120), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(32), 2,
      sym_statement,
      aux_sym_subroutineBody_repeat2,
    STATE(60), 5,
      sym_letStatement,
      sym_ifStatement,
      sym_whileStatement,
      sym_doStatement,
      sym_returnStatement,
  [1159] = 9,
    ACTIONS(25), 1,
      anon_sym_RBRACE,
    ACTIONS(29), 1,
      anon_sym_let,
    ACTIONS(31), 1,
      anon_sym_if,
    ACTIONS(33), 1,
      anon_sym_while,
    ACTIONS(35), 1,
      anon_sym_do,
    ACTIONS(37), 1,
      anon_sym_return,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(32), 2,
      sym_statement,
      aux_sym_subroutineBody_repeat2,
    STATE(60), 5,
      sym_letStatement,
      sym_ifStatement,
      sym_whileStatement,
      sym_doStatement,
      sym_returnStatement,
  [1193] = 9,
    ACTIONS(29), 1,
      anon_sym_let,
    ACTIONS(31), 1,
      anon_sym_if,
    ACTIONS(33), 1,
      anon_sym_while,
    ACTIONS(35), 1,
      anon_sym_do,
    ACTIONS(37), 1,
      anon_sym_return,
    ACTIONS(89), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(32), 2,
      sym_statement,
      aux_sym_subroutineBody_repeat2,
    STATE(60), 5,
      sym_letStatement,
      sym_ifStatement,
      sym_whileStatement,
      sym_doStatement,
      sym_returnStatement,
  [1227] = 9,
    ACTIONS(29), 1,
      anon_sym_let,
    ACTIONS(31), 1,
      anon_sym_if,
    ACTIONS(33), 1,
      anon_sym_while,
    ACTIONS(35), 1,
      anon_sym_do,
    ACTIONS(37), 1,
      anon_sym_return,
    ACTIONS(122), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(32), 2,
      sym_statement,
      aux_sym_subroutineBody_repeat2,
    STATE(60), 5,
      sym_letStatement,
      sym_ifStatement,
      sym_whileStatement,
      sym_doStatement,
      sym_returnStatement,
  [1261] = 3,
    ACTIONS(126), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(124), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
  [1283] = 3,
    ACTIONS(130), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(128), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
  [1305] = 3,
    ACTIONS(134), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(132), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
  [1327] = 9,
    ACTIONS(29), 1,
      anon_sym_let,
    ACTIONS(31), 1,
      anon_sym_if,
    ACTIONS(33), 1,
      anon_sym_while,
    ACTIONS(35), 1,
      anon_sym_do,
    ACTIONS(37), 1,
      anon_sym_return,
    ACTIONS(136), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(37), 2,
      sym_statement,
      aux_sym_subroutineBody_repeat2,
    STATE(60), 5,
      sym_letStatement,
      sym_ifStatement,
      sym_whileStatement,
      sym_doStatement,
      sym_returnStatement,
  [1361] = 6,
    ACTIONS(138), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(140), 2,
      anon_sym_static,
      anon_sym_field,
    STATE(45), 2,
      sym_classVarDec,
      aux_sym_class_repeat1,
    STATE(71), 2,
      sym_subroutineDec,
      aux_sym_class_repeat2,
    ACTIONS(142), 3,
      anon_sym_constructor,
      anon_sym_function,
      anon_sym_method,
  [1386] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(144), 5,
      sym_integerConstant,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(146), 5,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_this,
  [1405] = 6,
    ACTIONS(148), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(140), 2,
      anon_sym_static,
      anon_sym_field,
    STATE(48), 2,
      sym_classVarDec,
      aux_sym_class_repeat1,
    STATE(61), 2,
      sym_subroutineDec,
      aux_sym_class_repeat2,
    ACTIONS(142), 3,
      anon_sym_constructor,
      anon_sym_function,
      anon_sym_method,
  [1430] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(150), 5,
      sym_integerConstant,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(152), 5,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_this,
  [1449] = 4,
    ACTIONS(156), 1,
      anon_sym_var,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(47), 2,
      sym_varDec,
      aux_sym_subroutineBody_repeat1,
    ACTIONS(154), 6,
      anon_sym_RBRACE,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_do,
      anon_sym_return,
  [1469] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(161), 2,
      anon_sym_static,
      anon_sym_field,
    STATE(48), 2,
      sym_classVarDec,
      aux_sym_class_repeat1,
    ACTIONS(159), 4,
      anon_sym_RBRACE,
      anon_sym_constructor,
      anon_sym_function,
      anon_sym_method,
  [1488] = 6,
    ACTIONS(166), 1,
      anon_sym_RPAREN,
    STATE(87), 1,
      sym_parameter,
    STATE(124), 1,
      sym_type,
    STATE(125), 1,
      sym_parameterList,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(164), 4,
      sym_identifier,
      anon_sym_int,
      anon_sym_char,
      anon_sym_boolean,
  [1511] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(168), 7,
      anon_sym_RBRACE,
      anon_sym_var,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_do,
      anon_sym_return,
  [1525] = 3,
    ACTIONS(172), 1,
      anon_sym_else,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(170), 6,
      anon_sym_RBRACE,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_do,
      anon_sym_return,
  [1541] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(174), 7,
      anon_sym_RBRACE,
      anon_sym_var,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_do,
      anon_sym_return,
  [1555] = 3,
    ACTIONS(178), 1,
      anon_sym_else,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(176), 6,
      anon_sym_RBRACE,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_do,
      anon_sym_return,
  [1571] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(180), 6,
      anon_sym_RBRACE,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_do,
      anon_sym_return,
  [1584] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(182), 6,
      anon_sym_RBRACE,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_do,
      anon_sym_return,
  [1597] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(184), 6,
      anon_sym_RBRACE,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_do,
      anon_sym_return,
  [1610] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(186), 6,
      anon_sym_RBRACE,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_do,
      anon_sym_return,
  [1623] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(188), 6,
      anon_sym_RBRACE,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_do,
      anon_sym_return,
  [1636] = 4,
    ACTIONS(190), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(59), 2,
      sym_subroutineDec,
      aux_sym_class_repeat2,
    ACTIONS(192), 3,
      anon_sym_constructor,
      anon_sym_function,
      anon_sym_method,
  [1653] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(195), 6,
      anon_sym_RBRACE,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_do,
      anon_sym_return,
  [1666] = 4,
    ACTIONS(197), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(59), 2,
      sym_subroutineDec,
      aux_sym_class_repeat2,
    ACTIONS(142), 3,
      anon_sym_constructor,
      anon_sym_function,
      anon_sym_method,
  [1683] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(199), 6,
      anon_sym_RBRACE,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_do,
      anon_sym_return,
  [1696] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(201), 6,
      anon_sym_RBRACE,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_do,
      anon_sym_return,
  [1709] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(203), 6,
      anon_sym_RBRACE,
      anon_sym_static,
      anon_sym_field,
      anon_sym_constructor,
      anon_sym_function,
      anon_sym_method,
  [1722] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(205), 6,
      anon_sym_RBRACE,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_do,
      anon_sym_return,
  [1735] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(207), 6,
      anon_sym_RBRACE,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_do,
      anon_sym_return,
  [1748] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(209), 6,
      anon_sym_RBRACE,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_do,
      anon_sym_return,
  [1761] = 4,
    STATE(93), 1,
      sym_parameter,
    STATE(124), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(164), 4,
      sym_identifier,
      anon_sym_int,
      anon_sym_char,
      anon_sym_boolean,
  [1778] = 4,
    ACTIONS(211), 1,
      anon_sym_void,
    STATE(117), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(164), 4,
      sym_identifier,
      anon_sym_int,
      anon_sym_char,
      anon_sym_boolean,
  [1795] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(213), 6,
      anon_sym_RBRACE,
      anon_sym_static,
      anon_sym_field,
      anon_sym_constructor,
      anon_sym_function,
      anon_sym_method,
  [1808] = 4,
    ACTIONS(215), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(59), 2,
      sym_subroutineDec,
      aux_sym_class_repeat2,
    ACTIONS(142), 3,
      anon_sym_constructor,
      anon_sym_function,
      anon_sym_method,
  [1825] = 3,
    STATE(135), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(164), 4,
      sym_identifier,
      anon_sym_int,
      anon_sym_char,
      anon_sym_boolean,
  [1839] = 3,
    STATE(118), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(164), 4,
      sym_identifier,
      anon_sym_int,
      anon_sym_char,
      anon_sym_boolean,
  [1853] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(217), 4,
      anon_sym_RBRACE,
      anon_sym_constructor,
      anon_sym_function,
      anon_sym_method,
  [1864] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(219), 4,
      anon_sym_RBRACE,
      anon_sym_constructor,
      anon_sym_function,
      anon_sym_method,
  [1875] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(221), 4,
      anon_sym_RBRACE,
      anon_sym_constructor,
      anon_sym_function,
      anon_sym_method,
  [1886] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(223), 4,
      anon_sym_RBRACE,
      anon_sym_constructor,
      anon_sym_function,
      anon_sym_method,
  [1897] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(225), 4,
      anon_sym_RBRACE,
      anon_sym_constructor,
      anon_sym_function,
      anon_sym_method,
  [1908] = 4,
    ACTIONS(227), 1,
      anon_sym_COMMA,
    ACTIONS(230), 1,
      anon_sym_RPAREN,
    STATE(79), 1,
      aux_sym_expressionList_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [1922] = 4,
    ACTIONS(232), 1,
      anon_sym_COMMA,
    ACTIONS(234), 1,
      anon_sym_SEMI,
    STATE(86), 1,
      aux_sym_varDec_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [1936] = 4,
    ACTIONS(236), 1,
      anon_sym_COMMA,
    ACTIONS(238), 1,
      anon_sym_SEMI,
    STATE(88), 1,
      aux_sym_classVarDec_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [1950] = 4,
    ACTIONS(240), 1,
      anon_sym_COMMA,
    ACTIONS(243), 1,
      anon_sym_SEMI,
    STATE(82), 1,
      aux_sym_classVarDec_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [1964] = 4,
    ACTIONS(245), 1,
      anon_sym_COMMA,
    ACTIONS(247), 1,
      anon_sym_RPAREN,
    STATE(79), 1,
      aux_sym_expressionList_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [1978] = 4,
    ACTIONS(232), 1,
      anon_sym_COMMA,
    ACTIONS(249), 1,
      anon_sym_SEMI,
    STATE(80), 1,
      aux_sym_varDec_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [1992] = 4,
    ACTIONS(245), 1,
      anon_sym_COMMA,
    ACTIONS(251), 1,
      anon_sym_RPAREN,
    STATE(83), 1,
      aux_sym_expressionList_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2006] = 4,
    ACTIONS(253), 1,
      anon_sym_COMMA,
    ACTIONS(256), 1,
      anon_sym_SEMI,
    STATE(86), 1,
      aux_sym_varDec_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2020] = 4,
    ACTIONS(258), 1,
      anon_sym_COMMA,
    ACTIONS(260), 1,
      anon_sym_RPAREN,
    STATE(89), 1,
      aux_sym_parameterList_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2034] = 4,
    ACTIONS(236), 1,
      anon_sym_COMMA,
    ACTIONS(262), 1,
      anon_sym_SEMI,
    STATE(82), 1,
      aux_sym_classVarDec_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2048] = 4,
    ACTIONS(258), 1,
      anon_sym_COMMA,
    ACTIONS(264), 1,
      anon_sym_RPAREN,
    STATE(90), 1,
      aux_sym_parameterList_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2062] = 4,
    ACTIONS(266), 1,
      anon_sym_COMMA,
    ACTIONS(269), 1,
      anon_sym_RPAREN,
    STATE(90), 1,
      aux_sym_parameterList_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2076] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(271), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2085] = 3,
    ACTIONS(273), 1,
      anon_sym_LBRACK,
    ACTIONS(275), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2096] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(277), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2105] = 3,
    ACTIONS(279), 1,
      sym_identifier,
    STATE(132), 1,
      sym_subroutineCall,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2116] = 3,
    ACTIONS(281), 1,
      anon_sym_LBRACE,
    STATE(75), 1,
      sym_subroutineBody,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2127] = 3,
    ACTIONS(41), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2138] = 3,
    ACTIONS(281), 1,
      anon_sym_LBRACE,
    STATE(74), 1,
      sym_subroutineBody,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2149] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(283), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [2158] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(230), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2167] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(256), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [2176] = 2,
    ACTIONS(285), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2184] = 2,
    ACTIONS(287), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2192] = 2,
    ACTIONS(289), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2200] = 2,
    ACTIONS(291), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2208] = 2,
    ACTIONS(293), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2216] = 2,
    ACTIONS(295), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2224] = 2,
    ACTIONS(297), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2232] = 2,
    ACTIONS(299), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2240] = 2,
    ACTIONS(301), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2248] = 2,
    ACTIONS(303), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2256] = 2,
    ACTIONS(305), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2264] = 2,
    ACTIONS(307), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2272] = 2,
    ACTIONS(309), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2280] = 2,
    ACTIONS(311), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2288] = 2,
    ACTIONS(313), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2296] = 2,
    ACTIONS(315), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2304] = 2,
    ACTIONS(317), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2312] = 2,
    ACTIONS(319), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2320] = 2,
    ACTIONS(321), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2328] = 2,
    ACTIONS(323), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2336] = 2,
    ACTIONS(325), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2344] = 2,
    ACTIONS(327), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2352] = 2,
    ACTIONS(329), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2360] = 2,
    ACTIONS(331), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2368] = 2,
    ACTIONS(333), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2376] = 2,
    ACTIONS(335), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2384] = 2,
    ACTIONS(337), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2392] = 2,
    ACTIONS(339), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2400] = 2,
    ACTIONS(341), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2408] = 2,
    ACTIONS(343), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2416] = 2,
    ACTIONS(347), 1,
      aux_sym_stringConstant_token1,
    ACTIONS(345), 2,
      sym_comment,
      sym_ws,
  [2424] = 2,
    ACTIONS(349), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2432] = 2,
    ACTIONS(351), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2440] = 2,
    ACTIONS(353), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2448] = 2,
    ACTIONS(355), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2456] = 2,
    ACTIONS(357), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2464] = 2,
    ACTIONS(359), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2472] = 2,
    ACTIONS(361), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2480] = 2,
    ACTIONS(363), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2488] = 2,
    ACTIONS(365), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 47,
  [SMALL_STATE(4)] = 94,
  [SMALL_STATE(5)] = 138,
  [SMALL_STATE(6)] = 179,
  [SMALL_STATE(7)] = 220,
  [SMALL_STATE(8)] = 251,
  [SMALL_STATE(9)] = 292,
  [SMALL_STATE(10)] = 333,
  [SMALL_STATE(11)] = 374,
  [SMALL_STATE(12)] = 415,
  [SMALL_STATE(13)] = 456,
  [SMALL_STATE(14)] = 497,
  [SMALL_STATE(15)] = 538,
  [SMALL_STATE(16)] = 579,
  [SMALL_STATE(17)] = 617,
  [SMALL_STATE(18)] = 647,
  [SMALL_STATE(19)] = 677,
  [SMALL_STATE(20)] = 707,
  [SMALL_STATE(21)] = 745,
  [SMALL_STATE(22)] = 767,
  [SMALL_STATE(23)] = 789,
  [SMALL_STATE(24)] = 811,
  [SMALL_STATE(25)] = 833,
  [SMALL_STATE(26)] = 867,
  [SMALL_STATE(27)] = 889,
  [SMALL_STATE(28)] = 923,
  [SMALL_STATE(29)] = 945,
  [SMALL_STATE(30)] = 979,
  [SMALL_STATE(31)] = 1013,
  [SMALL_STATE(32)] = 1035,
  [SMALL_STATE(33)] = 1069,
  [SMALL_STATE(34)] = 1103,
  [SMALL_STATE(35)] = 1125,
  [SMALL_STATE(36)] = 1159,
  [SMALL_STATE(37)] = 1193,
  [SMALL_STATE(38)] = 1227,
  [SMALL_STATE(39)] = 1261,
  [SMALL_STATE(40)] = 1283,
  [SMALL_STATE(41)] = 1305,
  [SMALL_STATE(42)] = 1327,
  [SMALL_STATE(43)] = 1361,
  [SMALL_STATE(44)] = 1386,
  [SMALL_STATE(45)] = 1405,
  [SMALL_STATE(46)] = 1430,
  [SMALL_STATE(47)] = 1449,
  [SMALL_STATE(48)] = 1469,
  [SMALL_STATE(49)] = 1488,
  [SMALL_STATE(50)] = 1511,
  [SMALL_STATE(51)] = 1525,
  [SMALL_STATE(52)] = 1541,
  [SMALL_STATE(53)] = 1555,
  [SMALL_STATE(54)] = 1571,
  [SMALL_STATE(55)] = 1584,
  [SMALL_STATE(56)] = 1597,
  [SMALL_STATE(57)] = 1610,
  [SMALL_STATE(58)] = 1623,
  [SMALL_STATE(59)] = 1636,
  [SMALL_STATE(60)] = 1653,
  [SMALL_STATE(61)] = 1666,
  [SMALL_STATE(62)] = 1683,
  [SMALL_STATE(63)] = 1696,
  [SMALL_STATE(64)] = 1709,
  [SMALL_STATE(65)] = 1722,
  [SMALL_STATE(66)] = 1735,
  [SMALL_STATE(67)] = 1748,
  [SMALL_STATE(68)] = 1761,
  [SMALL_STATE(69)] = 1778,
  [SMALL_STATE(70)] = 1795,
  [SMALL_STATE(71)] = 1808,
  [SMALL_STATE(72)] = 1825,
  [SMALL_STATE(73)] = 1839,
  [SMALL_STATE(74)] = 1853,
  [SMALL_STATE(75)] = 1864,
  [SMALL_STATE(76)] = 1875,
  [SMALL_STATE(77)] = 1886,
  [SMALL_STATE(78)] = 1897,
  [SMALL_STATE(79)] = 1908,
  [SMALL_STATE(80)] = 1922,
  [SMALL_STATE(81)] = 1936,
  [SMALL_STATE(82)] = 1950,
  [SMALL_STATE(83)] = 1964,
  [SMALL_STATE(84)] = 1978,
  [SMALL_STATE(85)] = 1992,
  [SMALL_STATE(86)] = 2006,
  [SMALL_STATE(87)] = 2020,
  [SMALL_STATE(88)] = 2034,
  [SMALL_STATE(89)] = 2048,
  [SMALL_STATE(90)] = 2062,
  [SMALL_STATE(91)] = 2076,
  [SMALL_STATE(92)] = 2085,
  [SMALL_STATE(93)] = 2096,
  [SMALL_STATE(94)] = 2105,
  [SMALL_STATE(95)] = 2116,
  [SMALL_STATE(96)] = 2127,
  [SMALL_STATE(97)] = 2138,
  [SMALL_STATE(98)] = 2149,
  [SMALL_STATE(99)] = 2158,
  [SMALL_STATE(100)] = 2167,
  [SMALL_STATE(101)] = 2176,
  [SMALL_STATE(102)] = 2184,
  [SMALL_STATE(103)] = 2192,
  [SMALL_STATE(104)] = 2200,
  [SMALL_STATE(105)] = 2208,
  [SMALL_STATE(106)] = 2216,
  [SMALL_STATE(107)] = 2224,
  [SMALL_STATE(108)] = 2232,
  [SMALL_STATE(109)] = 2240,
  [SMALL_STATE(110)] = 2248,
  [SMALL_STATE(111)] = 2256,
  [SMALL_STATE(112)] = 2264,
  [SMALL_STATE(113)] = 2272,
  [SMALL_STATE(114)] = 2280,
  [SMALL_STATE(115)] = 2288,
  [SMALL_STATE(116)] = 2296,
  [SMALL_STATE(117)] = 2304,
  [SMALL_STATE(118)] = 2312,
  [SMALL_STATE(119)] = 2320,
  [SMALL_STATE(120)] = 2328,
  [SMALL_STATE(121)] = 2336,
  [SMALL_STATE(122)] = 2344,
  [SMALL_STATE(123)] = 2352,
  [SMALL_STATE(124)] = 2360,
  [SMALL_STATE(125)] = 2368,
  [SMALL_STATE(126)] = 2376,
  [SMALL_STATE(127)] = 2384,
  [SMALL_STATE(128)] = 2392,
  [SMALL_STATE(129)] = 2400,
  [SMALL_STATE(130)] = 2408,
  [SMALL_STATE(131)] = 2416,
  [SMALL_STATE(132)] = 2424,
  [SMALL_STATE(133)] = 2432,
  [SMALL_STATE(134)] = 2440,
  [SMALL_STATE(135)] = 2448,
  [SMALL_STATE(136)] = 2456,
  [SMALL_STATE(137)] = 2464,
  [SMALL_STATE(138)] = 2472,
  [SMALL_STATE(139)] = 2480,
  [SMALL_STATE(140)] = 2488,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 1),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_term, 1),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 2),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2), SHIFT_REPEAT(46),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expression_repeat1, 2), SHIFT_REPEAT(46),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stringConstant, 3, .production_id = 17),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stringConstant, 3, .production_id = 17),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 4),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_term, 4),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subroutineCall, 3),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subroutineCall, 3),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 2),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_term, 2),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 3),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_term, 3),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expression_repeat1, 2),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subroutineCall, 4, .production_id = 18),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subroutineCall, 4, .production_id = 18),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_subroutineBody_repeat2, 2),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_subroutineBody_repeat2, 2), SHIFT_REPEAT(108),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_subroutineBody_repeat2, 2), SHIFT_REPEAT(140),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_subroutineBody_repeat2, 2), SHIFT_REPEAT(138),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_subroutineBody_repeat2, 2), SHIFT_REPEAT(94),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_subroutineBody_repeat2, 2), SHIFT_REPEAT(4),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subroutineCall, 5),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subroutineCall, 5),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subroutineCall, 6, .production_id = 19),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subroutineCall, 6, .production_id = 19),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keywordConstant, 1),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keywordConstant, 1),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unalyOp, 1),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unalyOp, 1),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op, 1),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_op, 1),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_subroutineBody_repeat1, 2),
  [156] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_subroutineBody_repeat1, 2), SHIFT_REPEAT(72),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_repeat1, 2),
  [161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_repeat1, 2), SHIFT_REPEAT(73),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_varDec, 4),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ifStatement, 6),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_varDec, 5),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ifStatement, 7),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ifStatement, 11),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_whileStatement, 6),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_returnStatement, 3),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ifStatement, 10),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ifStatement, 9),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_repeat2, 2),
  [192] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_repeat2, 2), SHIFT_REPEAT(69),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_letStatement, 8),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_letStatement, 5),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classVarDec, 4, .production_id = 6),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_whileStatement, 7),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_returnStatement, 2),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doStatement, 3),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classVarDec, 5, .production_id = 8),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subroutineDec, 7, .production_id = 14),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subroutineDec, 6, .production_id = 11),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subroutineBody, 4),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subroutineBody, 3),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subroutineBody, 2),
  [227] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expressionList_repeat1, 2), SHIFT_REPEAT(13),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expressionList_repeat1, 2),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [240] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_classVarDec_repeat1, 2, .production_id = 9), SHIFT_REPEAT(107),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_classVarDec_repeat1, 2, .production_id = 9),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expressionList, 2),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expressionList, 1),
  [253] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_varDec_repeat1, 2), SHIFT_REPEAT(114),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_varDec_repeat1, 2),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameterList, 1, .production_id = 10),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameterList, 2, .production_id = 13),
  [266] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameterList_repeat1, 2, .production_id = 16), SHIFT_REPEAT(68),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameterList_repeat1, 2, .production_id = 16),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2, .production_id = 12),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameterList_repeat1, 2, .production_id = 15),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_classVarDec_repeat1, 2, .production_id = 7),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 6, .production_id = 5),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 5, .production_id = 4),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 5, .production_id = 3),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 4, .production_id = 2),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, .production_id = 1),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [363] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
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
