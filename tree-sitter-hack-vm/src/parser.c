#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 11
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 29
#define ALIAS_COUNT 0
#define TOKEN_COUNT 23
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 2

enum {
  sym_comment = 1,
  sym_ws = 2,
  anon_sym_push = 3,
  anon_sym_pop = 4,
  anon_sym_add = 5,
  anon_sym_sub = 6,
  anon_sym_neg = 7,
  anon_sym_eq = 8,
  anon_sym_gt = 9,
  anon_sym_lt = 10,
  anon_sym_and = 11,
  anon_sym_or = 12,
  anon_sym_not = 13,
  anon_sym_argument = 14,
  anon_sym_local = 15,
  anon_sym_static = 16,
  anon_sym_constant = 17,
  anon_sym_this = 18,
  anon_sym_that = 19,
  anon_sym_pointer = 20,
  anon_sym_temp = 21,
  sym_num = 22,
  sym_source_file = 23,
  sym_command = 24,
  sym_stack_op = 25,
  sym_arithmetic_op = 26,
  sym_segment = 27,
  aux_sym_source_file_repeat1 = 28,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [sym_ws] = "ws",
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
  [sym_num] = "num",
  [sym_source_file] = "source_file",
  [sym_command] = "command",
  [sym_stack_op] = "stack_op",
  [sym_arithmetic_op] = "arithmetic_op",
  [sym_segment] = "segment",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_comment] = sym_comment,
  [sym_ws] = sym_ws,
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
  [sym_num] = sym_num,
  [sym_source_file] = sym_source_file,
  [sym_command] = sym_command,
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
  field_segment = 3,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_action] = "action",
  [field_index] = "index",
  [field_segment] = "segment",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(48);
      if (lookahead == '/') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(9);
      if (lookahead == 'c') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(32);
      if (lookahead == 'g') ADVANCE(38);
      if (lookahead == 'l') ADVANCE(29);
      if (lookahead == 'n') ADVANCE(14);
      if (lookahead == 'o') ADVANCE(33);
      if (lookahead == 'p') ADVANCE(30);
      if (lookahead == 's') ADVANCE(39);
      if (lookahead == 't') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      END_STATE();
    case 1:
      if (lookahead == '/') ADVANCE(49);
      END_STATE();
    case 2:
      if (lookahead == 'a') ADVANCE(21);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(41);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(42);
      if (lookahead == 'i') ADVANCE(36);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(27);
      END_STATE();
    case 6:
      if (lookahead == 'b') ADVANCE(54);
      END_STATE();
    case 7:
      if (lookahead == 'c') ADVANCE(64);
      END_STATE();
    case 8:
      if (lookahead == 'c') ADVANCE(2);
      END_STATE();
    case 9:
      if (lookahead == 'd') ADVANCE(10);
      if (lookahead == 'n') ADVANCE(11);
      if (lookahead == 'r') ADVANCE(16);
      END_STATE();
    case 10:
      if (lookahead == 'd') ADVANCE(53);
      END_STATE();
    case 11:
      if (lookahead == 'd') ADVANCE(59);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(22);
      if (lookahead == 'h') ADVANCE(4);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(17);
      if (lookahead == 'o') ADVANCE(40);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 16:
      if (lookahead == 'g') ADVANCE(47);
      END_STATE();
    case 17:
      if (lookahead == 'g') ADVANCE(55);
      END_STATE();
    case 18:
      if (lookahead == 'h') ADVANCE(51);
      END_STATE();
    case 19:
      if (lookahead == 'i') ADVANCE(25);
      if (lookahead == 'p') ADVANCE(52);
      END_STATE();
    case 20:
      if (lookahead == 'i') ADVANCE(7);
      END_STATE();
    case 21:
      if (lookahead == 'l') ADVANCE(63);
      END_STATE();
    case 22:
      if (lookahead == 'm') ADVANCE(31);
      END_STATE();
    case 23:
      if (lookahead == 'm') ADVANCE(15);
      END_STATE();
    case 24:
      if (lookahead == 'n') ADVANCE(37);
      END_STATE();
    case 25:
      if (lookahead == 'n') ADVANCE(45);
      END_STATE();
    case 26:
      if (lookahead == 'n') ADVANCE(43);
      END_STATE();
    case 27:
      if (lookahead == 'n') ADVANCE(44);
      END_STATE();
    case 28:
      if (lookahead == 'o') ADVANCE(24);
      END_STATE();
    case 29:
      if (lookahead == 'o') ADVANCE(8);
      if (lookahead == 't') ADVANCE(58);
      END_STATE();
    case 30:
      if (lookahead == 'o') ADVANCE(19);
      if (lookahead == 'u') ADVANCE(35);
      END_STATE();
    case 31:
      if (lookahead == 'p') ADVANCE(69);
      END_STATE();
    case 32:
      if (lookahead == 'q') ADVANCE(56);
      END_STATE();
    case 33:
      if (lookahead == 'r') ADVANCE(60);
      END_STATE();
    case 34:
      if (lookahead == 'r') ADVANCE(68);
      END_STATE();
    case 35:
      if (lookahead == 's') ADVANCE(18);
      END_STATE();
    case 36:
      if (lookahead == 's') ADVANCE(66);
      END_STATE();
    case 37:
      if (lookahead == 's') ADVANCE(46);
      END_STATE();
    case 38:
      if (lookahead == 't') ADVANCE(57);
      END_STATE();
    case 39:
      if (lookahead == 't') ADVANCE(3);
      if (lookahead == 'u') ADVANCE(6);
      END_STATE();
    case 40:
      if (lookahead == 't') ADVANCE(61);
      END_STATE();
    case 41:
      if (lookahead == 't') ADVANCE(20);
      END_STATE();
    case 42:
      if (lookahead == 't') ADVANCE(67);
      END_STATE();
    case 43:
      if (lookahead == 't') ADVANCE(62);
      END_STATE();
    case 44:
      if (lookahead == 't') ADVANCE(65);
      END_STATE();
    case 45:
      if (lookahead == 't') ADVANCE(13);
      END_STATE();
    case 46:
      if (lookahead == 't') ADVANCE(5);
      END_STATE();
    case 47:
      if (lookahead == 'u') ADVANCE(23);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_ws);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_push);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_pop);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_add);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_sub);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_neg);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_eq);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_gt);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_lt);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_argument);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_local);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_static);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_constant);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_this);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_that);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_pointer);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_temp);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_num);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
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
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_ws] = ACTIONS(3),
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
    [sym_source_file] = STATE(8),
    [sym_command] = STATE(2),
    [sym_stack_op] = STATE(5),
    [sym_arithmetic_op] = STATE(5),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_ws] = ACTIONS(3),
    [anon_sym_push] = ACTIONS(7),
    [anon_sym_pop] = ACTIONS(7),
    [anon_sym_add] = ACTIONS(9),
    [anon_sym_sub] = ACTIONS(9),
    [anon_sym_neg] = ACTIONS(9),
    [anon_sym_eq] = ACTIONS(9),
    [anon_sym_gt] = ACTIONS(9),
    [anon_sym_lt] = ACTIONS(9),
    [anon_sym_and] = ACTIONS(9),
    [anon_sym_or] = ACTIONS(9),
    [anon_sym_not] = ACTIONS(9),
  },
  [2] = {
    [sym_command] = STATE(3),
    [sym_stack_op] = STATE(5),
    [sym_arithmetic_op] = STATE(5),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
    [sym_ws] = ACTIONS(3),
    [anon_sym_push] = ACTIONS(7),
    [anon_sym_pop] = ACTIONS(7),
    [anon_sym_add] = ACTIONS(9),
    [anon_sym_sub] = ACTIONS(9),
    [anon_sym_neg] = ACTIONS(9),
    [anon_sym_eq] = ACTIONS(9),
    [anon_sym_gt] = ACTIONS(9),
    [anon_sym_lt] = ACTIONS(9),
    [anon_sym_and] = ACTIONS(9),
    [anon_sym_or] = ACTIONS(9),
    [anon_sym_not] = ACTIONS(9),
  },
  [3] = {
    [sym_command] = STATE(3),
    [sym_stack_op] = STATE(5),
    [sym_arithmetic_op] = STATE(5),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
    [sym_ws] = ACTIONS(3),
    [anon_sym_push] = ACTIONS(15),
    [anon_sym_pop] = ACTIONS(15),
    [anon_sym_add] = ACTIONS(18),
    [anon_sym_sub] = ACTIONS(18),
    [anon_sym_neg] = ACTIONS(18),
    [anon_sym_eq] = ACTIONS(18),
    [anon_sym_gt] = ACTIONS(18),
    [anon_sym_lt] = ACTIONS(18),
    [anon_sym_and] = ACTIONS(18),
    [anon_sym_or] = ACTIONS(18),
    [anon_sym_not] = ACTIONS(18),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(21), 12,
      ts_builtin_sym_end,
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
  [19] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(23), 12,
      ts_builtin_sym_end,
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
  [38] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(25), 12,
      ts_builtin_sym_end,
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
  [57] = 3,
    STATE(10), 1,
      sym_segment,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(27), 8,
      anon_sym_argument,
      anon_sym_local,
      anon_sym_static,
      anon_sym_constant,
      anon_sym_this,
      anon_sym_that,
      anon_sym_pointer,
      anon_sym_temp,
  [75] = 2,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [83] = 2,
    ACTIONS(31), 1,
      sym_num,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [91] = 2,
    ACTIONS(33), 1,
      sym_num,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 19,
  [SMALL_STATE(6)] = 38,
  [SMALL_STATE(7)] = 57,
  [SMALL_STATE(8)] = 75,
  [SMALL_STATE(9)] = 83,
  [SMALL_STATE(10)] = 91,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [18] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arithmetic_op, 1),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stack_op, 3, .production_id = 1),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [29] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_segment, 1),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
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
