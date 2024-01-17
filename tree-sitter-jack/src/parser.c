#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 10
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 51
#define ALIAS_COUNT 0
#define TOKEN_COUNT 47
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum {
  aux_sym_comment_token1 = 1,
  aux_sym_comment_token2 = 2,
  sym_ws = 3,
  sym_integerConstant = 4,
  anon_sym_DQUOTE = 5,
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
  sym_comment = 48,
  sym_class = 49,
  sym_className = 50,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_comment_token1] = "comment_token1",
  [aux_sym_comment_token2] = "comment_token2",
  [sym_ws] = "ws",
  [sym_integerConstant] = "integerConstant",
  [anon_sym_DQUOTE] = "\"",
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
  [sym_comment] = "comment",
  [sym_class] = "class",
  [sym_className] = "className",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [aux_sym_comment_token2] = aux_sym_comment_token2,
  [sym_ws] = sym_ws,
  [sym_integerConstant] = sym_integerConstant,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
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
  [sym_comment] = sym_comment,
  [sym_class] = sym_class,
  [sym_className] = sym_className,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_comment_token2] = {
    .visible = false,
    .named = false,
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
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_class] = {
    .visible = true,
    .named = true,
  },
  [sym_className] = {
    .visible = true,
    .named = true,
  },
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(80);
      if (lookahead == '"') ADVANCE(85);
      if (lookahead == '&') ADVANCE(118);
      if (lookahead == '(') ADVANCE(101);
      if (lookahead == ')') ADVANCE(102);
      if (lookahead == '*') ADVANCE(116);
      if (lookahead == '+') ADVANCE(114);
      if (lookahead == ',') ADVANCE(92);
      if (lookahead == '-') ADVANCE(115);
      if (lookahead == '.') ADVANCE(113);
      if (lookahead == '/') ADVANCE(117);
      if (lookahead == ';') ADVANCE(93);
      if (lookahead == '<') ADVANCE(120);
      if (lookahead == '=') ADVANCE(107);
      if (lookahead == '>') ADVANCE(121);
      if (lookahead == '[') ADVANCE(105);
      if (lookahead == ']') ADVANCE(106);
      if (lookahead == 'b') ADVANCE(50);
      if (lookahead == 'c') ADVANCE(27);
      if (lookahead == 'd') ADVANCE(49);
      if (lookahead == 'e') ADVANCE(36);
      if (lookahead == 'f') ADVANCE(10);
      if (lookahead == 'i') ADVANCE(26);
      if (lookahead == 'l') ADVANCE(21);
      if (lookahead == 'm') ADVANCE(23);
      if (lookahead == 'n') ADVANCE(75);
      if (lookahead == 'r') ADVANCE(25);
      if (lookahead == 's') ADVANCE(70);
      if (lookahead == 't') ADVANCE(28);
      if (lookahead == 'v') ADVANCE(5);
      if (lookahead == 'w') ADVANCE(29);
      if (lookahead == '{') ADVANCE(88);
      if (lookahead == '|') ADVANCE(119);
      if (lookahead == '}') ADVANCE(89);
      if (lookahead == '~') ADVANCE(122);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(84);
      END_STATE();
    case 1:
      if (lookahead == '*') ADVANCE(3);
      if (lookahead == '/') ADVANCE(81);
      END_STATE();
    case 2:
      if (lookahead == '*') ADVANCE(2);
      if (lookahead == '/') ADVANCE(82);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(2);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '/') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(83);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(55);
      if (lookahead == 'o') ADVANCE(31);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(63);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(56);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(46);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(71);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(43);
      if (lookahead == 'i') ADVANCE(22);
      if (lookahead == 'u') ADVANCE(44);
      END_STATE();
    case 11:
      if (lookahead == 'c') ADVANCE(90);
      END_STATE();
    case 12:
      if (lookahead == 'c') ADVANCE(73);
      END_STATE();
    case 13:
      if (lookahead == 'c') ADVANCE(74);
      END_STATE();
    case 14:
      if (lookahead == 'd') ADVANCE(100);
      END_STATE();
    case 15:
      if (lookahead == 'd') ADVANCE(91);
      END_STATE();
    case 16:
      if (lookahead == 'd') ADVANCE(99);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(109);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(123);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(124);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(110);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(8);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 26:
      if (lookahead == 'f') ADVANCE(108);
      if (lookahead == 'n') ADVANCE(66);
      END_STATE();
    case 27:
      if (lookahead == 'h') ADVANCE(7);
      if (lookahead == 'l') ADVANCE(6);
      if (lookahead == 'o') ADVANCE(48);
      END_STATE();
    case 28:
      if (lookahead == 'h') ADVANCE(33);
      if (lookahead == 'r') ADVANCE(77);
      END_STATE();
    case 29:
      if (lookahead == 'h') ADVANCE(35);
      END_STATE();
    case 30:
      if (lookahead == 'h') ADVANCE(52);
      END_STATE();
    case 31:
      if (lookahead == 'i') ADVANCE(14);
      END_STATE();
    case 32:
      if (lookahead == 'i') ADVANCE(11);
      END_STATE();
    case 33:
      if (lookahead == 'i') ADVANCE(60);
      END_STATE();
    case 34:
      if (lookahead == 'i') ADVANCE(53);
      END_STATE();
    case 35:
      if (lookahead == 'i') ADVANCE(42);
      END_STATE();
    case 36:
      if (lookahead == 'l') ADVANCE(62);
      END_STATE();
    case 37:
      if (lookahead == 'l') ADVANCE(125);
      END_STATE();
    case 38:
      if (lookahead == 'l') ADVANCE(6);
      END_STATE();
    case 39:
      if (lookahead == 'l') ADVANCE(15);
      END_STATE();
    case 40:
      if (lookahead == 'l') ADVANCE(37);
      END_STATE();
    case 41:
      if (lookahead == 'l') ADVANCE(24);
      END_STATE();
    case 42:
      if (lookahead == 'l') ADVANCE(20);
      END_STATE();
    case 43:
      if (lookahead == 'l') ADVANCE(64);
      END_STATE();
    case 44:
      if (lookahead == 'n') ADVANCE(12);
      END_STATE();
    case 45:
      if (lookahead == 'n') ADVANCE(112);
      END_STATE();
    case 46:
      if (lookahead == 'n') ADVANCE(96);
      END_STATE();
    case 47:
      if (lookahead == 'n') ADVANCE(98);
      END_STATE();
    case 48:
      if (lookahead == 'n') ADVANCE(65);
      END_STATE();
    case 49:
      if (lookahead == 'o') ADVANCE(111);
      END_STATE();
    case 50:
      if (lookahead == 'o') ADVANCE(51);
      END_STATE();
    case 51:
      if (lookahead == 'o') ADVANCE(41);
      END_STATE();
    case 52:
      if (lookahead == 'o') ADVANCE(16);
      END_STATE();
    case 53:
      if (lookahead == 'o') ADVANCE(47);
      END_STATE();
    case 54:
      if (lookahead == 'o') ADVANCE(57);
      END_STATE();
    case 55:
      if (lookahead == 'r') ADVANCE(103);
      END_STATE();
    case 56:
      if (lookahead == 'r') ADVANCE(95);
      END_STATE();
    case 57:
      if (lookahead == 'r') ADVANCE(97);
      END_STATE();
    case 58:
      if (lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 59:
      if (lookahead == 'r') ADVANCE(78);
      END_STATE();
    case 60:
      if (lookahead == 's') ADVANCE(126);
      END_STATE();
    case 61:
      if (lookahead == 's') ADVANCE(87);
      END_STATE();
    case 62:
      if (lookahead == 's') ADVANCE(17);
      END_STATE();
    case 63:
      if (lookahead == 's') ADVANCE(61);
      END_STATE();
    case 64:
      if (lookahead == 's') ADVANCE(19);
      END_STATE();
    case 65:
      if (lookahead == 's') ADVANCE(72);
      END_STATE();
    case 66:
      if (lookahead == 't') ADVANCE(94);
      END_STATE();
    case 67:
      if (lookahead == 't') ADVANCE(104);
      END_STATE();
    case 68:
      if (lookahead == 't') ADVANCE(30);
      END_STATE();
    case 69:
      if (lookahead == 't') ADVANCE(76);
      END_STATE();
    case 70:
      if (lookahead == 't') ADVANCE(9);
      END_STATE();
    case 71:
      if (lookahead == 't') ADVANCE(32);
      END_STATE();
    case 72:
      if (lookahead == 't') ADVANCE(59);
      END_STATE();
    case 73:
      if (lookahead == 't') ADVANCE(34);
      END_STATE();
    case 74:
      if (lookahead == 't') ADVANCE(54);
      END_STATE();
    case 75:
      if (lookahead == 'u') ADVANCE(40);
      END_STATE();
    case 76:
      if (lookahead == 'u') ADVANCE(58);
      END_STATE();
    case 77:
      if (lookahead == 'u') ADVANCE(18);
      END_STATE();
    case 78:
      if (lookahead == 'u') ADVANCE(13);
      END_STATE();
    case 79:
      if (eof) ADVANCE(80);
      if (lookahead == '/') ADVANCE(1);
      if (lookahead == 'c') ADVANCE(38);
      if (lookahead == '{') ADVANCE(88);
      if (lookahead == '}') ADVANCE(89);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(83);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_ws);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(83);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_integerConstant);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(84);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_class);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_static);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_field);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_char);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_boolean);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_constructor);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_method);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(3);
      if (lookahead == '/') ADVANCE(81);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_this);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 79},
  [2] = {.lex_state = 4},
  [3] = {.lex_state = 79},
  [4] = {.lex_state = 79},
  [5] = {.lex_state = 79},
  [6] = {.lex_state = 79},
  [7] = {.lex_state = 79},
  [8] = {.lex_state = 79},
  [9] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_comment_token1] = ACTIONS(3),
    [aux_sym_comment_token2] = ACTIONS(5),
    [sym_ws] = ACTIONS(7),
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
    [sym_source_file] = STATE(3),
    [sym_comment] = STATE(1),
    [sym_class] = STATE(4),
    [aux_sym_comment_token1] = ACTIONS(3),
    [aux_sym_comment_token2] = ACTIONS(5),
    [sym_ws] = ACTIONS(7),
    [anon_sym_class] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(7), 1,
      sym_ws,
    ACTIONS(9), 1,
      sym_identifier,
    STATE(2), 1,
      sym_comment,
    STATE(6), 1,
      sym_className,
  [19] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(7), 1,
      sym_ws,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      sym_comment,
  [35] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(7), 1,
      sym_ws,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    STATE(4), 1,
      sym_comment,
  [51] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(7), 1,
      sym_ws,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    STATE(5), 1,
      sym_comment,
  [67] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(7), 1,
      sym_ws,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    STATE(6), 1,
      sym_comment,
  [83] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(7), 1,
      sym_ws,
    ACTIONS(19), 1,
      anon_sym_RBRACE,
    STATE(7), 1,
      sym_comment,
  [99] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(7), 1,
      sym_ws,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    STATE(8), 1,
      sym_comment,
  [115] = 1,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 19,
  [SMALL_STATE(4)] = 35,
  [SMALL_STATE(5)] = 51,
  [SMALL_STATE(6)] = 67,
  [SMALL_STATE(7)] = 83,
  [SMALL_STATE(8)] = 99,
  [SMALL_STATE(9)] = 115,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [11] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_className, 1),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 4),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
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
