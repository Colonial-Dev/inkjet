#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 120
#define LARGE_STATE_COUNT 3
#define SYMBOL_COUNT 59
#define ALIAS_COUNT 0
#define TOKEN_COUNT 38
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 6

enum ts_symbol_identifiers {
  anon_sym_LF = 1,
  anon_sym_COMMA = 2,
  anon_sym_COLON = 3,
  anon_sym_LPAREN = 4,
  anon_sym_RPAREN = 5,
  anon_sym_label = 6,
  anon_sym_const = 7,
  anon_sym_byte = 8,
  anon_sym_word = 9,
  anon_sym_dword = 10,
  anon_sym_qword = 11,
  anon_sym_ptr = 12,
  anon_sym_LBRACK = 13,
  anon_sym_PLUS = 14,
  anon_sym_DASH = 15,
  anon_sym_RBRACK = 16,
  anon_sym_STAR = 17,
  anon_sym_rel = 18,
  anon_sym_BANG = 19,
  anon_sym_SLASH = 20,
  anon_sym_PERCENT = 21,
  anon_sym_PIPE = 22,
  anon_sym_CARET = 23,
  anon_sym_AMP = 24,
  anon_sym_POUND = 25,
  aux_sym_int_token1 = 26,
  aux_sym_int_token2 = 27,
  sym_float = 28,
  sym_string = 29,
  sym_word = 30,
  sym__reg = 31,
  sym_address = 32,
  sym_meta_ident = 33,
  sym__ident = 34,
  aux_sym_line_comment_token1 = 35,
  aux_sym_line_comment_token2 = 36,
  sym_block_comment = 37,
  sym_program = 38,
  sym__item = 39,
  sym_meta = 40,
  sym_label = 41,
  sym_const = 42,
  sym_instruction = 43,
  sym__expr = 44,
  sym_ptr = 45,
  sym__tc_expr = 46,
  sym_tc_infix = 47,
  sym_int = 48,
  sym_reg = 49,
  sym_ident = 50,
  sym_line_comment = 51,
  aux_sym_program_repeat1 = 52,
  aux_sym_program_repeat2 = 53,
  aux_sym_meta_repeat1 = 54,
  aux_sym_meta_repeat2 = 55,
  aux_sym_meta_repeat3 = 56,
  aux_sym_instruction_repeat1 = 57,
  aux_sym_instruction_repeat2 = 58,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [anon_sym_COMMA] = ",",
  [anon_sym_COLON] = ":",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_label] = "label",
  [anon_sym_const] = "const",
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
  [anon_sym_BANG] = "!",
  [anon_sym_SLASH] = "/",
  [anon_sym_PERCENT] = "%",
  [anon_sym_PIPE] = "|",
  [anon_sym_CARET] = "^",
  [anon_sym_AMP] = "&",
  [anon_sym_POUND] = "#",
  [aux_sym_int_token1] = "int_token1",
  [aux_sym_int_token2] = "int_token2",
  [sym_float] = "float",
  [sym_string] = "string",
  [sym_word] = "word",
  [sym__reg] = "_reg",
  [sym_address] = "address",
  [sym_meta_ident] = "meta_ident",
  [sym__ident] = "_ident",
  [aux_sym_line_comment_token1] = "line_comment_token1",
  [aux_sym_line_comment_token2] = "line_comment_token2",
  [sym_block_comment] = "block_comment",
  [sym_program] = "program",
  [sym__item] = "_item",
  [sym_meta] = "meta",
  [sym_label] = "label",
  [sym_const] = "const",
  [sym_instruction] = "instruction",
  [sym__expr] = "_expr",
  [sym_ptr] = "ptr",
  [sym__tc_expr] = "_tc_expr",
  [sym_tc_infix] = "tc_infix",
  [sym_int] = "int",
  [sym_reg] = "reg",
  [sym_ident] = "ident",
  [sym_line_comment] = "line_comment",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_program_repeat2] = "program_repeat2",
  [aux_sym_meta_repeat1] = "meta_repeat1",
  [aux_sym_meta_repeat2] = "meta_repeat2",
  [aux_sym_meta_repeat3] = "meta_repeat3",
  [aux_sym_instruction_repeat1] = "instruction_repeat1",
  [aux_sym_instruction_repeat2] = "instruction_repeat2",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_label] = anon_sym_label,
  [anon_sym_const] = anon_sym_const,
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
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym_int_token1] = aux_sym_int_token1,
  [aux_sym_int_token2] = aux_sym_int_token2,
  [sym_float] = sym_float,
  [sym_string] = sym_string,
  [sym_word] = sym_word,
  [sym__reg] = sym__reg,
  [sym_address] = sym_address,
  [sym_meta_ident] = sym_meta_ident,
  [sym__ident] = sym__ident,
  [aux_sym_line_comment_token1] = aux_sym_line_comment_token1,
  [aux_sym_line_comment_token2] = aux_sym_line_comment_token2,
  [sym_block_comment] = sym_block_comment,
  [sym_program] = sym_program,
  [sym__item] = sym__item,
  [sym_meta] = sym_meta,
  [sym_label] = sym_label,
  [sym_const] = sym_const,
  [sym_instruction] = sym_instruction,
  [sym__expr] = sym__expr,
  [sym_ptr] = sym_ptr,
  [sym__tc_expr] = sym__tc_expr,
  [sym_tc_infix] = sym_tc_infix,
  [sym_int] = sym_int,
  [sym_reg] = sym_reg,
  [sym_ident] = sym_ident,
  [sym_line_comment] = sym_line_comment,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_program_repeat2] = aux_sym_program_repeat2,
  [aux_sym_meta_repeat1] = aux_sym_meta_repeat1,
  [aux_sym_meta_repeat2] = aux_sym_meta_repeat2,
  [aux_sym_meta_repeat3] = aux_sym_meta_repeat3,
  [aux_sym_instruction_repeat1] = aux_sym_instruction_repeat1,
  [aux_sym_instruction_repeat2] = aux_sym_instruction_repeat2,
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
  [anon_sym_COMMA] = {
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
  [anon_sym_label] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_const] = {
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
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_int_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_int_token2] = {
    .visible = false,
    .named = false,
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
  [sym_address] = {
    .visible = true,
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
  [aux_sym_line_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_line_comment_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_block_comment] = {
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
  [sym_const] = {
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
  [sym__tc_expr] = {
    .visible = false,
    .named = true,
  },
  [sym_tc_infix] = {
    .visible = true,
    .named = true,
  },
  [sym_int] = {
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
  [sym_line_comment] = {
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
  [aux_sym_meta_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_meta_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_meta_repeat3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_instruction_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_instruction_repeat2] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_kind = 1,
  field_lhs = 2,
  field_name = 3,
  field_op = 4,
  field_rhs = 5,
  field_value = 6,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_kind] = "kind",
  [field_lhs] = "lhs",
  [field_name] = "name",
  [field_op] = "op",
  [field_rhs] = "rhs",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [4] = {.index = 2, .length = 2},
  [5] = {.index = 4, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_kind, 0},
  [1] =
    {field_name, 1},
  [2] =
    {field_name, 1},
    {field_value, 2},
  [4] =
    {field_lhs, 0},
    {field_op, 1},
    {field_rhs, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [3] = {
    [0] = sym_ident,
  },
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
  [22] = 7,
  [23] = 9,
  [24] = 10,
  [25] = 8,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 29,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 34,
  [36] = 28,
  [37] = 32,
  [38] = 31,
  [39] = 39,
  [40] = 12,
  [41] = 14,
  [42] = 16,
  [43] = 15,
  [44] = 13,
  [45] = 45,
  [46] = 18,
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
  [111] = 98,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(28);
      ADVANCE_MAP(
        '\n', 29,
        '!', 54,
        '"', 1,
        '#', 61,
        '$', 19,
        '%', 56,
        '&', 60,
        '(', 32,
        ')', 33,
        '*', 51,
        '+', 47,
        ',', 30,
        '-', 49,
        '.', 141,
        '/', 55,
        '0', 70,
        ':', 31,
        ';', 148,
        '[', 46,
        ']', 50,
        '^', 59,
        'b', 129,
        'c', 105,
        'd', 124,
        'l', 90,
        'p', 120,
        'q', 125,
        'r', 98,
        'w', 107,
        '|', 58,
      );
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(73);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(89);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '#', 61,
        '$', 20,
        '-', 7,
        '/', 10,
        '0', 80,
        ';', 148,
        'p', 16,
        'r', 13,
      );
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(82);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(61);
      if (lookahead == '$') ADVANCE(23);
      if (lookahead == '%') ADVANCE(22);
      if (lookahead == '.') ADVANCE(141);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == ';') ADVANCE(148);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(61);
      if (lookahead == '$') ADVANCE(23);
      if (lookahead == '%') ADVANCE(22);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == ';') ADVANCE(148);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(61);
      if (lookahead == '$') ADVANCE(21);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '0') ADVANCE(63);
      if (lookahead == ';') ADVANCE(148);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(65);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(61);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == ';') ADVANCE(148);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6);
      END_STATE();
    case 7:
      if (lookahead == '$') ADVANCE(20);
      if (lookahead == '0') ADVANCE(80);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(82);
      END_STATE();
    case 8:
      if (lookahead == '$') ADVANCE(20);
      if (lookahead == '0') ADVANCE(78);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(79);
      END_STATE();
    case 9:
      if (lookahead == '$') ADVANCE(21);
      if (lookahead == '0') ADVANCE(63);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(65);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '/') ADVANCE(148);
      END_STATE();
    case 11:
      if (lookahead == '*') ADVANCE(11);
      if (lookahead == '/') ADVANCE(149);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 12:
      if (lookahead == '*') ADVANCE(11);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(14);
      END_STATE();
    case 14:
      if (lookahead == 'l') ADVANCE(52);
      END_STATE();
    case 15:
      if (lookahead == 'r') ADVANCE(44);
      END_STATE();
    case 16:
      if (lookahead == 't') ADVANCE(15);
      END_STATE();
    case 17:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(81);
      END_STATE();
    case 18:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(64);
      END_STATE();
    case 19:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(83);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 20:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(84);
      END_STATE();
    case 21:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(66);
      END_STATE();
    case 22:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(138);
      END_STATE();
    case 23:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 24:
      if (eof) ADVANCE(28);
      ADVANCE_MAP(
        '\n', 29,
        '"', 1,
        '#', 61,
        '$', 19,
        '%', 22,
        '(', 32,
        '*', 51,
        '-', 8,
        '.', 141,
        '/', 10,
        '0', 75,
        ':', 31,
        ';', 148,
        '[', 46,
        'b', 128,
        'd', 126,
        'q', 127,
        'w', 106,
      );
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(76);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(135);
      END_STATE();
    case 25:
      if (eof) ADVANCE(28);
      ADVANCE_MAP(
        '\n', 29,
        '"', 1,
        '#', 61,
        '$', 19,
        '%', 22,
        '-', 8,
        '.', 141,
        '/', 10,
        '0', 75,
        ':', 31,
        ';', 148,
      );
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(25);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(76);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(135);
      END_STATE();
    case 26:
      if (eof) ADVANCE(28);
      ADVANCE_MAP(
        '\n', 29,
        '"', 1,
        '#', 61,
        '$', 19,
        '%', 57,
        '&', 60,
        '(', 32,
        '*', 51,
        '+', 47,
        ',', 30,
        '-', 49,
        '.', 141,
        '/', 55,
        '0', 67,
        ';', 148,
        '^', 59,
        '|', 58,
      );
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(68);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(135);
      END_STATE();
    case 27:
      if (eof) ADVANCE(28);
      ADVANCE_MAP(
        '\n', 29,
        '#', 61,
        '%', 56,
        '&', 60,
        '(', 32,
        ')', 33,
        '*', 51,
        '+', 47,
        ',', 30,
        '-', 48,
        '.', 141,
        '/', 55,
        ';', 148,
        ']', 50,
        '^', 59,
        'c', 105,
        'l', 90,
        '|', 58,
      );
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_label);
      if (lookahead == '.') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_const);
      if (lookahead == '.') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_byte);
      if (lookahead == '.') ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_byte);
      if (lookahead == '.') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_word);
      if (lookahead == '.') ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_word);
      if (lookahead == '.') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_dword);
      if (lookahead == '.') ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_dword);
      if (lookahead == '.') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_qword);
      if (lookahead == '.') ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_qword);
      if (lookahead == '.') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_ptr);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_ptr);
      if (lookahead == '.') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '$') ADVANCE(20);
      if (lookahead == '0') ADVANCE(80);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(82);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_rel);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_rel);
      if (lookahead == '.') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '/') ADVANCE(148);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(138);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(147);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_int_token1);
      if (lookahead == 'b') ADVANCE(18);
      if (lookahead == 'x') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(65);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_int_token1);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_int_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_int_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(66);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (lookahead == '.') ADVANCE(142);
      if (lookahead == '_') ADVANCE(73);
      if (lookahead == 'b') ADVANCE(131);
      if (lookahead == 'x') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(135);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (lookahead == '.') ADVANCE(142);
      if (lookahead == '_') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(135);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (lookahead == '.') ADVANCE(142);
      if (lookahead == '_') ADVANCE(71);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(69);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(135);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (lookahead == '.') ADVANCE(142);
      if (lookahead == 'b') ADVANCE(130);
      if (lookahead == 'x') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(73);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (lookahead == '.') ADVANCE(142);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(71);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (lookahead == '.') ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(72);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(135);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (lookahead == '.') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(73);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (lookahead == '.') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(74);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (lookahead == '.') ADVANCE(85);
      if (lookahead == '_') ADVANCE(77);
      if (lookahead == 'b') ADVANCE(131);
      if (lookahead == 'x') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(135);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (lookahead == '.') ADVANCE(85);
      if (lookahead == '_') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(135);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (lookahead == '.') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(77);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (lookahead == '.') ADVANCE(86);
      if (lookahead == 'b') ADVANCE(17);
      if (lookahead == 'x') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(79);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (lookahead == '.') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(79);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (lookahead == 'b') ADVANCE(17);
      if (lookahead == 'x') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(82);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(82);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(83);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(84);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(87);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(88);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(87);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(88);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(142);
      if (lookahead == 'a') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(142);
      if (lookahead == 'b') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(142);
      if (lookahead == 'd') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(142);
      if (lookahead == 'd') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(142);
      if (lookahead == 'd') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(142);
      if (lookahead == 'd') ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(142);
      if (lookahead == 'd') ADVANCE(40);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(142);
      if (lookahead == 'd') ADVANCE(42);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(142);
      if (lookahead == 'e') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(142);
      if (lookahead == 'e') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(142);
      if (lookahead == 'e') ADVANCE(36);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(142);
      if (lookahead == 'e') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(142);
      if (lookahead == 'l') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(142);
      if (lookahead == 'l') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(142);
      if (lookahead == 'n') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(142);
      if (lookahead == 'o') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(142);
      if (lookahead == 'o') ADVANCE(114);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(142);
      if (lookahead == 'o') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(142);
      if (lookahead == 'o') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(142);
      if (lookahead == 'o') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(142);
      if (lookahead == 'o') ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(142);
      if (lookahead == 'o') ADVANCE(118);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(142);
      if (lookahead == 'r') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(142);
      if (lookahead == 'r') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(142);
      if (lookahead == 'r') ADVANCE(95);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(142);
      if (lookahead == 'r') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(142);
      if (lookahead == 'r') ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(142);
      if (lookahead == 'r') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(142);
      if (lookahead == 'r') ADVANCE(97);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(142);
      if (lookahead == 's') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(142);
      if (lookahead == 't') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(142);
      if (lookahead == 't') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(142);
      if (lookahead == 't') ADVANCE(100);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(142);
      if (lookahead == 't') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(142);
      if (lookahead == 'w') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(142);
      if (lookahead == 'w') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(142);
      if (lookahead == 'w') ADVANCE(110);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(142);
      if (lookahead == 'w') ADVANCE(111);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(142);
      if (lookahead == 'y') ADVANCE(122);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(142);
      if (lookahead == 'y') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(142);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(71);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(142);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(69);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(135);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(72);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(135);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(74);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_word);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__reg);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(138);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_address);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_meta_ident);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(142);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(142);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead == '\n') ADVANCE(12);
      if (lookahead == '*') ADVANCE(143);
      if (lookahead == '/') ADVANCE(147);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead == '\n') ADVANCE(12);
      if (lookahead == '*') ADVANCE(143);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead == '#') ADVANCE(62);
      if (lookahead == '/') ADVANCE(146);
      if (lookahead == ';') ADVANCE(147);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(147);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead == '*') ADVANCE(144);
      if (lookahead == '/') ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(147);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(147);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_line_comment_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(148);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_block_comment);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 27},
  [2] = {.lex_state = 24},
  [3] = {.lex_state = 24},
  [4] = {.lex_state = 24},
  [5] = {.lex_state = 24},
  [6] = {.lex_state = 26},
  [7] = {.lex_state = 26},
  [8] = {.lex_state = 26},
  [9] = {.lex_state = 26},
  [10] = {.lex_state = 26},
  [11] = {.lex_state = 26},
  [12] = {.lex_state = 26},
  [13] = {.lex_state = 26},
  [14] = {.lex_state = 26},
  [15] = {.lex_state = 26},
  [16] = {.lex_state = 26},
  [17] = {.lex_state = 26},
  [18] = {.lex_state = 26},
  [19] = {.lex_state = 26},
  [20] = {.lex_state = 26},
  [21] = {.lex_state = 25},
  [22] = {.lex_state = 27},
  [23] = {.lex_state = 27},
  [24] = {.lex_state = 27},
  [25] = {.lex_state = 27},
  [26] = {.lex_state = 27},
  [27] = {.lex_state = 27},
  [28] = {.lex_state = 26},
  [29] = {.lex_state = 26},
  [30] = {.lex_state = 26},
  [31] = {.lex_state = 26},
  [32] = {.lex_state = 26},
  [33] = {.lex_state = 26},
  [34] = {.lex_state = 26},
  [35] = {.lex_state = 26},
  [36] = {.lex_state = 26},
  [37] = {.lex_state = 26},
  [38] = {.lex_state = 26},
  [39] = {.lex_state = 27},
  [40] = {.lex_state = 27},
  [41] = {.lex_state = 27},
  [42] = {.lex_state = 27},
  [43] = {.lex_state = 27},
  [44] = {.lex_state = 27},
  [45] = {.lex_state = 27},
  [46] = {.lex_state = 27},
  [47] = {.lex_state = 26},
  [48] = {.lex_state = 26},
  [49] = {.lex_state = 27},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 27},
  [52] = {.lex_state = 3},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 4},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 4},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 4},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 27},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 4},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
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
  [87] = {.lex_state = 27},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 2},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 2},
  [96] = {.lex_state = 2},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 5},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 24},
  [105] = {.lex_state = 2},
  [106] = {.lex_state = 145},
  [107] = {.lex_state = 2},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 5},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 4},
  [117] = {.lex_state = 4},
  [118] = {(TSStateId)(-1)},
  [119] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_line_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_label] = ACTIONS(1),
    [anon_sym_const] = ACTIONS(1),
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
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(3),
    [aux_sym_int_token2] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_word] = ACTIONS(1),
    [sym_address] = ACTIONS(1),
    [sym_meta_ident] = ACTIONS(1),
    [sym__ident] = ACTIONS(1),
    [aux_sym_line_comment_token2] = ACTIONS(5),
    [sym_block_comment] = ACTIONS(7),
  },
  [1] = {
    [sym_program] = STATE(114),
    [sym__item] = STATE(56),
    [sym_meta] = STATE(93),
    [sym_label] = STATE(93),
    [sym_const] = STATE(93),
    [sym_instruction] = STATE(93),
    [sym_line_comment] = STATE(1),
    [ts_builtin_sym_end] = ACTIONS(9),
    [anon_sym_label] = ACTIONS(11),
    [anon_sym_const] = ACTIONS(13),
    [anon_sym_POUND] = ACTIONS(3),
    [sym_word] = ACTIONS(15),
    [sym_meta_ident] = ACTIONS(17),
    [sym__ident] = ACTIONS(19),
    [aux_sym_line_comment_token2] = ACTIONS(5),
    [sym_block_comment] = ACTIONS(7),
  },
  [2] = {
    [sym__expr] = STATE(63),
    [sym_ptr] = STATE(82),
    [sym__tc_expr] = STATE(17),
    [sym_tc_infix] = STATE(18),
    [sym_int] = STATE(6),
    [sym_reg] = STATE(9),
    [sym_ident] = STATE(11),
    [sym_line_comment] = STATE(2),
    [aux_sym_instruction_repeat2] = STATE(20),
    [ts_builtin_sym_end] = ACTIONS(21),
    [anon_sym_LF] = ACTIONS(21),
    [anon_sym_COLON] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_byte] = ACTIONS(27),
    [anon_sym_word] = ACTIONS(27),
    [anon_sym_dword] = ACTIONS(27),
    [anon_sym_qword] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_STAR] = ACTIONS(31),
    [anon_sym_POUND] = ACTIONS(33),
    [aux_sym_int_token2] = ACTIONS(35),
    [sym_float] = ACTIONS(37),
    [sym_string] = ACTIONS(39),
    [sym_word] = ACTIONS(41),
    [sym__reg] = ACTIONS(41),
    [sym_address] = ACTIONS(41),
    [sym_meta_ident] = ACTIONS(43),
    [sym__ident] = ACTIONS(43),
    [aux_sym_line_comment_token2] = ACTIONS(5),
    [sym_block_comment] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 18,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_STAR,
    ACTIONS(37), 1,
      sym_float,
    ACTIONS(47), 1,
      anon_sym_POUND,
    ACTIONS(49), 1,
      aux_sym_int_token2,
    ACTIONS(51), 1,
      sym_string,
    STATE(3), 1,
      sym_line_comment,
    STATE(23), 1,
      sym_reg,
    STATE(74), 1,
      sym_int,
    STATE(79), 1,
      sym__expr,
    ACTIONS(45), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(55), 2,
      sym_meta_ident,
      sym__ident,
    STATE(82), 2,
      sym_ptr,
      sym_ident,
    ACTIONS(53), 3,
      sym_word,
      sym__reg,
      sym_address,
    ACTIONS(27), 4,
      anon_sym_byte,
      anon_sym_word,
      anon_sym_dword,
      anon_sym_qword,
  [63] = 18,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_STAR,
    ACTIONS(37), 1,
      sym_float,
    ACTIONS(47), 1,
      anon_sym_POUND,
    ACTIONS(49), 1,
      aux_sym_int_token2,
    ACTIONS(51), 1,
      sym_string,
    STATE(4), 1,
      sym_line_comment,
    STATE(23), 1,
      sym_reg,
    STATE(74), 1,
      sym_int,
    STATE(79), 1,
      sym__expr,
    ACTIONS(55), 2,
      sym_meta_ident,
      sym__ident,
    ACTIONS(57), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(82), 2,
      sym_ptr,
      sym_ident,
    ACTIONS(53), 3,
      sym_word,
      sym__reg,
      sym_address,
    ACTIONS(27), 4,
      anon_sym_byte,
      anon_sym_word,
      anon_sym_dword,
      anon_sym_qword,
  [126] = 17,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_STAR,
    ACTIONS(37), 1,
      sym_float,
    ACTIONS(47), 1,
      anon_sym_POUND,
    ACTIONS(49), 1,
      aux_sym_int_token2,
    ACTIONS(51), 1,
      sym_string,
    STATE(5), 1,
      sym_line_comment,
    STATE(23), 1,
      sym_reg,
    STATE(74), 1,
      sym_int,
    STATE(79), 1,
      sym__expr,
    ACTIONS(55), 2,
      sym_meta_ident,
      sym__ident,
    STATE(82), 2,
      sym_ptr,
      sym_ident,
    ACTIONS(53), 3,
      sym_word,
      sym__reg,
      sym_address,
    ACTIONS(27), 4,
      anon_sym_byte,
      anon_sym_word,
      anon_sym_dword,
      anon_sym_qword,
  [185] = 8,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(62), 1,
      anon_sym_COMMA,
    ACTIONS(64), 1,
      anon_sym_LPAREN,
    STATE(6), 1,
      sym_line_comment,
    ACTIONS(59), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(66), 7,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_POUND,
      sym_string,
    ACTIONS(68), 9,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      aux_sym_int_token2,
      sym_word,
      sym__reg,
      sym_address,
      sym_meta_ident,
      sym__ident,
  [225] = 5,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(7), 1,
      sym_line_comment,
    ACTIONS(72), 9,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      aux_sym_int_token2,
      sym_word,
      sym__reg,
      sym_address,
      sym_meta_ident,
      sym__ident,
    ACTIONS(70), 11,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_POUND,
      sym_string,
  [259] = 5,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(8), 1,
      sym_line_comment,
    ACTIONS(76), 9,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      aux_sym_int_token2,
      sym_word,
      sym__reg,
      sym_address,
      sym_meta_ident,
      sym__ident,
    ACTIONS(74), 11,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_POUND,
      sym_string,
  [293] = 5,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(9), 1,
      sym_line_comment,
    ACTIONS(80), 9,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      aux_sym_int_token2,
      sym_word,
      sym__reg,
      sym_address,
      sym_meta_ident,
      sym__ident,
    ACTIONS(78), 10,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_POUND,
      sym_string,
  [326] = 5,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(10), 1,
      sym_line_comment,
    ACTIONS(84), 9,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      aux_sym_int_token2,
      sym_word,
      sym__reg,
      sym_address,
      sym_meta_ident,
      sym__ident,
    ACTIONS(82), 10,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_POUND,
      sym_string,
  [359] = 7,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(62), 1,
      anon_sym_COMMA,
    STATE(11), 1,
      sym_line_comment,
    ACTIONS(59), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(66), 7,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_POUND,
      sym_string,
    ACTIONS(68), 9,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      aux_sym_int_token2,
      sym_word,
      sym__reg,
      sym_address,
      sym_meta_ident,
      sym__ident,
  [396] = 6,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(90), 1,
      anon_sym_AMP,
    STATE(12), 1,
      sym_line_comment,
    ACTIONS(86), 8,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_POUND,
      sym_string,
    ACTIONS(88), 9,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      aux_sym_int_token2,
      sym_word,
      sym__reg,
      sym_address,
      sym_meta_ident,
      sym__ident,
  [430] = 7,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(90), 1,
      anon_sym_AMP,
    ACTIONS(92), 1,
      anon_sym_CARET,
    STATE(13), 1,
      sym_line_comment,
    ACTIONS(86), 7,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_POUND,
      sym_string,
    ACTIONS(88), 9,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      aux_sym_int_token2,
      sym_word,
      sym__reg,
      sym_address,
      sym_meta_ident,
      sym__ident,
  [466] = 5,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(14), 1,
      sym_line_comment,
    ACTIONS(86), 9,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_POUND,
      sym_string,
    ACTIONS(88), 9,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      aux_sym_int_token2,
      sym_word,
      sym__reg,
      sym_address,
      sym_meta_ident,
      sym__ident,
  [498] = 8,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(90), 1,
      anon_sym_AMP,
    ACTIONS(92), 1,
      anon_sym_CARET,
    ACTIONS(94), 1,
      anon_sym_PIPE,
    STATE(15), 1,
      sym_line_comment,
    ACTIONS(86), 6,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_POUND,
      sym_string,
    ACTIONS(88), 9,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      aux_sym_int_token2,
      sym_word,
      sym__reg,
      sym_address,
      sym_meta_ident,
      sym__ident,
  [536] = 10,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(90), 1,
      anon_sym_AMP,
    ACTIONS(92), 1,
      anon_sym_CARET,
    ACTIONS(94), 1,
      anon_sym_PIPE,
    ACTIONS(96), 1,
      anon_sym_STAR,
    STATE(16), 1,
      sym_line_comment,
    ACTIONS(98), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(86), 5,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_PLUS,
      anon_sym_POUND,
      sym_string,
    ACTIONS(88), 7,
      anon_sym_DASH,
      aux_sym_int_token2,
      sym_word,
      sym__reg,
      sym_address,
      sym_meta_ident,
      sym__ident,
  [578] = 12,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(90), 1,
      anon_sym_AMP,
    ACTIONS(92), 1,
      anon_sym_CARET,
    ACTIONS(94), 1,
      anon_sym_PIPE,
    ACTIONS(96), 1,
      anon_sym_STAR,
    ACTIONS(102), 1,
      anon_sym_PLUS,
    ACTIONS(104), 1,
      anon_sym_DASH,
    STATE(17), 1,
      sym_line_comment,
    ACTIONS(98), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(100), 4,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_POUND,
      sym_string,
    ACTIONS(106), 6,
      aux_sym_int_token2,
      sym_word,
      sym__reg,
      sym_address,
      sym_meta_ident,
      sym__ident,
  [624] = 5,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(18), 1,
      sym_line_comment,
    ACTIONS(66), 9,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_POUND,
      sym_string,
    ACTIONS(68), 9,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      aux_sym_int_token2,
      sym_word,
      sym__reg,
      sym_address,
      sym_meta_ident,
      sym__ident,
  [656] = 12,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(110), 1,
      anon_sym_POUND,
    ACTIONS(113), 1,
      aux_sym_int_token2,
    ACTIONS(116), 1,
      sym_string,
    STATE(9), 1,
      sym_reg,
    STATE(17), 1,
      sym__tc_expr,
    ACTIONS(108), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(122), 2,
      sym_meta_ident,
      sym__ident,
    STATE(19), 2,
      sym_line_comment,
      aux_sym_instruction_repeat2,
    ACTIONS(119), 3,
      sym_word,
      sym__reg,
      sym_address,
    STATE(18), 3,
      sym_tc_infix,
      sym_int,
      sym_ident,
  [700] = 13,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(33), 1,
      anon_sym_POUND,
    ACTIONS(35), 1,
      aux_sym_int_token2,
    ACTIONS(127), 1,
      sym_string,
    STATE(9), 1,
      sym_reg,
    STATE(17), 1,
      sym__tc_expr,
    STATE(19), 1,
      aux_sym_instruction_repeat2,
    STATE(20), 1,
      sym_line_comment,
    ACTIONS(43), 2,
      sym_meta_ident,
      sym__ident,
    ACTIONS(125), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(41), 3,
      sym_word,
      sym__reg,
      sym_address,
    STATE(18), 3,
      sym_tc_infix,
      sym_int,
      sym_ident,
  [746] = 14,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(47), 1,
      anon_sym_POUND,
    ACTIONS(49), 1,
      aux_sym_int_token2,
    ACTIONS(131), 1,
      anon_sym_COLON,
    ACTIONS(133), 1,
      sym_float,
    ACTIONS(135), 1,
      sym_string,
    STATE(21), 1,
      sym_line_comment,
    STATE(23), 1,
      sym_reg,
    STATE(73), 1,
      sym_int,
    STATE(90), 1,
      sym_ident,
    ACTIONS(55), 2,
      sym_meta_ident,
      sym__ident,
    ACTIONS(129), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(53), 3,
      sym_word,
      sym__reg,
      sym_address,
  [793] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(72), 1,
      anon_sym_SLASH,
    STATE(22), 1,
      sym_line_comment,
    ACTIONS(70), 12,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
  [823] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(80), 1,
      anon_sym_SLASH,
    STATE(23), 1,
      sym_line_comment,
    ACTIONS(78), 12,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
  [853] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(84), 1,
      anon_sym_SLASH,
    STATE(24), 1,
      sym_line_comment,
    ACTIONS(82), 12,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
  [883] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(76), 1,
      anon_sym_SLASH,
    STATE(25), 1,
      sym_line_comment,
    ACTIONS(74), 12,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
  [913] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(11), 1,
      anon_sym_label,
    ACTIONS(13), 1,
      anon_sym_const,
    ACTIONS(15), 1,
      sym_word,
    ACTIONS(17), 1,
      sym_meta_ident,
    ACTIONS(19), 1,
      sym__ident,
    ACTIONS(137), 1,
      ts_builtin_sym_end,
    ACTIONS(139), 1,
      anon_sym_LF,
    STATE(26), 1,
      sym_line_comment,
    STATE(49), 1,
      aux_sym_program_repeat1,
    STATE(97), 1,
      sym__item,
    STATE(93), 4,
      sym_meta,
      sym_label,
      sym_const,
      sym_instruction,
  [959] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(11), 1,
      anon_sym_label,
    ACTIONS(13), 1,
      anon_sym_const,
    ACTIONS(15), 1,
      sym_word,
    ACTIONS(17), 1,
      sym_meta_ident,
    ACTIONS(19), 1,
      sym__ident,
    ACTIONS(139), 1,
      anon_sym_LF,
    ACTIONS(141), 1,
      ts_builtin_sym_end,
    STATE(27), 1,
      sym_line_comment,
    STATE(49), 1,
      aux_sym_program_repeat1,
    STATE(97), 1,
      sym__item,
    STATE(93), 4,
      sym_meta,
      sym_label,
      sym_const,
      sym_instruction,
  [1005] = 11,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(47), 1,
      anon_sym_POUND,
    ACTIONS(49), 1,
      aux_sym_int_token2,
    ACTIONS(143), 1,
      sym_string,
    STATE(23), 1,
      sym_reg,
    STATE(28), 1,
      sym_line_comment,
    STATE(42), 1,
      sym__tc_expr,
    ACTIONS(55), 2,
      sym_meta_ident,
      sym__ident,
    ACTIONS(53), 3,
      sym_word,
      sym__reg,
      sym_address,
    STATE(46), 3,
      sym_tc_infix,
      sym_int,
      sym_ident,
  [1044] = 11,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(47), 1,
      anon_sym_POUND,
    ACTIONS(49), 1,
      aux_sym_int_token2,
    ACTIONS(143), 1,
      sym_string,
    STATE(23), 1,
      sym_reg,
    STATE(29), 1,
      sym_line_comment,
    STATE(41), 1,
      sym__tc_expr,
    ACTIONS(55), 2,
      sym_meta_ident,
      sym__ident,
    ACTIONS(53), 3,
      sym_word,
      sym__reg,
      sym_address,
    STATE(46), 3,
      sym_tc_infix,
      sym_int,
      sym_ident,
  [1083] = 11,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(33), 1,
      anon_sym_POUND,
    ACTIONS(35), 1,
      aux_sym_int_token2,
    ACTIONS(127), 1,
      sym_string,
    STATE(9), 1,
      sym_reg,
    STATE(14), 1,
      sym__tc_expr,
    STATE(30), 1,
      sym_line_comment,
    ACTIONS(43), 2,
      sym_meta_ident,
      sym__ident,
    ACTIONS(41), 3,
      sym_word,
      sym__reg,
      sym_address,
    STATE(18), 3,
      sym_tc_infix,
      sym_int,
      sym_ident,
  [1122] = 11,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(33), 1,
      anon_sym_POUND,
    ACTIONS(35), 1,
      aux_sym_int_token2,
    ACTIONS(127), 1,
      sym_string,
    STATE(9), 1,
      sym_reg,
    STATE(12), 1,
      sym__tc_expr,
    STATE(31), 1,
      sym_line_comment,
    ACTIONS(43), 2,
      sym_meta_ident,
      sym__ident,
    ACTIONS(41), 3,
      sym_word,
      sym__reg,
      sym_address,
    STATE(18), 3,
      sym_tc_infix,
      sym_int,
      sym_ident,
  [1161] = 11,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(33), 1,
      anon_sym_POUND,
    ACTIONS(35), 1,
      aux_sym_int_token2,
    ACTIONS(127), 1,
      sym_string,
    STATE(9), 1,
      sym_reg,
    STATE(13), 1,
      sym__tc_expr,
    STATE(32), 1,
      sym_line_comment,
    ACTIONS(43), 2,
      sym_meta_ident,
      sym__ident,
    ACTIONS(41), 3,
      sym_word,
      sym__reg,
      sym_address,
    STATE(18), 3,
      sym_tc_infix,
      sym_int,
      sym_ident,
  [1200] = 11,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(47), 1,
      anon_sym_POUND,
    ACTIONS(49), 1,
      aux_sym_int_token2,
    ACTIONS(143), 1,
      sym_string,
    STATE(23), 1,
      sym_reg,
    STATE(33), 1,
      sym_line_comment,
    STATE(45), 1,
      sym__tc_expr,
    ACTIONS(55), 2,
      sym_meta_ident,
      sym__ident,
    ACTIONS(53), 3,
      sym_word,
      sym__reg,
      sym_address,
    STATE(46), 3,
      sym_tc_infix,
      sym_int,
      sym_ident,
  [1239] = 11,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(33), 1,
      anon_sym_POUND,
    ACTIONS(35), 1,
      aux_sym_int_token2,
    ACTIONS(127), 1,
      sym_string,
    STATE(9), 1,
      sym_reg,
    STATE(15), 1,
      sym__tc_expr,
    STATE(34), 1,
      sym_line_comment,
    ACTIONS(43), 2,
      sym_meta_ident,
      sym__ident,
    ACTIONS(41), 3,
      sym_word,
      sym__reg,
      sym_address,
    STATE(18), 3,
      sym_tc_infix,
      sym_int,
      sym_ident,
  [1278] = 11,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(47), 1,
      anon_sym_POUND,
    ACTIONS(49), 1,
      aux_sym_int_token2,
    ACTIONS(143), 1,
      sym_string,
    STATE(23), 1,
      sym_reg,
    STATE(35), 1,
      sym_line_comment,
    STATE(43), 1,
      sym__tc_expr,
    ACTIONS(55), 2,
      sym_meta_ident,
      sym__ident,
    ACTIONS(53), 3,
      sym_word,
      sym__reg,
      sym_address,
    STATE(46), 3,
      sym_tc_infix,
      sym_int,
      sym_ident,
  [1317] = 11,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(33), 1,
      anon_sym_POUND,
    ACTIONS(35), 1,
      aux_sym_int_token2,
    ACTIONS(127), 1,
      sym_string,
    STATE(9), 1,
      sym_reg,
    STATE(16), 1,
      sym__tc_expr,
    STATE(36), 1,
      sym_line_comment,
    ACTIONS(43), 2,
      sym_meta_ident,
      sym__ident,
    ACTIONS(41), 3,
      sym_word,
      sym__reg,
      sym_address,
    STATE(18), 3,
      sym_tc_infix,
      sym_int,
      sym_ident,
  [1356] = 11,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(47), 1,
      anon_sym_POUND,
    ACTIONS(49), 1,
      aux_sym_int_token2,
    ACTIONS(143), 1,
      sym_string,
    STATE(23), 1,
      sym_reg,
    STATE(37), 1,
      sym_line_comment,
    STATE(44), 1,
      sym__tc_expr,
    ACTIONS(55), 2,
      sym_meta_ident,
      sym__ident,
    ACTIONS(53), 3,
      sym_word,
      sym__reg,
      sym_address,
    STATE(46), 3,
      sym_tc_infix,
      sym_int,
      sym_ident,
  [1395] = 11,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(47), 1,
      anon_sym_POUND,
    ACTIONS(49), 1,
      aux_sym_int_token2,
    ACTIONS(143), 1,
      sym_string,
    STATE(23), 1,
      sym_reg,
    STATE(38), 1,
      sym_line_comment,
    STATE(40), 1,
      sym__tc_expr,
    ACTIONS(55), 2,
      sym_meta_ident,
      sym__ident,
    ACTIONS(53), 3,
      sym_word,
      sym__reg,
      sym_address,
    STATE(46), 3,
      sym_tc_infix,
      sym_int,
      sym_ident,
  [1434] = 13,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(11), 1,
      anon_sym_label,
    ACTIONS(13), 1,
      anon_sym_const,
    ACTIONS(15), 1,
      sym_word,
    ACTIONS(17), 1,
      sym_meta_ident,
    ACTIONS(19), 1,
      sym__ident,
    ACTIONS(139), 1,
      anon_sym_LF,
    STATE(39), 1,
      sym_line_comment,
    STATE(49), 1,
      aux_sym_program_repeat1,
    STATE(97), 1,
      sym__item,
    STATE(93), 4,
      sym_meta,
      sym_label,
      sym_const,
      sym_instruction,
  [1477] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(88), 1,
      anon_sym_SLASH,
    ACTIONS(145), 1,
      anon_sym_AMP,
    STATE(40), 1,
      sym_line_comment,
    ACTIONS(86), 8,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PIPE,
      anon_sym_CARET,
  [1506] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(88), 1,
      anon_sym_SLASH,
    STATE(41), 1,
      sym_line_comment,
    ACTIONS(86), 9,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
  [1533] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(145), 1,
      anon_sym_AMP,
    ACTIONS(149), 1,
      anon_sym_SLASH,
    ACTIONS(151), 1,
      anon_sym_PIPE,
    ACTIONS(153), 1,
      anon_sym_CARET,
    STATE(42), 1,
      sym_line_comment,
    ACTIONS(147), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(86), 4,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_PLUS,
      anon_sym_DASH,
  [1568] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(88), 1,
      anon_sym_SLASH,
    ACTIONS(145), 1,
      anon_sym_AMP,
    ACTIONS(151), 1,
      anon_sym_PIPE,
    ACTIONS(153), 1,
      anon_sym_CARET,
    STATE(43), 1,
      sym_line_comment,
    ACTIONS(86), 6,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [1601] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(88), 1,
      anon_sym_SLASH,
    ACTIONS(145), 1,
      anon_sym_AMP,
    ACTIONS(153), 1,
      anon_sym_CARET,
    STATE(44), 1,
      sym_line_comment,
    ACTIONS(86), 7,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PIPE,
  [1632] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(145), 1,
      anon_sym_AMP,
    ACTIONS(149), 1,
      anon_sym_SLASH,
    ACTIONS(151), 1,
      anon_sym_PIPE,
    ACTIONS(153), 1,
      anon_sym_CARET,
    STATE(45), 1,
      sym_line_comment,
    ACTIONS(147), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(155), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(157), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [1669] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(68), 1,
      anon_sym_SLASH,
    STATE(46), 1,
      sym_line_comment,
    ACTIONS(66), 9,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
  [1696] = 9,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(47), 1,
      anon_sym_POUND,
    ACTIONS(49), 1,
      aux_sym_int_token2,
    STATE(23), 1,
      sym_reg,
    STATE(47), 1,
      sym_line_comment,
    ACTIONS(55), 2,
      sym_meta_ident,
      sym__ident,
    STATE(112), 2,
      sym_int,
      sym_ident,
    ACTIONS(53), 3,
      sym_word,
      sym__reg,
      sym_address,
  [1728] = 9,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(47), 1,
      anon_sym_POUND,
    ACTIONS(49), 1,
      aux_sym_int_token2,
    STATE(23), 1,
      sym_reg,
    STATE(48), 1,
      sym_line_comment,
    ACTIONS(55), 2,
      sym_meta_ident,
      sym__ident,
    STATE(102), 2,
      sym_int,
      sym_ident,
    ACTIONS(53), 3,
      sym_word,
      sym__reg,
      sym_address,
  [1760] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(159), 1,
      ts_builtin_sym_end,
    ACTIONS(161), 1,
      anon_sym_LF,
    STATE(49), 2,
      sym_line_comment,
      aux_sym_program_repeat1,
    ACTIONS(164), 5,
      anon_sym_label,
      anon_sym_const,
      sym_word,
      sym_meta_ident,
      sym__ident,
  [1787] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(166), 1,
      sym_address,
    STATE(23), 1,
      sym_reg,
    STATE(50), 1,
      sym_line_comment,
    STATE(110), 1,
      sym_ident,
    ACTIONS(53), 2,
      sym_word,
      sym__reg,
    ACTIONS(55), 2,
      sym_meta_ident,
      sym__ident,
  [1817] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(51), 1,
      sym_line_comment,
    ACTIONS(168), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(170), 5,
      anon_sym_label,
      anon_sym_const,
      sym_word,
      sym_meta_ident,
      sym__ident,
  [1841] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(166), 1,
      sym_address,
    STATE(23), 1,
      sym_reg,
    STATE(52), 1,
      sym_line_comment,
    STATE(109), 1,
      sym_ident,
    ACTIONS(53), 2,
      sym_word,
      sym__reg,
    ACTIONS(55), 2,
      sym_meta_ident,
      sym__ident,
  [1871] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(174), 1,
      anon_sym_COMMA,
    STATE(53), 1,
      sym_line_comment,
    STATE(66), 1,
      aux_sym_meta_repeat1,
    ACTIONS(172), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [1894] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(178), 1,
      anon_sym_COMMA,
    ACTIONS(176), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(54), 2,
      sym_line_comment,
      aux_sym_instruction_repeat1,
  [1915] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(53), 1,
      sym__reg,
    STATE(55), 1,
      sym_line_comment,
    STATE(100), 1,
      sym_reg,
    ACTIONS(166), 2,
      sym_word,
      sym_address,
  [1938] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(139), 1,
      anon_sym_LF,
    ACTIONS(181), 1,
      ts_builtin_sym_end,
    STATE(26), 1,
      aux_sym_program_repeat1,
    STATE(56), 1,
      sym_line_comment,
    STATE(70), 1,
      aux_sym_program_repeat2,
  [1963] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(183), 1,
      anon_sym_COMMA,
    STATE(57), 1,
      sym_line_comment,
    STATE(69), 1,
      aux_sym_meta_repeat2,
    ACTIONS(172), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [1986] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(53), 1,
      sym__reg,
    STATE(58), 1,
      sym_line_comment,
    STATE(99), 1,
      sym_reg,
    ACTIONS(166), 2,
      sym_word,
      sym_address,
  [2009] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(185), 1,
      anon_sym_COMMA,
    STATE(59), 1,
      sym_line_comment,
    STATE(67), 1,
      aux_sym_meta_repeat3,
    ACTIONS(172), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [2032] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(53), 1,
      sym__reg,
    STATE(60), 1,
      sym_line_comment,
    STATE(64), 1,
      sym_reg,
    ACTIONS(166), 2,
      sym_word,
      sym_address,
  [2055] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(187), 1,
      anon_sym_COMMA,
    STATE(54), 1,
      aux_sym_instruction_repeat1,
    STATE(61), 1,
      sym_line_comment,
    ACTIONS(45), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [2078] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(191), 1,
      anon_sym_BANG,
    STATE(62), 1,
      sym_line_comment,
    ACTIONS(189), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [2099] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(193), 1,
      anon_sym_COMMA,
    STATE(61), 1,
      aux_sym_instruction_repeat1,
    STATE(63), 1,
      sym_line_comment,
    ACTIONS(125), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [2122] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(195), 1,
      anon_sym_COMMA,
    ACTIONS(199), 1,
      anon_sym_RBRACK,
    STATE(64), 1,
      sym_line_comment,
    ACTIONS(197), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [2145] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(201), 1,
      ts_builtin_sym_end,
    ACTIONS(203), 1,
      anon_sym_LF,
    STATE(39), 1,
      aux_sym_program_repeat1,
    STATE(65), 2,
      sym_line_comment,
      aux_sym_program_repeat2,
  [2168] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(208), 1,
      anon_sym_COMMA,
    ACTIONS(206), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(66), 2,
      sym_line_comment,
      aux_sym_meta_repeat1,
  [2189] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(213), 1,
      anon_sym_COMMA,
    ACTIONS(211), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(67), 2,
      sym_line_comment,
      aux_sym_meta_repeat3,
  [2210] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(53), 1,
      sym__reg,
    STATE(68), 1,
      sym_line_comment,
    STATE(87), 1,
      sym_reg,
    ACTIONS(166), 2,
      sym_word,
      sym_address,
  [2233] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(218), 1,
      anon_sym_COMMA,
    ACTIONS(216), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(69), 2,
      sym_line_comment,
      aux_sym_meta_repeat2,
  [2254] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(137), 1,
      ts_builtin_sym_end,
    ACTIONS(139), 1,
      anon_sym_LF,
    STATE(27), 1,
      aux_sym_program_repeat1,
    STATE(65), 1,
      aux_sym_program_repeat2,
    STATE(70), 1,
      sym_line_comment,
  [2279] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(223), 1,
      anon_sym_BANG,
    STATE(71), 1,
      sym_line_comment,
    ACTIONS(221), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [2300] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(183), 1,
      anon_sym_COMMA,
    STATE(57), 1,
      aux_sym_meta_repeat2,
    STATE(72), 1,
      sym_line_comment,
    ACTIONS(225), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [2323] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(174), 1,
      anon_sym_COMMA,
    STATE(53), 1,
      aux_sym_meta_repeat1,
    STATE(73), 1,
      sym_line_comment,
    ACTIONS(225), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [2346] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(64), 1,
      anon_sym_LPAREN,
    STATE(74), 1,
      sym_line_comment,
    ACTIONS(62), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [2367] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(185), 1,
      anon_sym_COMMA,
    STATE(59), 1,
      aux_sym_meta_repeat3,
    STATE(75), 1,
      sym_line_comment,
    ACTIONS(225), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [2390] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(76), 1,
      sym_line_comment,
    ACTIONS(227), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [2408] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(77), 1,
      sym_line_comment,
    ACTIONS(221), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [2426] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(231), 1,
      anon_sym_LPAREN,
    STATE(78), 1,
      sym_line_comment,
    ACTIONS(229), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [2446] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(79), 1,
      sym_line_comment,
    ACTIONS(176), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [2464] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(80), 1,
      sym_line_comment,
    ACTIONS(233), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [2482] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(81), 1,
      sym_line_comment,
    ACTIONS(189), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [2500] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(82), 1,
      sym_line_comment,
    ACTIONS(62), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [2518] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(83), 1,
      sym_line_comment,
    ACTIONS(235), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [2536] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(84), 1,
      sym_line_comment,
    ACTIONS(216), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [2554] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(239), 1,
      anon_sym_LPAREN,
    STATE(85), 1,
      sym_line_comment,
    ACTIONS(237), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [2574] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(86), 1,
      sym_line_comment,
    ACTIONS(211), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [2592] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(243), 1,
      anon_sym_RBRACK,
    STATE(87), 1,
      sym_line_comment,
    ACTIONS(241), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [2612] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(88), 1,
      sym_line_comment,
    ACTIONS(206), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [2630] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(89), 1,
      sym_line_comment,
    ACTIONS(245), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [2647] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(90), 1,
      sym_line_comment,
    ACTIONS(225), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [2664] = 6,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(47), 1,
      anon_sym_POUND,
    ACTIONS(247), 1,
      aux_sym_int_token2,
    STATE(91), 1,
      sym_line_comment,
    STATE(103), 1,
      sym_int,
  [2683] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(92), 1,
      sym_line_comment,
    ACTIONS(249), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [2700] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(93), 1,
      sym_line_comment,
    ACTIONS(251), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [2717] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(94), 1,
      sym_line_comment,
    ACTIONS(253), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [2734] = 6,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(47), 1,
      anon_sym_POUND,
    ACTIONS(247), 1,
      aux_sym_int_token2,
    STATE(95), 1,
      sym_line_comment,
    STATE(112), 1,
      sym_int,
  [2753] = 6,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(47), 1,
      anon_sym_POUND,
    ACTIONS(247), 1,
      aux_sym_int_token2,
    STATE(88), 1,
      sym_int,
    STATE(96), 1,
      sym_line_comment,
  [2772] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(97), 1,
      sym_line_comment,
    ACTIONS(201), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [2789] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(255), 1,
      aux_sym_int_token1,
    STATE(98), 1,
      sym_line_comment,
  [2805] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(257), 1,
      anon_sym_RPAREN,
    STATE(99), 1,
      sym_line_comment,
  [2821] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(223), 1,
      anon_sym_RPAREN,
    STATE(100), 1,
      sym_line_comment,
  [2837] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(259), 1,
      anon_sym_LBRACK,
    STATE(101), 1,
      sym_line_comment,
  [2853] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(261), 1,
      anon_sym_RBRACK,
    STATE(102), 1,
      sym_line_comment,
  [2869] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(263), 1,
      anon_sym_RBRACK,
    STATE(103), 1,
      sym_line_comment,
  [2885] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(265), 1,
      sym_float,
    STATE(104), 1,
      sym_line_comment,
  [2901] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(267), 1,
      anon_sym_rel,
    STATE(105), 1,
      sym_line_comment,
  [2917] = 5,
    ACTIONS(269), 1,
      anon_sym_POUND,
    ACTIONS(271), 1,
      aux_sym_line_comment_token1,
    ACTIONS(273), 1,
      aux_sym_line_comment_token2,
    ACTIONS(275), 1,
      sym_block_comment,
    STATE(106), 1,
      sym_line_comment,
  [2933] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(277), 1,
      anon_sym_ptr,
    STATE(107), 1,
      sym_line_comment,
  [2949] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(279), 1,
      anon_sym_LBRACK,
    STATE(108), 1,
      sym_line_comment,
  [2965] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(281), 1,
      anon_sym_RPAREN,
    STATE(109), 1,
      sym_line_comment,
  [2981] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(283), 1,
      anon_sym_RPAREN,
    STATE(110), 1,
      sym_line_comment,
  [2997] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(285), 1,
      aux_sym_int_token1,
    STATE(111), 1,
      sym_line_comment,
  [3013] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(243), 1,
      anon_sym_RBRACK,
    STATE(112), 1,
      sym_line_comment,
  [3029] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(287), 1,
      sym_string,
    STATE(113), 1,
      sym_line_comment,
  [3045] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(289), 1,
      ts_builtin_sym_end,
    STATE(114), 1,
      sym_line_comment,
  [3061] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(23), 1,
      anon_sym_COLON,
    STATE(115), 1,
      sym_line_comment,
  [3077] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(291), 1,
      sym_word,
    STATE(116), 1,
      sym_line_comment,
  [3093] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(293), 1,
      sym_word,
    STATE(117), 1,
      sym_line_comment,
  [3109] = 1,
    ACTIONS(295), 1,
      ts_builtin_sym_end,
  [3113] = 1,
    ACTIONS(297), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(3)] = 0,
  [SMALL_STATE(4)] = 63,
  [SMALL_STATE(5)] = 126,
  [SMALL_STATE(6)] = 185,
  [SMALL_STATE(7)] = 225,
  [SMALL_STATE(8)] = 259,
  [SMALL_STATE(9)] = 293,
  [SMALL_STATE(10)] = 326,
  [SMALL_STATE(11)] = 359,
  [SMALL_STATE(12)] = 396,
  [SMALL_STATE(13)] = 430,
  [SMALL_STATE(14)] = 466,
  [SMALL_STATE(15)] = 498,
  [SMALL_STATE(16)] = 536,
  [SMALL_STATE(17)] = 578,
  [SMALL_STATE(18)] = 624,
  [SMALL_STATE(19)] = 656,
  [SMALL_STATE(20)] = 700,
  [SMALL_STATE(21)] = 746,
  [SMALL_STATE(22)] = 793,
  [SMALL_STATE(23)] = 823,
  [SMALL_STATE(24)] = 853,
  [SMALL_STATE(25)] = 883,
  [SMALL_STATE(26)] = 913,
  [SMALL_STATE(27)] = 959,
  [SMALL_STATE(28)] = 1005,
  [SMALL_STATE(29)] = 1044,
  [SMALL_STATE(30)] = 1083,
  [SMALL_STATE(31)] = 1122,
  [SMALL_STATE(32)] = 1161,
  [SMALL_STATE(33)] = 1200,
  [SMALL_STATE(34)] = 1239,
  [SMALL_STATE(35)] = 1278,
  [SMALL_STATE(36)] = 1317,
  [SMALL_STATE(37)] = 1356,
  [SMALL_STATE(38)] = 1395,
  [SMALL_STATE(39)] = 1434,
  [SMALL_STATE(40)] = 1477,
  [SMALL_STATE(41)] = 1506,
  [SMALL_STATE(42)] = 1533,
  [SMALL_STATE(43)] = 1568,
  [SMALL_STATE(44)] = 1601,
  [SMALL_STATE(45)] = 1632,
  [SMALL_STATE(46)] = 1669,
  [SMALL_STATE(47)] = 1696,
  [SMALL_STATE(48)] = 1728,
  [SMALL_STATE(49)] = 1760,
  [SMALL_STATE(50)] = 1787,
  [SMALL_STATE(51)] = 1817,
  [SMALL_STATE(52)] = 1841,
  [SMALL_STATE(53)] = 1871,
  [SMALL_STATE(54)] = 1894,
  [SMALL_STATE(55)] = 1915,
  [SMALL_STATE(56)] = 1938,
  [SMALL_STATE(57)] = 1963,
  [SMALL_STATE(58)] = 1986,
  [SMALL_STATE(59)] = 2009,
  [SMALL_STATE(60)] = 2032,
  [SMALL_STATE(61)] = 2055,
  [SMALL_STATE(62)] = 2078,
  [SMALL_STATE(63)] = 2099,
  [SMALL_STATE(64)] = 2122,
  [SMALL_STATE(65)] = 2145,
  [SMALL_STATE(66)] = 2168,
  [SMALL_STATE(67)] = 2189,
  [SMALL_STATE(68)] = 2210,
  [SMALL_STATE(69)] = 2233,
  [SMALL_STATE(70)] = 2254,
  [SMALL_STATE(71)] = 2279,
  [SMALL_STATE(72)] = 2300,
  [SMALL_STATE(73)] = 2323,
  [SMALL_STATE(74)] = 2346,
  [SMALL_STATE(75)] = 2367,
  [SMALL_STATE(76)] = 2390,
  [SMALL_STATE(77)] = 2408,
  [SMALL_STATE(78)] = 2426,
  [SMALL_STATE(79)] = 2446,
  [SMALL_STATE(80)] = 2464,
  [SMALL_STATE(81)] = 2482,
  [SMALL_STATE(82)] = 2500,
  [SMALL_STATE(83)] = 2518,
  [SMALL_STATE(84)] = 2536,
  [SMALL_STATE(85)] = 2554,
  [SMALL_STATE(86)] = 2574,
  [SMALL_STATE(87)] = 2592,
  [SMALL_STATE(88)] = 2612,
  [SMALL_STATE(89)] = 2630,
  [SMALL_STATE(90)] = 2647,
  [SMALL_STATE(91)] = 2664,
  [SMALL_STATE(92)] = 2683,
  [SMALL_STATE(93)] = 2700,
  [SMALL_STATE(94)] = 2717,
  [SMALL_STATE(95)] = 2734,
  [SMALL_STATE(96)] = 2753,
  [SMALL_STATE(97)] = 2772,
  [SMALL_STATE(98)] = 2789,
  [SMALL_STATE(99)] = 2805,
  [SMALL_STATE(100)] = 2821,
  [SMALL_STATE(101)] = 2837,
  [SMALL_STATE(102)] = 2853,
  [SMALL_STATE(103)] = 2869,
  [SMALL_STATE(104)] = 2885,
  [SMALL_STATE(105)] = 2901,
  [SMALL_STATE(106)] = 2917,
  [SMALL_STATE(107)] = 2933,
  [SMALL_STATE(108)] = 2949,
  [SMALL_STATE(109)] = 2965,
  [SMALL_STATE(110)] = 2981,
  [SMALL_STATE(111)] = 2997,
  [SMALL_STATE(112)] = 3013,
  [SMALL_STATE(113)] = 3029,
  [SMALL_STATE(114)] = 3045,
  [SMALL_STATE(115)] = 3061,
  [SMALL_STATE(116)] = 3077,
  [SMALL_STATE(117)] = 3093,
  [SMALL_STATE(118)] = 3109,
  [SMALL_STATE(119)] = 3113,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0, 0, 0),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1, 0, 1),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3, 0, 1),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 4, 0, 1),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__expr, 1, 0, 0), REDUCE(sym__tc_expr, 1, 0, 0),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr, 1, 0, 0),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tc_expr, 1, 0, 0),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__tc_expr, 1, 0, 0),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int, 2, 0, 0),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_int, 2, 0, 0),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int, 1, 0, 0),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_int, 1, 0, 0),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ident, 1, 0, 0),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ident, 1, 0, 0),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reg, 1, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reg, 1, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tc_infix, 3, 0, 5),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tc_infix, 3, 0, 5),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instruction_repeat2, 1, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_instruction_repeat2, 1, 0, 0),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instruction_repeat2, 2, 0, 0),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instruction_repeat2, 2, 0, 0), SHIFT_REPEAT(98),
  [113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_repeat2, 2, 0, 0), SHIFT_REPEAT(8),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instruction_repeat2, 2, 0, 0), SHIFT_REPEAT(18),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_repeat2, 2, 0, 0), SHIFT_REPEAT(10),
  [122] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_repeat2, 2, 0, 0), SHIFT_REPEAT(9),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2, 0, 1),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta, 1, 0, 1),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 3, 0, 0),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const, 3, 0, 4),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0),
  [161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(51),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 1, 0, 0),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 1, 0, 0),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta, 3, 0, 1),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 2, 0, 0),
  [178] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1, 0, 0),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ptr, 5, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat2, 2, 0, 0),
  [203] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat2, 2, 0, 0), SHIFT_REPEAT(51),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_meta_repeat1, 2, 0, 0),
  [208] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_meta_repeat1, 2, 0, 0), SHIFT_REPEAT(96),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_meta_repeat3, 2, 0, 0),
  [213] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_meta_repeat3, 2, 0, 0), SHIFT_REPEAT(113),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_meta_repeat2, 2, 0, 0),
  [218] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_meta_repeat2, 2, 0, 0), SHIFT_REPEAT(104),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ptr, 3, 0, 0),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta, 2, 0, 1),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ptr, 7, 0, 0),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2, 0, 3),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ptr, 6, 0, 0),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ptr, 4, 0, 0),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2, 0, 0),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 5, 0, 0),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 5, 0, 3),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__item, 1, 0, 0),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2, 0, 2),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [289] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_comment, 1, 0, 0),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_comment, 2, 0, 0),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_asm(void) {
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
