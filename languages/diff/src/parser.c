#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 83
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 58
#define ALIAS_COUNT 0
#define TOKEN_COUNT 34
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 4

enum {
  aux_sym_source_token1 = 1,
  anon_sym_diff = 2,
  anon_sym_DASH_DASHgit = 3,
  aux_sym_file_change_token1 = 4,
  anon_sym_file = 5,
  anon_sym_mode = 6,
  anon_sym_from = 7,
  anon_sym_to = 8,
  anon_sym_Binary = 9,
  anon_sym_files = 10,
  anon_sym_and = 11,
  anon_sym_differ = 12,
  anon_sym_index = 13,
  anon_sym_DOT_DOT = 14,
  anon_sym_similarity = 15,
  anon_sym_index2 = 16,
  aux_sym_similarity_token1 = 17,
  anon_sym_PERCENT = 18,
  anon_sym_DASH_DASH_DASH = 19,
  anon_sym_PLUS_PLUS_PLUS = 20,
  anon_sym_AT_AT = 21,
  anon_sym_AT_AT2 = 22,
  aux_sym_location_token1 = 23,
  anon_sym_PLUS = 24,
  anon_sym_PLUS_PLUS = 25,
  anon_sym_PLUS_PLUS_PLUS_PLUS = 26,
  anon_sym_DASH = 27,
  anon_sym_DASH_DASH = 28,
  anon_sym_DASH_DASH_DASH_DASH = 29,
  sym_context = 30,
  sym_linerange = 31,
  aux_sym_filename_token1 = 32,
  sym_commit = 33,
  sym_source = 34,
  sym__line = 35,
  sym_block = 36,
  sym_hunks = 37,
  sym_hunk = 38,
  sym_changes = 39,
  sym_command = 40,
  sym_file_change = 41,
  sym_binary_change = 42,
  sym_index = 43,
  sym_similarity = 44,
  sym_old_file = 45,
  sym_new_file = 46,
  sym_location = 47,
  sym_addition = 48,
  sym_deletion = 49,
  sym_filename = 50,
  sym_mode = 51,
  aux_sym_source_repeat1 = 52,
  aux_sym_block_repeat1 = 53,
  aux_sym_hunks_repeat1 = 54,
  aux_sym_changes_repeat1 = 55,
  aux_sym_changes_repeat2 = 56,
  aux_sym_filename_repeat1 = 57,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_source_token1] = "source_token1",
  [anon_sym_diff] = "diff",
  [anon_sym_DASH_DASHgit] = "--git",
  [aux_sym_file_change_token1] = "file_change_token1",
  [anon_sym_file] = "file",
  [anon_sym_mode] = "mode",
  [anon_sym_from] = "from",
  [anon_sym_to] = "to",
  [anon_sym_Binary] = "Binary",
  [anon_sym_files] = "files",
  [anon_sym_and] = "and",
  [anon_sym_differ] = "differ",
  [anon_sym_index] = "index",
  [anon_sym_DOT_DOT] = "..",
  [anon_sym_similarity] = "similarity",
  [anon_sym_index2] = "index",
  [aux_sym_similarity_token1] = "similarity_token1",
  [anon_sym_PERCENT] = "%",
  [anon_sym_DASH_DASH_DASH] = "---",
  [anon_sym_PLUS_PLUS_PLUS] = "+++",
  [anon_sym_AT_AT] = "@@",
  [anon_sym_AT_AT2] = "@@",
  [aux_sym_location_token1] = "location_token1",
  [anon_sym_PLUS] = "+",
  [anon_sym_PLUS_PLUS] = "++",
  [anon_sym_PLUS_PLUS_PLUS_PLUS] = "++++",
  [anon_sym_DASH] = "-",
  [anon_sym_DASH_DASH] = "--",
  [anon_sym_DASH_DASH_DASH_DASH] = "----",
  [sym_context] = "context",
  [sym_linerange] = "linerange",
  [aux_sym_filename_token1] = "filename_token1",
  [sym_commit] = "commit",
  [sym_source] = "source",
  [sym__line] = "_line",
  [sym_block] = "block",
  [sym_hunks] = "hunks",
  [sym_hunk] = "hunk",
  [sym_changes] = "changes",
  [sym_command] = "command",
  [sym_file_change] = "file_change",
  [sym_binary_change] = "binary_change",
  [sym_index] = "index",
  [sym_similarity] = "similarity",
  [sym_old_file] = "old_file",
  [sym_new_file] = "new_file",
  [sym_location] = "location",
  [sym_addition] = "addition",
  [sym_deletion] = "deletion",
  [sym_filename] = "filename",
  [sym_mode] = "mode",
  [aux_sym_source_repeat1] = "source_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_hunks_repeat1] = "hunks_repeat1",
  [aux_sym_changes_repeat1] = "changes_repeat1",
  [aux_sym_changes_repeat2] = "changes_repeat2",
  [aux_sym_filename_repeat1] = "filename_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_source_token1] = aux_sym_source_token1,
  [anon_sym_diff] = anon_sym_diff,
  [anon_sym_DASH_DASHgit] = anon_sym_DASH_DASHgit,
  [aux_sym_file_change_token1] = aux_sym_file_change_token1,
  [anon_sym_file] = anon_sym_file,
  [anon_sym_mode] = anon_sym_mode,
  [anon_sym_from] = anon_sym_from,
  [anon_sym_to] = anon_sym_to,
  [anon_sym_Binary] = anon_sym_Binary,
  [anon_sym_files] = anon_sym_files,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_differ] = anon_sym_differ,
  [anon_sym_index] = anon_sym_index,
  [anon_sym_DOT_DOT] = anon_sym_DOT_DOT,
  [anon_sym_similarity] = anon_sym_similarity,
  [anon_sym_index2] = anon_sym_index,
  [aux_sym_similarity_token1] = aux_sym_similarity_token1,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_DASH_DASH_DASH] = anon_sym_DASH_DASH_DASH,
  [anon_sym_PLUS_PLUS_PLUS] = anon_sym_PLUS_PLUS_PLUS,
  [anon_sym_AT_AT] = anon_sym_AT_AT,
  [anon_sym_AT_AT2] = anon_sym_AT_AT,
  [aux_sym_location_token1] = aux_sym_location_token1,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_PLUS_PLUS] = anon_sym_PLUS_PLUS,
  [anon_sym_PLUS_PLUS_PLUS_PLUS] = anon_sym_PLUS_PLUS_PLUS_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_DASH_DASH] = anon_sym_DASH_DASH,
  [anon_sym_DASH_DASH_DASH_DASH] = anon_sym_DASH_DASH_DASH_DASH,
  [sym_context] = sym_context,
  [sym_linerange] = sym_linerange,
  [aux_sym_filename_token1] = aux_sym_filename_token1,
  [sym_commit] = sym_commit,
  [sym_source] = sym_source,
  [sym__line] = sym__line,
  [sym_block] = sym_block,
  [sym_hunks] = sym_hunks,
  [sym_hunk] = sym_hunk,
  [sym_changes] = sym_changes,
  [sym_command] = sym_command,
  [sym_file_change] = sym_file_change,
  [sym_binary_change] = sym_binary_change,
  [sym_index] = sym_index,
  [sym_similarity] = sym_similarity,
  [sym_old_file] = sym_old_file,
  [sym_new_file] = sym_new_file,
  [sym_location] = sym_location,
  [sym_addition] = sym_addition,
  [sym_deletion] = sym_deletion,
  [sym_filename] = sym_filename,
  [sym_mode] = sym_mode,
  [aux_sym_source_repeat1] = aux_sym_source_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_hunks_repeat1] = aux_sym_hunks_repeat1,
  [aux_sym_changes_repeat1] = aux_sym_changes_repeat1,
  [aux_sym_changes_repeat2] = aux_sym_changes_repeat2,
  [aux_sym_filename_repeat1] = aux_sym_filename_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_diff] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASHgit] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_file_change_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_file] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mode] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_from] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_to] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Binary] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_files] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_differ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_index] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_similarity] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_index2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_similarity_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS_PLUS_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT_AT2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_location_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS_PLUS_PLUS_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASH_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [sym_context] = {
    .visible = true,
    .named = true,
  },
  [sym_linerange] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_filename_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_commit] = {
    .visible = true,
    .named = true,
  },
  [sym_source] = {
    .visible = true,
    .named = true,
  },
  [sym__line] = {
    .visible = false,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_hunks] = {
    .visible = true,
    .named = true,
  },
  [sym_hunk] = {
    .visible = true,
    .named = true,
  },
  [sym_changes] = {
    .visible = true,
    .named = true,
  },
  [sym_command] = {
    .visible = true,
    .named = true,
  },
  [sym_file_change] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_change] = {
    .visible = true,
    .named = true,
  },
  [sym_index] = {
    .visible = true,
    .named = true,
  },
  [sym_similarity] = {
    .visible = true,
    .named = true,
  },
  [sym_old_file] = {
    .visible = true,
    .named = true,
  },
  [sym_new_file] = {
    .visible = true,
    .named = true,
  },
  [sym_location] = {
    .visible = true,
    .named = true,
  },
  [sym_addition] = {
    .visible = true,
    .named = true,
  },
  [sym_deletion] = {
    .visible = true,
    .named = true,
  },
  [sym_filename] = {
    .visible = true,
    .named = true,
  },
  [sym_mode] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_hunks_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_changes_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_changes_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_filename_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_changes = 1,
  field_location = 2,
  field_score = 3,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_changes] = "changes",
  [field_location] = "location",
  [field_score] = "score",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_score, 2},
  [1] =
    {field_location, 0},
  [2] =
    {field_changes, 2},
    {field_location, 0},
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
  [31] = 24,
  [32] = 32,
  [33] = 25,
  [34] = 34,
  [35] = 35,
  [36] = 25,
  [37] = 37,
  [38] = 38,
  [39] = 24,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(89);
      if (lookahead == '\n') ADVANCE(90);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '%') ADVANCE(150);
      if (lookahead == '+') ADVANCE(158);
      if (lookahead == '-') ADVANCE(161);
      if (lookahead == '.') ADVANCE(5);
      if (lookahead == '@') ADVANCE(6);
      if (lookahead == 'B') ADVANCE(39);
      if (lookahead == 'a') ADVANCE(55);
      if (lookahead == 'd') ADVANCE(18);
      if (lookahead == 'f') ADVANCE(37);
      if (lookahead == 'i') ADVANCE(57);
      if (lookahead == 'm') ADVANCE(62);
      if (lookahead == 'n') ADVANCE(19);
      if (lookahead == 'r') ADVANCE(29);
      if (lookahead == 's') ADVANCE(38);
      if (lookahead == 't') ADVANCE(60);
      if (('b' <= lookahead && lookahead <= 'e')) ADVANCE(82);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(83)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(120);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(90);
      END_STATE();
    case 2:
      if (lookahead == '+') ADVANCE(3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(200);
      END_STATE();
    case 3:
      if (lookahead == '+') ADVANCE(152);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(200);
      END_STATE();
    case 5:
      if (lookahead == '.') ADVANCE(107);
      END_STATE();
    case 6:
      if (lookahead == '@') ADVANCE(154);
      END_STATE();
    case 7:
      if (lookahead == '@') ADVANCE(155);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(63);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(209);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(9)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(202);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(212);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(54);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(65);
      END_STATE();
    case 12:
      if (lookahead == 'd') ADVANCE(102);
      END_STATE();
    case 13:
      if (lookahead == 'd') ADVANCE(94);
      END_STATE();
    case 14:
      if (lookahead == 'd') ADVANCE(208);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(14)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(203);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(212);
      END_STATE();
    case 15:
      if (lookahead == 'd') ADVANCE(23);
      END_STATE();
    case 16:
      if (lookahead == 'd') ADVANCE(24);
      END_STATE();
    case 17:
      if (lookahead == 'd') ADVANCE(28);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(47);
      if (lookahead == 'i') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(81);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(96);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(97);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 31:
      if (lookahead == 'f') ADVANCE(92);
      END_STATE();
    case 32:
      if (lookahead == 'f') ADVANCE(31);
      END_STATE();
    case 33:
      if (lookahead == 'f') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(33)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(82);
      END_STATE();
    case 34:
      if (lookahead == 'f') ADVANCE(35);
      END_STATE();
    case 35:
      if (lookahead == 'f') ADVANCE(27);
      END_STATE();
    case 36:
      if (lookahead == 'g') ADVANCE(42);
      END_STATE();
    case 37:
      if (lookahead == 'i') ADVANCE(48);
      if (lookahead == 'r') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(81);
      END_STATE();
    case 38:
      if (lookahead == 'i') ADVANCE(53);
      END_STATE();
    case 39:
      if (lookahead == 'i') ADVANCE(56);
      END_STATE();
    case 40:
      if (lookahead == 'i') ADVANCE(51);
      END_STATE();
    case 41:
      if (lookahead == 'i') ADVANCE(68);
      END_STATE();
    case 42:
      if (lookahead == 'i') ADVANCE(67);
      END_STATE();
    case 43:
      if (lookahead == 'i') ADVANCE(34);
      END_STATE();
    case 44:
      if (lookahead == 'i') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(81);
      END_STATE();
    case 45:
      if (lookahead == 'i') ADVANCE(49);
      if (lookahead == 'r') ADVANCE(61);
      END_STATE();
    case 46:
      if (lookahead == 'i') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(81);
      END_STATE();
    case 47:
      if (lookahead == 'l') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(80);
      END_STATE();
    case 48:
      if (lookahead == 'l') ADVANCE(22);
      END_STATE();
    case 49:
      if (lookahead == 'l') ADVANCE(25);
      END_STATE();
    case 50:
      if (lookahead == 'l') ADVANCE(26);
      END_STATE();
    case 51:
      if (lookahead == 'l') ADVANCE(11);
      END_STATE();
    case 52:
      if (lookahead == 'm') ADVANCE(98);
      END_STATE();
    case 53:
      if (lookahead == 'm') ADVANCE(40);
      END_STATE();
    case 54:
      if (lookahead == 'm') ADVANCE(20);
      END_STATE();
    case 55:
      if (lookahead == 'n') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(81);
      END_STATE();
    case 56:
      if (lookahead == 'n') ADVANCE(8);
      END_STATE();
    case 57:
      if (lookahead == 'n') ADVANCE(15);
      END_STATE();
    case 58:
      if (lookahead == 'n') ADVANCE(10);
      END_STATE();
    case 59:
      if (lookahead == 'n') ADVANCE(17);
      END_STATE();
    case 60:
      if (lookahead == 'o') ADVANCE(99);
      END_STATE();
    case 61:
      if (lookahead == 'o') ADVANCE(52);
      END_STATE();
    case 62:
      if (lookahead == 'o') ADVANCE(16);
      END_STATE();
    case 63:
      if (lookahead == 'r') ADVANCE(73);
      END_STATE();
    case 64:
      if (lookahead == 'r') ADVANCE(104);
      END_STATE();
    case 65:
      if (lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 66:
      if (lookahead == 's') ADVANCE(101);
      END_STATE();
    case 67:
      if (lookahead == 't') ADVANCE(93);
      END_STATE();
    case 68:
      if (lookahead == 't') ADVANCE(74);
      END_STATE();
    case 69:
      if (lookahead == 't') ADVANCE(30);
      END_STATE();
    case 70:
      if (lookahead == 'w') ADVANCE(94);
      END_STATE();
    case 71:
      if (lookahead == 'x') ADVANCE(106);
      END_STATE();
    case 72:
      if (lookahead == 'x') ADVANCE(109);
      END_STATE();
    case 73:
      if (lookahead == 'y') ADVANCE(100);
      END_STATE();
    case 74:
      if (lookahead == 'y') ADVANCE(108);
      END_STATE();
    case 75:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(200);
      END_STATE();
    case 76:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(201);
      END_STATE();
    case 77:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(246);
      END_STATE();
    case 78:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(77);
      END_STATE();
    case 79:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(78);
      END_STATE();
    case 80:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(79);
      END_STATE();
    case 81:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(80);
      END_STATE();
    case 82:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(81);
      END_STATE();
    case 83:
      if (eof) ADVANCE(89);
      if (lookahead == '\n') ADVANCE(90);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '%') ADVANCE(150);
      if (lookahead == '.') ADVANCE(5);
      if (lookahead == '@') ADVANCE(7);
      if (lookahead == 'a') ADVANCE(55);
      if (lookahead == 'd') ADVANCE(44);
      if (lookahead == 'f') ADVANCE(37);
      if (lookahead == 'i') ADVANCE(59);
      if (lookahead == 'm') ADVANCE(62);
      if (lookahead == 't') ADVANCE(60);
      if (('b' <= lookahead && lookahead <= 'e')) ADVANCE(82);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(83)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(120);
      END_STATE();
    case 84:
      if (eof) ADVANCE(89);
      if (lookahead == '\n') ADVANCE(90);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '+') ADVANCE(158);
      if (lookahead == '-') ADVANCE(161);
      if (lookahead == '@') ADVANCE(165);
      if (lookahead == 'B') ADVANCE(181);
      if (lookahead == 'd') ADVANCE(172);
      if (lookahead == 'i') ADVANCE(188);
      if (lookahead == 'n') ADVANCE(173);
      if (lookahead == 'r') ADVANCE(177);
      if (lookahead == 's') ADVANCE(180);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(164);
      if (lookahead != 0) ADVANCE(199);
      END_STATE();
    case 85:
      if (eof) ADVANCE(89);
      if (lookahead == '\n') ADVANCE(90);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '+') ADVANCE(2);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == '@') ADVANCE(7);
      if (lookahead == 'd') ADVANCE(43);
      if (lookahead == 'f') ADVANCE(45);
      if (lookahead == 'i') ADVANCE(59);
      if (lookahead == 't') ADVANCE(60);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(86)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(149);
      END_STATE();
    case 86:
      if (eof) ADVANCE(89);
      if (lookahead == '\n') ADVANCE(90);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '+') ADVANCE(75);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == '@') ADVANCE(7);
      if (lookahead == 'd') ADVANCE(43);
      if (lookahead == 'f') ADVANCE(45);
      if (lookahead == 'i') ADVANCE(59);
      if (lookahead == 't') ADVANCE(60);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(86)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(149);
      END_STATE();
    case 87:
      if (eof) ADVANCE(89);
      if (lookahead == '\n') ADVANCE(90);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(87)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(211);
      if (lookahead != 0) ADVANCE(212);
      END_STATE();
    case 88:
      if (eof) ADVANCE(89);
      if (lookahead == '\n') ADVANCE(90);
      if (lookahead == '\r') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(156);
      if (lookahead != 0) ADVANCE(157);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_source_token1);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_diff);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_diff);
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_DASH_DASHgit);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_file_change_token1);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_file);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_file);
      if (lookahead == 's') ADVANCE(101);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_mode);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_to);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_Binary);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_files);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_and);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(212);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_differ);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_differ);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(212);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_index);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_similarity);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_index2);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(149);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(111);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(113);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(114);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(117);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(118);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(119);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(121);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(122);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(125);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(126);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(129);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(131);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(132);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(133);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(135);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(136);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(139);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(141);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(143);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(145);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(146);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(147);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(149);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_DASH);
      if (lookahead == '-') ADVANCE(163);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS_PLUS);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS_PLUS);
      if (lookahead == '+') ADVANCE(160);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_AT_AT);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_AT_AT2);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_location_token1);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(156);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(157);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_location_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(157);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '+') ADVANCE(159);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS);
      if (lookahead == '+') ADVANCE(153);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS_PLUS_PLUS);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(162);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      if (lookahead == '-') ADVANCE(151);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_DASH_DASH);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == '\n') ADVANCE(90);
      if (lookahead == '\r') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(164);
      if (lookahead != 0) ADVANCE(199);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == '@') ADVANCE(154);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(199);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'a') ADVANCE(191);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(199);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'a') ADVANCE(187);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(199);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'a') ADVANCE(192);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(199);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'd') ADVANCE(94);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(199);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'd') ADVANCE(175);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(199);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'e') ADVANCE(94);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(199);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'e') ADVANCE(184);
      if (lookahead == 'i') ADVANCE(179);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(199);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'e') ADVANCE(195);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(199);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'e') ADVANCE(194);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(199);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'e') ADVANCE(196);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(199);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'e') ADVANCE(169);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(199);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'e') ADVANCE(190);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(199);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'f') ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(199);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'f') ADVANCE(178);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(199);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'i') ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(199);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'i') ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(199);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'i') ADVANCE(185);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(199);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'i') ADVANCE(193);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(199);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'l') ADVANCE(174);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(199);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'l') ADVANCE(168);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(199);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'm') ADVANCE(182);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(199);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'm') ADVANCE(171);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(199);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'n') ADVANCE(170);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(199);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'n') ADVANCE(166);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(199);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'n') ADVANCE(167);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(199);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'r') ADVANCE(197);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(199);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'r') ADVANCE(183);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(199);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 't') ADVANCE(198);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(199);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 't') ADVANCE(176);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(199);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'w') ADVANCE(94);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(199);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'x') ADVANCE(106);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(199);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'y') ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(199);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'y') ADVANCE(108);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(199);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_context);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(199);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_linerange);
      if (lookahead == ',') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(200);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_linerange);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(201);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_filename_token1);
      if (lookahead == 'a') ADVANCE(209);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(202);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(212);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_filename_token1);
      if (lookahead == 'd') ADVANCE(208);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(203);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(212);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_filename_token1);
      if (lookahead == 'd') ADVANCE(103);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(212);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_filename_token1);
      if (lookahead == 'e') ADVANCE(210);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(212);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_filename_token1);
      if (lookahead == 'f') ADVANCE(205);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(212);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_filename_token1);
      if (lookahead == 'f') ADVANCE(206);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(212);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_filename_token1);
      if (lookahead == 'i') ADVANCE(207);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(212);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_filename_token1);
      if (lookahead == 'n') ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(212);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_filename_token1);
      if (lookahead == 'r') ADVANCE(105);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(212);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_filename_token1);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(211);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(212);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_filename_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(212);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_commit);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(213);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(214);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(215);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(216);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(217);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(218);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(219);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(220);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(221);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(222);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(223);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(224);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(225);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(226);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(227);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(228);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(229);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(230);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(231);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(232);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(233);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(234);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(235);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(236);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(237);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(238);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(239);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(240);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(241);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(242);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(243);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(244);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(245);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 84},
  [2] = {.lex_state = 84},
  [3] = {.lex_state = 84},
  [4] = {.lex_state = 84},
  [5] = {.lex_state = 84},
  [6] = {.lex_state = 84},
  [7] = {.lex_state = 84},
  [8] = {.lex_state = 84},
  [9] = {.lex_state = 84},
  [10] = {.lex_state = 84},
  [11] = {.lex_state = 84},
  [12] = {.lex_state = 84},
  [13] = {.lex_state = 84},
  [14] = {.lex_state = 84},
  [15] = {.lex_state = 84},
  [16] = {.lex_state = 84},
  [17] = {.lex_state = 84},
  [18] = {.lex_state = 84},
  [19] = {.lex_state = 87},
  [20] = {.lex_state = 84},
  [21] = {.lex_state = 87},
  [22] = {.lex_state = 84},
  [23] = {.lex_state = 85},
  [24] = {.lex_state = 87},
  [25] = {.lex_state = 87},
  [26] = {.lex_state = 87},
  [27] = {.lex_state = 88},
  [28] = {.lex_state = 87},
  [29] = {.lex_state = 85},
  [30] = {.lex_state = 87},
  [31] = {.lex_state = 14},
  [32] = {.lex_state = 88},
  [33] = {.lex_state = 14},
  [34] = {.lex_state = 87},
  [35] = {.lex_state = 88},
  [36] = {.lex_state = 9},
  [37] = {.lex_state = 87},
  [38] = {.lex_state = 87},
  [39] = {.lex_state = 9},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 85},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 85},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 85},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 85},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 85},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 85},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 33},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 85},
  [75] = {.lex_state = 85},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 85},
  [80] = {.lex_state = 85},
  [81] = {.lex_state = 33},
  [82] = {.lex_state = 33},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_source_token1] = ACTIONS(1),
    [anon_sym_diff] = ACTIONS(1),
    [aux_sym_file_change_token1] = ACTIONS(1),
    [anon_sym_file] = ACTIONS(1),
    [anon_sym_mode] = ACTIONS(1),
    [anon_sym_from] = ACTIONS(1),
    [anon_sym_to] = ACTIONS(1),
    [anon_sym_Binary] = ACTIONS(1),
    [anon_sym_files] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_differ] = ACTIONS(1),
    [anon_sym_index] = ACTIONS(1),
    [anon_sym_DOT_DOT] = ACTIONS(1),
    [anon_sym_similarity] = ACTIONS(1),
    [anon_sym_index2] = ACTIONS(1),
    [aux_sym_similarity_token1] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_DASH_DASH_DASH] = ACTIONS(1),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(1),
    [anon_sym_AT_AT] = ACTIONS(1),
    [anon_sym_AT_AT2] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_PLUS_PLUS] = ACTIONS(1),
    [anon_sym_PLUS_PLUS_PLUS_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_DASH_DASH] = ACTIONS(1),
    [anon_sym_DASH_DASH_DASH_DASH] = ACTIONS(1),
    [sym_commit] = ACTIONS(1),
  },
  [1] = {
    [sym_source] = STATE(78),
    [sym__line] = STATE(49),
    [sym_block] = STATE(3),
    [sym_command] = STATE(77),
    [sym_file_change] = STATE(49),
    [sym_binary_change] = STATE(49),
    [sym_index] = STATE(49),
    [sym_similarity] = STATE(49),
    [sym_old_file] = STATE(49),
    [sym_new_file] = STATE(49),
    [sym_location] = STATE(49),
    [sym_addition] = STATE(49),
    [sym_deletion] = STATE(49),
    [aux_sym_source_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_source_token1] = ACTIONS(5),
    [anon_sym_diff] = ACTIONS(7),
    [aux_sym_file_change_token1] = ACTIONS(9),
    [anon_sym_Binary] = ACTIONS(11),
    [anon_sym_index] = ACTIONS(13),
    [anon_sym_similarity] = ACTIONS(15),
    [anon_sym_DASH_DASH_DASH] = ACTIONS(17),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(19),
    [anon_sym_AT_AT] = ACTIONS(21),
    [anon_sym_PLUS] = ACTIONS(23),
    [anon_sym_PLUS_PLUS] = ACTIONS(23),
    [anon_sym_PLUS_PLUS_PLUS_PLUS] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(27),
    [anon_sym_DASH_DASH] = ACTIONS(27),
    [anon_sym_DASH_DASH_DASH_DASH] = ACTIONS(29),
    [sym_context] = ACTIONS(31),
  },
  [2] = {
    [sym__line] = STATE(61),
    [sym_block] = STATE(2),
    [sym_command] = STATE(77),
    [sym_file_change] = STATE(61),
    [sym_binary_change] = STATE(61),
    [sym_index] = STATE(61),
    [sym_similarity] = STATE(61),
    [sym_old_file] = STATE(61),
    [sym_new_file] = STATE(61),
    [sym_location] = STATE(61),
    [sym_addition] = STATE(61),
    [sym_deletion] = STATE(61),
    [aux_sym_source_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(33),
    [aux_sym_source_token1] = ACTIONS(35),
    [anon_sym_diff] = ACTIONS(38),
    [aux_sym_file_change_token1] = ACTIONS(41),
    [anon_sym_Binary] = ACTIONS(44),
    [anon_sym_index] = ACTIONS(47),
    [anon_sym_similarity] = ACTIONS(50),
    [anon_sym_DASH_DASH_DASH] = ACTIONS(53),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(56),
    [anon_sym_AT_AT] = ACTIONS(59),
    [anon_sym_PLUS] = ACTIONS(62),
    [anon_sym_PLUS_PLUS] = ACTIONS(62),
    [anon_sym_PLUS_PLUS_PLUS_PLUS] = ACTIONS(65),
    [anon_sym_DASH] = ACTIONS(68),
    [anon_sym_DASH_DASH] = ACTIONS(68),
    [anon_sym_DASH_DASH_DASH_DASH] = ACTIONS(71),
    [sym_context] = ACTIONS(74),
  },
  [3] = {
    [sym__line] = STATE(45),
    [sym_block] = STATE(2),
    [sym_command] = STATE(77),
    [sym_file_change] = STATE(45),
    [sym_binary_change] = STATE(45),
    [sym_index] = STATE(45),
    [sym_similarity] = STATE(45),
    [sym_old_file] = STATE(45),
    [sym_new_file] = STATE(45),
    [sym_location] = STATE(45),
    [sym_addition] = STATE(45),
    [sym_deletion] = STATE(45),
    [aux_sym_source_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(77),
    [aux_sym_source_token1] = ACTIONS(79),
    [anon_sym_diff] = ACTIONS(7),
    [aux_sym_file_change_token1] = ACTIONS(9),
    [anon_sym_Binary] = ACTIONS(11),
    [anon_sym_index] = ACTIONS(13),
    [anon_sym_similarity] = ACTIONS(15),
    [anon_sym_DASH_DASH_DASH] = ACTIONS(17),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(19),
    [anon_sym_AT_AT] = ACTIONS(21),
    [anon_sym_PLUS] = ACTIONS(23),
    [anon_sym_PLUS_PLUS] = ACTIONS(23),
    [anon_sym_PLUS_PLUS_PLUS_PLUS] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(27),
    [anon_sym_DASH_DASH] = ACTIONS(27),
    [anon_sym_DASH_DASH_DASH_DASH] = ACTIONS(29),
    [sym_context] = ACTIONS(81),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(9), 1,
      aux_sym_file_change_token1,
    ACTIONS(11), 1,
      anon_sym_Binary,
    ACTIONS(13), 1,
      anon_sym_index,
    ACTIONS(15), 1,
      anon_sym_similarity,
    ACTIONS(87), 1,
      anon_sym_DASH_DASH_DASH,
    STATE(6), 1,
      aux_sym_block_repeat1,
    STATE(62), 1,
      sym_old_file,
    STATE(66), 4,
      sym_file_change,
      sym_binary_change,
      sym_index,
      sym_similarity,
    ACTIONS(83), 5,
      ts_builtin_sym_end,
      anon_sym_diff,
      anon_sym_AT_AT,
      anon_sym_PLUS_PLUS_PLUS_PLUS,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(85), 7,
      aux_sym_source_token1,
      anon_sym_PLUS_PLUS_PLUS,
      anon_sym_PLUS,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH,
      anon_sym_DASH_DASH,
      sym_context,
  [44] = 10,
    ACTIONS(9), 1,
      aux_sym_file_change_token1,
    ACTIONS(11), 1,
      anon_sym_Binary,
    ACTIONS(13), 1,
      anon_sym_index,
    ACTIONS(15), 1,
      anon_sym_similarity,
    ACTIONS(87), 1,
      anon_sym_DASH_DASH_DASH,
    STATE(4), 1,
      aux_sym_block_repeat1,
    STATE(58), 1,
      sym_old_file,
    STATE(66), 4,
      sym_file_change,
      sym_binary_change,
      sym_index,
      sym_similarity,
    ACTIONS(89), 5,
      ts_builtin_sym_end,
      anon_sym_diff,
      anon_sym_AT_AT,
      anon_sym_PLUS_PLUS_PLUS_PLUS,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(91), 7,
      aux_sym_source_token1,
      anon_sym_PLUS_PLUS_PLUS,
      anon_sym_PLUS,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH,
      anon_sym_DASH_DASH,
      sym_context,
  [88] = 8,
    ACTIONS(97), 1,
      aux_sym_file_change_token1,
    ACTIONS(100), 1,
      anon_sym_Binary,
    ACTIONS(103), 1,
      anon_sym_index,
    ACTIONS(106), 1,
      anon_sym_similarity,
    STATE(6), 1,
      aux_sym_block_repeat1,
    STATE(66), 4,
      sym_file_change,
      sym_binary_change,
      sym_index,
      sym_similarity,
    ACTIONS(93), 5,
      ts_builtin_sym_end,
      anon_sym_diff,
      anon_sym_AT_AT,
      anon_sym_PLUS_PLUS_PLUS_PLUS,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(95), 8,
      aux_sym_source_token1,
      anon_sym_DASH_DASH_DASH,
      anon_sym_PLUS_PLUS_PLUS,
      anon_sym_PLUS,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH,
      anon_sym_DASH_DASH,
      sym_context,
  [127] = 12,
    ACTIONS(25), 1,
      anon_sym_PLUS_PLUS_PLUS_PLUS,
    ACTIONS(29), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(111), 1,
      aux_sym_source_token1,
    ACTIONS(113), 1,
      anon_sym_DASH_DASH_DASH,
    ACTIONS(115), 1,
      anon_sym_PLUS_PLUS_PLUS,
    ACTIONS(117), 1,
      sym_context,
    STATE(11), 1,
      aux_sym_changes_repeat2,
    STATE(17), 1,
      sym_changes,
    ACTIONS(23), 2,
      anon_sym_PLUS,
      anon_sym_PLUS_PLUS,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_DASH_DASH,
    STATE(54), 2,
      sym_addition,
      sym_deletion,
    ACTIONS(109), 7,
      ts_builtin_sym_end,
      anon_sym_diff,
      aux_sym_file_change_token1,
      anon_sym_Binary,
      anon_sym_index,
      anon_sym_similarity,
      anon_sym_AT_AT,
  [173] = 5,
    ACTIONS(21), 1,
      anon_sym_AT_AT,
    STATE(65), 1,
      sym_location,
    STATE(9), 2,
      sym_hunk,
      aux_sym_hunks_repeat1,
    ACTIONS(119), 8,
      ts_builtin_sym_end,
      anon_sym_diff,
      aux_sym_file_change_token1,
      anon_sym_Binary,
      anon_sym_index,
      anon_sym_similarity,
      anon_sym_PLUS_PLUS_PLUS_PLUS,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(121), 8,
      aux_sym_source_token1,
      anon_sym_DASH_DASH_DASH,
      anon_sym_PLUS_PLUS_PLUS,
      anon_sym_PLUS,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH,
      anon_sym_DASH_DASH,
      sym_context,
  [204] = 5,
    ACTIONS(127), 1,
      anon_sym_AT_AT,
    STATE(65), 1,
      sym_location,
    STATE(9), 2,
      sym_hunk,
      aux_sym_hunks_repeat1,
    ACTIONS(123), 8,
      ts_builtin_sym_end,
      anon_sym_diff,
      aux_sym_file_change_token1,
      anon_sym_Binary,
      anon_sym_index,
      anon_sym_similarity,
      anon_sym_PLUS_PLUS_PLUS_PLUS,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(125), 8,
      aux_sym_source_token1,
      anon_sym_DASH_DASH_DASH,
      anon_sym_PLUS_PLUS_PLUS,
      anon_sym_PLUS,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH,
      anon_sym_DASH_DASH,
      sym_context,
  [235] = 11,
    ACTIONS(132), 1,
      aux_sym_source_token1,
    ACTIONS(134), 1,
      anon_sym_DASH_DASH_DASH,
    ACTIONS(137), 1,
      anon_sym_PLUS_PLUS_PLUS,
    ACTIONS(143), 1,
      anon_sym_PLUS_PLUS_PLUS_PLUS,
    ACTIONS(149), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(152), 1,
      sym_context,
    STATE(10), 1,
      aux_sym_changes_repeat2,
    ACTIONS(140), 2,
      anon_sym_PLUS,
      anon_sym_PLUS_PLUS,
    ACTIONS(146), 2,
      anon_sym_DASH,
      anon_sym_DASH_DASH,
    STATE(54), 2,
      sym_addition,
      sym_deletion,
    ACTIONS(130), 7,
      ts_builtin_sym_end,
      anon_sym_diff,
      aux_sym_file_change_token1,
      anon_sym_Binary,
      anon_sym_index,
      anon_sym_similarity,
      anon_sym_AT_AT,
  [278] = 11,
    ACTIONS(25), 1,
      anon_sym_PLUS_PLUS_PLUS_PLUS,
    ACTIONS(29), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(113), 1,
      anon_sym_DASH_DASH_DASH,
    ACTIONS(115), 1,
      anon_sym_PLUS_PLUS_PLUS,
    ACTIONS(117), 1,
      sym_context,
    ACTIONS(157), 1,
      aux_sym_source_token1,
    STATE(10), 1,
      aux_sym_changes_repeat2,
    ACTIONS(23), 2,
      anon_sym_PLUS,
      anon_sym_PLUS_PLUS,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_DASH_DASH,
    STATE(54), 2,
      sym_addition,
      sym_deletion,
    ACTIONS(155), 7,
      ts_builtin_sym_end,
      anon_sym_diff,
      aux_sym_file_change_token1,
      anon_sym_Binary,
      anon_sym_index,
      anon_sym_similarity,
      anon_sym_AT_AT,
  [321] = 4,
    ACTIONS(159), 1,
      aux_sym_source_token1,
    STATE(13), 1,
      aux_sym_changes_repeat1,
    ACTIONS(132), 7,
      anon_sym_DASH_DASH_DASH,
      anon_sym_PLUS_PLUS_PLUS,
      anon_sym_PLUS,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH,
      anon_sym_DASH_DASH,
      sym_context,
    ACTIONS(130), 9,
      ts_builtin_sym_end,
      anon_sym_diff,
      aux_sym_file_change_token1,
      anon_sym_Binary,
      anon_sym_index,
      anon_sym_similarity,
      anon_sym_AT_AT,
      anon_sym_PLUS_PLUS_PLUS_PLUS,
      anon_sym_DASH_DASH_DASH_DASH,
  [348] = 4,
    ACTIONS(163), 1,
      aux_sym_source_token1,
    STATE(13), 1,
      aux_sym_changes_repeat1,
    ACTIONS(166), 7,
      anon_sym_DASH_DASH_DASH,
      anon_sym_PLUS_PLUS_PLUS,
      anon_sym_PLUS,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH,
      anon_sym_DASH_DASH,
      sym_context,
    ACTIONS(161), 9,
      ts_builtin_sym_end,
      anon_sym_diff,
      aux_sym_file_change_token1,
      anon_sym_Binary,
      anon_sym_index,
      anon_sym_similarity,
      anon_sym_AT_AT,
      anon_sym_PLUS_PLUS_PLUS_PLUS,
      anon_sym_DASH_DASH_DASH_DASH,
  [375] = 2,
    ACTIONS(168), 8,
      aux_sym_source_token1,
      anon_sym_DASH_DASH_DASH,
      anon_sym_PLUS_PLUS_PLUS,
      anon_sym_PLUS,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH,
      anon_sym_DASH_DASH,
      sym_context,
    ACTIONS(33), 9,
      ts_builtin_sym_end,
      anon_sym_diff,
      aux_sym_file_change_token1,
      anon_sym_Binary,
      anon_sym_index,
      anon_sym_similarity,
      anon_sym_AT_AT,
      anon_sym_PLUS_PLUS_PLUS_PLUS,
      anon_sym_DASH_DASH_DASH_DASH,
  [397] = 2,
    ACTIONS(95), 8,
      aux_sym_source_token1,
      anon_sym_DASH_DASH_DASH,
      anon_sym_PLUS_PLUS_PLUS,
      anon_sym_PLUS,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH,
      anon_sym_DASH_DASH,
      sym_context,
    ACTIONS(93), 9,
      ts_builtin_sym_end,
      anon_sym_diff,
      aux_sym_file_change_token1,
      anon_sym_Binary,
      anon_sym_index,
      anon_sym_similarity,
      anon_sym_AT_AT,
      anon_sym_PLUS_PLUS_PLUS_PLUS,
      anon_sym_DASH_DASH_DASH_DASH,
  [419] = 2,
    ACTIONS(172), 8,
      aux_sym_source_token1,
      anon_sym_DASH_DASH_DASH,
      anon_sym_PLUS_PLUS_PLUS,
      anon_sym_PLUS,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH,
      anon_sym_DASH_DASH,
      sym_context,
    ACTIONS(170), 9,
      ts_builtin_sym_end,
      anon_sym_diff,
      aux_sym_file_change_token1,
      anon_sym_Binary,
      anon_sym_index,
      anon_sym_similarity,
      anon_sym_AT_AT,
      anon_sym_PLUS_PLUS_PLUS_PLUS,
      anon_sym_DASH_DASH_DASH_DASH,
  [441] = 2,
    ACTIONS(176), 8,
      aux_sym_source_token1,
      anon_sym_DASH_DASH_DASH,
      anon_sym_PLUS_PLUS_PLUS,
      anon_sym_PLUS,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH,
      anon_sym_DASH_DASH,
      sym_context,
    ACTIONS(174), 9,
      ts_builtin_sym_end,
      anon_sym_diff,
      aux_sym_file_change_token1,
      anon_sym_Binary,
      anon_sym_index,
      anon_sym_similarity,
      anon_sym_AT_AT,
      anon_sym_PLUS_PLUS_PLUS_PLUS,
      anon_sym_DASH_DASH_DASH_DASH,
  [463] = 2,
    ACTIONS(180), 8,
      aux_sym_source_token1,
      anon_sym_DASH_DASH_DASH,
      anon_sym_PLUS_PLUS_PLUS,
      anon_sym_PLUS,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH,
      anon_sym_DASH_DASH,
      sym_context,
    ACTIONS(178), 9,
      ts_builtin_sym_end,
      anon_sym_diff,
      aux_sym_file_change_token1,
      anon_sym_Binary,
      anon_sym_index,
      anon_sym_similarity,
      anon_sym_AT_AT,
      anon_sym_PLUS_PLUS_PLUS_PLUS,
      anon_sym_DASH_DASH_DASH_DASH,
  [485] = 5,
    ACTIONS(182), 1,
      ts_builtin_sym_end,
    ACTIONS(184), 1,
      aux_sym_source_token1,
    ACTIONS(186), 1,
      aux_sym_filename_token1,
    STATE(25), 1,
      aux_sym_filename_repeat1,
    STATE(48), 1,
      sym_filename,
  [501] = 4,
    ACTIONS(21), 1,
      anon_sym_AT_AT,
    STATE(18), 1,
      sym_hunks,
    STATE(65), 1,
      sym_location,
    STATE(8), 2,
      sym_hunk,
      aux_sym_hunks_repeat1,
  [515] = 5,
    ACTIONS(186), 1,
      aux_sym_filename_token1,
    ACTIONS(188), 1,
      ts_builtin_sym_end,
    ACTIONS(190), 1,
      aux_sym_source_token1,
    STATE(25), 1,
      aux_sym_filename_repeat1,
    STATE(40), 1,
      sym_filename,
  [531] = 4,
    ACTIONS(21), 1,
      anon_sym_AT_AT,
    STATE(16), 1,
      sym_hunks,
    STATE(65), 1,
      sym_location,
    STATE(8), 2,
      sym_hunk,
      aux_sym_hunks_repeat1,
  [545] = 3,
    ACTIONS(194), 1,
      aux_sym_similarity_token1,
    STATE(52), 1,
      sym_mode,
    ACTIONS(192), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [556] = 4,
    ACTIONS(196), 1,
      ts_builtin_sym_end,
    ACTIONS(198), 1,
      aux_sym_source_token1,
    ACTIONS(200), 1,
      aux_sym_filename_token1,
    STATE(24), 1,
      aux_sym_filename_repeat1,
  [569] = 4,
    ACTIONS(203), 1,
      ts_builtin_sym_end,
    ACTIONS(205), 1,
      aux_sym_source_token1,
    ACTIONS(207), 1,
      aux_sym_filename_token1,
    STATE(24), 1,
      aux_sym_filename_repeat1,
  [582] = 3,
    ACTIONS(209), 1,
      aux_sym_filename_token1,
    STATE(33), 1,
      aux_sym_filename_repeat1,
    STATE(60), 1,
      sym_filename,
  [592] = 3,
    ACTIONS(211), 1,
      ts_builtin_sym_end,
    ACTIONS(213), 1,
      aux_sym_source_token1,
    ACTIONS(215), 1,
      aux_sym_location_token1,
  [602] = 3,
    ACTIONS(186), 1,
      aux_sym_filename_token1,
    STATE(25), 1,
      aux_sym_filename_repeat1,
    STATE(48), 1,
      sym_filename,
  [612] = 2,
    ACTIONS(217), 1,
      anon_sym_file,
    ACTIONS(219), 2,
      anon_sym_from,
      anon_sym_to,
  [620] = 3,
    ACTIONS(186), 1,
      aux_sym_filename_token1,
    STATE(25), 1,
      aux_sym_filename_repeat1,
    STATE(73), 1,
      sym_filename,
  [630] = 3,
    ACTIONS(198), 1,
      anon_sym_differ,
    ACTIONS(221), 1,
      aux_sym_filename_token1,
    STATE(31), 1,
      aux_sym_filename_repeat1,
  [640] = 3,
    ACTIONS(182), 1,
      ts_builtin_sym_end,
    ACTIONS(184), 1,
      aux_sym_source_token1,
    ACTIONS(224), 1,
      aux_sym_location_token1,
  [650] = 3,
    ACTIONS(205), 1,
      anon_sym_differ,
    ACTIONS(226), 1,
      aux_sym_filename_token1,
    STATE(31), 1,
      aux_sym_filename_repeat1,
  [660] = 3,
    ACTIONS(186), 1,
      aux_sym_filename_token1,
    STATE(25), 1,
      aux_sym_filename_repeat1,
    STATE(41), 1,
      sym_filename,
  [670] = 3,
    ACTIONS(188), 1,
      ts_builtin_sym_end,
    ACTIONS(190), 1,
      aux_sym_source_token1,
    ACTIONS(228), 1,
      aux_sym_location_token1,
  [680] = 3,
    ACTIONS(205), 1,
      anon_sym_and,
    ACTIONS(230), 1,
      aux_sym_filename_token1,
    STATE(39), 1,
      aux_sym_filename_repeat1,
  [690] = 3,
    ACTIONS(186), 1,
      aux_sym_filename_token1,
    STATE(25), 1,
      aux_sym_filename_repeat1,
    STATE(40), 1,
      sym_filename,
  [700] = 3,
    ACTIONS(232), 1,
      aux_sym_filename_token1,
    STATE(36), 1,
      aux_sym_filename_repeat1,
    STATE(70), 1,
      sym_filename,
  [710] = 3,
    ACTIONS(198), 1,
      anon_sym_and,
    ACTIONS(234), 1,
      aux_sym_filename_token1,
    STATE(39), 1,
      aux_sym_filename_repeat1,
  [720] = 1,
    ACTIONS(237), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [725] = 1,
    ACTIONS(239), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [730] = 2,
    ACTIONS(194), 1,
      aux_sym_similarity_token1,
    STATE(44), 1,
      sym_mode,
  [737] = 1,
    ACTIONS(241), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [742] = 1,
    ACTIONS(243), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [747] = 2,
    ACTIONS(245), 1,
      ts_builtin_sym_end,
    ACTIONS(247), 1,
      aux_sym_source_token1,
  [754] = 1,
    ACTIONS(249), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [759] = 1,
    ACTIONS(251), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [764] = 1,
    ACTIONS(253), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [769] = 2,
    ACTIONS(77), 1,
      ts_builtin_sym_end,
    ACTIONS(247), 1,
      aux_sym_source_token1,
  [776] = 2,
    ACTIONS(255), 1,
      anon_sym_PLUS_PLUS_PLUS,
    STATE(59), 1,
      sym_new_file,
  [783] = 1,
    ACTIONS(257), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [788] = 1,
    ACTIONS(259), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [793] = 1,
    ACTIONS(261), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [798] = 2,
    ACTIONS(263), 1,
      aux_sym_source_token1,
    STATE(12), 1,
      aux_sym_changes_repeat1,
  [805] = 2,
    ACTIONS(255), 1,
      anon_sym_PLUS_PLUS_PLUS,
    STATE(63), 1,
      sym_new_file,
  [812] = 1,
    ACTIONS(265), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [817] = 1,
    ACTIONS(267), 1,
      anon_sym_DOT_DOT,
  [821] = 1,
    ACTIONS(269), 1,
      aux_sym_source_token1,
  [825] = 1,
    ACTIONS(271), 1,
      aux_sym_source_token1,
  [829] = 1,
    ACTIONS(273), 1,
      anon_sym_differ,
  [833] = 1,
    ACTIONS(247), 1,
      aux_sym_source_token1,
  [837] = 1,
    ACTIONS(275), 1,
      aux_sym_source_token1,
  [841] = 1,
    ACTIONS(277), 1,
      aux_sym_source_token1,
  [845] = 1,
    ACTIONS(279), 1,
      anon_sym_DASH_DASHgit,
  [849] = 1,
    ACTIONS(281), 1,
      aux_sym_source_token1,
  [853] = 1,
    ACTIONS(283), 1,
      aux_sym_source_token1,
  [857] = 1,
    ACTIONS(285), 1,
      anon_sym_AT_AT2,
  [861] = 1,
    ACTIONS(287), 1,
      anon_sym_PERCENT,
  [865] = 1,
    ACTIONS(289), 1,
      sym_commit,
  [869] = 1,
    ACTIONS(291), 1,
      anon_sym_and,
  [873] = 1,
    ACTIONS(188), 1,
      aux_sym_source_token1,
  [877] = 1,
    ACTIONS(182), 1,
      aux_sym_source_token1,
  [881] = 1,
    ACTIONS(293), 1,
      aux_sym_source_token1,
  [885] = 1,
    ACTIONS(295), 1,
      sym_linerange,
  [889] = 1,
    ACTIONS(297), 1,
      aux_sym_similarity_token1,
  [893] = 1,
    ACTIONS(299), 1,
      anon_sym_mode,
  [897] = 1,
    ACTIONS(301), 1,
      aux_sym_source_token1,
  [901] = 1,
    ACTIONS(303), 1,
      ts_builtin_sym_end,
  [905] = 1,
    ACTIONS(305), 1,
      sym_linerange,
  [909] = 1,
    ACTIONS(307), 1,
      anon_sym_index2,
  [913] = 1,
    ACTIONS(309), 1,
      sym_commit,
  [917] = 1,
    ACTIONS(311), 1,
      anon_sym_files,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 44,
  [SMALL_STATE(6)] = 88,
  [SMALL_STATE(7)] = 127,
  [SMALL_STATE(8)] = 173,
  [SMALL_STATE(9)] = 204,
  [SMALL_STATE(10)] = 235,
  [SMALL_STATE(11)] = 278,
  [SMALL_STATE(12)] = 321,
  [SMALL_STATE(13)] = 348,
  [SMALL_STATE(14)] = 375,
  [SMALL_STATE(15)] = 397,
  [SMALL_STATE(16)] = 419,
  [SMALL_STATE(17)] = 441,
  [SMALL_STATE(18)] = 463,
  [SMALL_STATE(19)] = 485,
  [SMALL_STATE(20)] = 501,
  [SMALL_STATE(21)] = 515,
  [SMALL_STATE(22)] = 531,
  [SMALL_STATE(23)] = 545,
  [SMALL_STATE(24)] = 556,
  [SMALL_STATE(25)] = 569,
  [SMALL_STATE(26)] = 582,
  [SMALL_STATE(27)] = 592,
  [SMALL_STATE(28)] = 602,
  [SMALL_STATE(29)] = 612,
  [SMALL_STATE(30)] = 620,
  [SMALL_STATE(31)] = 630,
  [SMALL_STATE(32)] = 640,
  [SMALL_STATE(33)] = 650,
  [SMALL_STATE(34)] = 660,
  [SMALL_STATE(35)] = 670,
  [SMALL_STATE(36)] = 680,
  [SMALL_STATE(37)] = 690,
  [SMALL_STATE(38)] = 700,
  [SMALL_STATE(39)] = 710,
  [SMALL_STATE(40)] = 720,
  [SMALL_STATE(41)] = 725,
  [SMALL_STATE(42)] = 730,
  [SMALL_STATE(43)] = 737,
  [SMALL_STATE(44)] = 742,
  [SMALL_STATE(45)] = 747,
  [SMALL_STATE(46)] = 754,
  [SMALL_STATE(47)] = 759,
  [SMALL_STATE(48)] = 764,
  [SMALL_STATE(49)] = 769,
  [SMALL_STATE(50)] = 776,
  [SMALL_STATE(51)] = 783,
  [SMALL_STATE(52)] = 788,
  [SMALL_STATE(53)] = 793,
  [SMALL_STATE(54)] = 798,
  [SMALL_STATE(55)] = 805,
  [SMALL_STATE(56)] = 812,
  [SMALL_STATE(57)] = 817,
  [SMALL_STATE(58)] = 821,
  [SMALL_STATE(59)] = 825,
  [SMALL_STATE(60)] = 829,
  [SMALL_STATE(61)] = 833,
  [SMALL_STATE(62)] = 837,
  [SMALL_STATE(63)] = 841,
  [SMALL_STATE(64)] = 845,
  [SMALL_STATE(65)] = 849,
  [SMALL_STATE(66)] = 853,
  [SMALL_STATE(67)] = 857,
  [SMALL_STATE(68)] = 861,
  [SMALL_STATE(69)] = 865,
  [SMALL_STATE(70)] = 869,
  [SMALL_STATE(71)] = 873,
  [SMALL_STATE(72)] = 877,
  [SMALL_STATE(73)] = 881,
  [SMALL_STATE(74)] = 885,
  [SMALL_STATE(75)] = 889,
  [SMALL_STATE(76)] = 893,
  [SMALL_STATE(77)] = 897,
  [SMALL_STATE(78)] = 901,
  [SMALL_STATE(79)] = 905,
  [SMALL_STATE(80)] = 909,
  [SMALL_STATE(81)] = 913,
  [SMALL_STATE(82)] = 917,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(2),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(64),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(29),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(82),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(81),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(80),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(21),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(19),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(79),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(32),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(32),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(35),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(35),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(61),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(29),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(82),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(81),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(80),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hunk, 2, .production_id = 2),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hunk, 2, .production_id = 2),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hunks, 1),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hunks, 1),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_hunks_repeat1, 2),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_hunks_repeat1, 2),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_hunks_repeat1, 2), SHIFT_REPEAT(79),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_changes_repeat2, 2),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_changes_repeat2, 2),
  [134] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_changes_repeat2, 2), SHIFT_REPEAT(71),
  [137] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_changes_repeat2, 2), SHIFT_REPEAT(72),
  [140] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_changes_repeat2, 2), SHIFT_REPEAT(32),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_changes_repeat2, 2), SHIFT_REPEAT(32),
  [146] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_changes_repeat2, 2), SHIFT_REPEAT(35),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_changes_repeat2, 2), SHIFT_REPEAT(35),
  [152] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_changes_repeat2, 2), SHIFT_REPEAT(54),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_changes, 1),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_changes, 1),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_changes_repeat1, 2),
  [163] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_changes_repeat1, 2), SHIFT_REPEAT(13),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_changes_repeat1, 2),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 7),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 7),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hunk, 3, .production_id = 3),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hunk, 3, .production_id = 3),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 8),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 8),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_addition, 1),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_addition, 1),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deletion, 1),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deletion, 1),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index, 4),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_filename_repeat1, 2),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2),
  [200] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_filename_repeat1, 2), SHIFT_REPEAT(24),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filename, 1),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filename, 1),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_location, 4),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_location, 4),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [221] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2), SHIFT_REPEAT(31),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [234] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2), SHIFT_REPEAT(39),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_old_file, 2),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_change, 3),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mode, 1),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_change, 4),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 2),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deletion, 2),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_similarity, 4, .production_id = 1),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new_file, 2),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_addition, 2),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index, 5),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_location, 5),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_change, 6),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [303] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_diff(void) {
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
