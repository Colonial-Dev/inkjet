#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 50
#define LARGE_STATE_COUNT 6
#define SYMBOL_COUNT 37
#define ALIAS_COUNT 0
#define TOKEN_COUNT 25
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 2

enum {
  anon_sym_LF = 1,
  anon_sym_COLON = 2,
  anon_sym_LPAREN = 3,
  anon_sym_RPAREN = 4,
  anon_sym_COMMA = 5,
  anon_sym_byte = 6,
  anon_sym_word = 7,
  anon_sym_dword = 8,
  anon_sym_qword = 9,
  anon_sym_ptr = 10,
  anon_sym_LBRACK = 11,
  anon_sym_PLUS = 12,
  anon_sym_DASH = 13,
  anon_sym_RBRACK = 14,
  anon_sym_STAR = 15,
  anon_sym_rel = 16,
  sym_int = 17,
  sym_float = 18,
  sym_string = 19,
  sym_word = 20,
  sym__reg = 21,
  sym_meta_ident = 22,
  sym__ident = 23,
  sym_line_comment = 24,
  sym_program = 25,
  sym__item = 26,
  sym_meta = 27,
  sym_label = 28,
  sym_instruction = 29,
  sym__expr = 30,
  sym_ptr = 31,
  sym_reg = 32,
  sym_ident = 33,
  aux_sym_program_repeat1 = 34,
  aux_sym_program_repeat2 = 35,
  aux_sym_instruction_repeat1 = 36,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [anon_sym_COLON] = ":",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COMMA] = ",",
  [anon_sym_byte] = "byte",
  [anon_sym_word] = "word",
  [anon_sym_dword] = "dword",
  [anon_sym_qword] = "qword",
  [anon_sym_ptr] = "ptr",
  [anon_sym_LBRACK] = "[",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_RBRACK] = "]",
  [anon_sym_STAR] = "*",
  [anon_sym_rel] = "rel",
  [sym_int] = "int",
  [sym_float] = "float",
  [sym_string] = "string",
  [sym_word] = "word",
  [sym__reg] = "_reg",
  [sym_meta_ident] = "meta_ident",
  [sym__ident] = "_ident",
  [sym_line_comment] = "line_comment",
  [sym_program] = "program",
  [sym__item] = "_item",
  [sym_meta] = "meta",
  [sym_label] = "label",
  [sym_instruction] = "instruction",
  [sym__expr] = "_expr",
  [sym_ptr] = "ptr",
  [sym_reg] = "reg",
  [sym_ident] = "ident",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_program_repeat2] = "program_repeat2",
  [aux_sym_instruction_repeat1] = "instruction_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_byte] = anon_sym_byte,
  [anon_sym_word] = anon_sym_word,
  [anon_sym_dword] = anon_sym_dword,
  [anon_sym_qword] = anon_sym_qword,
  [anon_sym_ptr] = anon_sym_ptr,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_rel] = anon_sym_rel,
  [sym_int] = sym_int,
  [sym_float] = sym_float,
  [sym_string] = sym_string,
  [sym_word] = sym_word,
  [sym__reg] = sym__reg,
  [sym_meta_ident] = sym_meta_ident,
  [sym__ident] = sym__ident,
  [sym_line_comment] = sym_line_comment,
  [sym_program] = sym_program,
  [sym__item] = sym__item,
  [sym_meta] = sym_meta,
  [sym_label] = sym_label,
  [sym_instruction] = sym_instruction,
  [sym__expr] = sym__expr,
  [sym_ptr] = sym_ptr,
  [sym_reg] = sym_reg,
  [sym_ident] = sym_ident,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_program_repeat2] = aux_sym_program_repeat2,
  [aux_sym_instruction_repeat1] = aux_sym_instruction_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
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
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_byte] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_word] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dword] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_qword] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ptr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
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
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rel] = {
    .visible = true,
    .named = false,
  },
  [sym_int] = {
    .visible = true,
    .named = true,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_word] = {
    .visible = true,
    .named = true,
  },
  [sym__reg] = {
    .visible = false,
    .named = true,
  },
  [sym_meta_ident] = {
    .visible = true,
    .named = true,
  },
  [sym__ident] = {
    .visible = false,
    .named = true,
  },
  [sym_line_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym__item] = {
    .visible = false,
    .named = true,
  },
  [sym_meta] = {
    .visible = true,
    .named = true,
  },
  [sym_label] = {
    .visible = true,
    .named = true,
  },
  [sym_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym__expr] = {
    .visible = false,
    .named = true,
  },
  [sym_ptr] = {
    .visible = true,
    .named = true,
  },
  [sym_reg] = {
    .visible = true,
    .named = true,
  },
  [sym_ident] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_program_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_instruction_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_kind = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_kind] = "kind",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_kind, 0},
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '\n') ADVANCE(17);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(81);
      if (lookahead == '%') ADVANCE(12);
      if (lookahead == '(') ADVANCE(19);
      if (lookahead == ')') ADVANCE(20);
      if (lookahead == '*') ADVANCE(32);
      if (lookahead == '+') ADVANCE(29);
      if (lookahead == ',') ADVANCE(21);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '.') ADVANCE(79);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == ':') ADVANCE(18);
      if (lookahead == '[') ADVANCE(28);
      if (lookahead == ']') ADVANCE(31);
      if (lookahead == '_') ADVANCE(80);
      if (lookahead == 'b') ADVANCE(71);
      if (lookahead == 'd') ADVANCE(69);
      if (lookahead == 'p') ADVANCE(67);
      if (lookahead == 'q') ADVANCE(70);
      if (lookahead == 'r') ADVANCE(57);
      if (lookahead == 'w') ADVANCE(60);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(53);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '/') ADVANCE(81);
      END_STATE();
    case 3:
      if (lookahead == '0') ADVANCE(42);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(43);
      END_STATE();
    case 4:
      if (lookahead == '0') ADVANCE(44);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(45);
      END_STATE();
    case 5:
      if (lookahead == 'e') ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == 'l') ADVANCE(33);
      END_STATE();
    case 7:
      if (lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 8:
      if (lookahead == 't') ADVANCE(7);
      END_STATE();
    case 9:
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(81);
      if (lookahead == '%') ADVANCE(12);
      if (lookahead == '/') ADVANCE(2);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 10:
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(81);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == 'p') ADVANCE(8);
      if (lookahead == 'r') ADVANCE(5);
      END_STATE();
    case 11:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(47);
      END_STATE();
    case 12:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 13:
      if (eof) ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (lookahead == '\n') ADVANCE(17);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(81);
      if (lookahead == '%') ADVANCE(12);
      if (lookahead == '.') ADVANCE(79);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == '_') ADVANCE(80);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 14:
      if (eof) ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (lookahead == '\n') ADVANCE(17);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(81);
      if (lookahead == '%') ADVANCE(12);
      if (lookahead == '(') ADVANCE(19);
      if (lookahead == '*') ADVANCE(32);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '.') ADVANCE(79);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == '0') ADVANCE(39);
      if (lookahead == ':') ADVANCE(18);
      if (lookahead == '[') ADVANCE(28);
      if (lookahead == '_') ADVANCE(80);
      if (lookahead == 'b') ADVANCE(71);
      if (lookahead == 'd') ADVANCE(69);
      if (lookahead == 'q') ADVANCE(70);
      if (lookahead == 'w') ADVANCE(60);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(40);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(74);
      END_STATE();
    case 15:
      if (eof) ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (lookahead == '\n') ADVANCE(17);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(81);
      if (lookahead == '%') ADVANCE(12);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == '.') ADVANCE(79);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == '0') ADVANCE(37);
      if (lookahead == ':') ADVANCE(18);
      if (lookahead == '_') ADVANCE(80);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(74);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_byte);
      if (lookahead == '.' ||
          lookahead == '_') ADVANCE(80);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_word);
      if (lookahead == '.' ||
          lookahead == '_') ADVANCE(80);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_dword);
      if (lookahead == '.' ||
          lookahead == '_') ADVANCE(80);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_qword);
      if (lookahead == '.' ||
          lookahead == '_') ADVANCE(80);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_ptr);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_ptr);
      if (lookahead == '.' ||
          lookahead == '_') ADVANCE(80);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_rel);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_rel);
      if (lookahead == '.' ||
          lookahead == '_') ADVANCE(80);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(80);
      if (lookahead == '_') ADVANCE(48);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(35);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(74);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(80);
      if (lookahead == '_') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(36);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(80);
      if (lookahead == '_') ADVANCE(46);
      if (lookahead == 'x') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(74);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(80);
      if (lookahead == '_') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(74);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(49);
      if (lookahead == '_') ADVANCE(41);
      if (lookahead == 'x') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(74);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(49);
      if (lookahead == '_') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(74);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'x') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(43);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == 'x') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(45);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_int);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_int);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(46);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_int);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_int);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(48);
      if (lookahead == '.' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(51);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'd') ADVANCE(23);
      if (lookahead == '.' ||
          lookahead == '_') ADVANCE(80);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'd') ADVANCE(24);
      if (lookahead == '.' ||
          lookahead == '_') ADVANCE(80);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'd') ADVANCE(25);
      if (lookahead == '.' ||
          lookahead == '_') ADVANCE(80);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(59);
      if (lookahead == '.' ||
          lookahead == '_') ADVANCE(80);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(22);
      if (lookahead == '.' ||
          lookahead == '_') ADVANCE(80);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(34);
      if (lookahead == '.' ||
          lookahead == '_') ADVANCE(80);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(64);
      if (lookahead == '.' ||
          lookahead == '_') ADVANCE(80);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(65);
      if (lookahead == '.' ||
          lookahead == '_') ADVANCE(80);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(66);
      if (lookahead == '.' ||
          lookahead == '_') ADVANCE(80);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(27);
      if (lookahead == '.' ||
          lookahead == '_') ADVANCE(80);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(54);
      if (lookahead == '.' ||
          lookahead == '_') ADVANCE(80);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(55);
      if (lookahead == '.' ||
          lookahead == '_') ADVANCE(80);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(56);
      if (lookahead == '.' ||
          lookahead == '_') ADVANCE(80);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(63);
      if (lookahead == '.' ||
          lookahead == '_') ADVANCE(80);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(58);
      if (lookahead == '.' ||
          lookahead == '_') ADVANCE(80);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'w') ADVANCE(61);
      if (lookahead == '.' ||
          lookahead == '_') ADVANCE(80);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'w') ADVANCE(62);
      if (lookahead == '.' ||
          lookahead == '_') ADVANCE(80);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'y') ADVANCE(68);
      if (lookahead == '.' ||
          lookahead == '_') ADVANCE(80);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.' ||
          lookahead == '_') ADVANCE(80);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(35);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(74);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.' ||
          lookahead == '_') ADVANCE(80);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.' ||
          lookahead == '_') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_word);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym__reg);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_meta_ident);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(80);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(80);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(81);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 13},
  [2] = {.lex_state = 14},
  [3] = {.lex_state = 14},
  [4] = {.lex_state = 14},
  [5] = {.lex_state = 14},
  [6] = {.lex_state = 13},
  [7] = {.lex_state = 13},
  [8] = {.lex_state = 13},
  [9] = {.lex_state = 15},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 15},
  [12] = {.lex_state = 15},
  [13] = {.lex_state = 13},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 13},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 9},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 9},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 9},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 9},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 10},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 10},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 14},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_byte] = ACTIONS(1),
    [anon_sym_word] = ACTIONS(1),
    [anon_sym_dword] = ACTIONS(1),
    [anon_sym_qword] = ACTIONS(1),
    [anon_sym_ptr] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_rel] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_word] = ACTIONS(1),
    [sym__reg] = ACTIONS(1),
    [sym_meta_ident] = ACTIONS(1),
    [sym__ident] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_program] = STATE(43),
    [sym__item] = STATE(22),
    [sym_meta] = STATE(22),
    [sym_label] = STATE(22),
    [sym_instruction] = STATE(22),
    [sym_reg] = STATE(14),
    [sym_ident] = STATE(46),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_word] = ACTIONS(7),
    [sym__reg] = ACTIONS(9),
    [sym_meta_ident] = ACTIONS(11),
    [sym__ident] = ACTIONS(13),
    [sym_line_comment] = ACTIONS(3),
  },
  [2] = {
    [sym__expr] = STATE(16),
    [sym_ptr] = STATE(16),
    [sym_reg] = STATE(14),
    [sym_ident] = STATE(16),
    [ts_builtin_sym_end] = ACTIONS(15),
    [anon_sym_LF] = ACTIONS(15),
    [anon_sym_COLON] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_byte] = ACTIONS(21),
    [anon_sym_word] = ACTIONS(21),
    [anon_sym_dword] = ACTIONS(21),
    [anon_sym_qword] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(25),
    [sym_int] = ACTIONS(27),
    [sym_float] = ACTIONS(29),
    [sym_string] = ACTIONS(31),
    [sym_word] = ACTIONS(9),
    [sym__reg] = ACTIONS(9),
    [sym_meta_ident] = ACTIONS(13),
    [sym__ident] = ACTIONS(13),
    [sym_line_comment] = ACTIONS(3),
  },
  [3] = {
    [sym__expr] = STATE(34),
    [sym_ptr] = STATE(34),
    [sym_reg] = STATE(14),
    [sym_ident] = STATE(34),
    [ts_builtin_sym_end] = ACTIONS(33),
    [anon_sym_LF] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_byte] = ACTIONS(21),
    [anon_sym_word] = ACTIONS(21),
    [anon_sym_dword] = ACTIONS(21),
    [anon_sym_qword] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(25),
    [sym_int] = ACTIONS(27),
    [sym_float] = ACTIONS(35),
    [sym_string] = ACTIONS(37),
    [sym_word] = ACTIONS(9),
    [sym__reg] = ACTIONS(9),
    [sym_meta_ident] = ACTIONS(13),
    [sym__ident] = ACTIONS(13),
    [sym_line_comment] = ACTIONS(3),
  },
  [4] = {
    [sym__expr] = STATE(34),
    [sym_ptr] = STATE(34),
    [sym_reg] = STATE(14),
    [sym_ident] = STATE(34),
    [ts_builtin_sym_end] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(39),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_byte] = ACTIONS(21),
    [anon_sym_word] = ACTIONS(21),
    [anon_sym_dword] = ACTIONS(21),
    [anon_sym_qword] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(25),
    [sym_int] = ACTIONS(27),
    [sym_float] = ACTIONS(35),
    [sym_string] = ACTIONS(37),
    [sym_word] = ACTIONS(9),
    [sym__reg] = ACTIONS(9),
    [sym_meta_ident] = ACTIONS(13),
    [sym__ident] = ACTIONS(13),
    [sym_line_comment] = ACTIONS(3),
  },
  [5] = {
    [sym__expr] = STATE(34),
    [sym_ptr] = STATE(34),
    [sym_reg] = STATE(14),
    [sym_ident] = STATE(34),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_byte] = ACTIONS(21),
    [anon_sym_word] = ACTIONS(21),
    [anon_sym_dword] = ACTIONS(21),
    [anon_sym_qword] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(25),
    [sym_int] = ACTIONS(27),
    [sym_float] = ACTIONS(35),
    [sym_string] = ACTIONS(37),
    [sym_word] = ACTIONS(9),
    [sym__reg] = ACTIONS(9),
    [sym_meta_ident] = ACTIONS(13),
    [sym__ident] = ACTIONS(13),
    [sym_line_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      sym_word,
    ACTIONS(9), 1,
      sym__reg,
    ACTIONS(11), 1,
      sym_meta_ident,
    ACTIONS(13), 1,
      sym__ident,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    ACTIONS(43), 1,
      anon_sym_LF,
    STATE(13), 1,
      aux_sym_program_repeat1,
    STATE(14), 1,
      sym_reg,
    STATE(46), 1,
      sym_ident,
    STATE(35), 4,
      sym__item,
      sym_meta,
      sym_label,
      sym_instruction,
  [37] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      sym_word,
    ACTIONS(9), 1,
      sym__reg,
    ACTIONS(11), 1,
      sym_meta_ident,
    ACTIONS(13), 1,
      sym__ident,
    ACTIONS(43), 1,
      anon_sym_LF,
    ACTIONS(45), 1,
      ts_builtin_sym_end,
    STATE(13), 1,
      aux_sym_program_repeat1,
    STATE(14), 1,
      sym_reg,
    STATE(46), 1,
      sym_ident,
    STATE(35), 4,
      sym__item,
      sym_meta,
      sym_label,
      sym_instruction,
  [74] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      sym_word,
    ACTIONS(9), 1,
      sym__reg,
    ACTIONS(11), 1,
      sym_meta_ident,
    ACTIONS(13), 1,
      sym__ident,
    ACTIONS(43), 1,
      anon_sym_LF,
    STATE(13), 1,
      aux_sym_program_repeat1,
    STATE(14), 1,
      sym_reg,
    STATE(46), 1,
      sym_ident,
    STATE(35), 4,
      sym__item,
      sym_meta,
      sym_label,
      sym_instruction,
  [108] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(49), 1,
      anon_sym_COLON,
    ACTIONS(51), 1,
      sym_int,
    STATE(14), 1,
      sym_reg,
    STATE(37), 1,
      sym_ident,
    ACTIONS(9), 2,
      sym_word,
      sym__reg,
    ACTIONS(13), 2,
      sym_meta_ident,
      sym__ident,
    ACTIONS(47), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [136] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(17), 8,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_RBRACK,
  [150] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(53), 1,
      sym_int,
    STATE(14), 1,
      sym_reg,
    STATE(42), 1,
      sym_ident,
    ACTIONS(9), 2,
      sym_word,
      sym__reg,
    ACTIONS(13), 2,
      sym_meta_ident,
      sym__ident,
  [171] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(55), 1,
      sym_int,
    STATE(14), 1,
      sym_reg,
    STATE(48), 1,
      sym_ident,
    ACTIONS(9), 2,
      sym_word,
      sym__reg,
    ACTIONS(13), 2,
      sym_meta_ident,
      sym__ident,
  [192] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(57), 1,
      ts_builtin_sym_end,
    ACTIONS(59), 1,
      anon_sym_LF,
    STATE(13), 1,
      aux_sym_program_repeat1,
    ACTIONS(62), 4,
      sym_word,
      sym__reg,
      sym_meta_ident,
      sym__ident,
  [211] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(49), 6,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [223] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    STATE(14), 1,
      sym_reg,
    STATE(40), 1,
      sym_ident,
    ACTIONS(9), 2,
      sym_word,
      sym__reg,
    ACTIONS(13), 2,
      sym_meta_ident,
      sym__ident,
  [241] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(66), 1,
      anon_sym_COMMA,
    STATE(17), 1,
      aux_sym_instruction_repeat1,
    ACTIONS(64), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [255] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(68), 1,
      anon_sym_COMMA,
    STATE(21), 1,
      aux_sym_instruction_repeat1,
    ACTIONS(33), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [269] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      ts_builtin_sym_end,
    ACTIONS(70), 1,
      anon_sym_LF,
    STATE(6), 1,
      aux_sym_program_repeat1,
    STATE(19), 1,
      aux_sym_program_repeat2,
  [285] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(72), 1,
      ts_builtin_sym_end,
    ACTIONS(74), 1,
      anon_sym_LF,
    STATE(8), 1,
      aux_sym_program_repeat1,
    STATE(19), 1,
      aux_sym_program_repeat2,
  [301] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [313] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(83), 1,
      anon_sym_COMMA,
    STATE(21), 1,
      aux_sym_instruction_repeat1,
    ACTIONS(81), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [327] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(86), 1,
      ts_builtin_sym_end,
    ACTIONS(88), 1,
      anon_sym_LF,
    STATE(7), 1,
      aux_sym_program_repeat1,
    STATE(18), 1,
      aux_sym_program_repeat2,
  [343] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      sym__reg,
    ACTIONS(90), 1,
      sym_word,
    STATE(27), 1,
      sym_reg,
  [356] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(94), 1,
      anon_sym_RBRACK,
    ACTIONS(92), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [367] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      sym__reg,
    ACTIONS(90), 1,
      sym_word,
    STATE(44), 1,
      sym_reg,
  [380] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(96), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [389] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(100), 1,
      anon_sym_RBRACK,
    ACTIONS(98), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [400] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(102), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [409] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(104), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [418] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      sym__reg,
    ACTIONS(90), 1,
      sym_word,
    STATE(24), 1,
      sym_reg,
  [431] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(108), 1,
      anon_sym_LPAREN,
    ACTIONS(106), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [442] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      sym__reg,
    ACTIONS(90), 1,
      sym_word,
    STATE(38), 1,
      sym_reg,
  [455] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(110), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [464] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(81), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [473] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(72), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [481] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(112), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [489] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(114), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [497] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(100), 1,
      anon_sym_RPAREN,
  [504] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(116), 1,
      anon_sym_ptr,
  [511] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(118), 1,
      anon_sym_RPAREN,
  [518] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(120), 1,
      anon_sym_rel,
  [525] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(94), 1,
      anon_sym_RBRACK,
  [532] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(122), 1,
      ts_builtin_sym_end,
  [539] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(124), 1,
      anon_sym_RPAREN,
  [546] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(126), 1,
      sym_int,
  [553] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(128), 1,
      anon_sym_COLON,
  [560] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(130), 1,
      anon_sym_LBRACK,
  [567] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(132), 1,
      anon_sym_RBRACK,
  [574] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(134), 1,
      anon_sym_LBRACK,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(6)] = 0,
  [SMALL_STATE(7)] = 37,
  [SMALL_STATE(8)] = 74,
  [SMALL_STATE(9)] = 108,
  [SMALL_STATE(10)] = 136,
  [SMALL_STATE(11)] = 150,
  [SMALL_STATE(12)] = 171,
  [SMALL_STATE(13)] = 192,
  [SMALL_STATE(14)] = 211,
  [SMALL_STATE(15)] = 223,
  [SMALL_STATE(16)] = 241,
  [SMALL_STATE(17)] = 255,
  [SMALL_STATE(18)] = 269,
  [SMALL_STATE(19)] = 285,
  [SMALL_STATE(20)] = 301,
  [SMALL_STATE(21)] = 313,
  [SMALL_STATE(22)] = 327,
  [SMALL_STATE(23)] = 343,
  [SMALL_STATE(24)] = 356,
  [SMALL_STATE(25)] = 367,
  [SMALL_STATE(26)] = 380,
  [SMALL_STATE(27)] = 389,
  [SMALL_STATE(28)] = 400,
  [SMALL_STATE(29)] = 409,
  [SMALL_STATE(30)] = 418,
  [SMALL_STATE(31)] = 431,
  [SMALL_STATE(32)] = 442,
  [SMALL_STATE(33)] = 455,
  [SMALL_STATE(34)] = 464,
  [SMALL_STATE(35)] = 473,
  [SMALL_STATE(36)] = 481,
  [SMALL_STATE(37)] = 489,
  [SMALL_STATE(38)] = 497,
  [SMALL_STATE(39)] = 504,
  [SMALL_STATE(40)] = 511,
  [SMALL_STATE(41)] = 518,
  [SMALL_STATE(42)] = 525,
  [SMALL_STATE(43)] = 532,
  [SMALL_STATE(44)] = 539,
  [SMALL_STATE(45)] = 546,
  [SMALL_STATE(46)] = 553,
  [SMALL_STATE(47)] = 560,
  [SMALL_STATE(48)] = 567,
  [SMALL_STATE(49)] = 574,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1, .production_id = 1),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reg, 1),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3, .production_id = 1),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 4, .production_id = 1),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 3),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta, 1, .production_id = 1),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ident, 1),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(13),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2, .production_id = 1),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat2, 2),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat2, 2), SHIFT_REPEAT(8),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr, 1),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 2),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 2), SHIFT_REPEAT(5),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ptr, 7),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ptr, 5),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ptr, 3),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ptr, 4),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 5),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta, 2, .production_id = 1),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [122] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_asm(void) {
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
