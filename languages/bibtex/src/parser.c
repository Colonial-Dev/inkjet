#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 80
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 39
#define ALIAS_COUNT 0
#define TOKEN_COUNT 21
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 5
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 9

enum {
  sym_junk = 1,
  sym_comment = 2,
  sym_string_type = 3,
  anon_sym_LBRACE = 4,
  anon_sym_EQ = 5,
  anon_sym_RBRACE = 6,
  anon_sym_LPAREN = 7,
  anon_sym_RPAREN = 8,
  sym_preamble_type = 9,
  sym_entry_type = 10,
  anon_sym_COMMA = 11,
  sym_key_brace = 12,
  sym_key_paren = 13,
  sym_identifier = 14,
  anon_sym_POUND = 15,
  anon_sym_DQUOTE = 16,
  sym_number = 17,
  sym_brace_word = 18,
  sym_quote_word = 19,
  sym_command_name = 20,
  sym_document = 21,
  sym__command_or_entry = 22,
  sym_string = 23,
  sym_preamble = 24,
  sym_entry = 25,
  sym_field = 26,
  sym_value = 27,
  sym_token = 28,
  sym__brace_balanced = 29,
  sym__quote_balanced = 30,
  sym_command = 31,
  aux_sym_document_repeat1 = 32,
  aux_sym_entry_repeat1 = 33,
  aux_sym_value_repeat1 = 34,
  aux_sym_token_repeat1 = 35,
  aux_sym_token_repeat2 = 36,
  aux_sym__brace_balanced_repeat1 = 37,
  aux_sym__quote_balanced_repeat1 = 38,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_junk] = "junk",
  [sym_comment] = "comment",
  [sym_string_type] = "string_type",
  [anon_sym_LBRACE] = "{",
  [anon_sym_EQ] = "=",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_preamble_type] = "preamble_type",
  [sym_entry_type] = "entry_type",
  [anon_sym_COMMA] = ",",
  [sym_key_brace] = "key_brace",
  [sym_key_paren] = "key_paren",
  [sym_identifier] = "identifier",
  [anon_sym_POUND] = "#",
  [anon_sym_DQUOTE] = "\"",
  [sym_number] = "number",
  [sym_brace_word] = "brace_word",
  [sym_quote_word] = "quote_word",
  [sym_command_name] = "command_name",
  [sym_document] = "document",
  [sym__command_or_entry] = "_command_or_entry",
  [sym_string] = "string",
  [sym_preamble] = "preamble",
  [sym_entry] = "entry",
  [sym_field] = "field",
  [sym_value] = "value",
  [sym_token] = "token",
  [sym__brace_balanced] = "_brace_balanced",
  [sym__quote_balanced] = "_quote_balanced",
  [sym_command] = "command",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_entry_repeat1] = "entry_repeat1",
  [aux_sym_value_repeat1] = "value_repeat1",
  [aux_sym_token_repeat1] = "token_repeat1",
  [aux_sym_token_repeat2] = "token_repeat2",
  [aux_sym__brace_balanced_repeat1] = "_brace_balanced_repeat1",
  [aux_sym__quote_balanced_repeat1] = "_quote_balanced_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_junk] = sym_junk,
  [sym_comment] = sym_comment,
  [sym_string_type] = sym_string_type,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_preamble_type] = sym_preamble_type,
  [sym_entry_type] = sym_entry_type,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [sym_key_brace] = sym_key_brace,
  [sym_key_paren] = sym_key_paren,
  [sym_identifier] = sym_identifier,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [sym_number] = sym_number,
  [sym_brace_word] = sym_brace_word,
  [sym_quote_word] = sym_quote_word,
  [sym_command_name] = sym_command_name,
  [sym_document] = sym_document,
  [sym__command_or_entry] = sym__command_or_entry,
  [sym_string] = sym_string,
  [sym_preamble] = sym_preamble,
  [sym_entry] = sym_entry,
  [sym_field] = sym_field,
  [sym_value] = sym_value,
  [sym_token] = sym_token,
  [sym__brace_balanced] = sym__brace_balanced,
  [sym__quote_balanced] = sym__quote_balanced,
  [sym_command] = sym_command,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_entry_repeat1] = aux_sym_entry_repeat1,
  [aux_sym_value_repeat1] = aux_sym_value_repeat1,
  [aux_sym_token_repeat1] = aux_sym_token_repeat1,
  [aux_sym_token_repeat2] = aux_sym_token_repeat2,
  [aux_sym__brace_balanced_repeat1] = aux_sym__brace_balanced_repeat1,
  [aux_sym__quote_balanced_repeat1] = aux_sym__quote_balanced_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_junk] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_string_type] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
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
  [sym_preamble_type] = {
    .visible = true,
    .named = true,
  },
  [sym_entry_type] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [sym_key_brace] = {
    .visible = true,
    .named = true,
  },
  [sym_key_paren] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_brace_word] = {
    .visible = true,
    .named = true,
  },
  [sym_quote_word] = {
    .visible = true,
    .named = true,
  },
  [sym_command_name] = {
    .visible = true,
    .named = true,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym__command_or_entry] = {
    .visible = false,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_preamble] = {
    .visible = true,
    .named = true,
  },
  [sym_entry] = {
    .visible = true,
    .named = true,
  },
  [sym_field] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym_token] = {
    .visible = true,
    .named = true,
  },
  [sym__brace_balanced] = {
    .visible = false,
    .named = true,
  },
  [sym__quote_balanced] = {
    .visible = false,
    .named = true,
  },
  [sym_command] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_entry_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_value_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_token_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_token_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__brace_balanced_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__quote_balanced_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_field = 1,
  field_key = 2,
  field_name = 3,
  field_ty = 4,
  field_value = 5,
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_field] = "field",
  [field_key] = "key",
  [field_name] = "name",
  [field_ty] = "ty",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 2},
  [4] = {.index = 5, .length = 1},
  [5] = {.index = 6, .length = 3},
  [6] = {.index = 9, .length = 2},
  [7] = {.index = 11, .length = 3},
  [8] = {.index = 14, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
  [1] =
    {field_ty, 0},
    {field_value, 2},
  [3] =
    {field_key, 2},
    {field_ty, 0},
  [5] =
    {field_field, 1},
  [6] =
    {field_field, 3, .inherited = true},
    {field_key, 2},
    {field_ty, 0},
  [9] =
    {field_field, 0, .inherited = true},
    {field_field, 1, .inherited = true},
  [11] =
    {field_name, 2},
    {field_ty, 0},
    {field_value, 4},
  [14] =
    {field_name, 0},
    {field_value, 2},
};

static TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static inline bool sym_entry_type_character_set_1(int32_t c) {
  return (c < '-'
    ? (c < '&'
      ? (c < '$'
        ? c == '!'
        : c <= '$')
      : (c <= '&' || (c >= '*' && c <= '+')))
    : (c <= '/' || (c < '|'
      ? (c < '>'
        ? (c >= ':' && c <= '<')
        : c <= 'z')
      : (c <= '|' || c == '~'))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(6);
      if (lookahead == '"') ADVANCE(40);
      if (lookahead == '#') ADVANCE(39);
      if (lookahead == '(') ADVANCE(13);
      if (lookahead == ')') ADVANCE(14);
      if (lookahead == ',') ADVANCE(35);
      if (lookahead == '=') ADVANCE(11);
      if (lookahead == '@') ADVANCE(4);
      if (lookahead == '\\') ADVANCE(46);
      if (lookahead == '{') ADVANCE(10);
      if (lookahead == '}') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(40);
      if (lookahead == ')') ADVANCE(14);
      if (lookahead == '{') ADVANCE(10);
      if (lookahead == '}') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= '~')) ADVANCE(38);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(40);
      if (lookahead == '\\') ADVANCE(46);
      if (lookahead == '{') ADVANCE(10);
      if (lookahead == '}') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (lookahead != 0) ADVANCE(43);
      END_STATE();
    case 3:
      if (lookahead == '\\') ADVANCE(46);
      if (lookahead == '{') ADVANCE(10);
      if (lookahead == '}') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (lookahead != 0) ADVANCE(42);
      END_STATE();
    case 4:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(29);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(30);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(33);
      if (sym_entry_type_character_set_1(lookahead)) ADVANCE(34);
      END_STATE();
    case 5:
      if (eof) ADVANCE(6);
      if (lookahead == '@') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym_junk);
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(7);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(34);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_string_type);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(34);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_preamble_type);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(34);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_entry_type);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(24);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(34);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_entry_type);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(23);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(34);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_entry_type);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(16);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(34);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_entry_type);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(15);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(34);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_entry_type);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(28);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(34);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_entry_type);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(9);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(34);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_entry_type);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(27);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(34);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_entry_type);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(19);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(34);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_entry_type);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(17);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(34);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_entry_type);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(26);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(34);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_entry_type);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(20);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(34);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_entry_type);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(21);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(34);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_entry_type);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(32);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(34);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_entry_type);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(25);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(34);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_entry_type);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(18);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(34);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_entry_type);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(22);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(34);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_entry_type);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(8);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(34);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_entry_type);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(31);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(34);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_entry_type);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_key_brace);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '}') ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_key_paren);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',') ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_brace_word);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_quote_word);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_command_name);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == '*') ADVANCE(44);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_command_name);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(44);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 5},
  [2] = {.lex_state = 5},
  [3] = {.lex_state = 5},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 5},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 5},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 5},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 5},
  [29] = {.lex_state = 5},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 5},
  [32] = {.lex_state = 5},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 5},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 3},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 3},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 37},
  [73] = {.lex_state = 36},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 1},
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_string_type] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_preamble_type] = ACTIONS(1),
    [sym_entry_type] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_command_name] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(77),
    [sym__command_or_entry] = STATE(2),
    [sym_string] = STATE(2),
    [sym_preamble] = STATE(2),
    [sym_entry] = STATE(2),
    [aux_sym_document_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_junk] = ACTIONS(5),
    [sym_comment] = ACTIONS(7),
    [sym_string_type] = ACTIONS(9),
    [sym_preamble_type] = ACTIONS(11),
    [sym_entry_type] = ACTIONS(13),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(9), 1,
      sym_string_type,
    ACTIONS(11), 1,
      sym_preamble_type,
    ACTIONS(13), 1,
      sym_entry_type,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    ACTIONS(17), 1,
      sym_junk,
    ACTIONS(19), 1,
      sym_comment,
    STATE(3), 5,
      sym__command_or_entry,
      sym_string,
      sym_preamble,
      sym_entry,
      aux_sym_document_repeat1,
  [26] = 7,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(23), 1,
      sym_junk,
    ACTIONS(26), 1,
      sym_comment,
    ACTIONS(29), 1,
      sym_string_type,
    ACTIONS(32), 1,
      sym_preamble_type,
    ACTIONS(35), 1,
      sym_entry_type,
    STATE(3), 5,
      sym__command_or_entry,
      sym_string,
      sym_preamble,
      sym_entry,
      aux_sym_document_repeat1,
  [52] = 6,
    ACTIONS(38), 1,
      anon_sym_LBRACE,
    ACTIONS(43), 1,
      sym_quote_word,
    ACTIONS(46), 1,
      sym_command_name,
    ACTIONS(41), 2,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
    STATE(4), 2,
      sym__quote_balanced,
      aux_sym_token_repeat2,
    STATE(19), 2,
      sym_command,
      aux_sym__quote_balanced_repeat1,
  [74] = 6,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(51), 1,
      anon_sym_RBRACE,
    ACTIONS(53), 1,
      sym_brace_word,
    ACTIONS(55), 1,
      sym_command_name,
    STATE(11), 2,
      sym__brace_balanced,
      aux_sym_token_repeat1,
    STATE(30), 2,
      sym_command,
      aux_sym__brace_balanced_repeat1,
  [95] = 6,
    ACTIONS(57), 1,
      anon_sym_LBRACE,
    ACTIONS(59), 1,
      anon_sym_RBRACE,
    ACTIONS(61), 1,
      sym_quote_word,
    ACTIONS(63), 1,
      sym_command_name,
    STATE(4), 2,
      sym__quote_balanced,
      aux_sym_token_repeat2,
    STATE(19), 2,
      sym_command,
      aux_sym__quote_balanced_repeat1,
  [116] = 6,
    ACTIONS(57), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      sym_quote_word,
    ACTIONS(63), 1,
      sym_command_name,
    ACTIONS(65), 1,
      anon_sym_RBRACE,
    STATE(6), 2,
      sym__quote_balanced,
      aux_sym_token_repeat2,
    STATE(19), 2,
      sym_command,
      aux_sym__quote_balanced_repeat1,
  [137] = 6,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(53), 1,
      sym_brace_word,
    ACTIONS(55), 1,
      sym_command_name,
    ACTIONS(67), 1,
      anon_sym_RBRACE,
    STATE(9), 2,
      sym__brace_balanced,
      aux_sym_token_repeat1,
    STATE(30), 2,
      sym_command,
      aux_sym__brace_balanced_repeat1,
  [158] = 6,
    ACTIONS(69), 1,
      anon_sym_LBRACE,
    ACTIONS(72), 1,
      anon_sym_RBRACE,
    ACTIONS(74), 1,
      sym_brace_word,
    ACTIONS(77), 1,
      sym_command_name,
    STATE(9), 2,
      sym__brace_balanced,
      aux_sym_token_repeat1,
    STATE(30), 2,
      sym_command,
      aux_sym__brace_balanced_repeat1,
  [179] = 6,
    ACTIONS(57), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      sym_quote_word,
    ACTIONS(63), 1,
      sym_command_name,
    ACTIONS(80), 1,
      anon_sym_RBRACE,
    STATE(17), 2,
      sym__quote_balanced,
      aux_sym_token_repeat2,
    STATE(19), 2,
      sym_command,
      aux_sym__quote_balanced_repeat1,
  [200] = 6,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(53), 1,
      sym_brace_word,
    ACTIONS(55), 1,
      sym_command_name,
    ACTIONS(82), 1,
      anon_sym_RBRACE,
    STATE(9), 2,
      sym__brace_balanced,
      aux_sym_token_repeat1,
    STATE(30), 2,
      sym_command,
      aux_sym__brace_balanced_repeat1,
  [221] = 6,
    ACTIONS(57), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      sym_quote_word,
    ACTIONS(63), 1,
      sym_command_name,
    ACTIONS(84), 1,
      anon_sym_DQUOTE,
    STATE(4), 2,
      sym__quote_balanced,
      aux_sym_token_repeat2,
    STATE(19), 2,
      sym_command,
      aux_sym__quote_balanced_repeat1,
  [242] = 6,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(53), 1,
      sym_brace_word,
    ACTIONS(55), 1,
      sym_command_name,
    ACTIONS(86), 1,
      anon_sym_RBRACE,
    STATE(8), 2,
      sym__brace_balanced,
      aux_sym_token_repeat1,
    STATE(30), 2,
      sym_command,
      aux_sym__brace_balanced_repeat1,
  [263] = 6,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(53), 1,
      sym_brace_word,
    ACTIONS(55), 1,
      sym_command_name,
    ACTIONS(88), 1,
      anon_sym_RBRACE,
    STATE(15), 2,
      sym__brace_balanced,
      aux_sym_token_repeat1,
    STATE(30), 2,
      sym_command,
      aux_sym__brace_balanced_repeat1,
  [284] = 6,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(53), 1,
      sym_brace_word,
    ACTIONS(55), 1,
      sym_command_name,
    ACTIONS(84), 1,
      anon_sym_RBRACE,
    STATE(9), 2,
      sym__brace_balanced,
      aux_sym_token_repeat1,
    STATE(30), 2,
      sym_command,
      aux_sym__brace_balanced_repeat1,
  [305] = 6,
    ACTIONS(57), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      sym_quote_word,
    ACTIONS(63), 1,
      sym_command_name,
    ACTIONS(88), 1,
      anon_sym_DQUOTE,
    STATE(12), 2,
      sym__quote_balanced,
      aux_sym_token_repeat2,
    STATE(19), 2,
      sym_command,
      aux_sym__quote_balanced_repeat1,
  [326] = 6,
    ACTIONS(57), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      sym_quote_word,
    ACTIONS(63), 1,
      sym_command_name,
    ACTIONS(90), 1,
      anon_sym_RBRACE,
    STATE(4), 2,
      sym__quote_balanced,
      aux_sym_token_repeat2,
    STATE(19), 2,
      sym_command,
      aux_sym__quote_balanced_repeat1,
  [347] = 4,
    ACTIONS(94), 1,
      sym_quote_word,
    ACTIONS(97), 1,
      sym_command_name,
    STATE(18), 2,
      sym_command,
      aux_sym__quote_balanced_repeat1,
    ACTIONS(92), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [363] = 4,
    ACTIONS(63), 1,
      sym_command_name,
    ACTIONS(102), 1,
      sym_quote_word,
    STATE(18), 2,
      sym_command,
      aux_sym__quote_balanced_repeat1,
    ACTIONS(100), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [379] = 5,
    ACTIONS(104), 1,
      anon_sym_LBRACE,
    ACTIONS(108), 1,
      anon_sym_DQUOTE,
    STATE(39), 1,
      sym_token,
    STATE(78), 1,
      sym_value,
    ACTIONS(106), 2,
      sym_identifier,
      sym_number,
  [396] = 5,
    ACTIONS(104), 1,
      anon_sym_LBRACE,
    ACTIONS(108), 1,
      anon_sym_DQUOTE,
    STATE(39), 1,
      sym_token,
    STATE(71), 1,
      sym_value,
    ACTIONS(106), 2,
      sym_identifier,
      sym_number,
  [413] = 2,
    ACTIONS(110), 2,
      ts_builtin_sym_end,
      sym_junk,
    ACTIONS(112), 4,
      sym_comment,
      sym_string_type,
      sym_preamble_type,
      sym_entry_type,
  [424] = 4,
    ACTIONS(116), 1,
      sym_brace_word,
    ACTIONS(119), 1,
      sym_command_name,
    ACTIONS(114), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    STATE(23), 2,
      sym_command,
      aux_sym__brace_balanced_repeat1,
  [439] = 2,
    ACTIONS(122), 2,
      ts_builtin_sym_end,
      sym_junk,
    ACTIONS(124), 4,
      sym_comment,
      sym_string_type,
      sym_preamble_type,
      sym_entry_type,
  [450] = 5,
    ACTIONS(104), 1,
      anon_sym_LBRACE,
    ACTIONS(108), 1,
      anon_sym_DQUOTE,
    STATE(39), 1,
      sym_token,
    STATE(79), 1,
      sym_value,
    ACTIONS(106), 2,
      sym_identifier,
      sym_number,
  [467] = 2,
    ACTIONS(126), 2,
      ts_builtin_sym_end,
      sym_junk,
    ACTIONS(128), 4,
      sym_comment,
      sym_string_type,
      sym_preamble_type,
      sym_entry_type,
  [478] = 5,
    ACTIONS(104), 1,
      anon_sym_LBRACE,
    ACTIONS(108), 1,
      anon_sym_DQUOTE,
    STATE(39), 1,
      sym_token,
    STATE(68), 1,
      sym_value,
    ACTIONS(106), 2,
      sym_identifier,
      sym_number,
  [495] = 2,
    ACTIONS(130), 2,
      ts_builtin_sym_end,
      sym_junk,
    ACTIONS(132), 4,
      sym_comment,
      sym_string_type,
      sym_preamble_type,
      sym_entry_type,
  [506] = 2,
    ACTIONS(130), 2,
      ts_builtin_sym_end,
      sym_junk,
    ACTIONS(132), 4,
      sym_comment,
      sym_string_type,
      sym_preamble_type,
      sym_entry_type,
  [517] = 4,
    ACTIONS(55), 1,
      sym_command_name,
    ACTIONS(136), 1,
      sym_brace_word,
    ACTIONS(134), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    STATE(23), 2,
      sym_command,
      aux_sym__brace_balanced_repeat1,
  [532] = 2,
    ACTIONS(126), 2,
      ts_builtin_sym_end,
      sym_junk,
    ACTIONS(128), 4,
      sym_comment,
      sym_string_type,
      sym_preamble_type,
      sym_entry_type,
  [543] = 2,
    ACTIONS(138), 2,
      ts_builtin_sym_end,
      sym_junk,
    ACTIONS(140), 4,
      sym_comment,
      sym_string_type,
      sym_preamble_type,
      sym_entry_type,
  [554] = 5,
    ACTIONS(104), 1,
      anon_sym_LBRACE,
    ACTIONS(108), 1,
      anon_sym_DQUOTE,
    STATE(39), 1,
      sym_token,
    STATE(63), 1,
      sym_value,
    ACTIONS(106), 2,
      sym_identifier,
      sym_number,
  [571] = 2,
    ACTIONS(142), 2,
      ts_builtin_sym_end,
      sym_junk,
    ACTIONS(144), 4,
      sym_comment,
      sym_string_type,
      sym_preamble_type,
      sym_entry_type,
  [582] = 4,
    ACTIONS(104), 1,
      anon_sym_LBRACE,
    ACTIONS(108), 1,
      anon_sym_DQUOTE,
    STATE(52), 1,
      sym_token,
    ACTIONS(106), 2,
      sym_identifier,
      sym_number,
  [596] = 3,
    ACTIONS(148), 1,
      anon_sym_POUND,
    STATE(43), 1,
      aux_sym_value_repeat1,
    ACTIONS(146), 3,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [608] = 1,
    ACTIONS(150), 5,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      sym_quote_word,
      sym_command_name,
  [616] = 1,
    ACTIONS(152), 5,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      sym_quote_word,
      sym_command_name,
  [624] = 3,
    ACTIONS(148), 1,
      anon_sym_POUND,
    STATE(36), 1,
      aux_sym_value_repeat1,
    ACTIONS(154), 3,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [636] = 1,
    ACTIONS(156), 5,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      sym_quote_word,
      sym_command_name,
  [644] = 2,
    ACTIONS(158), 1,
      anon_sym_LBRACE,
    ACTIONS(160), 4,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      sym_quote_word,
      sym_command_name,
  [654] = 1,
    ACTIONS(162), 5,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      sym_quote_word,
      sym_command_name,
  [662] = 3,
    ACTIONS(166), 1,
      anon_sym_POUND,
    STATE(43), 1,
      aux_sym_value_repeat1,
    ACTIONS(164), 3,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [674] = 1,
    ACTIONS(169), 4,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_POUND,
  [681] = 3,
    ACTIONS(173), 1,
      anon_sym_COMMA,
    STATE(45), 1,
      aux_sym_entry_repeat1,
    ACTIONS(171), 2,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [692] = 1,
    ACTIONS(176), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_brace_word,
      sym_command_name,
  [699] = 2,
    ACTIONS(178), 1,
      anon_sym_LBRACE,
    ACTIONS(160), 3,
      anon_sym_RBRACE,
      sym_brace_word,
      sym_command_name,
  [708] = 1,
    ACTIONS(180), 4,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_POUND,
  [715] = 1,
    ACTIONS(182), 4,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_POUND,
  [722] = 1,
    ACTIONS(184), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_brace_word,
      sym_command_name,
  [729] = 1,
    ACTIONS(152), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_brace_word,
      sym_command_name,
  [736] = 1,
    ACTIONS(164), 4,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_POUND,
  [743] = 1,
    ACTIONS(162), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_brace_word,
      sym_command_name,
  [750] = 3,
    ACTIONS(186), 1,
      anon_sym_RPAREN,
    ACTIONS(188), 1,
      sym_identifier,
    STATE(56), 1,
      sym_field,
  [760] = 3,
    ACTIONS(190), 1,
      anon_sym_RPAREN,
    ACTIONS(192), 1,
      anon_sym_COMMA,
    STATE(45), 1,
      aux_sym_entry_repeat1,
  [770] = 1,
    ACTIONS(194), 3,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [776] = 3,
    ACTIONS(188), 1,
      sym_identifier,
    ACTIONS(196), 1,
      anon_sym_RBRACE,
    STATE(56), 1,
      sym_field,
  [786] = 3,
    ACTIONS(198), 1,
      anon_sym_RBRACE,
    ACTIONS(200), 1,
      anon_sym_COMMA,
    STATE(45), 1,
      aux_sym_entry_repeat1,
  [796] = 3,
    ACTIONS(188), 1,
      sym_identifier,
    ACTIONS(202), 1,
      anon_sym_RPAREN,
    STATE(56), 1,
      sym_field,
  [806] = 3,
    ACTIONS(186), 1,
      anon_sym_RBRACE,
    ACTIONS(188), 1,
      sym_identifier,
    STATE(56), 1,
      sym_field,
  [816] = 3,
    ACTIONS(204), 1,
      anon_sym_RPAREN,
    ACTIONS(206), 1,
      anon_sym_COMMA,
    STATE(55), 1,
      aux_sym_entry_repeat1,
  [826] = 3,
    ACTIONS(204), 1,
      anon_sym_RBRACE,
    ACTIONS(208), 1,
      anon_sym_COMMA,
    STATE(58), 1,
      aux_sym_entry_repeat1,
  [836] = 1,
    ACTIONS(210), 3,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [842] = 2,
    ACTIONS(188), 1,
      sym_identifier,
    STATE(56), 1,
      sym_field,
  [849] = 2,
    ACTIONS(212), 1,
      anon_sym_LBRACE,
    ACTIONS(214), 1,
      anon_sym_LPAREN,
  [856] = 2,
    ACTIONS(216), 1,
      anon_sym_LBRACE,
    ACTIONS(218), 1,
      anon_sym_LPAREN,
  [863] = 2,
    ACTIONS(220), 1,
      anon_sym_LBRACE,
    ACTIONS(222), 1,
      anon_sym_LPAREN,
  [870] = 1,
    ACTIONS(224), 1,
      anon_sym_RPAREN,
  [874] = 1,
    ACTIONS(226), 1,
      anon_sym_EQ,
  [878] = 1,
    ACTIONS(228), 1,
      anon_sym_EQ,
  [882] = 1,
    ACTIONS(224), 1,
      anon_sym_RBRACE,
  [886] = 1,
    ACTIONS(230), 1,
      sym_key_paren,
  [890] = 1,
    ACTIONS(232), 1,
      sym_key_brace,
  [894] = 1,
    ACTIONS(234), 1,
      anon_sym_EQ,
  [898] = 1,
    ACTIONS(236), 1,
      sym_identifier,
  [902] = 1,
    ACTIONS(238), 1,
      sym_identifier,
  [906] = 1,
    ACTIONS(240), 1,
      ts_builtin_sym_end,
  [910] = 1,
    ACTIONS(242), 1,
      anon_sym_RPAREN,
  [914] = 1,
    ACTIONS(242), 1,
      anon_sym_RBRACE,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 26,
  [SMALL_STATE(4)] = 52,
  [SMALL_STATE(5)] = 74,
  [SMALL_STATE(6)] = 95,
  [SMALL_STATE(7)] = 116,
  [SMALL_STATE(8)] = 137,
  [SMALL_STATE(9)] = 158,
  [SMALL_STATE(10)] = 179,
  [SMALL_STATE(11)] = 200,
  [SMALL_STATE(12)] = 221,
  [SMALL_STATE(13)] = 242,
  [SMALL_STATE(14)] = 263,
  [SMALL_STATE(15)] = 284,
  [SMALL_STATE(16)] = 305,
  [SMALL_STATE(17)] = 326,
  [SMALL_STATE(18)] = 347,
  [SMALL_STATE(19)] = 363,
  [SMALL_STATE(20)] = 379,
  [SMALL_STATE(21)] = 396,
  [SMALL_STATE(22)] = 413,
  [SMALL_STATE(23)] = 424,
  [SMALL_STATE(24)] = 439,
  [SMALL_STATE(25)] = 450,
  [SMALL_STATE(26)] = 467,
  [SMALL_STATE(27)] = 478,
  [SMALL_STATE(28)] = 495,
  [SMALL_STATE(29)] = 506,
  [SMALL_STATE(30)] = 517,
  [SMALL_STATE(31)] = 532,
  [SMALL_STATE(32)] = 543,
  [SMALL_STATE(33)] = 554,
  [SMALL_STATE(34)] = 571,
  [SMALL_STATE(35)] = 582,
  [SMALL_STATE(36)] = 596,
  [SMALL_STATE(37)] = 608,
  [SMALL_STATE(38)] = 616,
  [SMALL_STATE(39)] = 624,
  [SMALL_STATE(40)] = 636,
  [SMALL_STATE(41)] = 644,
  [SMALL_STATE(42)] = 654,
  [SMALL_STATE(43)] = 662,
  [SMALL_STATE(44)] = 674,
  [SMALL_STATE(45)] = 681,
  [SMALL_STATE(46)] = 692,
  [SMALL_STATE(47)] = 699,
  [SMALL_STATE(48)] = 708,
  [SMALL_STATE(49)] = 715,
  [SMALL_STATE(50)] = 722,
  [SMALL_STATE(51)] = 729,
  [SMALL_STATE(52)] = 736,
  [SMALL_STATE(53)] = 743,
  [SMALL_STATE(54)] = 750,
  [SMALL_STATE(55)] = 760,
  [SMALL_STATE(56)] = 770,
  [SMALL_STATE(57)] = 776,
  [SMALL_STATE(58)] = 786,
  [SMALL_STATE(59)] = 796,
  [SMALL_STATE(60)] = 806,
  [SMALL_STATE(61)] = 816,
  [SMALL_STATE(62)] = 826,
  [SMALL_STATE(63)] = 836,
  [SMALL_STATE(64)] = 842,
  [SMALL_STATE(65)] = 849,
  [SMALL_STATE(66)] = 856,
  [SMALL_STATE(67)] = 863,
  [SMALL_STATE(68)] = 870,
  [SMALL_STATE(69)] = 874,
  [SMALL_STATE(70)] = 878,
  [SMALL_STATE(71)] = 882,
  [SMALL_STATE(72)] = 886,
  [SMALL_STATE(73)] = 890,
  [SMALL_STATE(74)] = 894,
  [SMALL_STATE(75)] = 898,
  [SMALL_STATE(76)] = 902,
  [SMALL_STATE(77)] = 906,
  [SMALL_STATE(78)] = 910,
  [SMALL_STATE(79)] = 914,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(3),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(3),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(67),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(65),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(66),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_token_repeat2, 2), SHIFT_REPEAT(13),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_token_repeat2, 2),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_token_repeat2, 2), SHIFT_REPEAT(19),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_token_repeat2, 2), SHIFT_REPEAT(41),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_token_repeat1, 2), SHIFT_REPEAT(5),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_token_repeat1, 2),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_token_repeat1, 2), SHIFT_REPEAT(30),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_token_repeat1, 2), SHIFT_REPEAT(47),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__quote_balanced_repeat1, 2),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__quote_balanced_repeat1, 2), SHIFT_REPEAT(18),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__quote_balanced_repeat1, 2), SHIFT_REPEAT(41),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quote_balanced, 1),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 5, .production_id = 3),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entry, 5, .production_id = 3),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__brace_balanced_repeat1, 2),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__brace_balanced_repeat1, 2), SHIFT_REPEAT(23),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__brace_balanced_repeat1, 2), SHIFT_REPEAT(47),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 6, .production_id = 7),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 6, .production_id = 7),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 5, .production_id = 5),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entry, 5, .production_id = 5),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 6, .production_id = 5),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entry, 6, .production_id = 5),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__brace_balanced, 1),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 4, .production_id = 3),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entry, 4, .production_id = 3),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preamble, 4, .production_id = 2),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preamble, 4, .production_id = 2),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 2),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quote_balanced, 3),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 4, .production_id = 1),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quote_balanced, 2),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1, .production_id = 1),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3, .production_id = 1),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_value_repeat1, 2),
  [166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_repeat1, 2), SHIFT_REPEAT(35),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_token, 1),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_entry_repeat1, 2, .production_id = 6),
  [173] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_entry_repeat1, 2, .production_id = 6), SHIFT_REPEAT(64),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__brace_balanced, 2),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_token, 2),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_token, 3),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__brace_balanced, 3),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_entry_repeat1, 2, .production_id = 4),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 3, .production_id = 8),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [240] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_bibtex(void) {
  static TSLanguage language = {
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
    .parse_table = (const uint16_t *)ts_parse_table,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = (const TSFieldMapSlice *)ts_field_map_slices,
    .field_map_entries = (const TSFieldMapEntry *)ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
