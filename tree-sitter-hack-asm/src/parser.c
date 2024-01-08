#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 28
#define LARGE_STATE_COUNT 20
#define SYMBOL_COUNT 60
#define ALIAS_COUNT 0
#define TOKEN_COUNT 49
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 10
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 13

enum {
  sym_comment = 1,
  sym_ws = 2,
  anon_sym_LPAREN = 3,
  anon_sym_RPAREN = 4,
  anon_sym_AT = 5,
  anon_sym_EQ = 6,
  anon_sym_SEMI = 7,
  anon_sym_M = 8,
  anon_sym_D = 9,
  anon_sym_MD = 10,
  anon_sym_A = 11,
  anon_sym_AM = 12,
  anon_sym_AD = 13,
  anon_sym_AMD = 14,
  anon_sym_0 = 15,
  anon_sym_1 = 16,
  anon_sym_DASH1 = 17,
  anon_sym_BANGD = 18,
  anon_sym_BANGA = 19,
  anon_sym_DASHD = 20,
  anon_sym_DASHA = 21,
  anon_sym_D_PLUS1 = 22,
  anon_sym_A_PLUS1 = 23,
  anon_sym_D_DASH1 = 24,
  anon_sym_A_DASH1 = 25,
  anon_sym_D_PLUSA = 26,
  anon_sym_D_DASHA = 27,
  anon_sym_A_DASHD = 28,
  anon_sym_D_AMPA = 29,
  anon_sym_D_PIPEA = 30,
  anon_sym_BANGM = 31,
  anon_sym_DASHM = 32,
  anon_sym_M_PLUS1 = 33,
  anon_sym_M_DASH1 = 34,
  anon_sym_D_PLUSM = 35,
  anon_sym_D_DASHM = 36,
  anon_sym_M_DASHD = 37,
  anon_sym_D_AMPM = 38,
  anon_sym_D_PIPEM = 39,
  anon_sym_JGT = 40,
  anon_sym_JEQ = 41,
  anon_sym_JGE = 42,
  anon_sym_JLT = 43,
  anon_sym_JNE = 44,
  anon_sym_JLE = 45,
  anon_sym_JMP = 46,
  sym_ident = 47,
  sym_num = 48,
  sym_source_file = 49,
  sym_mnemonic = 50,
  sym_label = 51,
  sym_inst = 52,
  sym_ainst = 53,
  sym_cinst = 54,
  sym_dest = 55,
  sym_comp = 56,
  sym_jump = 57,
  sym_value = 58,
  aux_sym_source_file_repeat1 = 59,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [sym_ws] = "ws",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_AT] = "@",
  [anon_sym_EQ] = "=",
  [anon_sym_SEMI] = ";",
  [anon_sym_M] = "M",
  [anon_sym_D] = "D",
  [anon_sym_MD] = "MD",
  [anon_sym_A] = "A",
  [anon_sym_AM] = "AM",
  [anon_sym_AD] = "AD",
  [anon_sym_AMD] = "AMD",
  [anon_sym_0] = "0",
  [anon_sym_1] = "1",
  [anon_sym_DASH1] = "-1",
  [anon_sym_BANGD] = "!D",
  [anon_sym_BANGA] = "!A",
  [anon_sym_DASHD] = "-D",
  [anon_sym_DASHA] = "-A",
  [anon_sym_D_PLUS1] = "D+1",
  [anon_sym_A_PLUS1] = "A+1",
  [anon_sym_D_DASH1] = "D-1",
  [anon_sym_A_DASH1] = "A-1",
  [anon_sym_D_PLUSA] = "D+A",
  [anon_sym_D_DASHA] = "D-A",
  [anon_sym_A_DASHD] = "A-D",
  [anon_sym_D_AMPA] = "D&A",
  [anon_sym_D_PIPEA] = "D|A",
  [anon_sym_BANGM] = "!M",
  [anon_sym_DASHM] = "-M",
  [anon_sym_M_PLUS1] = "M+1",
  [anon_sym_M_DASH1] = "M-1",
  [anon_sym_D_PLUSM] = "D+M",
  [anon_sym_D_DASHM] = "D-M",
  [anon_sym_M_DASHD] = "M-D",
  [anon_sym_D_AMPM] = "D&M",
  [anon_sym_D_PIPEM] = "D|M",
  [anon_sym_JGT] = "JGT",
  [anon_sym_JEQ] = "JEQ",
  [anon_sym_JGE] = "JGE",
  [anon_sym_JLT] = "JLT",
  [anon_sym_JNE] = "JNE",
  [anon_sym_JLE] = "JLE",
  [anon_sym_JMP] = "JMP",
  [sym_ident] = "ident",
  [sym_num] = "num",
  [sym_source_file] = "source_file",
  [sym_mnemonic] = "mnemonic",
  [sym_label] = "label",
  [sym_inst] = "inst",
  [sym_ainst] = "ainst",
  [sym_cinst] = "cinst",
  [sym_dest] = "dest",
  [sym_comp] = "comp",
  [sym_jump] = "jump",
  [sym_value] = "value",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_comment] = sym_comment,
  [sym_ws] = sym_ws,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_M] = anon_sym_M,
  [anon_sym_D] = anon_sym_D,
  [anon_sym_MD] = anon_sym_MD,
  [anon_sym_A] = anon_sym_A,
  [anon_sym_AM] = anon_sym_AM,
  [anon_sym_AD] = anon_sym_AD,
  [anon_sym_AMD] = anon_sym_AMD,
  [anon_sym_0] = anon_sym_0,
  [anon_sym_1] = anon_sym_1,
  [anon_sym_DASH1] = anon_sym_DASH1,
  [anon_sym_BANGD] = anon_sym_BANGD,
  [anon_sym_BANGA] = anon_sym_BANGA,
  [anon_sym_DASHD] = anon_sym_DASHD,
  [anon_sym_DASHA] = anon_sym_DASHA,
  [anon_sym_D_PLUS1] = anon_sym_D_PLUS1,
  [anon_sym_A_PLUS1] = anon_sym_A_PLUS1,
  [anon_sym_D_DASH1] = anon_sym_D_DASH1,
  [anon_sym_A_DASH1] = anon_sym_A_DASH1,
  [anon_sym_D_PLUSA] = anon_sym_D_PLUSA,
  [anon_sym_D_DASHA] = anon_sym_D_DASHA,
  [anon_sym_A_DASHD] = anon_sym_A_DASHD,
  [anon_sym_D_AMPA] = anon_sym_D_AMPA,
  [anon_sym_D_PIPEA] = anon_sym_D_PIPEA,
  [anon_sym_BANGM] = anon_sym_BANGM,
  [anon_sym_DASHM] = anon_sym_DASHM,
  [anon_sym_M_PLUS1] = anon_sym_M_PLUS1,
  [anon_sym_M_DASH1] = anon_sym_M_DASH1,
  [anon_sym_D_PLUSM] = anon_sym_D_PLUSM,
  [anon_sym_D_DASHM] = anon_sym_D_DASHM,
  [anon_sym_M_DASHD] = anon_sym_M_DASHD,
  [anon_sym_D_AMPM] = anon_sym_D_AMPM,
  [anon_sym_D_PIPEM] = anon_sym_D_PIPEM,
  [anon_sym_JGT] = anon_sym_JGT,
  [anon_sym_JEQ] = anon_sym_JEQ,
  [anon_sym_JGE] = anon_sym_JGE,
  [anon_sym_JLT] = anon_sym_JLT,
  [anon_sym_JNE] = anon_sym_JNE,
  [anon_sym_JLE] = anon_sym_JLE,
  [anon_sym_JMP] = anon_sym_JMP,
  [sym_ident] = sym_ident,
  [sym_num] = sym_num,
  [sym_source_file] = sym_source_file,
  [sym_mnemonic] = sym_mnemonic,
  [sym_label] = sym_label,
  [sym_inst] = sym_inst,
  [sym_ainst] = sym_ainst,
  [sym_cinst] = sym_cinst,
  [sym_dest] = sym_dest,
  [sym_comp] = sym_comp,
  [sym_jump] = sym_jump,
  [sym_value] = sym_value,
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
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_M] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_D] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MD] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_A] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AM] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AD] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMD] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_0] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANGD] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANGA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASHD] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASHA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_D_PLUS1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_A_PLUS1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_D_DASH1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_A_DASH1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_D_PLUSA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_D_DASHA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_A_DASHD] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_D_AMPA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_D_PIPEA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANGM] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASHM] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_M_PLUS1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_M_DASH1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_D_PLUSM] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_D_DASHM] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_M_DASHD] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_D_AMPM] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_D_PIPEM] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_JGT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_JEQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_JGE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_JLT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_JNE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_JLE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_JMP] = {
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
  [sym_mnemonic] = {
    .visible = true,
    .named = true,
  },
  [sym_label] = {
    .visible = true,
    .named = true,
  },
  [sym_inst] = {
    .visible = true,
    .named = true,
  },
  [sym_ainst] = {
    .visible = true,
    .named = true,
  },
  [sym_cinst] = {
    .visible = true,
    .named = true,
  },
  [sym_dest] = {
    .visible = true,
    .named = true,
  },
  [sym_comp] = {
    .visible = true,
    .named = true,
  },
  [sym_jump] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_ainst = 1,
  field_cinst = 2,
  field_comp = 3,
  field_dest = 4,
  field_ident = 5,
  field_inst = 6,
  field_jump = 7,
  field_label = 8,
  field_num = 9,
  field_value = 10,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_ainst] = "ainst",
  [field_cinst] = "cinst",
  [field_comp] = "comp",
  [field_dest] = "dest",
  [field_ident] = "ident",
  [field_inst] = "inst",
  [field_jump] = "jump",
  [field_label] = "label",
  [field_num] = "num",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 1},
  [5] = {.index = 4, .length = 1},
  [6] = {.index = 5, .length = 1},
  [7] = {.index = 6, .length = 1},
  [8] = {.index = 7, .length = 1},
  [9] = {.index = 8, .length = 1},
  [10] = {.index = 9, .length = 2},
  [11] = {.index = 11, .length = 2},
  [12] = {.index = 13, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_label, 0},
  [1] =
    {field_inst, 0},
  [2] =
    {field_ainst, 0},
  [3] =
    {field_cinst, 0},
  [4] =
    {field_comp, 0},
  [5] =
    {field_ident, 0},
  [6] =
    {field_num, 0},
  [7] =
    {field_value, 1},
  [8] =
    {field_label, 1},
  [9] =
    {field_comp, 2},
    {field_dest, 0},
  [11] =
    {field_comp, 0},
    {field_jump, 2},
  [13] =
    {field_comp, 2},
    {field_dest, 0},
    {field_jump, 4},
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(20);
      if (lookahead == '!') ADVANCE(11);
      if (lookahead == '(') ADVANCE(23);
      if (lookahead == ')') ADVANCE(24);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '0') ADVANCE(37);
      if (lookahead == '1') ADVANCE(38);
      if (lookahead == ';') ADVANCE(27);
      if (lookahead == '=') ADVANCE(26);
      if (lookahead == '@') ADVANCE(25);
      if (lookahead == 'A') ADVANCE(33);
      if (lookahead == 'D') ADVANCE(30);
      if (lookahead == 'J') ADVANCE(14);
      if (lookahead == 'M') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(22);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(11);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '0') ADVANCE(37);
      if (lookahead == '1') ADVANCE(38);
      if (lookahead == 'A') ADVANCE(32);
      if (lookahead == 'D') ADVANCE(30);
      if (lookahead == 'M') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(22);
      END_STATE();
    case 2:
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 3:
      if (lookahead == '/') ADVANCE(21);
      END_STATE();
    case 4:
      if (lookahead == '1') ADVANCE(39);
      if (lookahead == 'A') ADVANCE(43);
      if (lookahead == 'D') ADVANCE(42);
      if (lookahead == 'M') ADVANCE(54);
      END_STATE();
    case 5:
      if (lookahead == '1') ADVANCE(45);
      END_STATE();
    case 6:
      if (lookahead == '1') ADVANCE(47);
      if (lookahead == 'D') ADVANCE(50);
      END_STATE();
    case 7:
      if (lookahead == '1') ADVANCE(44);
      if (lookahead == 'A') ADVANCE(48);
      if (lookahead == 'M') ADVANCE(57);
      END_STATE();
    case 8:
      if (lookahead == '1') ADVANCE(46);
      if (lookahead == 'A') ADVANCE(49);
      if (lookahead == 'M') ADVANCE(58);
      END_STATE();
    case 9:
      if (lookahead == '1') ADVANCE(55);
      END_STATE();
    case 10:
      if (lookahead == '1') ADVANCE(56);
      if (lookahead == 'D') ADVANCE(59);
      END_STATE();
    case 11:
      if (lookahead == 'A') ADVANCE(41);
      if (lookahead == 'D') ADVANCE(40);
      if (lookahead == 'M') ADVANCE(53);
      END_STATE();
    case 12:
      if (lookahead == 'A') ADVANCE(51);
      if (lookahead == 'M') ADVANCE(60);
      END_STATE();
    case 13:
      if (lookahead == 'A') ADVANCE(52);
      if (lookahead == 'M') ADVANCE(61);
      END_STATE();
    case 14:
      if (lookahead == 'E') ADVANCE(19);
      if (lookahead == 'G') ADVANCE(15);
      if (lookahead == 'L') ADVANCE(16);
      if (lookahead == 'M') ADVANCE(18);
      if (lookahead == 'N') ADVANCE(17);
      END_STATE();
    case 15:
      if (lookahead == 'E') ADVANCE(64);
      if (lookahead == 'T') ADVANCE(62);
      END_STATE();
    case 16:
      if (lookahead == 'E') ADVANCE(67);
      if (lookahead == 'T') ADVANCE(65);
      END_STATE();
    case 17:
      if (lookahead == 'E') ADVANCE(66);
      END_STATE();
    case 18:
      if (lookahead == 'P') ADVANCE(68);
      END_STATE();
    case 19:
      if (lookahead == 'Q') ADVANCE(63);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_ws);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_M);
      if (lookahead == '+') ADVANCE(9);
      if (lookahead == '-') ADVANCE(10);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_M);
      if (lookahead == '+') ADVANCE(9);
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == 'D') ADVANCE(31);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_D);
      if (lookahead == '&') ADVANCE(12);
      if (lookahead == '+') ADVANCE(7);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '|') ADVANCE(13);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_MD);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_A);
      if (lookahead == '+') ADVANCE(5);
      if (lookahead == '-') ADVANCE(6);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_A);
      if (lookahead == '+') ADVANCE(5);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == 'D') ADVANCE(35);
      if (lookahead == 'M') ADVANCE(34);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_AM);
      if (lookahead == 'D') ADVANCE(36);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_AD);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_AMD);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_0);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_1);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_DASH1);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_BANGD);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_BANGA);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_DASHD);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_DASHA);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_D_PLUS1);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_A_PLUS1);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_D_DASH1);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_A_DASH1);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_D_PLUSA);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_D_DASHA);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_A_DASHD);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_D_AMPA);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_D_PIPEA);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_BANGM);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_DASHM);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_M_PLUS1);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_M_DASH1);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_D_PLUSM);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_D_DASHM);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_M_DASHD);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_D_AMPM);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_D_PIPEM);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_JGT);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_JEQ);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_JGE);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_JLT);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_JNE);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_JLE);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_JMP);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
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
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_ws] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_M] = ACTIONS(1),
    [anon_sym_D] = ACTIONS(1),
    [anon_sym_MD] = ACTIONS(1),
    [anon_sym_A] = ACTIONS(1),
    [anon_sym_AM] = ACTIONS(1),
    [anon_sym_AD] = ACTIONS(1),
    [anon_sym_AMD] = ACTIONS(1),
    [anon_sym_0] = ACTIONS(1),
    [anon_sym_1] = ACTIONS(1),
    [anon_sym_DASH1] = ACTIONS(1),
    [anon_sym_BANGD] = ACTIONS(1),
    [anon_sym_BANGA] = ACTIONS(1),
    [anon_sym_DASHD] = ACTIONS(1),
    [anon_sym_DASHA] = ACTIONS(1),
    [anon_sym_D_PLUS1] = ACTIONS(1),
    [anon_sym_A_PLUS1] = ACTIONS(1),
    [anon_sym_D_DASH1] = ACTIONS(1),
    [anon_sym_A_DASH1] = ACTIONS(1),
    [anon_sym_D_PLUSA] = ACTIONS(1),
    [anon_sym_D_DASHA] = ACTIONS(1),
    [anon_sym_A_DASHD] = ACTIONS(1),
    [anon_sym_D_AMPA] = ACTIONS(1),
    [anon_sym_D_PIPEA] = ACTIONS(1),
    [anon_sym_BANGM] = ACTIONS(1),
    [anon_sym_DASHM] = ACTIONS(1),
    [anon_sym_M_PLUS1] = ACTIONS(1),
    [anon_sym_M_DASH1] = ACTIONS(1),
    [anon_sym_D_PLUSM] = ACTIONS(1),
    [anon_sym_D_DASHM] = ACTIONS(1),
    [anon_sym_M_DASHD] = ACTIONS(1),
    [anon_sym_D_AMPM] = ACTIONS(1),
    [anon_sym_D_PIPEM] = ACTIONS(1),
    [anon_sym_JGT] = ACTIONS(1),
    [anon_sym_JEQ] = ACTIONS(1),
    [anon_sym_JGE] = ACTIONS(1),
    [anon_sym_JLT] = ACTIONS(1),
    [anon_sym_JNE] = ACTIONS(1),
    [anon_sym_JLE] = ACTIONS(1),
    [anon_sym_JMP] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(26),
    [sym_mnemonic] = STATE(3),
    [sym_label] = STATE(9),
    [sym_inst] = STATE(10),
    [sym_ainst] = STATE(11),
    [sym_cinst] = STATE(12),
    [sym_dest] = STATE(23),
    [sym_comp] = STATE(5),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_ws] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_AT] = ACTIONS(9),
    [anon_sym_M] = ACTIONS(11),
    [anon_sym_D] = ACTIONS(11),
    [anon_sym_MD] = ACTIONS(13),
    [anon_sym_A] = ACTIONS(11),
    [anon_sym_AM] = ACTIONS(15),
    [anon_sym_AD] = ACTIONS(13),
    [anon_sym_AMD] = ACTIONS(13),
    [anon_sym_0] = ACTIONS(17),
    [anon_sym_1] = ACTIONS(17),
    [anon_sym_DASH1] = ACTIONS(17),
    [anon_sym_BANGD] = ACTIONS(17),
    [anon_sym_BANGA] = ACTIONS(17),
    [anon_sym_DASHD] = ACTIONS(17),
    [anon_sym_DASHA] = ACTIONS(17),
    [anon_sym_D_PLUS1] = ACTIONS(17),
    [anon_sym_A_PLUS1] = ACTIONS(17),
    [anon_sym_D_DASH1] = ACTIONS(17),
    [anon_sym_A_DASH1] = ACTIONS(17),
    [anon_sym_D_PLUSA] = ACTIONS(17),
    [anon_sym_D_DASHA] = ACTIONS(17),
    [anon_sym_A_DASHD] = ACTIONS(17),
    [anon_sym_D_AMPA] = ACTIONS(17),
    [anon_sym_D_PIPEA] = ACTIONS(17),
    [anon_sym_BANGM] = ACTIONS(17),
    [anon_sym_DASHM] = ACTIONS(17),
    [anon_sym_M_PLUS1] = ACTIONS(17),
    [anon_sym_M_DASH1] = ACTIONS(17),
    [anon_sym_D_PLUSM] = ACTIONS(17),
    [anon_sym_D_DASHM] = ACTIONS(17),
    [anon_sym_M_DASHD] = ACTIONS(17),
    [anon_sym_D_AMPM] = ACTIONS(17),
    [anon_sym_D_PIPEM] = ACTIONS(17),
  },
  [2] = {
    [sym_mnemonic] = STATE(2),
    [sym_label] = STATE(9),
    [sym_inst] = STATE(10),
    [sym_ainst] = STATE(11),
    [sym_cinst] = STATE(12),
    [sym_dest] = STATE(23),
    [sym_comp] = STATE(5),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(19),
    [sym_comment] = ACTIONS(3),
    [sym_ws] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_AT] = ACTIONS(24),
    [anon_sym_M] = ACTIONS(27),
    [anon_sym_D] = ACTIONS(27),
    [anon_sym_MD] = ACTIONS(30),
    [anon_sym_A] = ACTIONS(27),
    [anon_sym_AM] = ACTIONS(33),
    [anon_sym_AD] = ACTIONS(30),
    [anon_sym_AMD] = ACTIONS(30),
    [anon_sym_0] = ACTIONS(36),
    [anon_sym_1] = ACTIONS(36),
    [anon_sym_DASH1] = ACTIONS(36),
    [anon_sym_BANGD] = ACTIONS(36),
    [anon_sym_BANGA] = ACTIONS(36),
    [anon_sym_DASHD] = ACTIONS(36),
    [anon_sym_DASHA] = ACTIONS(36),
    [anon_sym_D_PLUS1] = ACTIONS(36),
    [anon_sym_A_PLUS1] = ACTIONS(36),
    [anon_sym_D_DASH1] = ACTIONS(36),
    [anon_sym_A_DASH1] = ACTIONS(36),
    [anon_sym_D_PLUSA] = ACTIONS(36),
    [anon_sym_D_DASHA] = ACTIONS(36),
    [anon_sym_A_DASHD] = ACTIONS(36),
    [anon_sym_D_AMPA] = ACTIONS(36),
    [anon_sym_D_PIPEA] = ACTIONS(36),
    [anon_sym_BANGM] = ACTIONS(36),
    [anon_sym_DASHM] = ACTIONS(36),
    [anon_sym_M_PLUS1] = ACTIONS(36),
    [anon_sym_M_DASH1] = ACTIONS(36),
    [anon_sym_D_PLUSM] = ACTIONS(36),
    [anon_sym_D_DASHM] = ACTIONS(36),
    [anon_sym_M_DASHD] = ACTIONS(36),
    [anon_sym_D_AMPM] = ACTIONS(36),
    [anon_sym_D_PIPEM] = ACTIONS(36),
  },
  [3] = {
    [sym_mnemonic] = STATE(2),
    [sym_label] = STATE(9),
    [sym_inst] = STATE(10),
    [sym_ainst] = STATE(11),
    [sym_cinst] = STATE(12),
    [sym_dest] = STATE(23),
    [sym_comp] = STATE(5),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(39),
    [sym_comment] = ACTIONS(3),
    [sym_ws] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_AT] = ACTIONS(9),
    [anon_sym_M] = ACTIONS(11),
    [anon_sym_D] = ACTIONS(11),
    [anon_sym_MD] = ACTIONS(13),
    [anon_sym_A] = ACTIONS(11),
    [anon_sym_AM] = ACTIONS(15),
    [anon_sym_AD] = ACTIONS(13),
    [anon_sym_AMD] = ACTIONS(13),
    [anon_sym_0] = ACTIONS(17),
    [anon_sym_1] = ACTIONS(17),
    [anon_sym_DASH1] = ACTIONS(17),
    [anon_sym_BANGD] = ACTIONS(17),
    [anon_sym_BANGA] = ACTIONS(17),
    [anon_sym_DASHD] = ACTIONS(17),
    [anon_sym_DASHA] = ACTIONS(17),
    [anon_sym_D_PLUS1] = ACTIONS(17),
    [anon_sym_A_PLUS1] = ACTIONS(17),
    [anon_sym_D_DASH1] = ACTIONS(17),
    [anon_sym_A_DASH1] = ACTIONS(17),
    [anon_sym_D_PLUSA] = ACTIONS(17),
    [anon_sym_D_DASHA] = ACTIONS(17),
    [anon_sym_A_DASHD] = ACTIONS(17),
    [anon_sym_D_AMPA] = ACTIONS(17),
    [anon_sym_D_PIPEA] = ACTIONS(17),
    [anon_sym_BANGM] = ACTIONS(17),
    [anon_sym_DASHM] = ACTIONS(17),
    [anon_sym_M_PLUS1] = ACTIONS(17),
    [anon_sym_M_DASH1] = ACTIONS(17),
    [anon_sym_D_PLUSM] = ACTIONS(17),
    [anon_sym_D_DASHM] = ACTIONS(17),
    [anon_sym_M_DASHD] = ACTIONS(17),
    [anon_sym_D_AMPM] = ACTIONS(17),
    [anon_sym_D_PIPEM] = ACTIONS(17),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(41),
    [sym_comment] = ACTIONS(3),
    [sym_ws] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(41),
    [anon_sym_AT] = ACTIONS(41),
    [anon_sym_EQ] = ACTIONS(43),
    [anon_sym_SEMI] = ACTIONS(41),
    [anon_sym_M] = ACTIONS(45),
    [anon_sym_D] = ACTIONS(45),
    [anon_sym_MD] = ACTIONS(41),
    [anon_sym_A] = ACTIONS(45),
    [anon_sym_AM] = ACTIONS(45),
    [anon_sym_AD] = ACTIONS(41),
    [anon_sym_AMD] = ACTIONS(41),
    [anon_sym_0] = ACTIONS(41),
    [anon_sym_1] = ACTIONS(41),
    [anon_sym_DASH1] = ACTIONS(41),
    [anon_sym_BANGD] = ACTIONS(41),
    [anon_sym_BANGA] = ACTIONS(41),
    [anon_sym_DASHD] = ACTIONS(41),
    [anon_sym_DASHA] = ACTIONS(41),
    [anon_sym_D_PLUS1] = ACTIONS(41),
    [anon_sym_A_PLUS1] = ACTIONS(41),
    [anon_sym_D_DASH1] = ACTIONS(41),
    [anon_sym_A_DASH1] = ACTIONS(41),
    [anon_sym_D_PLUSA] = ACTIONS(41),
    [anon_sym_D_DASHA] = ACTIONS(41),
    [anon_sym_A_DASHD] = ACTIONS(41),
    [anon_sym_D_AMPA] = ACTIONS(41),
    [anon_sym_D_PIPEA] = ACTIONS(41),
    [anon_sym_BANGM] = ACTIONS(41),
    [anon_sym_DASHM] = ACTIONS(41),
    [anon_sym_M_PLUS1] = ACTIONS(41),
    [anon_sym_M_DASH1] = ACTIONS(41),
    [anon_sym_D_PLUSM] = ACTIONS(41),
    [anon_sym_D_DASHM] = ACTIONS(41),
    [anon_sym_M_DASHD] = ACTIONS(41),
    [anon_sym_D_AMPM] = ACTIONS(41),
    [anon_sym_D_PIPEM] = ACTIONS(41),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(47),
    [sym_comment] = ACTIONS(3),
    [sym_ws] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(47),
    [anon_sym_AT] = ACTIONS(47),
    [anon_sym_SEMI] = ACTIONS(49),
    [anon_sym_M] = ACTIONS(51),
    [anon_sym_D] = ACTIONS(51),
    [anon_sym_MD] = ACTIONS(47),
    [anon_sym_A] = ACTIONS(51),
    [anon_sym_AM] = ACTIONS(51),
    [anon_sym_AD] = ACTIONS(47),
    [anon_sym_AMD] = ACTIONS(47),
    [anon_sym_0] = ACTIONS(47),
    [anon_sym_1] = ACTIONS(47),
    [anon_sym_DASH1] = ACTIONS(47),
    [anon_sym_BANGD] = ACTIONS(47),
    [anon_sym_BANGA] = ACTIONS(47),
    [anon_sym_DASHD] = ACTIONS(47),
    [anon_sym_DASHA] = ACTIONS(47),
    [anon_sym_D_PLUS1] = ACTIONS(47),
    [anon_sym_A_PLUS1] = ACTIONS(47),
    [anon_sym_D_DASH1] = ACTIONS(47),
    [anon_sym_A_DASH1] = ACTIONS(47),
    [anon_sym_D_PLUSA] = ACTIONS(47),
    [anon_sym_D_DASHA] = ACTIONS(47),
    [anon_sym_A_DASHD] = ACTIONS(47),
    [anon_sym_D_AMPA] = ACTIONS(47),
    [anon_sym_D_PIPEA] = ACTIONS(47),
    [anon_sym_BANGM] = ACTIONS(47),
    [anon_sym_DASHM] = ACTIONS(47),
    [anon_sym_M_PLUS1] = ACTIONS(47),
    [anon_sym_M_DASH1] = ACTIONS(47),
    [anon_sym_D_PLUSM] = ACTIONS(47),
    [anon_sym_D_DASHM] = ACTIONS(47),
    [anon_sym_M_DASHD] = ACTIONS(47),
    [anon_sym_D_AMPM] = ACTIONS(47),
    [anon_sym_D_PIPEM] = ACTIONS(47),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(53),
    [sym_comment] = ACTIONS(3),
    [sym_ws] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(53),
    [anon_sym_AT] = ACTIONS(53),
    [anon_sym_SEMI] = ACTIONS(55),
    [anon_sym_M] = ACTIONS(57),
    [anon_sym_D] = ACTIONS(57),
    [anon_sym_MD] = ACTIONS(53),
    [anon_sym_A] = ACTIONS(57),
    [anon_sym_AM] = ACTIONS(57),
    [anon_sym_AD] = ACTIONS(53),
    [anon_sym_AMD] = ACTIONS(53),
    [anon_sym_0] = ACTIONS(53),
    [anon_sym_1] = ACTIONS(53),
    [anon_sym_DASH1] = ACTIONS(53),
    [anon_sym_BANGD] = ACTIONS(53),
    [anon_sym_BANGA] = ACTIONS(53),
    [anon_sym_DASHD] = ACTIONS(53),
    [anon_sym_DASHA] = ACTIONS(53),
    [anon_sym_D_PLUS1] = ACTIONS(53),
    [anon_sym_A_PLUS1] = ACTIONS(53),
    [anon_sym_D_DASH1] = ACTIONS(53),
    [anon_sym_A_DASH1] = ACTIONS(53),
    [anon_sym_D_PLUSA] = ACTIONS(53),
    [anon_sym_D_DASHA] = ACTIONS(53),
    [anon_sym_A_DASHD] = ACTIONS(53),
    [anon_sym_D_AMPA] = ACTIONS(53),
    [anon_sym_D_PIPEA] = ACTIONS(53),
    [anon_sym_BANGM] = ACTIONS(53),
    [anon_sym_DASHM] = ACTIONS(53),
    [anon_sym_M_PLUS1] = ACTIONS(53),
    [anon_sym_M_DASH1] = ACTIONS(53),
    [anon_sym_D_PLUSM] = ACTIONS(53),
    [anon_sym_D_DASHM] = ACTIONS(53),
    [anon_sym_M_DASHD] = ACTIONS(53),
    [anon_sym_D_AMPM] = ACTIONS(53),
    [anon_sym_D_PIPEM] = ACTIONS(53),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(41),
    [sym_comment] = ACTIONS(3),
    [sym_ws] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(41),
    [anon_sym_AT] = ACTIONS(41),
    [anon_sym_SEMI] = ACTIONS(41),
    [anon_sym_M] = ACTIONS(45),
    [anon_sym_D] = ACTIONS(45),
    [anon_sym_MD] = ACTIONS(41),
    [anon_sym_A] = ACTIONS(45),
    [anon_sym_AM] = ACTIONS(45),
    [anon_sym_AD] = ACTIONS(41),
    [anon_sym_AMD] = ACTIONS(41),
    [anon_sym_0] = ACTIONS(41),
    [anon_sym_1] = ACTIONS(41),
    [anon_sym_DASH1] = ACTIONS(41),
    [anon_sym_BANGD] = ACTIONS(41),
    [anon_sym_BANGA] = ACTIONS(41),
    [anon_sym_DASHD] = ACTIONS(41),
    [anon_sym_DASHA] = ACTIONS(41),
    [anon_sym_D_PLUS1] = ACTIONS(41),
    [anon_sym_A_PLUS1] = ACTIONS(41),
    [anon_sym_D_DASH1] = ACTIONS(41),
    [anon_sym_A_DASH1] = ACTIONS(41),
    [anon_sym_D_PLUSA] = ACTIONS(41),
    [anon_sym_D_DASHA] = ACTIONS(41),
    [anon_sym_A_DASHD] = ACTIONS(41),
    [anon_sym_D_AMPA] = ACTIONS(41),
    [anon_sym_D_PIPEA] = ACTIONS(41),
    [anon_sym_BANGM] = ACTIONS(41),
    [anon_sym_DASHM] = ACTIONS(41),
    [anon_sym_M_PLUS1] = ACTIONS(41),
    [anon_sym_M_DASH1] = ACTIONS(41),
    [anon_sym_D_PLUSM] = ACTIONS(41),
    [anon_sym_D_DASHM] = ACTIONS(41),
    [anon_sym_M_DASHD] = ACTIONS(41),
    [anon_sym_D_AMPM] = ACTIONS(41),
    [anon_sym_D_PIPEM] = ACTIONS(41),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(59),
    [sym_comment] = ACTIONS(3),
    [sym_ws] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(59),
    [anon_sym_AT] = ACTIONS(59),
    [anon_sym_M] = ACTIONS(61),
    [anon_sym_D] = ACTIONS(61),
    [anon_sym_MD] = ACTIONS(59),
    [anon_sym_A] = ACTIONS(61),
    [anon_sym_AM] = ACTIONS(61),
    [anon_sym_AD] = ACTIONS(59),
    [anon_sym_AMD] = ACTIONS(59),
    [anon_sym_0] = ACTIONS(59),
    [anon_sym_1] = ACTIONS(59),
    [anon_sym_DASH1] = ACTIONS(59),
    [anon_sym_BANGD] = ACTIONS(59),
    [anon_sym_BANGA] = ACTIONS(59),
    [anon_sym_DASHD] = ACTIONS(59),
    [anon_sym_DASHA] = ACTIONS(59),
    [anon_sym_D_PLUS1] = ACTIONS(59),
    [anon_sym_A_PLUS1] = ACTIONS(59),
    [anon_sym_D_DASH1] = ACTIONS(59),
    [anon_sym_A_DASH1] = ACTIONS(59),
    [anon_sym_D_PLUSA] = ACTIONS(59),
    [anon_sym_D_DASHA] = ACTIONS(59),
    [anon_sym_A_DASHD] = ACTIONS(59),
    [anon_sym_D_AMPA] = ACTIONS(59),
    [anon_sym_D_PIPEA] = ACTIONS(59),
    [anon_sym_BANGM] = ACTIONS(59),
    [anon_sym_DASHM] = ACTIONS(59),
    [anon_sym_M_PLUS1] = ACTIONS(59),
    [anon_sym_M_DASH1] = ACTIONS(59),
    [anon_sym_D_PLUSM] = ACTIONS(59),
    [anon_sym_D_DASHM] = ACTIONS(59),
    [anon_sym_M_DASHD] = ACTIONS(59),
    [anon_sym_D_AMPM] = ACTIONS(59),
    [anon_sym_D_PIPEM] = ACTIONS(59),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(63),
    [sym_comment] = ACTIONS(3),
    [sym_ws] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(63),
    [anon_sym_AT] = ACTIONS(63),
    [anon_sym_M] = ACTIONS(65),
    [anon_sym_D] = ACTIONS(65),
    [anon_sym_MD] = ACTIONS(63),
    [anon_sym_A] = ACTIONS(65),
    [anon_sym_AM] = ACTIONS(65),
    [anon_sym_AD] = ACTIONS(63),
    [anon_sym_AMD] = ACTIONS(63),
    [anon_sym_0] = ACTIONS(63),
    [anon_sym_1] = ACTIONS(63),
    [anon_sym_DASH1] = ACTIONS(63),
    [anon_sym_BANGD] = ACTIONS(63),
    [anon_sym_BANGA] = ACTIONS(63),
    [anon_sym_DASHD] = ACTIONS(63),
    [anon_sym_DASHA] = ACTIONS(63),
    [anon_sym_D_PLUS1] = ACTIONS(63),
    [anon_sym_A_PLUS1] = ACTIONS(63),
    [anon_sym_D_DASH1] = ACTIONS(63),
    [anon_sym_A_DASH1] = ACTIONS(63),
    [anon_sym_D_PLUSA] = ACTIONS(63),
    [anon_sym_D_DASHA] = ACTIONS(63),
    [anon_sym_A_DASHD] = ACTIONS(63),
    [anon_sym_D_AMPA] = ACTIONS(63),
    [anon_sym_D_PIPEA] = ACTIONS(63),
    [anon_sym_BANGM] = ACTIONS(63),
    [anon_sym_DASHM] = ACTIONS(63),
    [anon_sym_M_PLUS1] = ACTIONS(63),
    [anon_sym_M_DASH1] = ACTIONS(63),
    [anon_sym_D_PLUSM] = ACTIONS(63),
    [anon_sym_D_DASHM] = ACTIONS(63),
    [anon_sym_M_DASHD] = ACTIONS(63),
    [anon_sym_D_AMPM] = ACTIONS(63),
    [anon_sym_D_PIPEM] = ACTIONS(63),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(67),
    [sym_comment] = ACTIONS(3),
    [sym_ws] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(67),
    [anon_sym_AT] = ACTIONS(67),
    [anon_sym_M] = ACTIONS(69),
    [anon_sym_D] = ACTIONS(69),
    [anon_sym_MD] = ACTIONS(67),
    [anon_sym_A] = ACTIONS(69),
    [anon_sym_AM] = ACTIONS(69),
    [anon_sym_AD] = ACTIONS(67),
    [anon_sym_AMD] = ACTIONS(67),
    [anon_sym_0] = ACTIONS(67),
    [anon_sym_1] = ACTIONS(67),
    [anon_sym_DASH1] = ACTIONS(67),
    [anon_sym_BANGD] = ACTIONS(67),
    [anon_sym_BANGA] = ACTIONS(67),
    [anon_sym_DASHD] = ACTIONS(67),
    [anon_sym_DASHA] = ACTIONS(67),
    [anon_sym_D_PLUS1] = ACTIONS(67),
    [anon_sym_A_PLUS1] = ACTIONS(67),
    [anon_sym_D_DASH1] = ACTIONS(67),
    [anon_sym_A_DASH1] = ACTIONS(67),
    [anon_sym_D_PLUSA] = ACTIONS(67),
    [anon_sym_D_DASHA] = ACTIONS(67),
    [anon_sym_A_DASHD] = ACTIONS(67),
    [anon_sym_D_AMPA] = ACTIONS(67),
    [anon_sym_D_PIPEA] = ACTIONS(67),
    [anon_sym_BANGM] = ACTIONS(67),
    [anon_sym_DASHM] = ACTIONS(67),
    [anon_sym_M_PLUS1] = ACTIONS(67),
    [anon_sym_M_DASH1] = ACTIONS(67),
    [anon_sym_D_PLUSM] = ACTIONS(67),
    [anon_sym_D_DASHM] = ACTIONS(67),
    [anon_sym_M_DASHD] = ACTIONS(67),
    [anon_sym_D_AMPM] = ACTIONS(67),
    [anon_sym_D_PIPEM] = ACTIONS(67),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(71),
    [sym_comment] = ACTIONS(3),
    [sym_ws] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(71),
    [anon_sym_AT] = ACTIONS(71),
    [anon_sym_M] = ACTIONS(73),
    [anon_sym_D] = ACTIONS(73),
    [anon_sym_MD] = ACTIONS(71),
    [anon_sym_A] = ACTIONS(73),
    [anon_sym_AM] = ACTIONS(73),
    [anon_sym_AD] = ACTIONS(71),
    [anon_sym_AMD] = ACTIONS(71),
    [anon_sym_0] = ACTIONS(71),
    [anon_sym_1] = ACTIONS(71),
    [anon_sym_DASH1] = ACTIONS(71),
    [anon_sym_BANGD] = ACTIONS(71),
    [anon_sym_BANGA] = ACTIONS(71),
    [anon_sym_DASHD] = ACTIONS(71),
    [anon_sym_DASHA] = ACTIONS(71),
    [anon_sym_D_PLUS1] = ACTIONS(71),
    [anon_sym_A_PLUS1] = ACTIONS(71),
    [anon_sym_D_DASH1] = ACTIONS(71),
    [anon_sym_A_DASH1] = ACTIONS(71),
    [anon_sym_D_PLUSA] = ACTIONS(71),
    [anon_sym_D_DASHA] = ACTIONS(71),
    [anon_sym_A_DASHD] = ACTIONS(71),
    [anon_sym_D_AMPA] = ACTIONS(71),
    [anon_sym_D_PIPEA] = ACTIONS(71),
    [anon_sym_BANGM] = ACTIONS(71),
    [anon_sym_DASHM] = ACTIONS(71),
    [anon_sym_M_PLUS1] = ACTIONS(71),
    [anon_sym_M_DASH1] = ACTIONS(71),
    [anon_sym_D_PLUSM] = ACTIONS(71),
    [anon_sym_D_DASHM] = ACTIONS(71),
    [anon_sym_M_DASHD] = ACTIONS(71),
    [anon_sym_D_AMPM] = ACTIONS(71),
    [anon_sym_D_PIPEM] = ACTIONS(71),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(75),
    [sym_comment] = ACTIONS(3),
    [sym_ws] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(75),
    [anon_sym_AT] = ACTIONS(75),
    [anon_sym_M] = ACTIONS(77),
    [anon_sym_D] = ACTIONS(77),
    [anon_sym_MD] = ACTIONS(75),
    [anon_sym_A] = ACTIONS(77),
    [anon_sym_AM] = ACTIONS(77),
    [anon_sym_AD] = ACTIONS(75),
    [anon_sym_AMD] = ACTIONS(75),
    [anon_sym_0] = ACTIONS(75),
    [anon_sym_1] = ACTIONS(75),
    [anon_sym_DASH1] = ACTIONS(75),
    [anon_sym_BANGD] = ACTIONS(75),
    [anon_sym_BANGA] = ACTIONS(75),
    [anon_sym_DASHD] = ACTIONS(75),
    [anon_sym_DASHA] = ACTIONS(75),
    [anon_sym_D_PLUS1] = ACTIONS(75),
    [anon_sym_A_PLUS1] = ACTIONS(75),
    [anon_sym_D_DASH1] = ACTIONS(75),
    [anon_sym_A_DASH1] = ACTIONS(75),
    [anon_sym_D_PLUSA] = ACTIONS(75),
    [anon_sym_D_DASHA] = ACTIONS(75),
    [anon_sym_A_DASHD] = ACTIONS(75),
    [anon_sym_D_AMPA] = ACTIONS(75),
    [anon_sym_D_PIPEA] = ACTIONS(75),
    [anon_sym_BANGM] = ACTIONS(75),
    [anon_sym_DASHM] = ACTIONS(75),
    [anon_sym_M_PLUS1] = ACTIONS(75),
    [anon_sym_M_DASH1] = ACTIONS(75),
    [anon_sym_D_PLUSM] = ACTIONS(75),
    [anon_sym_D_DASHM] = ACTIONS(75),
    [anon_sym_M_DASHD] = ACTIONS(75),
    [anon_sym_D_AMPM] = ACTIONS(75),
    [anon_sym_D_PIPEM] = ACTIONS(75),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(79),
    [sym_comment] = ACTIONS(3),
    [sym_ws] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(79),
    [anon_sym_AT] = ACTIONS(79),
    [anon_sym_M] = ACTIONS(81),
    [anon_sym_D] = ACTIONS(81),
    [anon_sym_MD] = ACTIONS(79),
    [anon_sym_A] = ACTIONS(81),
    [anon_sym_AM] = ACTIONS(81),
    [anon_sym_AD] = ACTIONS(79),
    [anon_sym_AMD] = ACTIONS(79),
    [anon_sym_0] = ACTIONS(79),
    [anon_sym_1] = ACTIONS(79),
    [anon_sym_DASH1] = ACTIONS(79),
    [anon_sym_BANGD] = ACTIONS(79),
    [anon_sym_BANGA] = ACTIONS(79),
    [anon_sym_DASHD] = ACTIONS(79),
    [anon_sym_DASHA] = ACTIONS(79),
    [anon_sym_D_PLUS1] = ACTIONS(79),
    [anon_sym_A_PLUS1] = ACTIONS(79),
    [anon_sym_D_DASH1] = ACTIONS(79),
    [anon_sym_A_DASH1] = ACTIONS(79),
    [anon_sym_D_PLUSA] = ACTIONS(79),
    [anon_sym_D_DASHA] = ACTIONS(79),
    [anon_sym_A_DASHD] = ACTIONS(79),
    [anon_sym_D_AMPA] = ACTIONS(79),
    [anon_sym_D_PIPEA] = ACTIONS(79),
    [anon_sym_BANGM] = ACTIONS(79),
    [anon_sym_DASHM] = ACTIONS(79),
    [anon_sym_M_PLUS1] = ACTIONS(79),
    [anon_sym_M_DASH1] = ACTIONS(79),
    [anon_sym_D_PLUSM] = ACTIONS(79),
    [anon_sym_D_DASHM] = ACTIONS(79),
    [anon_sym_M_DASHD] = ACTIONS(79),
    [anon_sym_D_AMPM] = ACTIONS(79),
    [anon_sym_D_PIPEM] = ACTIONS(79),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(83),
    [sym_comment] = ACTIONS(3),
    [sym_ws] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(83),
    [anon_sym_AT] = ACTIONS(83),
    [anon_sym_M] = ACTIONS(85),
    [anon_sym_D] = ACTIONS(85),
    [anon_sym_MD] = ACTIONS(83),
    [anon_sym_A] = ACTIONS(85),
    [anon_sym_AM] = ACTIONS(85),
    [anon_sym_AD] = ACTIONS(83),
    [anon_sym_AMD] = ACTIONS(83),
    [anon_sym_0] = ACTIONS(83),
    [anon_sym_1] = ACTIONS(83),
    [anon_sym_DASH1] = ACTIONS(83),
    [anon_sym_BANGD] = ACTIONS(83),
    [anon_sym_BANGA] = ACTIONS(83),
    [anon_sym_DASHD] = ACTIONS(83),
    [anon_sym_DASHA] = ACTIONS(83),
    [anon_sym_D_PLUS1] = ACTIONS(83),
    [anon_sym_A_PLUS1] = ACTIONS(83),
    [anon_sym_D_DASH1] = ACTIONS(83),
    [anon_sym_A_DASH1] = ACTIONS(83),
    [anon_sym_D_PLUSA] = ACTIONS(83),
    [anon_sym_D_DASHA] = ACTIONS(83),
    [anon_sym_A_DASHD] = ACTIONS(83),
    [anon_sym_D_AMPA] = ACTIONS(83),
    [anon_sym_D_PIPEA] = ACTIONS(83),
    [anon_sym_BANGM] = ACTIONS(83),
    [anon_sym_DASHM] = ACTIONS(83),
    [anon_sym_M_PLUS1] = ACTIONS(83),
    [anon_sym_M_DASH1] = ACTIONS(83),
    [anon_sym_D_PLUSM] = ACTIONS(83),
    [anon_sym_D_DASHM] = ACTIONS(83),
    [anon_sym_M_DASHD] = ACTIONS(83),
    [anon_sym_D_AMPM] = ACTIONS(83),
    [anon_sym_D_PIPEM] = ACTIONS(83),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(87),
    [sym_comment] = ACTIONS(3),
    [sym_ws] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(87),
    [anon_sym_AT] = ACTIONS(87),
    [anon_sym_M] = ACTIONS(89),
    [anon_sym_D] = ACTIONS(89),
    [anon_sym_MD] = ACTIONS(87),
    [anon_sym_A] = ACTIONS(89),
    [anon_sym_AM] = ACTIONS(89),
    [anon_sym_AD] = ACTIONS(87),
    [anon_sym_AMD] = ACTIONS(87),
    [anon_sym_0] = ACTIONS(87),
    [anon_sym_1] = ACTIONS(87),
    [anon_sym_DASH1] = ACTIONS(87),
    [anon_sym_BANGD] = ACTIONS(87),
    [anon_sym_BANGA] = ACTIONS(87),
    [anon_sym_DASHD] = ACTIONS(87),
    [anon_sym_DASHA] = ACTIONS(87),
    [anon_sym_D_PLUS1] = ACTIONS(87),
    [anon_sym_A_PLUS1] = ACTIONS(87),
    [anon_sym_D_DASH1] = ACTIONS(87),
    [anon_sym_A_DASH1] = ACTIONS(87),
    [anon_sym_D_PLUSA] = ACTIONS(87),
    [anon_sym_D_DASHA] = ACTIONS(87),
    [anon_sym_A_DASHD] = ACTIONS(87),
    [anon_sym_D_AMPA] = ACTIONS(87),
    [anon_sym_D_PIPEA] = ACTIONS(87),
    [anon_sym_BANGM] = ACTIONS(87),
    [anon_sym_DASHM] = ACTIONS(87),
    [anon_sym_M_PLUS1] = ACTIONS(87),
    [anon_sym_M_DASH1] = ACTIONS(87),
    [anon_sym_D_PLUSM] = ACTIONS(87),
    [anon_sym_D_DASHM] = ACTIONS(87),
    [anon_sym_M_DASHD] = ACTIONS(87),
    [anon_sym_D_AMPM] = ACTIONS(87),
    [anon_sym_D_PIPEM] = ACTIONS(87),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(91),
    [sym_comment] = ACTIONS(3),
    [sym_ws] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(91),
    [anon_sym_AT] = ACTIONS(91),
    [anon_sym_M] = ACTIONS(93),
    [anon_sym_D] = ACTIONS(93),
    [anon_sym_MD] = ACTIONS(91),
    [anon_sym_A] = ACTIONS(93),
    [anon_sym_AM] = ACTIONS(93),
    [anon_sym_AD] = ACTIONS(91),
    [anon_sym_AMD] = ACTIONS(91),
    [anon_sym_0] = ACTIONS(91),
    [anon_sym_1] = ACTIONS(91),
    [anon_sym_DASH1] = ACTIONS(91),
    [anon_sym_BANGD] = ACTIONS(91),
    [anon_sym_BANGA] = ACTIONS(91),
    [anon_sym_DASHD] = ACTIONS(91),
    [anon_sym_DASHA] = ACTIONS(91),
    [anon_sym_D_PLUS1] = ACTIONS(91),
    [anon_sym_A_PLUS1] = ACTIONS(91),
    [anon_sym_D_DASH1] = ACTIONS(91),
    [anon_sym_A_DASH1] = ACTIONS(91),
    [anon_sym_D_PLUSA] = ACTIONS(91),
    [anon_sym_D_DASHA] = ACTIONS(91),
    [anon_sym_A_DASHD] = ACTIONS(91),
    [anon_sym_D_AMPA] = ACTIONS(91),
    [anon_sym_D_PIPEA] = ACTIONS(91),
    [anon_sym_BANGM] = ACTIONS(91),
    [anon_sym_DASHM] = ACTIONS(91),
    [anon_sym_M_PLUS1] = ACTIONS(91),
    [anon_sym_M_DASH1] = ACTIONS(91),
    [anon_sym_D_PLUSM] = ACTIONS(91),
    [anon_sym_D_DASHM] = ACTIONS(91),
    [anon_sym_M_DASHD] = ACTIONS(91),
    [anon_sym_D_AMPM] = ACTIONS(91),
    [anon_sym_D_PIPEM] = ACTIONS(91),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(95),
    [sym_comment] = ACTIONS(3),
    [sym_ws] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(95),
    [anon_sym_AT] = ACTIONS(95),
    [anon_sym_M] = ACTIONS(97),
    [anon_sym_D] = ACTIONS(97),
    [anon_sym_MD] = ACTIONS(95),
    [anon_sym_A] = ACTIONS(97),
    [anon_sym_AM] = ACTIONS(97),
    [anon_sym_AD] = ACTIONS(95),
    [anon_sym_AMD] = ACTIONS(95),
    [anon_sym_0] = ACTIONS(95),
    [anon_sym_1] = ACTIONS(95),
    [anon_sym_DASH1] = ACTIONS(95),
    [anon_sym_BANGD] = ACTIONS(95),
    [anon_sym_BANGA] = ACTIONS(95),
    [anon_sym_DASHD] = ACTIONS(95),
    [anon_sym_DASHA] = ACTIONS(95),
    [anon_sym_D_PLUS1] = ACTIONS(95),
    [anon_sym_A_PLUS1] = ACTIONS(95),
    [anon_sym_D_DASH1] = ACTIONS(95),
    [anon_sym_A_DASH1] = ACTIONS(95),
    [anon_sym_D_PLUSA] = ACTIONS(95),
    [anon_sym_D_DASHA] = ACTIONS(95),
    [anon_sym_A_DASHD] = ACTIONS(95),
    [anon_sym_D_AMPA] = ACTIONS(95),
    [anon_sym_D_PIPEA] = ACTIONS(95),
    [anon_sym_BANGM] = ACTIONS(95),
    [anon_sym_DASHM] = ACTIONS(95),
    [anon_sym_M_PLUS1] = ACTIONS(95),
    [anon_sym_M_DASH1] = ACTIONS(95),
    [anon_sym_D_PLUSM] = ACTIONS(95),
    [anon_sym_D_DASHM] = ACTIONS(95),
    [anon_sym_M_DASHD] = ACTIONS(95),
    [anon_sym_D_AMPM] = ACTIONS(95),
    [anon_sym_D_PIPEM] = ACTIONS(95),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(99),
    [sym_comment] = ACTIONS(3),
    [sym_ws] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(99),
    [anon_sym_AT] = ACTIONS(99),
    [anon_sym_M] = ACTIONS(101),
    [anon_sym_D] = ACTIONS(101),
    [anon_sym_MD] = ACTIONS(99),
    [anon_sym_A] = ACTIONS(101),
    [anon_sym_AM] = ACTIONS(101),
    [anon_sym_AD] = ACTIONS(99),
    [anon_sym_AMD] = ACTIONS(99),
    [anon_sym_0] = ACTIONS(99),
    [anon_sym_1] = ACTIONS(99),
    [anon_sym_DASH1] = ACTIONS(99),
    [anon_sym_BANGD] = ACTIONS(99),
    [anon_sym_BANGA] = ACTIONS(99),
    [anon_sym_DASHD] = ACTIONS(99),
    [anon_sym_DASHA] = ACTIONS(99),
    [anon_sym_D_PLUS1] = ACTIONS(99),
    [anon_sym_A_PLUS1] = ACTIONS(99),
    [anon_sym_D_DASH1] = ACTIONS(99),
    [anon_sym_A_DASH1] = ACTIONS(99),
    [anon_sym_D_PLUSA] = ACTIONS(99),
    [anon_sym_D_DASHA] = ACTIONS(99),
    [anon_sym_A_DASHD] = ACTIONS(99),
    [anon_sym_D_AMPA] = ACTIONS(99),
    [anon_sym_D_PIPEA] = ACTIONS(99),
    [anon_sym_BANGM] = ACTIONS(99),
    [anon_sym_DASHM] = ACTIONS(99),
    [anon_sym_M_PLUS1] = ACTIONS(99),
    [anon_sym_M_DASH1] = ACTIONS(99),
    [anon_sym_D_PLUSM] = ACTIONS(99),
    [anon_sym_D_DASHM] = ACTIONS(99),
    [anon_sym_M_DASHD] = ACTIONS(99),
    [anon_sym_D_AMPM] = ACTIONS(99),
    [anon_sym_D_PIPEM] = ACTIONS(99),
  },
  [19] = {
    [sym_comp] = STATE(6),
    [sym_comment] = ACTIONS(3),
    [sym_ws] = ACTIONS(3),
    [anon_sym_M] = ACTIONS(103),
    [anon_sym_D] = ACTIONS(103),
    [anon_sym_A] = ACTIONS(103),
    [anon_sym_0] = ACTIONS(17),
    [anon_sym_1] = ACTIONS(17),
    [anon_sym_DASH1] = ACTIONS(17),
    [anon_sym_BANGD] = ACTIONS(17),
    [anon_sym_BANGA] = ACTIONS(17),
    [anon_sym_DASHD] = ACTIONS(17),
    [anon_sym_DASHA] = ACTIONS(17),
    [anon_sym_D_PLUS1] = ACTIONS(17),
    [anon_sym_A_PLUS1] = ACTIONS(17),
    [anon_sym_D_DASH1] = ACTIONS(17),
    [anon_sym_A_DASH1] = ACTIONS(17),
    [anon_sym_D_PLUSA] = ACTIONS(17),
    [anon_sym_D_DASHA] = ACTIONS(17),
    [anon_sym_A_DASHD] = ACTIONS(17),
    [anon_sym_D_AMPA] = ACTIONS(17),
    [anon_sym_D_PIPEA] = ACTIONS(17),
    [anon_sym_BANGM] = ACTIONS(17),
    [anon_sym_DASHM] = ACTIONS(17),
    [anon_sym_M_PLUS1] = ACTIONS(17),
    [anon_sym_M_DASH1] = ACTIONS(17),
    [anon_sym_D_PLUSM] = ACTIONS(17),
    [anon_sym_D_DASHM] = ACTIONS(17),
    [anon_sym_M_DASHD] = ACTIONS(17),
    [anon_sym_D_AMPM] = ACTIONS(17),
    [anon_sym_D_PIPEM] = ACTIONS(17),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    STATE(17), 1,
      sym_jump,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(105), 7,
      anon_sym_JGT,
      anon_sym_JEQ,
      anon_sym_JGE,
      anon_sym_JLT,
      anon_sym_JNE,
      anon_sym_JLE,
      anon_sym_JMP,
  [17] = 3,
    STATE(18), 1,
      sym_jump,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(105), 7,
      anon_sym_JGT,
      anon_sym_JEQ,
      anon_sym_JGE,
      anon_sym_JLT,
      anon_sym_JNE,
      anon_sym_JLE,
      anon_sym_JMP,
  [34] = 4,
    ACTIONS(107), 1,
      sym_ident,
    ACTIONS(109), 1,
      sym_num,
    STATE(14), 1,
      sym_value,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [48] = 2,
    ACTIONS(111), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [56] = 2,
    ACTIONS(43), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [64] = 2,
    ACTIONS(113), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [72] = 2,
    ACTIONS(115), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [80] = 2,
    ACTIONS(117), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(20)] = 0,
  [SMALL_STATE(21)] = 17,
  [SMALL_STATE(22)] = 34,
  [SMALL_STATE(23)] = 48,
  [SMALL_STATE(24)] = 56,
  [SMALL_STATE(25)] = 64,
  [SMALL_STATE(26)] = 72,
  [SMALL_STATE(27)] = 80,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(25),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(22),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(24),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(24),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comp, 1),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dest, 1),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comp, 1),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cinst, 1, .production_id = 5),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cinst, 1, .production_id = 5),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cinst, 3, .production_id = 10),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cinst, 3, .production_id = 10),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jump, 1),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_jump, 1),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mnemonic, 1, .production_id = 1),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mnemonic, 1, .production_id = 1),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mnemonic, 1, .production_id = 2),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mnemonic, 1, .production_id = 2),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inst, 1, .production_id = 3),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inst, 1, .production_id = 3),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inst, 1, .production_id = 4),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inst, 1, .production_id = 4),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1, .production_id = 7),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1, .production_id = 7),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ainst, 2, .production_id = 8),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ainst, 2, .production_id = 8),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1, .production_id = 6),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1, .production_id = 6),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 3, .production_id = 9),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 3, .production_id = 9),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cinst, 3, .production_id = 11),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cinst, 3, .production_id = 11),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cinst, 5, .production_id = 12),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cinst, 5, .production_id = 12),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [115] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_hack_asm(void) {
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
