#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 144
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 80
#define ALIAS_COUNT 0
#define TOKEN_COUNT 47
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 11
#define PRODUCTION_ID_COUNT 2

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
  sym_varDec = 55,
  sym_className = 56,
  sym_subroutineName = 57,
  sym_varName = 58,
  sym_statement = 59,
  sym_letStatement = 60,
  sym_ifStatement = 61,
  sym_whileStatement = 62,
  sym_doStatement = 63,
  sym_returnStatement = 64,
  sym_expression = 65,
  sym_term = 66,
  sym_subroutineCall = 67,
  sym_expressionList = 68,
  sym_op = 69,
  sym_unalyOp = 70,
  sym_keywordConstant = 71,
  aux_sym_class_repeat1 = 72,
  aux_sym_class_repeat2 = 73,
  aux_sym_classVarDec_repeat1 = 74,
  aux_sym_subroutineBody_repeat1 = 75,
  aux_sym_subroutineBody_repeat2 = 76,
  aux_sym_parameterList_repeat1 = 77,
  aux_sym_expression_repeat1 = 78,
  aux_sym_expressionList_repeat1 = 79,
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
  [sym_varDec] = "varDec",
  [sym_className] = "className",
  [sym_subroutineName] = "subroutineName",
  [sym_varName] = "varName",
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
  [sym_varDec] = sym_varDec,
  [sym_className] = sym_className,
  [sym_subroutineName] = sym_subroutineName,
  [sym_varName] = sym_varName,
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
  [sym_varDec] = {
    .visible = true,
    .named = true,
  },
  [sym_className] = {
    .visible = true,
    .named = true,
  },
  [sym_subroutineName] = {
    .visible = true,
    .named = true,
  },
  [sym_varName] = {
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
  field_value = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_value, 1},
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
  [143] = 143,
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
      if (lookahead == '{') ADVANCE(129);
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
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
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
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 6},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 2},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 2},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 2},
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
  [91] = {.lex_state = 7},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 7},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 7},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 7},
  [105] = {.lex_state = 7},
  [106] = {.lex_state = 7},
  [107] = {.lex_state = 7},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 7},
  [111] = {.lex_state = 7},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 7},
  [114] = {.lex_state = 7},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 95},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 7},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
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
    [sym_source_file] = STATE(123),
    [sym_class] = STATE(122),
    [sym_comment] = ACTIONS(3),
    [sym_ws] = ACTIONS(3),
    [anon_sym_class] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 14,
    ACTIONS(7), 1,
      sym_integerConstant,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_SEMI,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    STATE(14), 1,
      sym_unalyOp,
    STATE(20), 1,
      sym_term,
    STATE(25), 1,
      sym_varName,
    STATE(112), 1,
      sym_subroutineName,
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
  [50] = 14,
    ACTIONS(7), 1,
      sym_integerConstant,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_RPAREN,
    STATE(14), 1,
      sym_unalyOp,
    STATE(20), 1,
      sym_term,
    STATE(25), 1,
      sym_varName,
    STATE(94), 1,
      sym_expression,
    STATE(112), 1,
      sym_subroutineName,
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
  [100] = 13,
    ACTIONS(7), 1,
      sym_integerConstant,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    STATE(14), 1,
      sym_unalyOp,
    STATE(20), 1,
      sym_term,
    STATE(25), 1,
      sym_varName,
    STATE(112), 1,
      sym_subroutineName,
    STATE(139), 1,
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
  [147] = 13,
    ACTIONS(7), 1,
      sym_integerConstant,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    STATE(14), 1,
      sym_unalyOp,
    STATE(20), 1,
      sym_term,
    STATE(25), 1,
      sym_varName,
    STATE(112), 1,
      sym_subroutineName,
    STATE(131), 1,
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
  [194] = 13,
    ACTIONS(7), 1,
      sym_integerConstant,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    STATE(14), 1,
      sym_unalyOp,
    STATE(20), 1,
      sym_term,
    STATE(25), 1,
      sym_varName,
    STATE(112), 1,
      sym_subroutineName,
    STATE(126), 1,
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
  [241] = 13,
    ACTIONS(7), 1,
      sym_integerConstant,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    STATE(14), 1,
      sym_unalyOp,
    STATE(20), 1,
      sym_term,
    STATE(25), 1,
      sym_varName,
    STATE(108), 1,
      sym_expression,
    STATE(112), 1,
      sym_subroutineName,
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
  [288] = 13,
    ACTIONS(7), 1,
      sym_integerConstant,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    STATE(14), 1,
      sym_unalyOp,
    STATE(20), 1,
      sym_term,
    STATE(25), 1,
      sym_varName,
    STATE(112), 1,
      sym_subroutineName,
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
  [335] = 13,
    ACTIONS(7), 1,
      sym_integerConstant,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    STATE(14), 1,
      sym_unalyOp,
    STATE(20), 1,
      sym_term,
    STATE(25), 1,
      sym_varName,
    STATE(112), 1,
      sym_subroutineName,
    STATE(120), 1,
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
  [382] = 13,
    ACTIONS(7), 1,
      sym_integerConstant,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    STATE(14), 1,
      sym_unalyOp,
    STATE(20), 1,
      sym_term,
    STATE(25), 1,
      sym_varName,
    STATE(112), 1,
      sym_subroutineName,
    STATE(121), 1,
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
  [429] = 13,
    ACTIONS(7), 1,
      sym_integerConstant,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    STATE(14), 1,
      sym_unalyOp,
    STATE(20), 1,
      sym_term,
    STATE(25), 1,
      sym_varName,
    STATE(112), 1,
      sym_subroutineName,
    STATE(136), 1,
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
  [476] = 12,
    ACTIONS(7), 1,
      sym_integerConstant,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    STATE(14), 1,
      sym_unalyOp,
    STATE(24), 1,
      sym_term,
    STATE(25), 1,
      sym_varName,
    STATE(112), 1,
      sym_subroutineName,
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
  [520] = 12,
    ACTIONS(7), 1,
      sym_integerConstant,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    STATE(14), 1,
      sym_unalyOp,
    STATE(25), 1,
      sym_varName,
    STATE(26), 1,
      sym_term,
    STATE(112), 1,
      sym_subroutineName,
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
  [564] = 12,
    ACTIONS(7), 1,
      sym_integerConstant,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    STATE(14), 1,
      sym_unalyOp,
    STATE(23), 1,
      sym_term,
    STATE(25), 1,
      sym_varName,
    STATE(112), 1,
      sym_subroutineName,
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
  [608] = 12,
    ACTIONS(7), 1,
      sym_integerConstant,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    STATE(14), 1,
      sym_unalyOp,
    STATE(22), 1,
      sym_term,
    STATE(25), 1,
      sym_varName,
    STATE(112), 1,
      sym_subroutineName,
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
  [652] = 11,
    ACTIONS(23), 1,
      anon_sym_RBRACE,
    ACTIONS(25), 1,
      anon_sym_var,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_while,
    ACTIONS(33), 1,
      anon_sym_do,
    ACTIONS(35), 1,
      anon_sym_return,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(18), 2,
      sym_varDec,
      aux_sym_subroutineBody_repeat1,
    STATE(37), 2,
      sym_statement,
      aux_sym_subroutineBody_repeat2,
    STATE(66), 5,
      sym_letStatement,
      sym_ifStatement,
      sym_whileStatement,
      sym_doStatement,
      sym_returnStatement,
  [693] = 5,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    ACTIONS(41), 1,
      anon_sym_DOT,
    ACTIONS(43), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(37), 13,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
  [722] = 11,
    ACTIONS(25), 1,
      anon_sym_var,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_while,
    ACTIONS(33), 1,
      anon_sym_do,
    ACTIONS(35), 1,
      anon_sym_return,
    ACTIONS(45), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(44), 2,
      sym_statement,
      aux_sym_subroutineBody_repeat2,
    STATE(52), 2,
      sym_varDec,
      aux_sym_subroutineBody_repeat1,
    STATE(66), 5,
      sym_letStatement,
      sym_ifStatement,
      sym_whileStatement,
      sym_doStatement,
      sym_returnStatement,
  [763] = 6,
    ACTIONS(51), 1,
      anon_sym_SLASH,
    STATE(13), 1,
      sym_op,
    STATE(21), 1,
      aux_sym_expression_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(47), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(49), 8,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
  [793] = 6,
    ACTIONS(51), 1,
      anon_sym_SLASH,
    STATE(12), 1,
      sym_op,
    STATE(19), 1,
      aux_sym_expression_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(53), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(49), 8,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
  [823] = 6,
    ACTIONS(60), 1,
      anon_sym_SLASH,
    STATE(13), 1,
      sym_op,
    STATE(21), 1,
      aux_sym_expression_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(55), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(57), 8,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
  [853] = 4,
    ACTIONS(65), 1,
      anon_sym_SLASH,
    STATE(15), 1,
      sym_op,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(63), 12,
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
  [878] = 4,
    ACTIONS(69), 1,
      anon_sym_SLASH,
    STATE(15), 1,
      sym_op,
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
  [903] = 4,
    ACTIONS(65), 1,
      anon_sym_SLASH,
    STATE(15), 1,
      sym_op,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(63), 12,
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
  [928] = 4,
    ACTIONS(73), 1,
      anon_sym_LBRACK,
    ACTIONS(75), 1,
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
  [953] = 5,
    ACTIONS(51), 1,
      anon_sym_SLASH,
    STATE(15), 1,
      sym_op,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(55), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(49), 8,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
  [980] = 9,
    ACTIONS(77), 1,
      anon_sym_RBRACE,
    ACTIONS(79), 1,
      anon_sym_let,
    ACTIONS(82), 1,
      anon_sym_if,
    ACTIONS(85), 1,
      anon_sym_while,
    ACTIONS(88), 1,
      anon_sym_do,
    ACTIONS(91), 1,
      anon_sym_return,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(27), 2,
      sym_statement,
      aux_sym_subroutineBody_repeat2,
    STATE(66), 5,
      sym_letStatement,
      sym_ifStatement,
      sym_whileStatement,
      sym_doStatement,
      sym_returnStatement,
  [1014] = 3,
    ACTIONS(96), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(94), 12,
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
  [1036] = 3,
    ACTIONS(100), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(98), 12,
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
  [1058] = 9,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_while,
    ACTIONS(33), 1,
      anon_sym_do,
    ACTIONS(35), 1,
      anon_sym_return,
    ACTIONS(102), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(27), 2,
      sym_statement,
      aux_sym_subroutineBody_repeat2,
    STATE(66), 5,
      sym_letStatement,
      sym_ifStatement,
      sym_whileStatement,
      sym_doStatement,
      sym_returnStatement,
  [1092] = 3,
    ACTIONS(106), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(104), 12,
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
  [1114] = 9,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_while,
    ACTIONS(33), 1,
      anon_sym_do,
    ACTIONS(35), 1,
      anon_sym_return,
    ACTIONS(108), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(30), 2,
      sym_statement,
      aux_sym_subroutineBody_repeat2,
    STATE(66), 5,
      sym_letStatement,
      sym_ifStatement,
      sym_whileStatement,
      sym_doStatement,
      sym_returnStatement,
  [1148] = 3,
    ACTIONS(112), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(110), 12,
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
  [1170] = 3,
    ACTIONS(75), 1,
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
  [1192] = 3,
    ACTIONS(116), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(114), 12,
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
  [1214] = 9,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_while,
    ACTIONS(33), 1,
      anon_sym_do,
    ACTIONS(35), 1,
      anon_sym_return,
    ACTIONS(108), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(27), 2,
      sym_statement,
      aux_sym_subroutineBody_repeat2,
    STATE(66), 5,
      sym_letStatement,
      sym_ifStatement,
      sym_whileStatement,
      sym_doStatement,
      sym_returnStatement,
  [1248] = 9,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_while,
    ACTIONS(33), 1,
      anon_sym_do,
    ACTIONS(35), 1,
      anon_sym_return,
    ACTIONS(45), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(27), 2,
      sym_statement,
      aux_sym_subroutineBody_repeat2,
    STATE(66), 5,
      sym_letStatement,
      sym_ifStatement,
      sym_whileStatement,
      sym_doStatement,
      sym_returnStatement,
  [1282] = 3,
    ACTIONS(65), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(63), 12,
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
  [1304] = 9,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_while,
    ACTIONS(33), 1,
      anon_sym_do,
    ACTIONS(35), 1,
      anon_sym_return,
    ACTIONS(118), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(46), 2,
      sym_statement,
      aux_sym_subroutineBody_repeat2,
    STATE(66), 5,
      sym_letStatement,
      sym_ifStatement,
      sym_whileStatement,
      sym_doStatement,
      sym_returnStatement,
  [1338] = 9,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_while,
    ACTIONS(33), 1,
      anon_sym_do,
    ACTIONS(35), 1,
      anon_sym_return,
    ACTIONS(120), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(36), 2,
      sym_statement,
      aux_sym_subroutineBody_repeat2,
    STATE(66), 5,
      sym_letStatement,
      sym_ifStatement,
      sym_whileStatement,
      sym_doStatement,
      sym_returnStatement,
  [1372] = 3,
    ACTIONS(124), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(122), 12,
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
  [1394] = 9,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_while,
    ACTIONS(33), 1,
      anon_sym_do,
    ACTIONS(35), 1,
      anon_sym_return,
    ACTIONS(126), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(45), 2,
      sym_statement,
      aux_sym_subroutineBody_repeat2,
    STATE(66), 5,
      sym_letStatement,
      sym_ifStatement,
      sym_whileStatement,
      sym_doStatement,
      sym_returnStatement,
  [1428] = 3,
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
  [1450] = 9,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_while,
    ACTIONS(33), 1,
      anon_sym_do,
    ACTIONS(35), 1,
      anon_sym_return,
    ACTIONS(132), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(27), 2,
      sym_statement,
      aux_sym_subroutineBody_repeat2,
    STATE(66), 5,
      sym_letStatement,
      sym_ifStatement,
      sym_whileStatement,
      sym_doStatement,
      sym_returnStatement,
  [1484] = 9,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_while,
    ACTIONS(33), 1,
      anon_sym_do,
    ACTIONS(35), 1,
      anon_sym_return,
    ACTIONS(134), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(27), 2,
      sym_statement,
      aux_sym_subroutineBody_repeat2,
    STATE(66), 5,
      sym_letStatement,
      sym_ifStatement,
      sym_whileStatement,
      sym_doStatement,
      sym_returnStatement,
  [1518] = 9,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_while,
    ACTIONS(33), 1,
      anon_sym_do,
    ACTIONS(35), 1,
      anon_sym_return,
    ACTIONS(136), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(27), 2,
      sym_statement,
      aux_sym_subroutineBody_repeat2,
    STATE(66), 5,
      sym_letStatement,
      sym_ifStatement,
      sym_whileStatement,
      sym_doStatement,
      sym_returnStatement,
  [1552] = 3,
    ACTIONS(140), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(138), 12,
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
  [1574] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(142), 5,
      sym_integerConstant,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(144), 5,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_this,
  [1593] = 6,
    ACTIONS(146), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(148), 2,
      anon_sym_static,
      anon_sym_field,
    STATE(51), 2,
      sym_classVarDec,
      aux_sym_class_repeat1,
    STATE(74), 2,
      sym_subroutineDec,
      aux_sym_class_repeat2,
    ACTIONS(150), 3,
      anon_sym_constructor,
      anon_sym_function,
      anon_sym_method,
  [1618] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(152), 5,
      sym_integerConstant,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(154), 5,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_this,
  [1637] = 6,
    ACTIONS(156), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(148), 2,
      anon_sym_static,
      anon_sym_field,
    STATE(53), 2,
      sym_classVarDec,
      aux_sym_class_repeat1,
    STATE(72), 2,
      sym_subroutineDec,
      aux_sym_class_repeat2,
    ACTIONS(150), 3,
      anon_sym_constructor,
      anon_sym_function,
      anon_sym_method,
  [1662] = 4,
    ACTIONS(160), 1,
      anon_sym_var,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(52), 2,
      sym_varDec,
      aux_sym_subroutineBody_repeat1,
    ACTIONS(158), 6,
      anon_sym_RBRACE,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_do,
      anon_sym_return,
  [1682] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(165), 2,
      anon_sym_static,
      anon_sym_field,
    STATE(53), 2,
      sym_classVarDec,
      aux_sym_class_repeat1,
    ACTIONS(163), 4,
      anon_sym_RBRACE,
      anon_sym_constructor,
      anon_sym_function,
      anon_sym_method,
  [1701] = 2,
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
  [1715] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(170), 7,
      anon_sym_RBRACE,
      anon_sym_var,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_do,
      anon_sym_return,
  [1729] = 6,
    ACTIONS(172), 1,
      sym_identifier,
    ACTIONS(176), 1,
      anon_sym_void,
    STATE(110), 1,
      sym_type,
    STATE(140), 1,
      sym_className,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(174), 3,
      anon_sym_int,
      anon_sym_char,
      anon_sym_boolean,
  [1751] = 6,
    ACTIONS(172), 1,
      sym_identifier,
    ACTIONS(178), 1,
      anon_sym_RPAREN,
    STATE(104), 1,
      sym_type,
    STATE(140), 1,
      sym_className,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(174), 3,
      anon_sym_int,
      anon_sym_char,
      anon_sym_boolean,
  [1773] = 3,
    ACTIONS(182), 1,
      anon_sym_else,
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
  [1789] = 3,
    ACTIONS(186), 1,
      anon_sym_else,
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
  [1805] = 2,
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
  [1818] = 5,
    ACTIONS(172), 1,
      sym_identifier,
    STATE(107), 1,
      sym_type,
    STATE(140), 1,
      sym_className,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(174), 3,
      anon_sym_int,
      anon_sym_char,
      anon_sym_boolean,
  [1837] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(190), 6,
      anon_sym_RBRACE,
      anon_sym_static,
      anon_sym_field,
      anon_sym_constructor,
      anon_sym_function,
      anon_sym_method,
  [1850] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(192), 6,
      anon_sym_RBRACE,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_do,
      anon_sym_return,
  [1863] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(194), 6,
      anon_sym_RBRACE,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_do,
      anon_sym_return,
  [1876] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(196), 6,
      anon_sym_RBRACE,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_do,
      anon_sym_return,
  [1889] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(198), 6,
      anon_sym_RBRACE,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_do,
      anon_sym_return,
  [1902] = 2,
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
  [1915] = 4,
    ACTIONS(202), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(68), 2,
      sym_subroutineDec,
      aux_sym_class_repeat2,
    ACTIONS(204), 3,
      anon_sym_constructor,
      anon_sym_function,
      anon_sym_method,
  [1932] = 5,
    ACTIONS(172), 1,
      sym_identifier,
    STATE(105), 1,
      sym_type,
    STATE(140), 1,
      sym_className,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(174), 3,
      anon_sym_int,
      anon_sym_char,
      anon_sym_boolean,
  [1951] = 2,
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
  [1964] = 2,
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
  [1977] = 4,
    ACTIONS(211), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(68), 2,
      sym_subroutineDec,
      aux_sym_class_repeat2,
    ACTIONS(150), 3,
      anon_sym_constructor,
      anon_sym_function,
      anon_sym_method,
  [1994] = 2,
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
  [2007] = 4,
    ACTIONS(156), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(68), 2,
      sym_subroutineDec,
      aux_sym_class_repeat2,
    ACTIONS(150), 3,
      anon_sym_constructor,
      anon_sym_function,
      anon_sym_method,
  [2024] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(215), 6,
      anon_sym_RBRACE,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_do,
      anon_sym_return,
  [2037] = 5,
    ACTIONS(172), 1,
      sym_identifier,
    STATE(114), 1,
      sym_type,
    STATE(140), 1,
      sym_className,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(174), 3,
      anon_sym_int,
      anon_sym_char,
      anon_sym_boolean,
  [2056] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(217), 6,
      anon_sym_RBRACE,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_do,
      anon_sym_return,
  [2069] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(219), 6,
      anon_sym_RBRACE,
      anon_sym_let,
      anon_sym_if,
      anon_sym_while,
      anon_sym_do,
      anon_sym_return,
  [2082] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(37), 5,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [2094] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(221), 4,
      anon_sym_RBRACE,
      anon_sym_constructor,
      anon_sym_function,
      anon_sym_method,
  [2105] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(223), 4,
      anon_sym_RBRACE,
      anon_sym_constructor,
      anon_sym_function,
      anon_sym_method,
  [2116] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(225), 4,
      anon_sym_RBRACE,
      anon_sym_constructor,
      anon_sym_function,
      anon_sym_method,
  [2127] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(227), 4,
      anon_sym_RBRACE,
      anon_sym_constructor,
      anon_sym_function,
      anon_sym_method,
  [2138] = 4,
    ACTIONS(229), 1,
      anon_sym_COMMA,
    ACTIONS(231), 1,
      anon_sym_RPAREN,
    STATE(93), 1,
      aux_sym_expressionList_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2152] = 4,
    ACTIONS(233), 1,
      anon_sym_COMMA,
    ACTIONS(236), 1,
      anon_sym_SEMI,
    STATE(85), 1,
      aux_sym_classVarDec_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2166] = 4,
    ACTIONS(238), 1,
      anon_sym_COMMA,
    ACTIONS(240), 1,
      anon_sym_RPAREN,
    STATE(88), 1,
      aux_sym_parameterList_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2180] = 4,
    ACTIONS(242), 1,
      anon_sym_COMMA,
    ACTIONS(244), 1,
      anon_sym_SEMI,
    STATE(92), 1,
      aux_sym_classVarDec_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2194] = 4,
    ACTIONS(246), 1,
      anon_sym_COMMA,
    ACTIONS(249), 1,
      anon_sym_RPAREN,
    STATE(88), 1,
      aux_sym_parameterList_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2208] = 4,
    ACTIONS(242), 1,
      anon_sym_COMMA,
    ACTIONS(251), 1,
      anon_sym_SEMI,
    STATE(85), 1,
      aux_sym_classVarDec_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2222] = 4,
    ACTIONS(238), 1,
      anon_sym_COMMA,
    ACTIONS(253), 1,
      anon_sym_RPAREN,
    STATE(86), 1,
      aux_sym_parameterList_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2236] = 4,
    ACTIONS(255), 1,
      sym_identifier,
    STATE(112), 1,
      sym_subroutineName,
    STATE(125), 1,
      sym_subroutineCall,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2250] = 4,
    ACTIONS(242), 1,
      anon_sym_COMMA,
    ACTIONS(257), 1,
      anon_sym_SEMI,
    STATE(85), 1,
      aux_sym_classVarDec_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2264] = 4,
    ACTIONS(259), 1,
      anon_sym_COMMA,
    ACTIONS(262), 1,
      anon_sym_RPAREN,
    STATE(93), 1,
      aux_sym_expressionList_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2278] = 4,
    ACTIONS(229), 1,
      anon_sym_COMMA,
    ACTIONS(264), 1,
      anon_sym_RPAREN,
    STATE(84), 1,
      aux_sym_expressionList_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2292] = 4,
    ACTIONS(242), 1,
      anon_sym_COMMA,
    ACTIONS(266), 1,
      anon_sym_SEMI,
    STATE(89), 1,
      aux_sym_classVarDec_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2306] = 3,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    ACTIONS(41), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2317] = 3,
    ACTIONS(268), 1,
      sym_identifier,
    STATE(119), 1,
      sym_className,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2328] = 3,
    ACTIONS(270), 1,
      anon_sym_LPAREN,
    STATE(100), 1,
      sym_parameterList,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2339] = 3,
    ACTIONS(272), 1,
      sym_identifier,
    STATE(102), 1,
      sym_varName,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2350] = 3,
    ACTIONS(274), 1,
      anon_sym_LBRACE,
    STATE(80), 1,
      sym_subroutineBody,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2361] = 3,
    ACTIONS(276), 1,
      anon_sym_LPAREN,
    STATE(43), 1,
      sym_expressionList,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2372] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(236), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [2381] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(278), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2390] = 3,
    ACTIONS(272), 1,
      sym_identifier,
    STATE(90), 1,
      sym_varName,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2401] = 3,
    ACTIONS(272), 1,
      sym_identifier,
    STATE(95), 1,
      sym_varName,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2412] = 3,
    ACTIONS(272), 1,
      sym_identifier,
    STATE(109), 1,
      sym_varName,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2423] = 3,
    ACTIONS(272), 1,
      sym_identifier,
    STATE(87), 1,
      sym_varName,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2434] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(262), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2443] = 3,
    ACTIONS(280), 1,
      anon_sym_LBRACK,
    ACTIONS(282), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2454] = 3,
    ACTIONS(284), 1,
      sym_identifier,
    STATE(98), 1,
      sym_subroutineName,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2465] = 3,
    ACTIONS(284), 1,
      sym_identifier,
    STATE(101), 1,
      sym_subroutineName,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2476] = 3,
    ACTIONS(276), 1,
      anon_sym_LPAREN,
    STATE(35), 1,
      sym_expressionList,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2487] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(286), 2,
      sym_identifier,
      anon_sym_LBRACE,
  [2496] = 3,
    ACTIONS(272), 1,
      sym_identifier,
    STATE(103), 1,
      sym_varName,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2507] = 2,
    ACTIONS(288), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2515] = 2,
    ACTIONS(290), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2523] = 2,
    ACTIONS(292), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2531] = 2,
    ACTIONS(294), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2539] = 2,
    ACTIONS(296), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2547] = 2,
    ACTIONS(298), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2555] = 2,
    ACTIONS(300), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2563] = 2,
    ACTIONS(302), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2571] = 2,
    ACTIONS(304), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2579] = 2,
    ACTIONS(308), 1,
      aux_sym_stringConstant_token1,
    ACTIONS(306), 2,
      sym_comment,
      sym_ws,
  [2587] = 2,
    ACTIONS(310), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2595] = 2,
    ACTIONS(312), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2603] = 2,
    ACTIONS(314), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2611] = 2,
    ACTIONS(316), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2619] = 2,
    ACTIONS(318), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2627] = 2,
    ACTIONS(320), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2635] = 2,
    ACTIONS(322), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2643] = 2,
    ACTIONS(324), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2651] = 2,
    ACTIONS(326), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2659] = 2,
    ACTIONS(328), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2667] = 2,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2675] = 2,
    ACTIONS(330), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2683] = 2,
    ACTIONS(332), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2691] = 2,
    ACTIONS(334), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2699] = 2,
    ACTIONS(336), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2707] = 2,
    ACTIONS(338), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2715] = 2,
    ACTIONS(340), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2723] = 2,
    ACTIONS(342), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2731] = 2,
    ACTIONS(344), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 50,
  [SMALL_STATE(4)] = 100,
  [SMALL_STATE(5)] = 147,
  [SMALL_STATE(6)] = 194,
  [SMALL_STATE(7)] = 241,
  [SMALL_STATE(8)] = 288,
  [SMALL_STATE(9)] = 335,
  [SMALL_STATE(10)] = 382,
  [SMALL_STATE(11)] = 429,
  [SMALL_STATE(12)] = 476,
  [SMALL_STATE(13)] = 520,
  [SMALL_STATE(14)] = 564,
  [SMALL_STATE(15)] = 608,
  [SMALL_STATE(16)] = 652,
  [SMALL_STATE(17)] = 693,
  [SMALL_STATE(18)] = 722,
  [SMALL_STATE(19)] = 763,
  [SMALL_STATE(20)] = 793,
  [SMALL_STATE(21)] = 823,
  [SMALL_STATE(22)] = 853,
  [SMALL_STATE(23)] = 878,
  [SMALL_STATE(24)] = 903,
  [SMALL_STATE(25)] = 928,
  [SMALL_STATE(26)] = 953,
  [SMALL_STATE(27)] = 980,
  [SMALL_STATE(28)] = 1014,
  [SMALL_STATE(29)] = 1036,
  [SMALL_STATE(30)] = 1058,
  [SMALL_STATE(31)] = 1092,
  [SMALL_STATE(32)] = 1114,
  [SMALL_STATE(33)] = 1148,
  [SMALL_STATE(34)] = 1170,
  [SMALL_STATE(35)] = 1192,
  [SMALL_STATE(36)] = 1214,
  [SMALL_STATE(37)] = 1248,
  [SMALL_STATE(38)] = 1282,
  [SMALL_STATE(39)] = 1304,
  [SMALL_STATE(40)] = 1338,
  [SMALL_STATE(41)] = 1372,
  [SMALL_STATE(42)] = 1394,
  [SMALL_STATE(43)] = 1428,
  [SMALL_STATE(44)] = 1450,
  [SMALL_STATE(45)] = 1484,
  [SMALL_STATE(46)] = 1518,
  [SMALL_STATE(47)] = 1552,
  [SMALL_STATE(48)] = 1574,
  [SMALL_STATE(49)] = 1593,
  [SMALL_STATE(50)] = 1618,
  [SMALL_STATE(51)] = 1637,
  [SMALL_STATE(52)] = 1662,
  [SMALL_STATE(53)] = 1682,
  [SMALL_STATE(54)] = 1701,
  [SMALL_STATE(55)] = 1715,
  [SMALL_STATE(56)] = 1729,
  [SMALL_STATE(57)] = 1751,
  [SMALL_STATE(58)] = 1773,
  [SMALL_STATE(59)] = 1789,
  [SMALL_STATE(60)] = 1805,
  [SMALL_STATE(61)] = 1818,
  [SMALL_STATE(62)] = 1837,
  [SMALL_STATE(63)] = 1850,
  [SMALL_STATE(64)] = 1863,
  [SMALL_STATE(65)] = 1876,
  [SMALL_STATE(66)] = 1889,
  [SMALL_STATE(67)] = 1902,
  [SMALL_STATE(68)] = 1915,
  [SMALL_STATE(69)] = 1932,
  [SMALL_STATE(70)] = 1951,
  [SMALL_STATE(71)] = 1964,
  [SMALL_STATE(72)] = 1977,
  [SMALL_STATE(73)] = 1994,
  [SMALL_STATE(74)] = 2007,
  [SMALL_STATE(75)] = 2024,
  [SMALL_STATE(76)] = 2037,
  [SMALL_STATE(77)] = 2056,
  [SMALL_STATE(78)] = 2069,
  [SMALL_STATE(79)] = 2082,
  [SMALL_STATE(80)] = 2094,
  [SMALL_STATE(81)] = 2105,
  [SMALL_STATE(82)] = 2116,
  [SMALL_STATE(83)] = 2127,
  [SMALL_STATE(84)] = 2138,
  [SMALL_STATE(85)] = 2152,
  [SMALL_STATE(86)] = 2166,
  [SMALL_STATE(87)] = 2180,
  [SMALL_STATE(88)] = 2194,
  [SMALL_STATE(89)] = 2208,
  [SMALL_STATE(90)] = 2222,
  [SMALL_STATE(91)] = 2236,
  [SMALL_STATE(92)] = 2250,
  [SMALL_STATE(93)] = 2264,
  [SMALL_STATE(94)] = 2278,
  [SMALL_STATE(95)] = 2292,
  [SMALL_STATE(96)] = 2306,
  [SMALL_STATE(97)] = 2317,
  [SMALL_STATE(98)] = 2328,
  [SMALL_STATE(99)] = 2339,
  [SMALL_STATE(100)] = 2350,
  [SMALL_STATE(101)] = 2361,
  [SMALL_STATE(102)] = 2372,
  [SMALL_STATE(103)] = 2381,
  [SMALL_STATE(104)] = 2390,
  [SMALL_STATE(105)] = 2401,
  [SMALL_STATE(106)] = 2412,
  [SMALL_STATE(107)] = 2423,
  [SMALL_STATE(108)] = 2434,
  [SMALL_STATE(109)] = 2443,
  [SMALL_STATE(110)] = 2454,
  [SMALL_STATE(111)] = 2465,
  [SMALL_STATE(112)] = 2476,
  [SMALL_STATE(113)] = 2487,
  [SMALL_STATE(114)] = 2496,
  [SMALL_STATE(115)] = 2507,
  [SMALL_STATE(116)] = 2515,
  [SMALL_STATE(117)] = 2523,
  [SMALL_STATE(118)] = 2531,
  [SMALL_STATE(119)] = 2539,
  [SMALL_STATE(120)] = 2547,
  [SMALL_STATE(121)] = 2555,
  [SMALL_STATE(122)] = 2563,
  [SMALL_STATE(123)] = 2571,
  [SMALL_STATE(124)] = 2579,
  [SMALL_STATE(125)] = 2587,
  [SMALL_STATE(126)] = 2595,
  [SMALL_STATE(127)] = 2603,
  [SMALL_STATE(128)] = 2611,
  [SMALL_STATE(129)] = 2619,
  [SMALL_STATE(130)] = 2627,
  [SMALL_STATE(131)] = 2635,
  [SMALL_STATE(132)] = 2643,
  [SMALL_STATE(133)] = 2651,
  [SMALL_STATE(134)] = 2659,
  [SMALL_STATE(135)] = 2667,
  [SMALL_STATE(136)] = 2675,
  [SMALL_STATE(137)] = 2683,
  [SMALL_STATE(138)] = 2691,
  [SMALL_STATE(139)] = 2699,
  [SMALL_STATE(140)] = 2707,
  [SMALL_STATE(141)] = 2715,
  [SMALL_STATE(142)] = 2723,
  [SMALL_STATE(143)] = 2731,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_varName, 1),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subroutineName, 1),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_varName, 1),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 2),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2), SHIFT_REPEAT(50),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expression_repeat1, 2), SHIFT_REPEAT(50),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 3),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_term, 3),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 2),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_term, 2),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 1),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_term, 1),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_subroutineBody_repeat2, 2),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_subroutineBody_repeat2, 2), SHIFT_REPEAT(106),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_subroutineBody_repeat2, 2), SHIFT_REPEAT(134),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_subroutineBody_repeat2, 2), SHIFT_REPEAT(133),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_subroutineBody_repeat2, 2), SHIFT_REPEAT(91),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_subroutineBody_repeat2, 2), SHIFT_REPEAT(2),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expressionList, 3),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expressionList, 3),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stringConstant, 3, .production_id = 1),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stringConstant, 3, .production_id = 1),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expressionList, 2),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expressionList, 2),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expressionList, 4),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expressionList, 4),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subroutineCall, 2),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subroutineCall, 2),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 4),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_term, 4),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subroutineCall, 4),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subroutineCall, 4),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keywordConstant, 1),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keywordConstant, 1),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unalyOp, 1),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unalyOp, 1),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op, 1),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_op, 1),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_subroutineBody_repeat1, 2),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_subroutineBody_repeat1, 2), SHIFT_REPEAT(61),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_repeat1, 2),
  [165] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_repeat1, 2), SHIFT_REPEAT(69),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_varDec, 5),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_varDec, 4),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ifStatement, 7),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ifStatement, 6),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_returnStatement, 3),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classVarDec, 4),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_returnStatement, 2),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ifStatement, 11),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doStatement, 3),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ifStatement, 9),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_repeat2, 2),
  [204] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_repeat2, 2), SHIFT_REPEAT(56),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_whileStatement, 7),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_whileStatement, 6),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classVarDec, 5),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ifStatement, 10),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_letStatement, 5),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_letStatement, 8),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subroutineDec, 5),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subroutineBody, 2),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subroutineBody, 3),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subroutineBody, 4),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [233] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_classVarDec_repeat1, 2), SHIFT_REPEAT(99),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_classVarDec_repeat1, 2),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [246] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameterList_repeat1, 2), SHIFT_REPEAT(76),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameterList_repeat1, 2),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [259] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expressionList_repeat1, 2), SHIFT_REPEAT(7),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expressionList_repeat1, 2),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameterList_repeat1, 3),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_className, 1),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameterList, 4),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 5),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameterList, 5),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [304] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [306] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [308] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 4),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameterList, 2),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 6),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
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
