#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 89
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 63
#define ALIAS_COUNT 1
#define TOKEN_COUNT 38
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 4

enum {
  aux_sym_source_token1 = 1,
  anon_sym_diff = 2,
  aux_sym_command_token1 = 3,
  anon_sym_new = 4,
  anon_sym_deleted = 5,
  anon_sym_file = 6,
  anon_sym_mode = 7,
  anon_sym_old = 8,
  anon_sym_rename = 9,
  anon_sym_from = 10,
  anon_sym_to = 11,
  anon_sym_Binary = 12,
  anon_sym_files = 13,
  anon_sym_and = 14,
  anon_sym_differ = 15,
  anon_sym_index = 16,
  anon_sym_DOT_DOT = 17,
  anon_sym_similarity = 18,
  anon_sym_index2 = 19,
  aux_sym_similarity_token1 = 20,
  anon_sym_PERCENT = 21,
  anon_sym_DASH_DASH_DASH = 22,
  anon_sym_PLUS_PLUS_PLUS = 23,
  anon_sym_AT_AT = 24,
  anon_sym_AT_AT2 = 25,
  aux_sym_location_token1 = 26,
  anon_sym_PLUS = 27,
  anon_sym_PLUS_PLUS = 28,
  anon_sym_PLUS_PLUS_PLUS_PLUS = 29,
  anon_sym_DASH = 30,
  anon_sym_DASH_DASH = 31,
  anon_sym_DASH_DASH_DASH_DASH = 32,
  sym_context = 33,
  anon_sym_POUND = 34,
  sym_linerange = 35,
  aux_sym_filename_token1 = 36,
  sym_commit = 37,
  sym_source = 38,
  sym__line = 39,
  sym_block = 40,
  sym_hunks = 41,
  sym_hunk = 42,
  sym_changes = 43,
  sym_command = 44,
  sym_file_change = 45,
  sym_binary_change = 46,
  sym_index = 47,
  sym_similarity = 48,
  sym_old_file = 49,
  sym_new_file = 50,
  sym_location = 51,
  sym_addition = 52,
  sym_deletion = 53,
  sym_comment = 54,
  sym_filename = 55,
  sym_mode = 56,
  aux_sym_source_repeat1 = 57,
  aux_sym_block_repeat1 = 58,
  aux_sym_hunks_repeat1 = 59,
  aux_sym_changes_repeat1 = 60,
  aux_sym_changes_repeat2 = 61,
  aux_sym_filename_repeat1 = 62,
  alias_sym_score = 63,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_source_token1] = "source_token1",
  [anon_sym_diff] = "diff",
  [aux_sym_command_token1] = "argument",
  [anon_sym_new] = "new",
  [anon_sym_deleted] = "deleted",
  [anon_sym_file] = "file",
  [anon_sym_mode] = "mode",
  [anon_sym_old] = "old",
  [anon_sym_rename] = "rename",
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
  [anon_sym_POUND] = "#",
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
  [sym_comment] = "comment",
  [sym_filename] = "filename",
  [sym_mode] = "mode",
  [aux_sym_source_repeat1] = "source_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_hunks_repeat1] = "hunks_repeat1",
  [aux_sym_changes_repeat1] = "changes_repeat1",
  [aux_sym_changes_repeat2] = "changes_repeat2",
  [aux_sym_filename_repeat1] = "filename_repeat1",
  [alias_sym_score] = "score",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_source_token1] = aux_sym_source_token1,
  [anon_sym_diff] = anon_sym_diff,
  [aux_sym_command_token1] = aux_sym_command_token1,
  [anon_sym_new] = anon_sym_new,
  [anon_sym_deleted] = anon_sym_deleted,
  [anon_sym_file] = anon_sym_file,
  [anon_sym_mode] = anon_sym_mode,
  [anon_sym_old] = anon_sym_old,
  [anon_sym_rename] = anon_sym_rename,
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
  [anon_sym_POUND] = anon_sym_POUND,
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
  [sym_comment] = sym_comment,
  [sym_filename] = sym_filename,
  [sym_mode] = sym_mode,
  [aux_sym_source_repeat1] = aux_sym_source_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_hunks_repeat1] = aux_sym_hunks_repeat1,
  [aux_sym_changes_repeat1] = aux_sym_changes_repeat1,
  [aux_sym_changes_repeat2] = aux_sym_changes_repeat2,
  [aux_sym_filename_repeat1] = aux_sym_filename_repeat1,
  [alias_sym_score] = alias_sym_score,
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
  [aux_sym_command_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_new] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_deleted] = {
    .visible = true,
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
  [anon_sym_old] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rename] = {
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
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
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
  [sym_comment] = {
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
  [alias_sym_score] = {
    .visible = true,
    .named = true,
  },
};

enum {
  field_changes = 1,
  field_location = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_changes] = "changes",
  [field_location] = "location",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [2] = {.index = 0, .length = 1},
  [3] = {.index = 1, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_location, 0},
  [1] =
    {field_changes, 2},
    {field_location, 0},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [2] = alias_sym_score,
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
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 25,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 23,
  [36] = 36,
  [37] = 25,
  [38] = 23,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(88);
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(204);
      if (lookahead == '%') ADVANCE(151);
      if (lookahead == '+') ADVANCE(159);
      if (lookahead == '-') ADVANCE(162);
      if (lookahead == '.') ADVANCE(4);
      if (lookahead == '@') ADVANCE(5);
      if (lookahead == 'B') ADVANCE(38);
      if (lookahead == 'a') ADVANCE(54);
      if (lookahead == 'd') ADVANCE(18);
      if (lookahead == 'f') ADVANCE(39);
      if (lookahead == 'i') ADVANCE(56);
      if (lookahead == 'm') ADVANCE(61);
      if (lookahead == 'n') ADVANCE(20);
      if (lookahead == 'o') ADVANCE(46);
      if (lookahead == 'r') ADVANCE(29);
      if (lookahead == 's') ADVANCE(37);
      if (lookahead == 't') ADVANCE(59);
      if (('b' <= lookahead && lookahead <= 'e')) ADVANCE(81);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(83)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(121);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(89);
      END_STATE();
    case 2:
      if (lookahead == '+') ADVANCE(3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(205);
      END_STATE();
    case 3:
      if (lookahead == '+') ADVANCE(153);
      END_STATE();
    case 4:
      if (lookahead == '.') ADVANCE(108);
      END_STATE();
    case 5:
      if (lookahead == '@') ADVANCE(155);
      END_STATE();
    case 6:
      if (lookahead == '@') ADVANCE(156);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(62);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(214);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(8)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(207);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(217);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(64);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(53);
      END_STATE();
    case 11:
      if (lookahead == 'd') ADVANCE(103);
      END_STATE();
    case 12:
      if (lookahead == 'd') ADVANCE(97);
      END_STATE();
    case 13:
      if (lookahead == 'd') ADVANCE(93);
      END_STATE();
    case 14:
      if (lookahead == 'd') ADVANCE(213);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(14)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(208);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(217);
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
      if (lookahead == 'e') ADVANCE(45);
      if (lookahead == 'i') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(80);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(80);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(96);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(98);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 32:
      if (lookahead == 'f') ADVANCE(90);
      END_STATE();
    case 33:
      if (lookahead == 'f') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(33)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(81);
      END_STATE();
    case 34:
      if (lookahead == 'f') ADVANCE(32);
      END_STATE();
    case 35:
      if (lookahead == 'f') ADVANCE(36);
      END_STATE();
    case 36:
      if (lookahead == 'f') ADVANCE(30);
      END_STATE();
    case 37:
      if (lookahead == 'i') ADVANCE(52);
      END_STATE();
    case 38:
      if (lookahead == 'i') ADVANCE(55);
      END_STATE();
    case 39:
      if (lookahead == 'i') ADVANCE(47);
      if (lookahead == 'r') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(80);
      END_STATE();
    case 40:
      if (lookahead == 'i') ADVANCE(66);
      END_STATE();
    case 41:
      if (lookahead == 'i') ADVANCE(50);
      END_STATE();
    case 42:
      if (lookahead == 'i') ADVANCE(35);
      END_STATE();
    case 43:
      if (lookahead == 'i') ADVANCE(48);
      END_STATE();
    case 44:
      if (lookahead == 'i') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(80);
      END_STATE();
    case 45:
      if (lookahead == 'l') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(79);
      END_STATE();
    case 46:
      if (lookahead == 'l') ADVANCE(12);
      END_STATE();
    case 47:
      if (lookahead == 'l') ADVANCE(22);
      END_STATE();
    case 48:
      if (lookahead == 'l') ADVANCE(26);
      END_STATE();
    case 49:
      if (lookahead == 'l') ADVANCE(27);
      END_STATE();
    case 50:
      if (lookahead == 'l') ADVANCE(9);
      END_STATE();
    case 51:
      if (lookahead == 'm') ADVANCE(99);
      END_STATE();
    case 52:
      if (lookahead == 'm') ADVANCE(41);
      END_STATE();
    case 53:
      if (lookahead == 'm') ADVANCE(25);
      END_STATE();
    case 54:
      if (lookahead == 'n') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(80);
      END_STATE();
    case 55:
      if (lookahead == 'n') ADVANCE(7);
      END_STATE();
    case 56:
      if (lookahead == 'n') ADVANCE(15);
      END_STATE();
    case 57:
      if (lookahead == 'n') ADVANCE(10);
      END_STATE();
    case 58:
      if (lookahead == 'n') ADVANCE(17);
      END_STATE();
    case 59:
      if (lookahead == 'o') ADVANCE(100);
      END_STATE();
    case 60:
      if (lookahead == 'o') ADVANCE(51);
      END_STATE();
    case 61:
      if (lookahead == 'o') ADVANCE(16);
      END_STATE();
    case 62:
      if (lookahead == 'r') ADVANCE(71);
      END_STATE();
    case 63:
      if (lookahead == 'r') ADVANCE(105);
      END_STATE();
    case 64:
      if (lookahead == 'r') ADVANCE(40);
      END_STATE();
    case 65:
      if (lookahead == 's') ADVANCE(102);
      END_STATE();
    case 66:
      if (lookahead == 't') ADVANCE(72);
      END_STATE();
    case 67:
      if (lookahead == 't') ADVANCE(31);
      END_STATE();
    case 68:
      if (lookahead == 'w') ADVANCE(92);
      END_STATE();
    case 69:
      if (lookahead == 'x') ADVANCE(107);
      END_STATE();
    case 70:
      if (lookahead == 'x') ADVANCE(110);
      END_STATE();
    case 71:
      if (lookahead == 'y') ADVANCE(101);
      END_STATE();
    case 72:
      if (lookahead == 'y') ADVANCE(109);
      END_STATE();
    case 73:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(73)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 74:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(205);
      END_STATE();
    case 75:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      END_STATE();
    case 76:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(251);
      END_STATE();
    case 77:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(76);
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
      if (eof) ADVANCE(88);
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(204);
      if (lookahead == '+') ADVANCE(159);
      if (lookahead == '-') ADVANCE(162);
      if (lookahead == '@') ADVANCE(166);
      if (lookahead == 'B') ADVANCE(184);
      if (lookahead == 'd') ADVANCE(177);
      if (lookahead == 'i') ADVANCE(192);
      if (lookahead == 'n') ADVANCE(174);
      if (lookahead == 'o') ADVANCE(187);
      if (lookahead == 'r') ADVANCE(179);
      if (lookahead == 's') ADVANCE(183);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(165);
      if (lookahead != 0) ADVANCE(203);
      END_STATE();
    case 83:
      if (eof) ADVANCE(88);
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '%') ADVANCE(151);
      if (lookahead == '.') ADVANCE(4);
      if (lookahead == '@') ADVANCE(6);
      if (lookahead == 'a') ADVANCE(54);
      if (lookahead == 'd') ADVANCE(19);
      if (lookahead == 'f') ADVANCE(39);
      if (lookahead == 'i') ADVANCE(58);
      if (lookahead == 'm') ADVANCE(61);
      if (lookahead == 'n') ADVANCE(20);
      if (lookahead == 'o') ADVANCE(46);
      if (lookahead == 'r') ADVANCE(29);
      if (lookahead == 't') ADVANCE(59);
      if (('b' <= lookahead && lookahead <= 'e')) ADVANCE(81);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(83)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(121);
      END_STATE();
    case 84:
      if (eof) ADVANCE(88);
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '+') ADVANCE(2);
      if (lookahead == '-') ADVANCE(74);
      if (lookahead == '@') ADVANCE(6);
      if (lookahead == 'd') ADVANCE(42);
      if (lookahead == 'f') ADVANCE(43);
      if (lookahead == 'i') ADVANCE(58);
      if (lookahead == 'm') ADVANCE(61);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(85)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(150);
      END_STATE();
    case 85:
      if (eof) ADVANCE(88);
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '@') ADVANCE(6);
      if (lookahead == 'd') ADVANCE(42);
      if (lookahead == 'f') ADVANCE(43);
      if (lookahead == 'i') ADVANCE(58);
      if (lookahead == 'm') ADVANCE(61);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(74);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(85)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(150);
      END_STATE();
    case 86:
      if (eof) ADVANCE(88);
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(86)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(216);
      if (lookahead != 0) ADVANCE(217);
      END_STATE();
    case 87:
      if (eof) ADVANCE(88);
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == '\r') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(157);
      if (lookahead != 0) ADVANCE(158);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_source_token1);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_diff);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_command_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_new);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_deleted);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_file);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_file);
      if (lookahead == 's') ADVANCE(102);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_mode);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_old);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_rename);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_to);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_Binary);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_files);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_and);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(217);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_differ);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_differ);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(217);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_index);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_similarity);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_index2);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(149);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(150);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(111);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(113);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(114);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(117);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(118);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(119);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(120);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(122);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(125);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(126);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(129);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(131);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(132);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(133);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(135);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(136);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(139);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(141);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(143);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(145);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(146);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(147);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(150);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_DASH);
      if (lookahead == '-') ADVANCE(164);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS_PLUS);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS_PLUS);
      if (lookahead == '+') ADVANCE(161);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_AT_AT);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_AT_AT2);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_location_token1);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(157);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(158);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_location_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(158);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '+') ADVANCE(160);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS);
      if (lookahead == '+') ADVANCE(154);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS_PLUS_PLUS);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(163);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      if (lookahead == '-') ADVANCE(152);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_DASH_DASH);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(178);
      if (lookahead == 'n') ADVANCE(174);
      if (lookahead == 'o') ADVANCE(187);
      if (lookahead == 'r') ADVANCE(179);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(165);
      if (lookahead != 0) ADVANCE(203);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == '@') ADVANCE(155);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(203);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'a') ADVANCE(195);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(203);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'a') ADVANCE(191);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(203);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'a') ADVANCE(196);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(203);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'd') ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(203);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'd') ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(203);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'd') ADVANCE(176);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(203);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'e') ADVANCE(98);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(203);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'e') ADVANCE(199);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(203);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'e') ADVANCE(198);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(203);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'e') ADVANCE(200);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(203);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'e') ADVANCE(188);
      if (lookahead == 'i') ADVANCE(182);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(203);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'e') ADVANCE(188);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(203);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'e') ADVANCE(194);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(203);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'e') ADVANCE(171);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(203);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'f') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(203);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'f') ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(203);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'i') ADVANCE(190);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(203);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'i') ADVANCE(193);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(203);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'i') ADVANCE(197);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(203);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'i') ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(203);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'l') ADVANCE(170);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(203);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'l') ADVANCE(175);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(203);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'l') ADVANCE(169);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(203);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'm') ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(203);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'm') ADVANCE(173);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(203);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'n') ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(203);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'n') ADVANCE(167);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(203);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'n') ADVANCE(168);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(203);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'r') ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(203);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'r') ADVANCE(185);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(203);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 't') ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(203);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 't') ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(203);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'w') ADVANCE(92);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(203);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'x') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(203);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'y') ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(203);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'y') ADVANCE(109);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(203);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_context);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(203);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_linerange);
      if (lookahead == ',') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(205);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_linerange);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_filename_token1);
      if (lookahead == 'a') ADVANCE(214);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(207);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(217);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_filename_token1);
      if (lookahead == 'd') ADVANCE(213);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(208);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(217);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_filename_token1);
      if (lookahead == 'd') ADVANCE(104);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(217);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_filename_token1);
      if (lookahead == 'e') ADVANCE(215);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(217);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_filename_token1);
      if (lookahead == 'f') ADVANCE(210);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(217);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_filename_token1);
      if (lookahead == 'f') ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(217);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_filename_token1);
      if (lookahead == 'i') ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(217);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_filename_token1);
      if (lookahead == 'n') ADVANCE(209);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(217);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_filename_token1);
      if (lookahead == 'r') ADVANCE(106);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(217);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_filename_token1);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(216);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(217);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_filename_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(217);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_commit);
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
    case 247:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(246);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(247);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(248);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(249);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(250);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 82},
  [2] = {.lex_state = 82},
  [3] = {.lex_state = 82},
  [4] = {.lex_state = 82},
  [5] = {.lex_state = 82},
  [6] = {.lex_state = 82},
  [7] = {.lex_state = 82},
  [8] = {.lex_state = 82},
  [9] = {.lex_state = 82},
  [10] = {.lex_state = 82},
  [11] = {.lex_state = 82},
  [12] = {.lex_state = 82},
  [13] = {.lex_state = 82},
  [14] = {.lex_state = 82},
  [15] = {.lex_state = 82},
  [16] = {.lex_state = 82},
  [17] = {.lex_state = 82},
  [18] = {.lex_state = 82},
  [19] = {.lex_state = 86},
  [20] = {.lex_state = 82},
  [21] = {.lex_state = 82},
  [22] = {.lex_state = 86},
  [23] = {.lex_state = 86},
  [24] = {.lex_state = 84},
  [25] = {.lex_state = 86},
  [26] = {.lex_state = 86},
  [27] = {.lex_state = 14},
  [28] = {.lex_state = 86},
  [29] = {.lex_state = 86},
  [30] = {.lex_state = 87},
  [31] = {.lex_state = 87},
  [32] = {.lex_state = 86},
  [33] = {.lex_state = 87},
  [34] = {.lex_state = 87},
  [35] = {.lex_state = 8},
  [36] = {.lex_state = 86},
  [37] = {.lex_state = 8},
  [38] = {.lex_state = 14},
  [39] = {.lex_state = 86},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 84},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 84},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 84},
  [51] = {.lex_state = 84},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 84},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 84},
  [64] = {.lex_state = 84},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 84},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 84},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 73},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 84},
  [82] = {.lex_state = 84},
  [83] = {.lex_state = 33},
  [84] = {.lex_state = 33},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 84},
  [88] = {.lex_state = 33},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_source_token1] = ACTIONS(1),
    [anon_sym_diff] = ACTIONS(1),
    [anon_sym_new] = ACTIONS(1),
    [anon_sym_deleted] = ACTIONS(1),
    [anon_sym_file] = ACTIONS(1),
    [anon_sym_mode] = ACTIONS(1),
    [anon_sym_old] = ACTIONS(1),
    [anon_sym_rename] = ACTIONS(1),
    [anon_sym_from] = ACTIONS(1),
    [anon_sym_to] = ACTIONS(1),
    [anon_sym_Binary] = ACTIONS(1),
    [anon_sym_files] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
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
    [anon_sym_POUND] = ACTIONS(1),
    [sym_commit] = ACTIONS(1),
  },
  [1] = {
    [sym_source] = STATE(80),
    [sym__line] = STATE(45),
    [sym_block] = STATE(2),
    [sym_command] = STATE(75),
    [sym_file_change] = STATE(45),
    [sym_binary_change] = STATE(45),
    [sym_index] = STATE(45),
    [sym_similarity] = STATE(45),
    [sym_old_file] = STATE(45),
    [sym_new_file] = STATE(45),
    [sym_location] = STATE(45),
    [sym_addition] = STATE(45),
    [sym_deletion] = STATE(45),
    [sym_comment] = STATE(45),
    [aux_sym_source_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_source_token1] = ACTIONS(5),
    [anon_sym_diff] = ACTIONS(7),
    [anon_sym_new] = ACTIONS(9),
    [anon_sym_deleted] = ACTIONS(11),
    [anon_sym_old] = ACTIONS(13),
    [anon_sym_rename] = ACTIONS(15),
    [anon_sym_Binary] = ACTIONS(17),
    [anon_sym_index] = ACTIONS(19),
    [anon_sym_similarity] = ACTIONS(21),
    [anon_sym_DASH_DASH_DASH] = ACTIONS(23),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(25),
    [anon_sym_AT_AT] = ACTIONS(27),
    [anon_sym_PLUS] = ACTIONS(29),
    [anon_sym_PLUS_PLUS] = ACTIONS(29),
    [anon_sym_PLUS_PLUS_PLUS_PLUS] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_DASH_DASH] = ACTIONS(33),
    [anon_sym_DASH_DASH_DASH_DASH] = ACTIONS(35),
    [sym_context] = ACTIONS(37),
    [anon_sym_POUND] = ACTIONS(39),
  },
  [2] = {
    [sym__line] = STATE(54),
    [sym_block] = STATE(3),
    [sym_command] = STATE(75),
    [sym_file_change] = STATE(54),
    [sym_binary_change] = STATE(54),
    [sym_index] = STATE(54),
    [sym_similarity] = STATE(54),
    [sym_old_file] = STATE(54),
    [sym_new_file] = STATE(54),
    [sym_location] = STATE(54),
    [sym_addition] = STATE(54),
    [sym_deletion] = STATE(54),
    [sym_comment] = STATE(54),
    [aux_sym_source_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(41),
    [aux_sym_source_token1] = ACTIONS(43),
    [anon_sym_diff] = ACTIONS(7),
    [anon_sym_new] = ACTIONS(9),
    [anon_sym_deleted] = ACTIONS(11),
    [anon_sym_old] = ACTIONS(13),
    [anon_sym_rename] = ACTIONS(15),
    [anon_sym_Binary] = ACTIONS(17),
    [anon_sym_index] = ACTIONS(19),
    [anon_sym_similarity] = ACTIONS(21),
    [anon_sym_DASH_DASH_DASH] = ACTIONS(23),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(25),
    [anon_sym_AT_AT] = ACTIONS(27),
    [anon_sym_PLUS] = ACTIONS(29),
    [anon_sym_PLUS_PLUS] = ACTIONS(29),
    [anon_sym_PLUS_PLUS_PLUS_PLUS] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_DASH_DASH] = ACTIONS(33),
    [anon_sym_DASH_DASH_DASH_DASH] = ACTIONS(35),
    [sym_context] = ACTIONS(45),
    [anon_sym_POUND] = ACTIONS(39),
  },
  [3] = {
    [sym__line] = STATE(67),
    [sym_block] = STATE(3),
    [sym_command] = STATE(75),
    [sym_file_change] = STATE(67),
    [sym_binary_change] = STATE(67),
    [sym_index] = STATE(67),
    [sym_similarity] = STATE(67),
    [sym_old_file] = STATE(67),
    [sym_new_file] = STATE(67),
    [sym_location] = STATE(67),
    [sym_addition] = STATE(67),
    [sym_deletion] = STATE(67),
    [sym_comment] = STATE(67),
    [aux_sym_source_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(47),
    [aux_sym_source_token1] = ACTIONS(49),
    [anon_sym_diff] = ACTIONS(52),
    [anon_sym_new] = ACTIONS(55),
    [anon_sym_deleted] = ACTIONS(58),
    [anon_sym_old] = ACTIONS(61),
    [anon_sym_rename] = ACTIONS(64),
    [anon_sym_Binary] = ACTIONS(67),
    [anon_sym_index] = ACTIONS(70),
    [anon_sym_similarity] = ACTIONS(73),
    [anon_sym_DASH_DASH_DASH] = ACTIONS(76),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(79),
    [anon_sym_AT_AT] = ACTIONS(82),
    [anon_sym_PLUS] = ACTIONS(85),
    [anon_sym_PLUS_PLUS] = ACTIONS(85),
    [anon_sym_PLUS_PLUS_PLUS_PLUS] = ACTIONS(88),
    [anon_sym_DASH] = ACTIONS(91),
    [anon_sym_DASH_DASH] = ACTIONS(91),
    [anon_sym_DASH_DASH_DASH_DASH] = ACTIONS(94),
    [sym_context] = ACTIONS(97),
    [anon_sym_POUND] = ACTIONS(100),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(9), 1,
      anon_sym_new,
    ACTIONS(11), 1,
      anon_sym_deleted,
    ACTIONS(13), 1,
      anon_sym_old,
    ACTIONS(15), 1,
      anon_sym_rename,
    ACTIONS(17), 1,
      anon_sym_Binary,
    ACTIONS(19), 1,
      anon_sym_index,
    ACTIONS(21), 1,
      anon_sym_similarity,
    ACTIONS(107), 1,
      anon_sym_DASH_DASH_DASH,
    STATE(6), 1,
      aux_sym_block_repeat1,
    STATE(74), 1,
      sym_old_file,
    STATE(73), 4,
      sym_file_change,
      sym_binary_change,
      sym_index,
      sym_similarity,
    ACTIONS(103), 6,
      ts_builtin_sym_end,
      anon_sym_diff,
      anon_sym_AT_AT,
      anon_sym_PLUS_PLUS_PLUS_PLUS,
      anon_sym_DASH_DASH_DASH_DASH,
      anon_sym_POUND,
    ACTIONS(105), 7,
      aux_sym_source_token1,
      anon_sym_PLUS_PLUS_PLUS,
      anon_sym_PLUS,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH,
      anon_sym_DASH_DASH,
      sym_context,
  [54] = 13,
    ACTIONS(9), 1,
      anon_sym_new,
    ACTIONS(11), 1,
      anon_sym_deleted,
    ACTIONS(13), 1,
      anon_sym_old,
    ACTIONS(15), 1,
      anon_sym_rename,
    ACTIONS(17), 1,
      anon_sym_Binary,
    ACTIONS(19), 1,
      anon_sym_index,
    ACTIONS(21), 1,
      anon_sym_similarity,
    ACTIONS(107), 1,
      anon_sym_DASH_DASH_DASH,
    STATE(4), 1,
      aux_sym_block_repeat1,
    STATE(68), 1,
      sym_old_file,
    STATE(73), 4,
      sym_file_change,
      sym_binary_change,
      sym_index,
      sym_similarity,
    ACTIONS(109), 6,
      ts_builtin_sym_end,
      anon_sym_diff,
      anon_sym_AT_AT,
      anon_sym_PLUS_PLUS_PLUS_PLUS,
      anon_sym_DASH_DASH_DASH_DASH,
      anon_sym_POUND,
    ACTIONS(111), 7,
      aux_sym_source_token1,
      anon_sym_PLUS_PLUS_PLUS,
      anon_sym_PLUS,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH,
      anon_sym_DASH_DASH,
      sym_context,
  [108] = 11,
    ACTIONS(117), 1,
      anon_sym_new,
    ACTIONS(120), 1,
      anon_sym_deleted,
    ACTIONS(123), 1,
      anon_sym_old,
    ACTIONS(126), 1,
      anon_sym_rename,
    ACTIONS(129), 1,
      anon_sym_Binary,
    ACTIONS(132), 1,
      anon_sym_index,
    ACTIONS(135), 1,
      anon_sym_similarity,
    STATE(6), 1,
      aux_sym_block_repeat1,
    STATE(73), 4,
      sym_file_change,
      sym_binary_change,
      sym_index,
      sym_similarity,
    ACTIONS(113), 6,
      ts_builtin_sym_end,
      anon_sym_diff,
      anon_sym_AT_AT,
      anon_sym_PLUS_PLUS_PLUS_PLUS,
      anon_sym_DASH_DASH_DASH_DASH,
      anon_sym_POUND,
    ACTIONS(115), 8,
      aux_sym_source_token1,
      anon_sym_DASH_DASH_DASH,
      anon_sym_PLUS_PLUS_PLUS,
      anon_sym_PLUS,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH,
      anon_sym_DASH_DASH,
      sym_context,
  [157] = 12,
    ACTIONS(31), 1,
      anon_sym_PLUS_PLUS_PLUS_PLUS,
    ACTIONS(35), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(142), 1,
      anon_sym_DASH_DASH_DASH,
    ACTIONS(144), 1,
      anon_sym_PLUS_PLUS_PLUS,
    ACTIONS(146), 1,
      sym_context,
    STATE(9), 1,
      aux_sym_changes_repeat2,
    STATE(16), 1,
      sym_changes,
    ACTIONS(29), 2,
      anon_sym_PLUS,
      anon_sym_PLUS_PLUS,
    ACTIONS(33), 2,
      anon_sym_DASH,
      anon_sym_DASH_DASH,
    STATE(44), 2,
      sym_addition,
      sym_deletion,
    ACTIONS(140), 5,
      aux_sym_source_token1,
      anon_sym_new,
      anon_sym_deleted,
      anon_sym_old,
      anon_sym_rename,
    ACTIONS(138), 7,
      ts_builtin_sym_end,
      anon_sym_diff,
      anon_sym_Binary,
      anon_sym_index,
      anon_sym_similarity,
      anon_sym_AT_AT,
      anon_sym_POUND,
  [207] = 11,
    ACTIONS(152), 1,
      anon_sym_DASH_DASH_DASH,
    ACTIONS(155), 1,
      anon_sym_PLUS_PLUS_PLUS,
    ACTIONS(161), 1,
      anon_sym_PLUS_PLUS_PLUS_PLUS,
    ACTIONS(167), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(170), 1,
      sym_context,
    STATE(8), 1,
      aux_sym_changes_repeat2,
    ACTIONS(158), 2,
      anon_sym_PLUS,
      anon_sym_PLUS_PLUS,
    ACTIONS(164), 2,
      anon_sym_DASH,
      anon_sym_DASH_DASH,
    STATE(44), 2,
      sym_addition,
      sym_deletion,
    ACTIONS(150), 5,
      aux_sym_source_token1,
      anon_sym_new,
      anon_sym_deleted,
      anon_sym_old,
      anon_sym_rename,
    ACTIONS(148), 7,
      ts_builtin_sym_end,
      anon_sym_diff,
      anon_sym_Binary,
      anon_sym_index,
      anon_sym_similarity,
      anon_sym_AT_AT,
      anon_sym_POUND,
  [254] = 11,
    ACTIONS(31), 1,
      anon_sym_PLUS_PLUS_PLUS_PLUS,
    ACTIONS(35), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(142), 1,
      anon_sym_DASH_DASH_DASH,
    ACTIONS(144), 1,
      anon_sym_PLUS_PLUS_PLUS,
    ACTIONS(146), 1,
      sym_context,
    STATE(8), 1,
      aux_sym_changes_repeat2,
    ACTIONS(29), 2,
      anon_sym_PLUS,
      anon_sym_PLUS_PLUS,
    ACTIONS(33), 2,
      anon_sym_DASH,
      anon_sym_DASH_DASH,
    STATE(44), 2,
      sym_addition,
      sym_deletion,
    ACTIONS(175), 5,
      aux_sym_source_token1,
      anon_sym_new,
      anon_sym_deleted,
      anon_sym_old,
      anon_sym_rename,
    ACTIONS(173), 7,
      ts_builtin_sym_end,
      anon_sym_diff,
      anon_sym_Binary,
      anon_sym_index,
      anon_sym_similarity,
      anon_sym_AT_AT,
      anon_sym_POUND,
  [301] = 5,
    ACTIONS(27), 1,
      anon_sym_AT_AT,
    STATE(71), 1,
      sym_location,
    STATE(11), 2,
      sym_hunk,
      aux_sym_hunks_repeat1,
    ACTIONS(177), 8,
      ts_builtin_sym_end,
      anon_sym_diff,
      anon_sym_Binary,
      anon_sym_index,
      anon_sym_similarity,
      anon_sym_PLUS_PLUS_PLUS_PLUS,
      anon_sym_DASH_DASH_DASH_DASH,
      anon_sym_POUND,
    ACTIONS(179), 12,
      aux_sym_source_token1,
      anon_sym_new,
      anon_sym_deleted,
      anon_sym_old,
      anon_sym_rename,
      anon_sym_DASH_DASH_DASH,
      anon_sym_PLUS_PLUS_PLUS,
      anon_sym_PLUS,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH,
      anon_sym_DASH_DASH,
      sym_context,
  [336] = 5,
    ACTIONS(185), 1,
      anon_sym_AT_AT,
    STATE(71), 1,
      sym_location,
    STATE(11), 2,
      sym_hunk,
      aux_sym_hunks_repeat1,
    ACTIONS(181), 8,
      ts_builtin_sym_end,
      anon_sym_diff,
      anon_sym_Binary,
      anon_sym_index,
      anon_sym_similarity,
      anon_sym_PLUS_PLUS_PLUS_PLUS,
      anon_sym_DASH_DASH_DASH_DASH,
      anon_sym_POUND,
    ACTIONS(183), 12,
      aux_sym_source_token1,
      anon_sym_new,
      anon_sym_deleted,
      anon_sym_old,
      anon_sym_rename,
      anon_sym_DASH_DASH_DASH,
      anon_sym_PLUS_PLUS_PLUS,
      anon_sym_PLUS,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH,
      anon_sym_DASH_DASH,
      sym_context,
  [371] = 4,
    ACTIONS(190), 1,
      aux_sym_source_token1,
    STATE(12), 1,
      aux_sym_changes_repeat1,
    ACTIONS(188), 9,
      ts_builtin_sym_end,
      anon_sym_diff,
      anon_sym_Binary,
      anon_sym_index,
      anon_sym_similarity,
      anon_sym_AT_AT,
      anon_sym_PLUS_PLUS_PLUS_PLUS,
      anon_sym_DASH_DASH_DASH_DASH,
      anon_sym_POUND,
    ACTIONS(193), 11,
      anon_sym_new,
      anon_sym_deleted,
      anon_sym_old,
      anon_sym_rename,
      anon_sym_DASH_DASH_DASH,
      anon_sym_PLUS_PLUS_PLUS,
      anon_sym_PLUS,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH,
      anon_sym_DASH_DASH,
      sym_context,
  [402] = 4,
    ACTIONS(195), 1,
      aux_sym_source_token1,
    STATE(12), 1,
      aux_sym_changes_repeat1,
    ACTIONS(148), 9,
      ts_builtin_sym_end,
      anon_sym_diff,
      anon_sym_Binary,
      anon_sym_index,
      anon_sym_similarity,
      anon_sym_AT_AT,
      anon_sym_PLUS_PLUS_PLUS_PLUS,
      anon_sym_DASH_DASH_DASH_DASH,
      anon_sym_POUND,
    ACTIONS(150), 11,
      anon_sym_new,
      anon_sym_deleted,
      anon_sym_old,
      anon_sym_rename,
      anon_sym_DASH_DASH_DASH,
      anon_sym_PLUS_PLUS_PLUS,
      anon_sym_PLUS,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH,
      anon_sym_DASH_DASH,
      sym_context,
  [433] = 2,
    ACTIONS(47), 9,
      ts_builtin_sym_end,
      anon_sym_diff,
      anon_sym_Binary,
      anon_sym_index,
      anon_sym_similarity,
      anon_sym_AT_AT,
      anon_sym_PLUS_PLUS_PLUS_PLUS,
      anon_sym_DASH_DASH_DASH_DASH,
      anon_sym_POUND,
    ACTIONS(197), 12,
      aux_sym_source_token1,
      anon_sym_new,
      anon_sym_deleted,
      anon_sym_old,
      anon_sym_rename,
      anon_sym_DASH_DASH_DASH,
      anon_sym_PLUS_PLUS_PLUS,
      anon_sym_PLUS,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH,
      anon_sym_DASH_DASH,
      sym_context,
  [459] = 2,
    ACTIONS(113), 9,
      ts_builtin_sym_end,
      anon_sym_diff,
      anon_sym_Binary,
      anon_sym_index,
      anon_sym_similarity,
      anon_sym_AT_AT,
      anon_sym_PLUS_PLUS_PLUS_PLUS,
      anon_sym_DASH_DASH_DASH_DASH,
      anon_sym_POUND,
    ACTIONS(115), 12,
      aux_sym_source_token1,
      anon_sym_new,
      anon_sym_deleted,
      anon_sym_old,
      anon_sym_rename,
      anon_sym_DASH_DASH_DASH,
      anon_sym_PLUS_PLUS_PLUS,
      anon_sym_PLUS,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH,
      anon_sym_DASH_DASH,
      sym_context,
  [485] = 2,
    ACTIONS(199), 9,
      ts_builtin_sym_end,
      anon_sym_diff,
      anon_sym_Binary,
      anon_sym_index,
      anon_sym_similarity,
      anon_sym_AT_AT,
      anon_sym_PLUS_PLUS_PLUS_PLUS,
      anon_sym_DASH_DASH_DASH_DASH,
      anon_sym_POUND,
    ACTIONS(201), 12,
      aux_sym_source_token1,
      anon_sym_new,
      anon_sym_deleted,
      anon_sym_old,
      anon_sym_rename,
      anon_sym_DASH_DASH_DASH,
      anon_sym_PLUS_PLUS_PLUS,
      anon_sym_PLUS,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH,
      anon_sym_DASH_DASH,
      sym_context,
  [511] = 2,
    ACTIONS(203), 9,
      ts_builtin_sym_end,
      anon_sym_diff,
      anon_sym_Binary,
      anon_sym_index,
      anon_sym_similarity,
      anon_sym_AT_AT,
      anon_sym_PLUS_PLUS_PLUS_PLUS,
      anon_sym_DASH_DASH_DASH_DASH,
      anon_sym_POUND,
    ACTIONS(205), 12,
      aux_sym_source_token1,
      anon_sym_new,
      anon_sym_deleted,
      anon_sym_old,
      anon_sym_rename,
      anon_sym_DASH_DASH_DASH,
      anon_sym_PLUS_PLUS_PLUS,
      anon_sym_PLUS,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH,
      anon_sym_DASH_DASH,
      sym_context,
  [537] = 2,
    ACTIONS(207), 9,
      ts_builtin_sym_end,
      anon_sym_diff,
      anon_sym_Binary,
      anon_sym_index,
      anon_sym_similarity,
      anon_sym_AT_AT,
      anon_sym_PLUS_PLUS_PLUS_PLUS,
      anon_sym_DASH_DASH_DASH_DASH,
      anon_sym_POUND,
    ACTIONS(209), 12,
      aux_sym_source_token1,
      anon_sym_new,
      anon_sym_deleted,
      anon_sym_old,
      anon_sym_rename,
      anon_sym_DASH_DASH_DASH,
      anon_sym_PLUS_PLUS_PLUS,
      anon_sym_PLUS,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH,
      anon_sym_DASH_DASH,
      sym_context,
  [563] = 5,
    ACTIONS(211), 1,
      ts_builtin_sym_end,
    ACTIONS(213), 1,
      aux_sym_source_token1,
    ACTIONS(215), 1,
      aux_sym_filename_token1,
    STATE(23), 1,
      aux_sym_filename_repeat1,
    STATE(48), 1,
      sym_filename,
  [579] = 4,
    ACTIONS(27), 1,
      anon_sym_AT_AT,
    STATE(18), 1,
      sym_hunks,
    STATE(71), 1,
      sym_location,
    STATE(10), 2,
      sym_hunk,
      aux_sym_hunks_repeat1,
  [593] = 4,
    ACTIONS(27), 1,
      anon_sym_AT_AT,
    STATE(17), 1,
      sym_hunks,
    STATE(71), 1,
      sym_location,
    STATE(10), 2,
      sym_hunk,
      aux_sym_hunks_repeat1,
  [607] = 5,
    ACTIONS(215), 1,
      aux_sym_filename_token1,
    ACTIONS(217), 1,
      ts_builtin_sym_end,
    ACTIONS(219), 1,
      aux_sym_source_token1,
    STATE(23), 1,
      aux_sym_filename_repeat1,
    STATE(49), 1,
      sym_filename,
  [623] = 4,
    ACTIONS(221), 1,
      ts_builtin_sym_end,
    ACTIONS(223), 1,
      aux_sym_source_token1,
    ACTIONS(225), 1,
      aux_sym_filename_token1,
    STATE(25), 1,
      aux_sym_filename_repeat1,
  [636] = 3,
    ACTIONS(229), 1,
      aux_sym_similarity_token1,
    STATE(59), 1,
      sym_mode,
    ACTIONS(227), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [647] = 4,
    ACTIONS(231), 1,
      ts_builtin_sym_end,
    ACTIONS(233), 1,
      aux_sym_source_token1,
    ACTIONS(235), 1,
      aux_sym_filename_token1,
    STATE(25), 1,
      aux_sym_filename_repeat1,
  [660] = 3,
    ACTIONS(215), 1,
      aux_sym_filename_token1,
    STATE(23), 1,
      aux_sym_filename_repeat1,
    STATE(66), 1,
      sym_filename,
  [670] = 3,
    ACTIONS(233), 1,
      anon_sym_differ,
    ACTIONS(238), 1,
      aux_sym_filename_token1,
    STATE(27), 1,
      aux_sym_filename_repeat1,
  [680] = 3,
    ACTIONS(215), 1,
      aux_sym_filename_token1,
    STATE(23), 1,
      aux_sym_filename_repeat1,
    STATE(53), 1,
      sym_filename,
  [690] = 3,
    ACTIONS(241), 1,
      aux_sym_filename_token1,
    STATE(35), 1,
      aux_sym_filename_repeat1,
    STATE(65), 1,
      sym_filename,
  [700] = 3,
    ACTIONS(243), 1,
      ts_builtin_sym_end,
    ACTIONS(245), 1,
      aux_sym_source_token1,
    ACTIONS(247), 1,
      aux_sym_location_token1,
  [710] = 3,
    ACTIONS(211), 1,
      ts_builtin_sym_end,
    ACTIONS(213), 1,
      aux_sym_source_token1,
    ACTIONS(249), 1,
      aux_sym_location_token1,
  [720] = 3,
    ACTIONS(215), 1,
      aux_sym_filename_token1,
    STATE(23), 1,
      aux_sym_filename_repeat1,
    STATE(49), 1,
      sym_filename,
  [730] = 3,
    ACTIONS(217), 1,
      ts_builtin_sym_end,
    ACTIONS(219), 1,
      aux_sym_source_token1,
    ACTIONS(251), 1,
      aux_sym_location_token1,
  [740] = 3,
    ACTIONS(253), 1,
      ts_builtin_sym_end,
    ACTIONS(255), 1,
      aux_sym_source_token1,
    ACTIONS(257), 1,
      aux_sym_location_token1,
  [750] = 3,
    ACTIONS(223), 1,
      anon_sym_and,
    ACTIONS(259), 1,
      aux_sym_filename_token1,
    STATE(37), 1,
      aux_sym_filename_repeat1,
  [760] = 3,
    ACTIONS(261), 1,
      aux_sym_filename_token1,
    STATE(38), 1,
      aux_sym_filename_repeat1,
    STATE(63), 1,
      sym_filename,
  [770] = 3,
    ACTIONS(233), 1,
      anon_sym_and,
    ACTIONS(263), 1,
      aux_sym_filename_token1,
    STATE(37), 1,
      aux_sym_filename_repeat1,
  [780] = 3,
    ACTIONS(223), 1,
      anon_sym_differ,
    ACTIONS(266), 1,
      aux_sym_filename_token1,
    STATE(27), 1,
      aux_sym_filename_repeat1,
  [790] = 3,
    ACTIONS(215), 1,
      aux_sym_filename_token1,
    STATE(23), 1,
      aux_sym_filename_repeat1,
    STATE(48), 1,
      sym_filename,
  [800] = 1,
    ACTIONS(268), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [805] = 1,
    ACTIONS(270), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [810] = 2,
    ACTIONS(272), 1,
      anon_sym_file,
    ACTIONS(274), 1,
      anon_sym_mode,
  [817] = 1,
    ACTIONS(276), 2,
      anon_sym_from,
      anon_sym_to,
  [822] = 2,
    ACTIONS(278), 1,
      aux_sym_source_token1,
    STATE(13), 1,
      aux_sym_changes_repeat1,
  [829] = 2,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    ACTIONS(280), 1,
      aux_sym_source_token1,
  [836] = 2,
    ACTIONS(229), 1,
      aux_sym_similarity_token1,
    STATE(53), 1,
      sym_mode,
  [843] = 1,
    ACTIONS(282), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [848] = 1,
    ACTIONS(284), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [853] = 1,
    ACTIONS(286), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [858] = 2,
    ACTIONS(229), 1,
      aux_sym_similarity_token1,
    STATE(52), 1,
      sym_mode,
  [865] = 2,
    ACTIONS(288), 1,
      anon_sym_PLUS_PLUS_PLUS,
    STATE(69), 1,
      sym_new_file,
  [872] = 1,
    ACTIONS(290), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [877] = 1,
    ACTIONS(292), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [882] = 2,
    ACTIONS(280), 1,
      aux_sym_source_token1,
    ACTIONS(294), 1,
      ts_builtin_sym_end,
  [889] = 1,
    ACTIONS(296), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [894] = 1,
    ACTIONS(298), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [899] = 1,
    ACTIONS(300), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [904] = 2,
    ACTIONS(288), 1,
      anon_sym_PLUS_PLUS_PLUS,
    STATE(61), 1,
      sym_new_file,
  [911] = 1,
    ACTIONS(302), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [916] = 1,
    ACTIONS(304), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [921] = 1,
    ACTIONS(306), 1,
      aux_sym_source_token1,
  [925] = 1,
    ACTIONS(308), 1,
      anon_sym_mode,
  [929] = 1,
    ACTIONS(310), 1,
      anon_sym_differ,
  [933] = 1,
    ACTIONS(312), 1,
      sym_linerange,
  [937] = 1,
    ACTIONS(314), 1,
      anon_sym_and,
  [941] = 1,
    ACTIONS(316), 1,
      aux_sym_source_token1,
  [945] = 1,
    ACTIONS(280), 1,
      aux_sym_source_token1,
  [949] = 1,
    ACTIONS(318), 1,
      aux_sym_source_token1,
  [953] = 1,
    ACTIONS(320), 1,
      aux_sym_source_token1,
  [957] = 1,
    ACTIONS(322), 1,
      aux_sym_similarity_token1,
  [961] = 1,
    ACTIONS(324), 1,
      aux_sym_source_token1,
  [965] = 1,
    ACTIONS(326), 1,
      anon_sym_DOT_DOT,
  [969] = 1,
    ACTIONS(328), 1,
      aux_sym_source_token1,
  [973] = 1,
    ACTIONS(330), 1,
      aux_sym_source_token1,
  [977] = 1,
    ACTIONS(332), 1,
      aux_sym_source_token1,
  [981] = 1,
    ACTIONS(334), 1,
      anon_sym_AT_AT2,
  [985] = 1,
    ACTIONS(211), 1,
      aux_sym_source_token1,
  [989] = 1,
    ACTIONS(217), 1,
      aux_sym_source_token1,
  [993] = 1,
    ACTIONS(336), 1,
      aux_sym_command_token1,
  [997] = 1,
    ACTIONS(338), 1,
      ts_builtin_sym_end,
  [1001] = 1,
    ACTIONS(340), 1,
      sym_linerange,
  [1005] = 1,
    ACTIONS(342), 1,
      anon_sym_index2,
  [1009] = 1,
    ACTIONS(344), 1,
      sym_commit,
  [1013] = 1,
    ACTIONS(346), 1,
      anon_sym_files,
  [1017] = 1,
    ACTIONS(348), 1,
      anon_sym_PERCENT,
  [1021] = 1,
    ACTIONS(274), 1,
      anon_sym_mode,
  [1025] = 1,
    ACTIONS(272), 1,
      anon_sym_file,
  [1029] = 1,
    ACTIONS(350), 1,
      sym_commit,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 54,
  [SMALL_STATE(6)] = 108,
  [SMALL_STATE(7)] = 157,
  [SMALL_STATE(8)] = 207,
  [SMALL_STATE(9)] = 254,
  [SMALL_STATE(10)] = 301,
  [SMALL_STATE(11)] = 336,
  [SMALL_STATE(12)] = 371,
  [SMALL_STATE(13)] = 402,
  [SMALL_STATE(14)] = 433,
  [SMALL_STATE(15)] = 459,
  [SMALL_STATE(16)] = 485,
  [SMALL_STATE(17)] = 511,
  [SMALL_STATE(18)] = 537,
  [SMALL_STATE(19)] = 563,
  [SMALL_STATE(20)] = 579,
  [SMALL_STATE(21)] = 593,
  [SMALL_STATE(22)] = 607,
  [SMALL_STATE(23)] = 623,
  [SMALL_STATE(24)] = 636,
  [SMALL_STATE(25)] = 647,
  [SMALL_STATE(26)] = 660,
  [SMALL_STATE(27)] = 670,
  [SMALL_STATE(28)] = 680,
  [SMALL_STATE(29)] = 690,
  [SMALL_STATE(30)] = 700,
  [SMALL_STATE(31)] = 710,
  [SMALL_STATE(32)] = 720,
  [SMALL_STATE(33)] = 730,
  [SMALL_STATE(34)] = 740,
  [SMALL_STATE(35)] = 750,
  [SMALL_STATE(36)] = 760,
  [SMALL_STATE(37)] = 770,
  [SMALL_STATE(38)] = 780,
  [SMALL_STATE(39)] = 790,
  [SMALL_STATE(40)] = 800,
  [SMALL_STATE(41)] = 805,
  [SMALL_STATE(42)] = 810,
  [SMALL_STATE(43)] = 817,
  [SMALL_STATE(44)] = 822,
  [SMALL_STATE(45)] = 829,
  [SMALL_STATE(46)] = 836,
  [SMALL_STATE(47)] = 843,
  [SMALL_STATE(48)] = 848,
  [SMALL_STATE(49)] = 853,
  [SMALL_STATE(50)] = 858,
  [SMALL_STATE(51)] = 865,
  [SMALL_STATE(52)] = 872,
  [SMALL_STATE(53)] = 877,
  [SMALL_STATE(54)] = 882,
  [SMALL_STATE(55)] = 889,
  [SMALL_STATE(56)] = 894,
  [SMALL_STATE(57)] = 899,
  [SMALL_STATE(58)] = 904,
  [SMALL_STATE(59)] = 911,
  [SMALL_STATE(60)] = 916,
  [SMALL_STATE(61)] = 921,
  [SMALL_STATE(62)] = 925,
  [SMALL_STATE(63)] = 929,
  [SMALL_STATE(64)] = 933,
  [SMALL_STATE(65)] = 937,
  [SMALL_STATE(66)] = 941,
  [SMALL_STATE(67)] = 945,
  [SMALL_STATE(68)] = 949,
  [SMALL_STATE(69)] = 953,
  [SMALL_STATE(70)] = 957,
  [SMALL_STATE(71)] = 961,
  [SMALL_STATE(72)] = 965,
  [SMALL_STATE(73)] = 969,
  [SMALL_STATE(74)] = 973,
  [SMALL_STATE(75)] = 977,
  [SMALL_STATE(76)] = 981,
  [SMALL_STATE(77)] = 985,
  [SMALL_STATE(78)] = 989,
  [SMALL_STATE(79)] = 993,
  [SMALL_STATE(80)] = 997,
  [SMALL_STATE(81)] = 1001,
  [SMALL_STATE(82)] = 1005,
  [SMALL_STATE(83)] = 1009,
  [SMALL_STATE(84)] = 1013,
  [SMALL_STATE(85)] = 1017,
  [SMALL_STATE(86)] = 1021,
  [SMALL_STATE(87)] = 1025,
  [SMALL_STATE(88)] = 1029,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(3),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(79),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(42),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(87),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(86),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(43),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(84),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(83),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(82),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(19),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(22),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(81),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(33),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(33),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(31),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(31),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(67),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(30),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2),
  [117] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(42),
  [120] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(87),
  [123] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(86),
  [126] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(43),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(84),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(83),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(82),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hunk, 2, .production_id = 2),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hunk, 2, .production_id = 2),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_changes_repeat2, 2),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_changes_repeat2, 2),
  [152] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_changes_repeat2, 2), SHIFT_REPEAT(77),
  [155] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_changes_repeat2, 2), SHIFT_REPEAT(78),
  [158] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_changes_repeat2, 2), SHIFT_REPEAT(33),
  [161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_changes_repeat2, 2), SHIFT_REPEAT(33),
  [164] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_changes_repeat2, 2), SHIFT_REPEAT(31),
  [167] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_changes_repeat2, 2), SHIFT_REPEAT(31),
  [170] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_changes_repeat2, 2), SHIFT_REPEAT(44),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_changes, 1),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_changes, 1),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hunks, 1),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hunks, 1),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_hunks_repeat1, 2),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_hunks_repeat1, 2),
  [185] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_hunks_repeat1, 2), SHIFT_REPEAT(81),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_changes_repeat1, 2),
  [190] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_changes_repeat1, 2), SHIFT_REPEAT(12),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_changes_repeat1, 2),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hunk, 3, .production_id = 3),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hunk, 3, .production_id = 3),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 7),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 7),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 8),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 8),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deletion, 1),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deletion, 1),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_addition, 1),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_addition, 1),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filename, 1),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filename, 1),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index, 4),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_filename_repeat1, 2),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2),
  [235] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_filename_repeat1, 2), SHIFT_REPEAT(25),
  [238] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2), SHIFT_REPEAT(27),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_location, 4),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_location, 4),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [263] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2), SHIFT_REPEAT(37),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_change, 6),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_location, 5),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mode, 1),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_old_file, 2),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new_file, 2),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_change, 4),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_change, 3),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 2),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_similarity, 4, .production_id = 1),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deletion, 2),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index, 5),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_addition, 2),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [338] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
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
