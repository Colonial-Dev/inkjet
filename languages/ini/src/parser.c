#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 26
#define LARGE_STATE_COUNT 3
#define SYMBOL_COUNT 19
#define ALIAS_COUNT 0
#define TOKEN_COUNT 10
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 4

enum {
  anon_sym_LBRACK = 1,
  aux_sym_section_name_token1 = 2,
  anon_sym_RBRACK = 3,
  anon_sym_LF = 4,
  aux_sym_setting_token1 = 5,
  anon_sym_EQ = 6,
  aux_sym_setting_token2 = 7,
  aux_sym_comment_token1 = 8,
  aux_sym_comment_token2 = 9,
  sym_document = 10,
  sym_section = 11,
  sym_section_name = 12,
  sym_setting = 13,
  sym_comment = 14,
  sym__blank = 15,
  aux_sym_document_repeat1 = 16,
  aux_sym_document_repeat2 = 17,
  aux_sym_section_repeat1 = 18,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LBRACK] = "[",
  [aux_sym_section_name_token1] = "text",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LF] = "\n",
  [aux_sym_setting_token1] = "setting_name",
  [anon_sym_EQ] = "=",
  [aux_sym_setting_token2] = "setting_value",
  [aux_sym_comment_token1] = "comment_token1",
  [aux_sym_comment_token2] = "text",
  [sym_document] = "document",
  [sym_section] = "section",
  [sym_section_name] = "section_name",
  [sym_setting] = "setting",
  [sym_comment] = "comment",
  [sym__blank] = "_blank",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_document_repeat2] = "document_repeat2",
  [aux_sym_section_repeat1] = "section_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [aux_sym_section_name_token1] = aux_sym_section_name_token1,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LF] = anon_sym_LF,
  [aux_sym_setting_token1] = aux_sym_setting_token1,
  [anon_sym_EQ] = anon_sym_EQ,
  [aux_sym_setting_token2] = aux_sym_setting_token2,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [aux_sym_comment_token2] = aux_sym_section_name_token1,
  [sym_document] = sym_document,
  [sym_section] = sym_section,
  [sym_section_name] = sym_section_name,
  [sym_setting] = sym_setting,
  [sym_comment] = sym_comment,
  [sym__blank] = sym__blank,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_document_repeat2] = aux_sym_document_repeat2,
  [aux_sym_section_repeat1] = aux_sym_section_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_section_name_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_setting_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_setting_token2] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_comment_token2] = {
    .visible = true,
    .named = true,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym_section] = {
    .visible = true,
    .named = true,
  },
  [sym_section_name] = {
    .visible = true,
    .named = true,
  },
  [sym_setting] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__blank] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_document_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_section_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_blank = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_blank] = "blank",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_blank, 0},
  [1] =
    {field_blank, 0, .inherited = true},
  [2] =
    {field_blank, 0, .inherited = true},
    {field_blank, 1, .inherited = true},
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
  [24] = 13,
  [25] = 25,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(5);
      if (lookahead == '\n') ADVANCE(11);
      if (lookahead == '#') ADVANCE(16);
      if (lookahead == ';') ADVANCE(12);
      if (lookahead == '=') ADVANCE(13);
      if (lookahead == '[') ADVANCE(6);
      if (lookahead == ']') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(0)
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(12);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(14);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(15);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(7);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(8);
      END_STATE();
    case 3:
      if (eof) ADVANCE(5);
      if (lookahead == '\n') ADVANCE(11);
      if (lookahead == '#') ADVANCE(16);
      if (lookahead == ';') ADVANCE(12);
      if (lookahead == '[') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(3)
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '=') ADVANCE(12);
      END_STATE();
    case 4:
      if (eof) ADVANCE(5);
      if (lookahead == '\n') ADVANCE(11);
      if (lookahead == '=') ADVANCE(13);
      if (lookahead == '[') ADVANCE(6);
      if (lookahead == ']') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(4)
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(16);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(aux_sym_section_name_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(7);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(8);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(aux_sym_section_name_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(8);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '=' &&
          lookahead != '[') ADVANCE(12);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(aux_sym_setting_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '=' &&
          lookahead != '[') ADVANCE(12);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(aux_sym_setting_token2);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(14);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(15);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym_setting_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(19);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(18);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(19);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(19);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 4},
  [2] = {.lex_state = 4},
  [3] = {.lex_state = 3},
  [4] = {.lex_state = 3},
  [5] = {.lex_state = 4},
  [6] = {.lex_state = 4},
  [7] = {.lex_state = 4},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 4},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 4},
  [14] = {.lex_state = 4},
  [15] = {.lex_state = 4},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 18},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 4},
  [24] = {(TSStateId)(-1)},
  [25] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [sym__blank] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(3),
    [aux_sym_setting_token1] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [aux_sym_comment_token1] = ACTIONS(5),
  },
  [1] = {
    [sym_document] = STATE(18),
    [sym_section] = STATE(14),
    [sym_section_name] = STATE(4),
    [sym_comment] = STATE(1),
    [sym__blank] = STATE(1),
    [aux_sym_document_repeat1] = STATE(2),
    [aux_sym_document_repeat2] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_LF] = ACTIONS(11),
    [aux_sym_comment_token1] = ACTIONS(13),
  },
  [2] = {
    [sym_section] = STATE(14),
    [sym_section_name] = STATE(4),
    [sym_comment] = STATE(2),
    [sym__blank] = STATE(2),
    [aux_sym_document_repeat1] = STATE(9),
    [aux_sym_document_repeat2] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_LF] = ACTIONS(11),
    [aux_sym_comment_token1] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(19), 1,
      aux_sym_setting_token1,
    STATE(12), 1,
      sym_setting,
    ACTIONS(17), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    STATE(3), 3,
      sym_comment,
      sym__blank,
      aux_sym_section_repeat1,
  [22] = 7,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(24), 1,
      aux_sym_setting_token1,
    STATE(8), 1,
      aux_sym_section_repeat1,
    STATE(12), 1,
      sym_setting,
    ACTIONS(22), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    STATE(4), 2,
      sym_comment,
      sym__blank,
  [46] = 8,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      aux_sym_comment_token1,
    ACTIONS(26), 1,
      ts_builtin_sym_end,
    STATE(4), 1,
      sym_section_name,
    STATE(6), 1,
      aux_sym_document_repeat2,
    STATE(14), 1,
      sym_section,
    STATE(5), 2,
      sym_comment,
      sym__blank,
  [72] = 7,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(13), 1,
      aux_sym_comment_token1,
    ACTIONS(28), 1,
      ts_builtin_sym_end,
    ACTIONS(30), 1,
      anon_sym_LBRACK,
    STATE(4), 1,
      sym_section_name,
    STATE(14), 1,
      sym_section,
    STATE(6), 3,
      sym_comment,
      sym__blank,
      aux_sym_document_repeat2,
  [96] = 8,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      aux_sym_comment_token1,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    STATE(4), 1,
      sym_section_name,
    STATE(6), 1,
      aux_sym_document_repeat2,
    STATE(14), 1,
      sym_section,
    STATE(7), 2,
      sym_comment,
      sym__blank,
  [122] = 7,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(24), 1,
      aux_sym_setting_token1,
    STATE(3), 1,
      aux_sym_section_repeat1,
    STATE(12), 1,
      sym_setting,
    ACTIONS(35), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    STATE(8), 2,
      sym_comment,
      sym__blank,
  [146] = 4,
    ACTIONS(13), 1,
      aux_sym_comment_token1,
    ACTIONS(39), 1,
      anon_sym_LF,
    ACTIONS(37), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    STATE(9), 3,
      sym_comment,
      sym__blank,
      aux_sym_document_repeat1,
  [162] = 4,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(10), 2,
      sym_comment,
      sym__blank,
    ACTIONS(42), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      aux_sym_setting_token1,
  [178] = 4,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(11), 2,
      sym_comment,
      sym__blank,
    ACTIONS(44), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      aux_sym_setting_token1,
  [194] = 4,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(12), 2,
      sym_comment,
      sym__blank,
    ACTIONS(46), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      aux_sym_setting_token1,
  [210] = 3,
    ACTIONS(13), 1,
      aux_sym_comment_token1,
    STATE(13), 2,
      sym_comment,
      sym__blank,
    ACTIONS(48), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_LF,
  [223] = 4,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(13), 1,
      aux_sym_comment_token1,
    ACTIONS(50), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    STATE(14), 2,
      sym_comment,
      sym__blank,
  [238] = 4,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(13), 1,
      aux_sym_comment_token1,
    ACTIONS(52), 1,
      anon_sym_EQ,
    STATE(15), 2,
      sym_comment,
      sym__blank,
  [252] = 4,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(13), 1,
      aux_sym_comment_token1,
    ACTIONS(54), 1,
      anon_sym_RBRACK,
    STATE(16), 2,
      sym_comment,
      sym__blank,
  [266] = 4,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(56), 1,
      anon_sym_LF,
    ACTIONS(58), 1,
      aux_sym_setting_token2,
    STATE(17), 2,
      sym_comment,
      sym__blank,
  [280] = 4,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(13), 1,
      aux_sym_comment_token1,
    ACTIONS(60), 1,
      ts_builtin_sym_end,
    STATE(18), 2,
      sym_comment,
      sym__blank,
  [294] = 4,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(56), 1,
      anon_sym_LF,
    ACTIONS(62), 1,
      aux_sym_section_name_token1,
    STATE(19), 2,
      sym_comment,
      sym__blank,
  [308] = 4,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(56), 1,
      anon_sym_LF,
    ACTIONS(64), 1,
      aux_sym_comment_token2,
    STATE(20), 2,
      sym_comment,
      sym__blank,
  [322] = 3,
    ACTIONS(13), 1,
      aux_sym_comment_token1,
    ACTIONS(66), 1,
      anon_sym_LF,
    STATE(21), 2,
      sym_comment,
      sym__blank,
  [333] = 3,
    ACTIONS(13), 1,
      aux_sym_comment_token1,
    ACTIONS(68), 1,
      anon_sym_LF,
    STATE(22), 2,
      sym_comment,
      sym__blank,
  [344] = 3,
    ACTIONS(13), 1,
      aux_sym_comment_token1,
    ACTIONS(70), 1,
      anon_sym_LF,
    STATE(23), 2,
      sym_comment,
      sym__blank,
  [355] = 1,
    ACTIONS(48), 1,
      ts_builtin_sym_end,
  [359] = 1,
    ACTIONS(72), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(3)] = 0,
  [SMALL_STATE(4)] = 22,
  [SMALL_STATE(5)] = 46,
  [SMALL_STATE(6)] = 72,
  [SMALL_STATE(7)] = 96,
  [SMALL_STATE(8)] = 122,
  [SMALL_STATE(9)] = 146,
  [SMALL_STATE(10)] = 162,
  [SMALL_STATE(11)] = 178,
  [SMALL_STATE(12)] = 194,
  [SMALL_STATE(13)] = 210,
  [SMALL_STATE(14)] = 223,
  [SMALL_STATE(15)] = 238,
  [SMALL_STATE(16)] = 252,
  [SMALL_STATE(17)] = 266,
  [SMALL_STATE(18)] = 280,
  [SMALL_STATE(19)] = 294,
  [SMALL_STATE(20)] = 308,
  [SMALL_STATE(21)] = 322,
  [SMALL_STATE(22)] = 333,
  [SMALL_STATE(23)] = 344,
  [SMALL_STATE(24)] = 355,
  [SMALL_STATE(25)] = 359,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1, .production_id = 2),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(15),
  [22] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 1),
  [24] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(19),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 2, .production_id = 2),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 2),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, .production_id = 3),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, .production_id = 3), SHIFT_REPEAT(13),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 4),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_name, 4),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 1),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__blank, 1, .production_id = 1),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 1),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [60] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_ini(void) {
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
