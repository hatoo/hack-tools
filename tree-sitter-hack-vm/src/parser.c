#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 23
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 41
#define ALIAS_COUNT 0
#define TOKEN_COUNT 30
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 7
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 5

enum {
  sym_comment = 1,
  sym_ws = 2,
  anon_sym_label = 3,
  anon_sym_goto = 4,
  anon_sym_if_DASHgoto = 5,
  anon_sym_function = 6,
  anon_sym_call = 7,
  sym_return = 8,
  anon_sym_push = 9,
  anon_sym_pop = 10,
  anon_sym_add = 11,
  anon_sym_sub = 12,
  anon_sym_neg = 13,
  anon_sym_eq = 14,
  anon_sym_gt = 15,
  anon_sym_lt = 16,
  anon_sym_and = 17,
  anon_sym_or = 18,
  anon_sym_not = 19,
  anon_sym_argument = 20,
  anon_sym_local = 21,
  anon_sym_static = 22,
  anon_sym_constant = 23,
  anon_sym_this = 24,
  anon_sym_that = 25,
  anon_sym_pointer = 26,
  anon_sym_temp = 27,
  sym_ident = 28,
  sym_num = 29,
  sym_source_file = 30,
  sym_command = 31,
  sym_label = 32,
  sym_goto = 33,
  sym_if_goto = 34,
  sym_function = 35,
  sym_call = 36,
  sym_stack_op = 37,
  sym_arithmetic_op = 38,
  sym_segment = 39,
  aux_sym_source_file_repeat1 = 40,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [sym_ws] = "ws",
  [anon_sym_label] = "label",
  [anon_sym_goto] = "goto",
  [anon_sym_if_DASHgoto] = "if-goto",
  [anon_sym_function] = "function",
  [anon_sym_call] = "call",
  [sym_return] = "return",
  [anon_sym_push] = "push",
  [anon_sym_pop] = "pop",
  [anon_sym_add] = "add",
  [anon_sym_sub] = "sub",
  [anon_sym_neg] = "neg",
  [anon_sym_eq] = "eq",
  [anon_sym_gt] = "gt",
  [anon_sym_lt] = "lt",
  [anon_sym_and] = "and",
  [anon_sym_or] = "or",
  [anon_sym_not] = "not",
  [anon_sym_argument] = "argument",
  [anon_sym_local] = "local",
  [anon_sym_static] = "static",
  [anon_sym_constant] = "constant",
  [anon_sym_this] = "this",
  [anon_sym_that] = "that",
  [anon_sym_pointer] = "pointer",
  [anon_sym_temp] = "temp",
  [sym_ident] = "ident",
  [sym_num] = "num",
  [sym_source_file] = "source_file",
  [sym_command] = "command",
  [sym_label] = "label",
  [sym_goto] = "goto",
  [sym_if_goto] = "if_goto",
  [sym_function] = "function",
  [sym_call] = "call",
  [sym_stack_op] = "stack_op",
  [sym_arithmetic_op] = "arithmetic_op",
  [sym_segment] = "segment",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_comment] = sym_comment,
  [sym_ws] = sym_ws,
  [anon_sym_label] = anon_sym_label,
  [anon_sym_goto] = anon_sym_goto,
  [anon_sym_if_DASHgoto] = anon_sym_if_DASHgoto,
  [anon_sym_function] = anon_sym_function,
  [anon_sym_call] = anon_sym_call,
  [sym_return] = sym_return,
  [anon_sym_push] = anon_sym_push,
  [anon_sym_pop] = anon_sym_pop,
  [anon_sym_add] = anon_sym_add,
  [anon_sym_sub] = anon_sym_sub,
  [anon_sym_neg] = anon_sym_neg,
  [anon_sym_eq] = anon_sym_eq,
  [anon_sym_gt] = anon_sym_gt,
  [anon_sym_lt] = anon_sym_lt,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_not] = anon_sym_not,
  [anon_sym_argument] = anon_sym_argument,
  [anon_sym_local] = anon_sym_local,
  [anon_sym_static] = anon_sym_static,
  [anon_sym_constant] = anon_sym_constant,
  [anon_sym_this] = anon_sym_this,
  [anon_sym_that] = anon_sym_that,
  [anon_sym_pointer] = anon_sym_pointer,
  [anon_sym_temp] = anon_sym_temp,
  [sym_ident] = sym_ident,
  [sym_num] = sym_num,
  [sym_source_file] = sym_source_file,
  [sym_command] = sym_command,
  [sym_label] = sym_label,
  [sym_goto] = sym_goto,
  [sym_if_goto] = sym_if_goto,
  [sym_function] = sym_function,
  [sym_call] = sym_call,
  [sym_stack_op] = sym_stack_op,
  [sym_arithmetic_op] = sym_arithmetic_op,
  [sym_segment] = sym_segment,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
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
  [anon_sym_label] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_goto] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if_DASHgoto] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_function] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_call] = {
    .visible = true,
    .named = false,
  },
  [sym_return] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_push] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pop] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_add] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sub] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_neg] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_eq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_gt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_not] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_argument] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_local] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_static] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_constant] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_this] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_that] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pointer] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_temp] = {
    .visible = true,
    .named = false,
  },
  [sym_ident] = {
    .visible = true,
    .named = true,
  },
  [sym_num] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_command] = {
    .visible = true,
    .named = true,
  },
  [sym_label] = {
    .visible = true,
    .named = true,
  },
  [sym_goto] = {
    .visible = true,
    .named = true,
  },
  [sym_if_goto] = {
    .visible = true,
    .named = true,
  },
  [sym_function] = {
    .visible = true,
    .named = true,
  },
  [sym_call] = {
    .visible = true,
    .named = true,
  },
  [sym_stack_op] = {
    .visible = true,
    .named = true,
  },
  [sym_arithmetic_op] = {
    .visible = true,
    .named = true,
  },
  [sym_segment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_action = 1,
  field_index = 2,
  field_label = 3,
  field_name = 4,
  field_num_args = 5,
  field_num_locals = 6,
  field_segment = 7,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_action] = "action",
  [field_index] = "index",
  [field_label] = "label",
  [field_name] = "name",
  [field_num_args] = "num_args",
  [field_num_locals] = "num_locals",
  [field_segment] = "segment",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 2},
  [4] = {.index = 5, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_label, 1},
  [1] =
    {field_name, 1},
    {field_num_locals, 2},
  [3] =
    {field_name, 1},
    {field_num_args, 2},
  [5] =
    {field_action, 0},
    {field_index, 2},
    {field_segment, 1},
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(74);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == 'a') ADVANCE(15);
      if (lookahead == 'c') ADVANCE(4);
      if (lookahead == 'e') ADVANCE(52);
      if (lookahead == 'f') ADVANCE(72);
      if (lookahead == 'g') ADVANCE(45);
      if (lookahead == 'i') ADVANCE(24);
      if (lookahead == 'l') ADVANCE(5);
      if (lookahead == 'n') ADVANCE(19);
      if (lookahead == 'o') ADVANCE(53);
      if (lookahead == 'p') ADVANCE(46);
      if (lookahead == 'r') ADVANCE(22);
      if (lookahead == 's') ADVANCE(59);
      if (lookahead == 't') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(103);
      END_STATE();
    case 1:
      if (lookahead == '-') ADVANCE(27);
      END_STATE();
    case 2:
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(76);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 3:
      if (lookahead == '/') ADVANCE(75);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(35);
      if (lookahead == 'o') ADVANCE(41);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(11);
      if (lookahead == 'o') ADVANCE(13);
      if (lookahead == 't') ADVANCE(90);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(34);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(62);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(63);
      if (lookahead == 'i') ADVANCE(57);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(44);
      END_STATE();
    case 10:
      if (lookahead == 'b') ADVANCE(86);
      END_STATE();
    case 11:
      if (lookahead == 'b') ADVANCE(21);
      END_STATE();
    case 12:
      if (lookahead == 'c') ADVANCE(96);
      END_STATE();
    case 13:
      if (lookahead == 'c') ADVANCE(6);
      END_STATE();
    case 14:
      if (lookahead == 'c') ADVANCE(66);
      END_STATE();
    case 15:
      if (lookahead == 'd') ADVANCE(16);
      if (lookahead == 'n') ADVANCE(17);
      if (lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 16:
      if (lookahead == 'd') ADVANCE(85);
      END_STATE();
    case 17:
      if (lookahead == 'd') ADVANCE(91);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(36);
      if (lookahead == 'h') ADVANCE(8);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(25);
      if (lookahead == 'o') ADVANCE(61);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 24:
      if (lookahead == 'f') ADVANCE(1);
      END_STATE();
    case 25:
      if (lookahead == 'g') ADVANCE(87);
      END_STATE();
    case 26:
      if (lookahead == 'g') ADVANCE(73);
      END_STATE();
    case 27:
      if (lookahead == 'g') ADVANCE(50);
      END_STATE();
    case 28:
      if (lookahead == 'h') ADVANCE(83);
      END_STATE();
    case 29:
      if (lookahead == 'i') ADVANCE(42);
      if (lookahead == 'p') ADVANCE(84);
      END_STATE();
    case 30:
      if (lookahead == 'i') ADVANCE(12);
      END_STATE();
    case 31:
      if (lookahead == 'i') ADVANCE(49);
      END_STATE();
    case 32:
      if (lookahead == 'l') ADVANCE(81);
      END_STATE();
    case 33:
      if (lookahead == 'l') ADVANCE(77);
      END_STATE();
    case 34:
      if (lookahead == 'l') ADVANCE(95);
      END_STATE();
    case 35:
      if (lookahead == 'l') ADVANCE(32);
      END_STATE();
    case 36:
      if (lookahead == 'm') ADVANCE(51);
      END_STATE();
    case 37:
      if (lookahead == 'm') ADVANCE(23);
      END_STATE();
    case 38:
      if (lookahead == 'n') ADVANCE(82);
      END_STATE();
    case 39:
      if (lookahead == 'n') ADVANCE(80);
      END_STATE();
    case 40:
      if (lookahead == 'n') ADVANCE(14);
      END_STATE();
    case 41:
      if (lookahead == 'n') ADVANCE(58);
      END_STATE();
    case 42:
      if (lookahead == 'n') ADVANCE(69);
      END_STATE();
    case 43:
      if (lookahead == 'n') ADVANCE(64);
      END_STATE();
    case 44:
      if (lookahead == 'n') ADVANCE(65);
      END_STATE();
    case 45:
      if (lookahead == 'o') ADVANCE(60);
      if (lookahead == 't') ADVANCE(89);
      END_STATE();
    case 46:
      if (lookahead == 'o') ADVANCE(29);
      if (lookahead == 'u') ADVANCE(56);
      END_STATE();
    case 47:
      if (lookahead == 'o') ADVANCE(78);
      END_STATE();
    case 48:
      if (lookahead == 'o') ADVANCE(79);
      END_STATE();
    case 49:
      if (lookahead == 'o') ADVANCE(39);
      END_STATE();
    case 50:
      if (lookahead == 'o') ADVANCE(70);
      END_STATE();
    case 51:
      if (lookahead == 'p') ADVANCE(101);
      END_STATE();
    case 52:
      if (lookahead == 'q') ADVANCE(88);
      END_STATE();
    case 53:
      if (lookahead == 'r') ADVANCE(92);
      END_STATE();
    case 54:
      if (lookahead == 'r') ADVANCE(100);
      END_STATE();
    case 55:
      if (lookahead == 'r') ADVANCE(38);
      END_STATE();
    case 56:
      if (lookahead == 's') ADVANCE(28);
      END_STATE();
    case 57:
      if (lookahead == 's') ADVANCE(98);
      END_STATE();
    case 58:
      if (lookahead == 's') ADVANCE(68);
      END_STATE();
    case 59:
      if (lookahead == 't') ADVANCE(7);
      if (lookahead == 'u') ADVANCE(10);
      END_STATE();
    case 60:
      if (lookahead == 't') ADVANCE(47);
      END_STATE();
    case 61:
      if (lookahead == 't') ADVANCE(93);
      END_STATE();
    case 62:
      if (lookahead == 't') ADVANCE(30);
      END_STATE();
    case 63:
      if (lookahead == 't') ADVANCE(99);
      END_STATE();
    case 64:
      if (lookahead == 't') ADVANCE(94);
      END_STATE();
    case 65:
      if (lookahead == 't') ADVANCE(97);
      END_STATE();
    case 66:
      if (lookahead == 't') ADVANCE(31);
      END_STATE();
    case 67:
      if (lookahead == 't') ADVANCE(71);
      END_STATE();
    case 68:
      if (lookahead == 't') ADVANCE(9);
      END_STATE();
    case 69:
      if (lookahead == 't') ADVANCE(20);
      END_STATE();
    case 70:
      if (lookahead == 't') ADVANCE(48);
      END_STATE();
    case 71:
      if (lookahead == 'u') ADVANCE(55);
      END_STATE();
    case 72:
      if (lookahead == 'u') ADVANCE(40);
      END_STATE();
    case 73:
      if (lookahead == 'u') ADVANCE(37);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(75);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_ws);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_goto);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_if_DASHgoto);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_call);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_return);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_push);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_pop);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_add);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_sub);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_neg);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_eq);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_gt);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_lt);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_argument);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_local);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_static);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_constant);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_this);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_that);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_pointer);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_temp);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_num);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(103);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 2},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_ws] = ACTIONS(3),
    [anon_sym_label] = ACTIONS(1),
    [anon_sym_goto] = ACTIONS(1),
    [anon_sym_if_DASHgoto] = ACTIONS(1),
    [anon_sym_function] = ACTIONS(1),
    [anon_sym_call] = ACTIONS(1),
    [sym_return] = ACTIONS(1),
    [anon_sym_push] = ACTIONS(1),
    [anon_sym_pop] = ACTIONS(1),
    [anon_sym_add] = ACTIONS(1),
    [anon_sym_sub] = ACTIONS(1),
    [anon_sym_neg] = ACTIONS(1),
    [anon_sym_eq] = ACTIONS(1),
    [anon_sym_gt] = ACTIONS(1),
    [anon_sym_lt] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [anon_sym_argument] = ACTIONS(1),
    [anon_sym_local] = ACTIONS(1),
    [anon_sym_static] = ACTIONS(1),
    [anon_sym_constant] = ACTIONS(1),
    [anon_sym_this] = ACTIONS(1),
    [anon_sym_that] = ACTIONS(1),
    [anon_sym_pointer] = ACTIONS(1),
    [anon_sym_temp] = ACTIONS(1),
    [sym_num] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(13),
    [sym_command] = STATE(3),
    [sym_label] = STATE(9),
    [sym_goto] = STATE(9),
    [sym_if_goto] = STATE(9),
    [sym_function] = STATE(9),
    [sym_call] = STATE(9),
    [sym_stack_op] = STATE(9),
    [sym_arithmetic_op] = STATE(9),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_ws] = ACTIONS(3),
    [anon_sym_label] = ACTIONS(7),
    [anon_sym_goto] = ACTIONS(9),
    [anon_sym_if_DASHgoto] = ACTIONS(11),
    [anon_sym_function] = ACTIONS(13),
    [anon_sym_call] = ACTIONS(15),
    [sym_return] = ACTIONS(17),
    [anon_sym_push] = ACTIONS(19),
    [anon_sym_pop] = ACTIONS(19),
    [anon_sym_add] = ACTIONS(21),
    [anon_sym_sub] = ACTIONS(21),
    [anon_sym_neg] = ACTIONS(21),
    [anon_sym_eq] = ACTIONS(21),
    [anon_sym_gt] = ACTIONS(21),
    [anon_sym_lt] = ACTIONS(21),
    [anon_sym_and] = ACTIONS(21),
    [anon_sym_or] = ACTIONS(21),
    [anon_sym_not] = ACTIONS(21),
  },
  [2] = {
    [sym_command] = STATE(2),
    [sym_label] = STATE(9),
    [sym_goto] = STATE(9),
    [sym_if_goto] = STATE(9),
    [sym_function] = STATE(9),
    [sym_call] = STATE(9),
    [sym_stack_op] = STATE(9),
    [sym_arithmetic_op] = STATE(9),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
    [sym_ws] = ACTIONS(3),
    [anon_sym_label] = ACTIONS(25),
    [anon_sym_goto] = ACTIONS(28),
    [anon_sym_if_DASHgoto] = ACTIONS(31),
    [anon_sym_function] = ACTIONS(34),
    [anon_sym_call] = ACTIONS(37),
    [sym_return] = ACTIONS(40),
    [anon_sym_push] = ACTIONS(43),
    [anon_sym_pop] = ACTIONS(43),
    [anon_sym_add] = ACTIONS(46),
    [anon_sym_sub] = ACTIONS(46),
    [anon_sym_neg] = ACTIONS(46),
    [anon_sym_eq] = ACTIONS(46),
    [anon_sym_gt] = ACTIONS(46),
    [anon_sym_lt] = ACTIONS(46),
    [anon_sym_and] = ACTIONS(46),
    [anon_sym_or] = ACTIONS(46),
    [anon_sym_not] = ACTIONS(46),
  },
  [3] = {
    [sym_command] = STATE(2),
    [sym_label] = STATE(9),
    [sym_goto] = STATE(9),
    [sym_if_goto] = STATE(9),
    [sym_function] = STATE(9),
    [sym_call] = STATE(9),
    [sym_stack_op] = STATE(9),
    [sym_arithmetic_op] = STATE(9),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(49),
    [sym_comment] = ACTIONS(3),
    [sym_ws] = ACTIONS(3),
    [anon_sym_label] = ACTIONS(7),
    [anon_sym_goto] = ACTIONS(9),
    [anon_sym_if_DASHgoto] = ACTIONS(11),
    [anon_sym_function] = ACTIONS(13),
    [anon_sym_call] = ACTIONS(15),
    [sym_return] = ACTIONS(17),
    [anon_sym_push] = ACTIONS(19),
    [anon_sym_pop] = ACTIONS(19),
    [anon_sym_add] = ACTIONS(21),
    [anon_sym_sub] = ACTIONS(21),
    [anon_sym_neg] = ACTIONS(21),
    [anon_sym_eq] = ACTIONS(21),
    [anon_sym_gt] = ACTIONS(21),
    [anon_sym_lt] = ACTIONS(21),
    [anon_sym_and] = ACTIONS(21),
    [anon_sym_or] = ACTIONS(21),
    [anon_sym_not] = ACTIONS(21),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(51), 18,
      ts_builtin_sym_end,
      anon_sym_label,
      anon_sym_goto,
      anon_sym_if_DASHgoto,
      anon_sym_function,
      anon_sym_call,
      sym_return,
      anon_sym_push,
      anon_sym_pop,
      anon_sym_add,
      anon_sym_sub,
      anon_sym_neg,
      anon_sym_eq,
      anon_sym_gt,
      anon_sym_lt,
      anon_sym_and,
      anon_sym_or,
      anon_sym_not,
  [25] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(53), 18,
      ts_builtin_sym_end,
      anon_sym_label,
      anon_sym_goto,
      anon_sym_if_DASHgoto,
      anon_sym_function,
      anon_sym_call,
      sym_return,
      anon_sym_push,
      anon_sym_pop,
      anon_sym_add,
      anon_sym_sub,
      anon_sym_neg,
      anon_sym_eq,
      anon_sym_gt,
      anon_sym_lt,
      anon_sym_and,
      anon_sym_or,
      anon_sym_not,
  [50] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(55), 18,
      ts_builtin_sym_end,
      anon_sym_label,
      anon_sym_goto,
      anon_sym_if_DASHgoto,
      anon_sym_function,
      anon_sym_call,
      sym_return,
      anon_sym_push,
      anon_sym_pop,
      anon_sym_add,
      anon_sym_sub,
      anon_sym_neg,
      anon_sym_eq,
      anon_sym_gt,
      anon_sym_lt,
      anon_sym_and,
      anon_sym_or,
      anon_sym_not,
  [75] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(57), 18,
      ts_builtin_sym_end,
      anon_sym_label,
      anon_sym_goto,
      anon_sym_if_DASHgoto,
      anon_sym_function,
      anon_sym_call,
      sym_return,
      anon_sym_push,
      anon_sym_pop,
      anon_sym_add,
      anon_sym_sub,
      anon_sym_neg,
      anon_sym_eq,
      anon_sym_gt,
      anon_sym_lt,
      anon_sym_and,
      anon_sym_or,
      anon_sym_not,
  [100] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(59), 18,
      ts_builtin_sym_end,
      anon_sym_label,
      anon_sym_goto,
      anon_sym_if_DASHgoto,
      anon_sym_function,
      anon_sym_call,
      sym_return,
      anon_sym_push,
      anon_sym_pop,
      anon_sym_add,
      anon_sym_sub,
      anon_sym_neg,
      anon_sym_eq,
      anon_sym_gt,
      anon_sym_lt,
      anon_sym_and,
      anon_sym_or,
      anon_sym_not,
  [125] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(61), 18,
      ts_builtin_sym_end,
      anon_sym_label,
      anon_sym_goto,
      anon_sym_if_DASHgoto,
      anon_sym_function,
      anon_sym_call,
      sym_return,
      anon_sym_push,
      anon_sym_pop,
      anon_sym_add,
      anon_sym_sub,
      anon_sym_neg,
      anon_sym_eq,
      anon_sym_gt,
      anon_sym_lt,
      anon_sym_and,
      anon_sym_or,
      anon_sym_not,
  [150] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(63), 18,
      ts_builtin_sym_end,
      anon_sym_label,
      anon_sym_goto,
      anon_sym_if_DASHgoto,
      anon_sym_function,
      anon_sym_call,
      sym_return,
      anon_sym_push,
      anon_sym_pop,
      anon_sym_add,
      anon_sym_sub,
      anon_sym_neg,
      anon_sym_eq,
      anon_sym_gt,
      anon_sym_lt,
      anon_sym_and,
      anon_sym_or,
      anon_sym_not,
  [175] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(65), 18,
      ts_builtin_sym_end,
      anon_sym_label,
      anon_sym_goto,
      anon_sym_if_DASHgoto,
      anon_sym_function,
      anon_sym_call,
      sym_return,
      anon_sym_push,
      anon_sym_pop,
      anon_sym_add,
      anon_sym_sub,
      anon_sym_neg,
      anon_sym_eq,
      anon_sym_gt,
      anon_sym_lt,
      anon_sym_and,
      anon_sym_or,
      anon_sym_not,
  [200] = 3,
    STATE(18), 1,
      sym_segment,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(67), 8,
      anon_sym_argument,
      anon_sym_local,
      anon_sym_static,
      anon_sym_constant,
      anon_sym_this,
      anon_sym_that,
      anon_sym_pointer,
      anon_sym_temp,
  [218] = 2,
    ACTIONS(69), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [226] = 2,
    ACTIONS(71), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [234] = 2,
    ACTIONS(73), 1,
      sym_num,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [242] = 2,
    ACTIONS(75), 1,
      sym_num,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [250] = 2,
    ACTIONS(77), 1,
      sym_num,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [258] = 2,
    ACTIONS(79), 1,
      sym_num,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [266] = 2,
    ACTIONS(81), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [274] = 2,
    ACTIONS(83), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [282] = 2,
    ACTIONS(85), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [290] = 2,
    ACTIONS(87), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 25,
  [SMALL_STATE(6)] = 50,
  [SMALL_STATE(7)] = 75,
  [SMALL_STATE(8)] = 100,
  [SMALL_STATE(9)] = 125,
  [SMALL_STATE(10)] = 150,
  [SMALL_STATE(11)] = 175,
  [SMALL_STATE(12)] = 200,
  [SMALL_STATE(13)] = 218,
  [SMALL_STATE(14)] = 226,
  [SMALL_STATE(15)] = 234,
  [SMALL_STATE(16)] = 242,
  [SMALL_STATE(17)] = 250,
  [SMALL_STATE(18)] = 258,
  [SMALL_STATE(19)] = 266,
  [SMALL_STATE(20)] = 274,
  [SMALL_STATE(21)] = 282,
  [SMALL_STATE(22)] = 290,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(14),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(22),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(21),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(20),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(19),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(12),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_goto, 2, .production_id = 1),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stack_op, 3, .production_id = 4),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 3, .production_id = 3),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 3, .production_id = 2),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_goto, 2, .production_id = 1),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arithmetic_op, 1),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2, .production_id = 1),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [69] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_segment, 1),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_hack_vm(void) {
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
