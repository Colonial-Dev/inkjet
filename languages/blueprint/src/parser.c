#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 151
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 99
#define ALIAS_COUNT 0
#define TOKEN_COUNT 59
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 1

enum {
  sym_using = 1,
  sym_template = 2,
  sym__number = 3,
  anon_sym_DOT = 4,
  anon_sym_SEMI = 5,
  anon_sym_DQUOTE = 6,
  anon_sym_SQUOTE = 7,
  sym_unescaped_double_string_fragment = 8,
  sym_unescaped_single_string_fragment = 9,
  sym_escape_sequence = 10,
  anon_sym__ = 11,
  anon_sym_LPAREN = 12,
  anon_sym_RPAREN = 13,
  sym_object_id = 14,
  sym__object_fragment = 15,
  anon_sym_LBRACE = 16,
  anon_sym_RBRACE = 17,
  anon_sym_LBRACK = 18,
  anon_sym_RBRACK = 19,
  anon_sym_layout = 20,
  anon_sym_menu = 21,
  anon_sym_section = 22,
  anon_sym_item = 23,
  anon_sym_COMMA = 24,
  anon_sym_COLON = 25,
  anon_sym_true = 26,
  anon_sym_false = 27,
  sym_property_name = 28,
  aux_sym_signal_name_token1 = 29,
  anon_sym_start = 30,
  anon_sym_end = 31,
  anon_sym_top = 32,
  anon_sym_bottom = 33,
  anon_sym_center = 34,
  anon_sym_right = 35,
  anon_sym_left = 36,
  anon_sym_fill = 37,
  anon_sym_vertical = 38,
  anon_sym_horizontal = 39,
  anon_sym_always = 40,
  anon_sym_never = 41,
  anon_sym_natural = 42,
  anon_sym_none = 43,
  anon_sym_word = 44,
  anon_sym_char = 45,
  anon_sym_word_char = 46,
  anon_sym_yes = 47,
  anon_sym_no = 48,
  anon_sym_both = 49,
  anon_sym_bind = 50,
  anon_sym_no_DASHsync_DASHcreate = 51,
  anon_sym_bidirectional = 52,
  anon_sym_inverted = 53,
  anon_sym_EQ_GT = 54,
  anon_sym_swapped = 55,
  anon_sym_styles = 56,
  sym_comment = 57,
  sym_float = 58,
  sym_source_file = 59,
  sym__toplevel = 60,
  sym_gobject_library = 61,
  sym_version_number = 62,
  sym_import_statement = 63,
  sym_string = 64,
  sym_gettext_string = 65,
  sym_identifier = 66,
  sym_object = 67,
  sym_block = 68,
  sym_decorator = 69,
  sym_object_definition = 70,
  sym_layout_definition = 71,
  sym_menu_definition = 72,
  sym_menu_section = 73,
  sym_menu_item = 74,
  sym_template_name_qualifier = 75,
  sym_template_definition = 76,
  sym_boolean = 77,
  sym_signal_name = 78,
  sym_constant = 79,
  sym__property_value = 80,
  sym__property_binding = 81,
  sym_property_definition = 82,
  sym_function = 83,
  sym_signal_binding = 84,
  sym_styles_list = 85,
  sym_number = 86,
  sym_array = 87,
  aux_sym_source_file_repeat1 = 88,
  aux_sym_version_number_repeat1 = 89,
  aux_sym_string_repeat1 = 90,
  aux_sym_string_repeat2 = 91,
  aux_sym_object_repeat1 = 92,
  aux_sym_block_repeat1 = 93,
  aux_sym_layout_definition_repeat1 = 94,
  aux_sym_menu_definition_repeat1 = 95,
  aux_sym_menu_section_repeat1 = 96,
  aux_sym__property_binding_repeat1 = 97,
  aux_sym_array_repeat1 = 98,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_using] = "using",
  [sym_template] = "template",
  [sym__number] = "_number",
  [anon_sym_DOT] = ".",
  [anon_sym_SEMI] = ";",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_SQUOTE] = "'",
  [sym_unescaped_double_string_fragment] = "string_fragment",
  [sym_unescaped_single_string_fragment] = "string_fragment",
  [sym_escape_sequence] = "escape_sequence",
  [anon_sym__] = "_",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_object_id] = "object_id",
  [sym__object_fragment] = "_object_fragment",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_layout] = "layout",
  [anon_sym_menu] = "menu",
  [anon_sym_section] = "section",
  [anon_sym_item] = "item",
  [anon_sym_COMMA] = ",",
  [anon_sym_COLON] = ":",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_property_name] = "property_name",
  [aux_sym_signal_name_token1] = "signal_name_token1",
  [anon_sym_start] = "start",
  [anon_sym_end] = "end",
  [anon_sym_top] = "top",
  [anon_sym_bottom] = "bottom",
  [anon_sym_center] = "center",
  [anon_sym_right] = "right",
  [anon_sym_left] = "left",
  [anon_sym_fill] = "fill",
  [anon_sym_vertical] = "vertical",
  [anon_sym_horizontal] = "horizontal",
  [anon_sym_always] = "always",
  [anon_sym_never] = "never",
  [anon_sym_natural] = "natural",
  [anon_sym_none] = "none",
  [anon_sym_word] = "word",
  [anon_sym_char] = "char",
  [anon_sym_word_char] = "word_char",
  [anon_sym_yes] = "yes",
  [anon_sym_no] = "no",
  [anon_sym_both] = "both",
  [anon_sym_bind] = "bind",
  [anon_sym_no_DASHsync_DASHcreate] = "no-sync-create",
  [anon_sym_bidirectional] = "bidirectional",
  [anon_sym_inverted] = "inverted",
  [anon_sym_EQ_GT] = "=>",
  [anon_sym_swapped] = "swapped",
  [anon_sym_styles] = "styles",
  [sym_comment] = "comment",
  [sym_float] = "float",
  [sym_source_file] = "source_file",
  [sym__toplevel] = "_toplevel",
  [sym_gobject_library] = "gobject_library",
  [sym_version_number] = "version_number",
  [sym_import_statement] = "import_statement",
  [sym_string] = "string",
  [sym_gettext_string] = "gettext_string",
  [sym_identifier] = "identifier",
  [sym_object] = "object",
  [sym_block] = "block",
  [sym_decorator] = "decorator",
  [sym_object_definition] = "object_definition",
  [sym_layout_definition] = "layout_definition",
  [sym_menu_definition] = "menu_definition",
  [sym_menu_section] = "menu_section",
  [sym_menu_item] = "menu_item",
  [sym_template_name_qualifier] = "template_name_qualifier",
  [sym_template_definition] = "template_definition",
  [sym_boolean] = "boolean",
  [sym_signal_name] = "signal_name",
  [sym_constant] = "constant",
  [sym__property_value] = "_property_value",
  [sym__property_binding] = "_property_binding",
  [sym_property_definition] = "property_definition",
  [sym_function] = "function",
  [sym_signal_binding] = "signal_binding",
  [sym_styles_list] = "styles_list",
  [sym_number] = "number",
  [sym_array] = "array",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_version_number_repeat1] = "version_number_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_string_repeat2] = "string_repeat2",
  [aux_sym_object_repeat1] = "object_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_layout_definition_repeat1] = "layout_definition_repeat1",
  [aux_sym_menu_definition_repeat1] = "menu_definition_repeat1",
  [aux_sym_menu_section_repeat1] = "menu_section_repeat1",
  [aux_sym__property_binding_repeat1] = "_property_binding_repeat1",
  [aux_sym_array_repeat1] = "array_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_using] = sym_using,
  [sym_template] = sym_template,
  [sym__number] = sym__number,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [sym_unescaped_double_string_fragment] = sym_unescaped_double_string_fragment,
  [sym_unescaped_single_string_fragment] = sym_unescaped_double_string_fragment,
  [sym_escape_sequence] = sym_escape_sequence,
  [anon_sym__] = anon_sym__,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_object_id] = sym_object_id,
  [sym__object_fragment] = sym__object_fragment,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_layout] = anon_sym_layout,
  [anon_sym_menu] = anon_sym_menu,
  [anon_sym_section] = anon_sym_section,
  [anon_sym_item] = anon_sym_item,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_property_name] = sym_property_name,
  [aux_sym_signal_name_token1] = aux_sym_signal_name_token1,
  [anon_sym_start] = anon_sym_start,
  [anon_sym_end] = anon_sym_end,
  [anon_sym_top] = anon_sym_top,
  [anon_sym_bottom] = anon_sym_bottom,
  [anon_sym_center] = anon_sym_center,
  [anon_sym_right] = anon_sym_right,
  [anon_sym_left] = anon_sym_left,
  [anon_sym_fill] = anon_sym_fill,
  [anon_sym_vertical] = anon_sym_vertical,
  [anon_sym_horizontal] = anon_sym_horizontal,
  [anon_sym_always] = anon_sym_always,
  [anon_sym_never] = anon_sym_never,
  [anon_sym_natural] = anon_sym_natural,
  [anon_sym_none] = anon_sym_none,
  [anon_sym_word] = anon_sym_word,
  [anon_sym_char] = anon_sym_char,
  [anon_sym_word_char] = anon_sym_word_char,
  [anon_sym_yes] = anon_sym_yes,
  [anon_sym_no] = anon_sym_no,
  [anon_sym_both] = anon_sym_both,
  [anon_sym_bind] = anon_sym_bind,
  [anon_sym_no_DASHsync_DASHcreate] = anon_sym_no_DASHsync_DASHcreate,
  [anon_sym_bidirectional] = anon_sym_bidirectional,
  [anon_sym_inverted] = anon_sym_inverted,
  [anon_sym_EQ_GT] = anon_sym_EQ_GT,
  [anon_sym_swapped] = anon_sym_swapped,
  [anon_sym_styles] = anon_sym_styles,
  [sym_comment] = sym_comment,
  [sym_float] = sym_float,
  [sym_source_file] = sym_source_file,
  [sym__toplevel] = sym__toplevel,
  [sym_gobject_library] = sym_gobject_library,
  [sym_version_number] = sym_version_number,
  [sym_import_statement] = sym_import_statement,
  [sym_string] = sym_string,
  [sym_gettext_string] = sym_gettext_string,
  [sym_identifier] = sym_identifier,
  [sym_object] = sym_object,
  [sym_block] = sym_block,
  [sym_decorator] = sym_decorator,
  [sym_object_definition] = sym_object_definition,
  [sym_layout_definition] = sym_layout_definition,
  [sym_menu_definition] = sym_menu_definition,
  [sym_menu_section] = sym_menu_section,
  [sym_menu_item] = sym_menu_item,
  [sym_template_name_qualifier] = sym_template_name_qualifier,
  [sym_template_definition] = sym_template_definition,
  [sym_boolean] = sym_boolean,
  [sym_signal_name] = sym_signal_name,
  [sym_constant] = sym_constant,
  [sym__property_value] = sym__property_value,
  [sym__property_binding] = sym__property_binding,
  [sym_property_definition] = sym_property_definition,
  [sym_function] = sym_function,
  [sym_signal_binding] = sym_signal_binding,
  [sym_styles_list] = sym_styles_list,
  [sym_number] = sym_number,
  [sym_array] = sym_array,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_version_number_repeat1] = aux_sym_version_number_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_string_repeat2] = aux_sym_string_repeat2,
  [aux_sym_object_repeat1] = aux_sym_object_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_layout_definition_repeat1] = aux_sym_layout_definition_repeat1,
  [aux_sym_menu_definition_repeat1] = aux_sym_menu_definition_repeat1,
  [aux_sym_menu_section_repeat1] = aux_sym_menu_section_repeat1,
  [aux_sym__property_binding_repeat1] = aux_sym__property_binding_repeat1,
  [aux_sym_array_repeat1] = aux_sym_array_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_using] = {
    .visible = true,
    .named = true,
  },
  [sym_template] = {
    .visible = true,
    .named = true,
  },
  [sym__number] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_unescaped_double_string_fragment] = {
    .visible = true,
    .named = true,
  },
  [sym_unescaped_single_string_fragment] = {
    .visible = true,
    .named = true,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [anon_sym__] = {
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
  [sym_object_id] = {
    .visible = true,
    .named = true,
  },
  [sym__object_fragment] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
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
  [anon_sym_layout] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_menu] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_section] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_item] = {
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
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [sym_property_name] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_signal_name_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_start] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_end] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_top] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bottom] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_center] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_right] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_left] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fill] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vertical] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_horizontal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_always] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_never] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_natural] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_none] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_word] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_char] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_word_char] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_yes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_both] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bind] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_DASHsync_DASHcreate] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bidirectional] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_inverted] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_swapped] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_styles] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__toplevel] = {
    .visible = false,
    .named = true,
  },
  [sym_gobject_library] = {
    .visible = true,
    .named = true,
  },
  [sym_version_number] = {
    .visible = true,
    .named = true,
  },
  [sym_import_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_gettext_string] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_object] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_decorator] = {
    .visible = true,
    .named = true,
  },
  [sym_object_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_layout_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_menu_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_menu_section] = {
    .visible = true,
    .named = true,
  },
  [sym_menu_item] = {
    .visible = true,
    .named = true,
  },
  [sym_template_name_qualifier] = {
    .visible = true,
    .named = true,
  },
  [sym_template_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_signal_name] = {
    .visible = true,
    .named = true,
  },
  [sym_constant] = {
    .visible = true,
    .named = true,
  },
  [sym__property_value] = {
    .visible = false,
    .named = true,
  },
  [sym__property_binding] = {
    .visible = false,
    .named = true,
  },
  [sym_property_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_function] = {
    .visible = true,
    .named = true,
  },
  [sym_signal_binding] = {
    .visible = true,
    .named = true,
  },
  [sym_styles_list] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_array] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_version_number_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_object_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_layout_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_menu_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_menu_section_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__property_binding_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_repeat1] = {
    .visible = false,
    .named = false,
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
  [3] = 2,
  [4] = 2,
  [5] = 5,
  [6] = 6,
  [7] = 6,
  [8] = 8,
  [9] = 8,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 15,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 16,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 14,
  [31] = 23,
  [32] = 21,
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
  [71] = 54,
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
  [84] = 81,
  [85] = 17,
  [86] = 78,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 80,
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
  [110] = 17,
  [111] = 111,
  [112] = 112,
  [113] = 109,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 108,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 122,
  [146] = 122,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 142,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(192);
      if (lookahead == '"') ADVANCE(199);
      if (lookahead == '\'') ADVANCE(200);
      if (lookahead == '(') ADVANCE(209);
      if (lookahead == ')') ADVANCE(210);
      if (lookahead == ',') ADVANCE(286);
      if (lookahead == '.') ADVANCE(197);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == ';') ADVANCE(198);
      if (lookahead == '=') ADVANCE(14);
      if (lookahead == '[') ADVANCE(278);
      if (lookahead == '\\') ADVANCE(165);
      if (lookahead == ']') ADVANCE(279);
      if (lookahead == '_') ADVANCE(208);
      if (lookahead == 'a') ADVANCE(89);
      if (lookahead == 'b') ADVANCE(76);
      if (lookahead == 'c') ADVANCE(54);
      if (lookahead == 'e') ADVANCE(103);
      if (lookahead == 'f') ADVANCE(18);
      if (lookahead == 'h') ADVANCE(114);
      if (lookahead == 'i') ADVANCE(105);
      if (lookahead == 'l') ADVANCE(15);
      if (lookahead == 'm') ADVANCE(60);
      if (lookahead == 'n') ADVANCE(19);
      if (lookahead == 'r') ADVANCE(77);
      if (lookahead == 's') ADVANCE(45);
      if (lookahead == 't') ADVANCE(46);
      if (lookahead == 'u') ADVANCE(145);
      if (lookahead == 'v') ADVANCE(56);
      if (lookahead == 'w') ADVANCE(119);
      if (lookahead == 'y') ADVANCE(55);
      if (lookahead == '{') ADVANCE(276);
      if (lookahead == '}') ADVANCE(277);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(191)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(195);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(187);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(199);
      if (lookahead == '\'') ADVANCE(200);
      if (lookahead == '.') ADVANCE(197);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == ']') ADVANCE(279);
      if (lookahead == '_') ADVANCE(208);
      if (lookahead == '{') ADVANCE(276);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(196);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(199);
      if (lookahead == '\'') ADVANCE(200);
      if (lookahead == '.') ADVANCE(197);
      if (lookahead == '[') ADVANCE(278);
      if (lookahead == '_') ADVANCE(208);
      if (lookahead == 'a') ADVANCE(95);
      if (lookahead == 'b') ADVANCE(79);
      if (lookahead == 'c') ADVANCE(58);
      if (lookahead == 'e') ADVANCE(107);
      if (lookahead == 'f') ADVANCE(16);
      if (lookahead == 'h') ADVANCE(115);
      if (lookahead == 'l') ADVANCE(52);
      if (lookahead == 'n') ADVANCE(22);
      if (lookahead == 'r') ADVANCE(80);
      if (lookahead == 's') ADVANCE(161);
      if (lookahead == 't') ADVANCE(116);
      if (lookahead == 'v') ADVANCE(59);
      if (lookahead == 'w') ADVANCE(121);
      if (lookahead == 'y') ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(195);
      if (('d' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(187);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(199);
      if (lookahead == '\\') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(201);
      if (lookahead != 0) ADVANCE(202);
      END_STATE();
    case 4:
      if (lookahead == '\'') ADVANCE(200);
      if (lookahead == '\\') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(203);
      if (lookahead != 0) ADVANCE(204);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(7);
      if (lookahead == '/') ADVANCE(359);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '/') ADVANCE(358);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(6);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(146);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(36);
      END_STATE();
    case 10:
      if (lookahead == '.') ADVANCE(197);
      if (lookahead == '[') ADVANCE(278);
      if (lookahead == 'l') ADVANCE(17);
      if (lookahead == 'n') ADVANCE(117);
      if (lookahead == 's') ADVANCE(153);
      if (lookahead == '}') ADVANCE(277);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(196);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(187);
      END_STATE();
    case 11:
      if (lookahead == ':') ADVANCE(186);
      END_STATE();
    case 12:
      if (lookahead == ':') ADVANCE(11);
      END_STATE();
    case 13:
      if (lookahead == ';') ADVANCE(198);
      if (lookahead == 'b') ADVANCE(87);
      if (lookahead == 'i') ADVANCE(104);
      if (lookahead == 'n') ADVANCE(118);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      END_STATE();
    case 14:
      if (lookahead == '>') ADVANCE(354);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(174);
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(239);
      if (lookahead == 'i') ADVANCE(240);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(304);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(96);
      if (lookahead == 'i') ADVANCE(97);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(155);
      if (lookahead == 'e') ADVANCE(170);
      if (lookahead == 'o') ADVANCE(345);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(176);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(127);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(264);
      if (lookahead == 'e') ADVANCE(270);
      if (lookahead == 'o') ADVANCE(346);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(130);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(91);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(92);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(93);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(133);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(94);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(137);
      if (lookahead == 'y') ADVANCE(99);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(159);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(160);
      END_STATE();
    case 32:
      if (lookahead == 'c') ADVANCE(9);
      END_STATE();
    case 33:
      if (lookahead == 'c') ADVANCE(75);
      END_STATE();
    case 34:
      if (lookahead == 'c') ADVANCE(156);
      END_STATE();
    case 35:
      if (lookahead == 'c') ADVANCE(25);
      END_STATE();
    case 36:
      if (lookahead == 'c') ADVANCE(140);
      END_STATE();
    case 37:
      if (lookahead == 'c') ADVANCE(162);
      END_STATE();
    case 38:
      if (lookahead == 'd') ADVANCE(311);
      END_STATE();
    case 39:
      if (lookahead == 'd') ADVANCE(349);
      END_STATE();
    case 40:
      if (lookahead == 'd') ADVANCE(338);
      END_STATE();
    case 41:
      if (lookahead == 'd') ADVANCE(355);
      END_STATE();
    case 42:
      if (lookahead == 'd') ADVANCE(353);
      END_STATE();
    case 43:
      if (lookahead == 'd') ADVANCE(86);
      END_STATE();
    case 44:
      if (lookahead == 'd') ADVANCE(86);
      if (lookahead == 'n') ADVANCE(39);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(34);
      if (lookahead == 't') ADVANCE(29);
      if (lookahead == 'w') ADVANCE(21);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(102);
      if (lookahead == 'o') ADVANCE(126);
      if (lookahead == 'r') ADVANCE(167);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(335);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(288);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(290);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(194);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(351);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(228);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(257);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(110);
      if (lookahead == 'h') ADVANCE(23);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(142);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(141);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(100);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(243);
      if (lookahead == 'h') ADVANCE(213);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(255);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(109);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(144);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(131);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(132);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(138);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 69:
      if (lookahead == 'f') ADVANCE(149);
      END_STATE();
    case 70:
      if (lookahead == 'f') ADVANCE(173);
      END_STATE();
    case 71:
      if (lookahead == 'g') ADVANCE(74);
      END_STATE();
    case 72:
      if (lookahead == 'g') ADVANCE(193);
      END_STATE();
    case 73:
      if (lookahead == 'h') ADVANCE(347);
      if (lookahead == 't') ADVANCE(120);
      END_STATE();
    case 74:
      if (lookahead == 'h') ADVANCE(150);
      END_STATE();
    case 75:
      if (lookahead == 'h') ADVANCE(27);
      END_STATE();
    case 76:
      if (lookahead == 'i') ADVANCE(44);
      if (lookahead == 'o') ADVANCE(148);
      END_STATE();
    case 77:
      if (lookahead == 'i') ADVANCE(71);
      END_STATE();
    case 78:
      if (lookahead == 'i') ADVANCE(177);
      END_STATE();
    case 79:
      if (lookahead == 'i') ADVANCE(242);
      if (lookahead == 'o') ADVANCE(260);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 80:
      if (lookahead == 'i') ADVANCE(229);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 81:
      if (lookahead == 'i') ADVANCE(70);
      END_STATE();
    case 82:
      if (lookahead == 'i') ADVANCE(35);
      END_STATE();
    case 83:
      if (lookahead == 'i') ADVANCE(154);
      if (lookahead == '}') ADVANCE(277);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(83)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 84:
      if (lookahead == 'i') ADVANCE(108);
      END_STATE();
    case 85:
      if (lookahead == 'i') ADVANCE(123);
      END_STATE();
    case 86:
      if (lookahead == 'i') ADVANCE(139);
      END_STATE();
    case 87:
      if (lookahead == 'i') ADVANCE(43);
      END_STATE();
    case 88:
      if (lookahead == 'i') ADVANCE(124);
      END_STATE();
    case 89:
      if (lookahead == 'l') ADVANCE(172);
      END_STATE();
    case 90:
      if (lookahead == 'l') ADVANCE(323);
      END_STATE();
    case 91:
      if (lookahead == 'l') ADVANCE(333);
      END_STATE();
    case 92:
      if (lookahead == 'l') ADVANCE(325);
      END_STATE();
    case 93:
      if (lookahead == 'l') ADVANCE(327);
      END_STATE();
    case 94:
      if (lookahead == 'l') ADVANCE(352);
      END_STATE();
    case 95:
      if (lookahead == 'l') ADVANCE(271);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 96:
      if (lookahead == 'l') ADVANCE(147);
      END_STATE();
    case 97:
      if (lookahead == 'l') ADVANCE(90);
      END_STATE();
    case 98:
      if (lookahead == 'l') ADVANCE(30);
      END_STATE();
    case 99:
      if (lookahead == 'l') ADVANCE(63);
      END_STATE();
    case 100:
      if (lookahead == 'm') ADVANCE(284);
      END_STATE();
    case 101:
      if (lookahead == 'm') ADVANCE(315);
      END_STATE();
    case 102:
      if (lookahead == 'm') ADVANCE(128);
      END_STATE();
    case 103:
      if (lookahead == 'n') ADVANCE(38);
      END_STATE();
    case 104:
      if (lookahead == 'n') ADVANCE(171);
      END_STATE();
    case 105:
      if (lookahead == 'n') ADVANCE(171);
      if (lookahead == 't') ADVANCE(57);
      END_STATE();
    case 106:
      if (lookahead == 'n') ADVANCE(283);
      END_STATE();
    case 107:
      if (lookahead == 'n') ADVANCE(220);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 108:
      if (lookahead == 'n') ADVANCE(72);
      END_STATE();
    case 109:
      if (lookahead == 'n') ADVANCE(166);
      END_STATE();
    case 110:
      if (lookahead == 'n') ADVANCE(163);
      END_STATE();
    case 111:
      if (lookahead == 'n') ADVANCE(32);
      END_STATE();
    case 112:
      if (lookahead == 'n') ADVANCE(164);
      END_STATE();
    case 113:
      if (lookahead == 'n') ADVANCE(28);
      END_STATE();
    case 114:
      if (lookahead == 'o') ADVANCE(135);
      END_STATE();
    case 115:
      if (lookahead == 'o') ADVANCE(248);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 116:
      if (lookahead == 'o') ADVANCE(247);
      if (lookahead == 'r') ADVANCE(268);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 117:
      if (lookahead == 'o') ADVANCE(301);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      END_STATE();
    case 118:
      if (lookahead == 'o') ADVANCE(8);
      END_STATE();
    case 119:
      if (lookahead == 'o') ADVANCE(134);
      END_STATE();
    case 120:
      if (lookahead == 'o') ADVANCE(101);
      END_STATE();
    case 121:
      if (lookahead == 'o') ADVANCE(254);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 122:
      if (lookahead == 'o') ADVANCE(169);
      END_STATE();
    case 123:
      if (lookahead == 'o') ADVANCE(106);
      END_STATE();
    case 124:
      if (lookahead == 'o') ADVANCE(113);
      END_STATE();
    case 125:
      if (lookahead == 'o') ADVANCE(112);
      END_STATE();
    case 126:
      if (lookahead == 'p') ADVANCE(313);
      END_STATE();
    case 127:
      if (lookahead == 'p') ADVANCE(129);
      END_STATE();
    case 128:
      if (lookahead == 'p') ADVANCE(98);
      END_STATE();
    case 129:
      if (lookahead == 'p') ADVANCE(61);
      END_STATE();
    case 130:
      if (lookahead == 'r') ADVANCE(339);
      END_STATE();
    case 131:
      if (lookahead == 'r') ADVANCE(331);
      END_STATE();
    case 132:
      if (lookahead == 'r') ADVANCE(317);
      END_STATE();
    case 133:
      if (lookahead == 'r') ADVANCE(341);
      END_STATE();
    case 134:
      if (lookahead == 'r') ADVANCE(40);
      END_STATE();
    case 135:
      if (lookahead == 'r') ADVANCE(78);
      END_STATE();
    case 136:
      if (lookahead == 'r') ADVANCE(24);
      END_STATE();
    case 137:
      if (lookahead == 'r') ADVANCE(151);
      END_STATE();
    case 138:
      if (lookahead == 'r') ADVANCE(158);
      END_STATE();
    case 139:
      if (lookahead == 'r') ADVANCE(68);
      END_STATE();
    case 140:
      if (lookahead == 'r') ADVANCE(67);
      END_STATE();
    case 141:
      if (lookahead == 'r') ADVANCE(157);
      END_STATE();
    case 142:
      if (lookahead == 's') ADVANCE(343);
      END_STATE();
    case 143:
      if (lookahead == 's') ADVANCE(329);
      END_STATE();
    case 144:
      if (lookahead == 's') ADVANCE(356);
      END_STATE();
    case 145:
      if (lookahead == 's') ADVANCE(84);
      END_STATE();
    case 146:
      if (lookahead == 's') ADVANCE(175);
      END_STATE();
    case 147:
      if (lookahead == 's') ADVANCE(49);
      END_STATE();
    case 148:
      if (lookahead == 't') ADVANCE(73);
      END_STATE();
    case 149:
      if (lookahead == 't') ADVANCE(321);
      END_STATE();
    case 150:
      if (lookahead == 't') ADVANCE(319);
      END_STATE();
    case 151:
      if (lookahead == 't') ADVANCE(309);
      END_STATE();
    case 152:
      if (lookahead == 't') ADVANCE(280);
      END_STATE();
    case 153:
      if (lookahead == 't') ADVANCE(305);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      END_STATE();
    case 154:
      if (lookahead == 't') ADVANCE(294);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      END_STATE();
    case 155:
      if (lookahead == 't') ADVANCE(168);
      END_STATE();
    case 156:
      if (lookahead == 't') ADVANCE(85);
      END_STATE();
    case 157:
      if (lookahead == 't') ADVANCE(82);
      END_STATE();
    case 158:
      if (lookahead == 't') ADVANCE(62);
      END_STATE();
    case 159:
      if (lookahead == 't') ADVANCE(50);
      END_STATE();
    case 160:
      if (lookahead == 't') ADVANCE(51);
      END_STATE();
    case 161:
      if (lookahead == 't') ADVANCE(217);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 162:
      if (lookahead == 't') ADVANCE(88);
      END_STATE();
    case 163:
      if (lookahead == 't') ADVANCE(65);
      END_STATE();
    case 164:
      if (lookahead == 't') ADVANCE(26);
      END_STATE();
    case 165:
      if (lookahead == 'u') ADVANCE(178);
      if (lookahead == 'x') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(207);
      if (lookahead != 0) ADVANCE(205);
      END_STATE();
    case 166:
      if (lookahead == 'u') ADVANCE(282);
      END_STATE();
    case 167:
      if (lookahead == 'u') ADVANCE(48);
      END_STATE();
    case 168:
      if (lookahead == 'u') ADVANCE(136);
      END_STATE();
    case 169:
      if (lookahead == 'u') ADVANCE(152);
      END_STATE();
    case 170:
      if (lookahead == 'v') ADVANCE(64);
      END_STATE();
    case 171:
      if (lookahead == 'v') ADVANCE(66);
      END_STATE();
    case 172:
      if (lookahead == 'w') ADVANCE(20);
      END_STATE();
    case 173:
      if (lookahead == 'y') ADVANCE(12);
      END_STATE();
    case 174:
      if (lookahead == 'y') ADVANCE(122);
      END_STATE();
    case 175:
      if (lookahead == 'y') ADVANCE(111);
      END_STATE();
    case 176:
      if (lookahead == 'y') ADVANCE(143);
      END_STATE();
    case 177:
      if (lookahead == 'z') ADVANCE(125);
      END_STATE();
    case 178:
      if (lookahead == '{') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(182);
      END_STATE();
    case 179:
      if (lookahead == '}') ADVANCE(277);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(179)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 180:
      if (lookahead == '}') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(180);
      END_STATE();
    case 181:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(360);
      END_STATE();
    case 182:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(185);
      END_STATE();
    case 183:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(205);
      END_STATE();
    case 184:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(180);
      END_STATE();
    case 185:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(183);
      END_STATE();
    case 186:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 187:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 188:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(308);
      END_STATE();
    case 189:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 190:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      END_STATE();
    case 191:
      if (eof) ADVANCE(192);
      if (lookahead == '"') ADVANCE(199);
      if (lookahead == '\'') ADVANCE(200);
      if (lookahead == '(') ADVANCE(209);
      if (lookahead == ')') ADVANCE(210);
      if (lookahead == ',') ADVANCE(286);
      if (lookahead == '.') ADVANCE(197);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == ';') ADVANCE(198);
      if (lookahead == '=') ADVANCE(14);
      if (lookahead == '[') ADVANCE(278);
      if (lookahead == ']') ADVANCE(279);
      if (lookahead == '_') ADVANCE(208);
      if (lookahead == 'a') ADVANCE(89);
      if (lookahead == 'b') ADVANCE(76);
      if (lookahead == 'c') ADVANCE(54);
      if (lookahead == 'e') ADVANCE(103);
      if (lookahead == 'f') ADVANCE(18);
      if (lookahead == 'h') ADVANCE(114);
      if (lookahead == 'i') ADVANCE(105);
      if (lookahead == 'l') ADVANCE(15);
      if (lookahead == 'm') ADVANCE(60);
      if (lookahead == 'n') ADVANCE(19);
      if (lookahead == 'r') ADVANCE(77);
      if (lookahead == 's') ADVANCE(45);
      if (lookahead == 't') ADVANCE(46);
      if (lookahead == 'u') ADVANCE(145);
      if (lookahead == 'v') ADVANCE(56);
      if (lookahead == 'w') ADVANCE(119);
      if (lookahead == 'y') ADVANCE(55);
      if (lookahead == '{') ADVANCE(276);
      if (lookahead == '}') ADVANCE(277);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(191)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(195);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(187);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_using);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_template);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym__number);
      if (lookahead == '.') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(195);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym__number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(196);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(202);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(202);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(203);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(204);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(204);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(205);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(206);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'a') ADVANCE(272);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'a') ADVANCE(236);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'a') ADVANCE(249);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'a') ADVANCE(237);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'a') ADVANCE(238);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'a') ADVANCE(252);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'a') ADVANCE(256);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'c') ADVANCE(232);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'c') ADVANCE(214);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'd') ADVANCE(312);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'd') ADVANCE(350);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'd') ADVANCE(337);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'e') ADVANCE(336);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'e') ADVANCE(289);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'e') ADVANCE(291);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'e') ADVANCE(250);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'e') ADVANCE(251);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'f') ADVANCE(261);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'g') ADVANCE(231);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'h') ADVANCE(348);
      if (lookahead == 't') ADVANCE(245);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'h') ADVANCE(262);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'h') ADVANCE(216);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'i') ADVANCE(273);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'i') ADVANCE(219);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'l') ADVANCE(324);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'l') ADVANCE(334);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'l') ADVANCE(326);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'l') ADVANCE(328);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'l') ADVANCE(259);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'l') ADVANCE(235);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'm') ADVANCE(316);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'n') ADVANCE(221);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'n') ADVANCE(266);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'n') ADVANCE(267);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'o') ADVANCE(241);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'o') ADVANCE(244);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'p') ADVANCE(314);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'r') ADVANCE(233);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'r') ADVANCE(340);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'r') ADVANCE(332);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'r') ADVANCE(318);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'r') ADVANCE(342);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'r') ADVANCE(212);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'r') ADVANCE(222);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'r') ADVANCE(265);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'r') ADVANCE(263);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 's') ADVANCE(344);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 's') ADVANCE(330);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 's') ADVANCE(225);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 't') ADVANCE(230);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 't') ADVANCE(322);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 't') ADVANCE(320);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 't') ADVANCE(310);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 't') ADVANCE(269);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 't') ADVANCE(234);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 't') ADVANCE(227);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 't') ADVANCE(215);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'u') ADVANCE(224);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'u') ADVANCE(253);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'v') ADVANCE(226);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'w') ADVANCE(211);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'y') ADVANCE(258);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'z') ADVANCE(246);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(274);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym__object_fragment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_layout);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_layout);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_menu);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_section);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_item);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_item);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_property_name);
      if (lookahead == ':') ADVANCE(11);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_property_name);
      if (lookahead == 'e') ADVANCE(300);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_property_name);
      if (lookahead == 'e') ADVANCE(298);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_property_name);
      if (lookahead == 'f') ADVANCE(306);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_property_name);
      if (lookahead == 'i') ADVANCE(295);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_property_name);
      if (lookahead == 'l') ADVANCE(293);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_property_name);
      if (lookahead == 'm') ADVANCE(285);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_property_name);
      if (lookahead == 'o') ADVANCE(303);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_property_name);
      if (lookahead == 's') ADVANCE(357);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_property_name);
      if (lookahead == 't') ADVANCE(296);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_property_name);
      if (lookahead == 't') ADVANCE(281);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_property_name);
      if (lookahead == 'u') ADVANCE(302);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_property_name);
      if (lookahead == 'y') ADVANCE(299);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_property_name);
      if (lookahead == 'y') ADVANCE(297);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_property_name);
      if (lookahead == 'y') ADVANCE(292);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_property_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_signal_name_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(308);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_start);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_start);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_top);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_top);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_bottom);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_bottom);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_center);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_center);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_right);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_right);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_left);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_left);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_fill);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_fill);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_vertical);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_vertical);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_horizontal);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_horizontal);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_always);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_always);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_never);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_never);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_natural);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_natural);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_none);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_none);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_word);
      if (lookahead == '_') ADVANCE(218);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_word);
      if (lookahead == '_') ADVANCE(33);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_char);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_char);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_word_char);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_word_char);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_yes);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_yes);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_no);
      if (lookahead == '-') ADVANCE(146);
      if (lookahead == 'n') ADVANCE(47);
      if (lookahead == 't') ADVANCE(81);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_no);
      if (lookahead == 'n') ADVANCE(223);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_both);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_both);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_bind);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_bind);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_no_DASHsync_DASHcreate);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_bidirectional);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_inverted);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_swapped);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_styles);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_styles);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(359);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(360);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 10},
  [6] = {.lex_state = 10},
  [7] = {.lex_state = 10},
  [8] = {.lex_state = 10},
  [9] = {.lex_state = 10},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 10},
  [16] = {.lex_state = 10},
  [17] = {.lex_state = 10},
  [18] = {.lex_state = 10},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 10},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 10},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 10},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 10},
  [27] = {.lex_state = 10},
  [28] = {.lex_state = 10},
  [29] = {.lex_state = 10},
  [30] = {.lex_state = 10},
  [31] = {.lex_state = 10},
  [32] = {.lex_state = 10},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 83},
  [36] = {.lex_state = 83},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 13},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 13},
  [53] = {.lex_state = 13},
  [54] = {.lex_state = 83},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 179},
  [57] = {.lex_state = 4},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 179},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 3},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 4},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 4},
  [68] = {.lex_state = 179},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 3},
  [71] = {.lex_state = 179},
  [72] = {.lex_state = 179},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 3},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 83},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 1},
  [94] = {.lex_state = 1},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 1},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 1},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 179},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 10},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 179},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 10},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 10},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 1},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_using] = ACTIONS(1),
    [sym_template] = ACTIONS(1),
    [sym__number] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym__object_fragment] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_layout] = ACTIONS(1),
    [anon_sym_menu] = ACTIONS(1),
    [anon_sym_section] = ACTIONS(1),
    [anon_sym_item] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [aux_sym_signal_name_token1] = ACTIONS(1),
    [anon_sym_start] = ACTIONS(1),
    [anon_sym_end] = ACTIONS(1),
    [anon_sym_top] = ACTIONS(1),
    [anon_sym_bottom] = ACTIONS(1),
    [anon_sym_center] = ACTIONS(1),
    [anon_sym_right] = ACTIONS(1),
    [anon_sym_left] = ACTIONS(1),
    [anon_sym_fill] = ACTIONS(1),
    [anon_sym_vertical] = ACTIONS(1),
    [anon_sym_horizontal] = ACTIONS(1),
    [anon_sym_always] = ACTIONS(1),
    [anon_sym_never] = ACTIONS(1),
    [anon_sym_natural] = ACTIONS(1),
    [anon_sym_none] = ACTIONS(1),
    [anon_sym_word] = ACTIONS(1),
    [anon_sym_char] = ACTIONS(1),
    [anon_sym_word_char] = ACTIONS(1),
    [anon_sym_yes] = ACTIONS(1),
    [anon_sym_no] = ACTIONS(1),
    [anon_sym_both] = ACTIONS(1),
    [anon_sym_bind] = ACTIONS(1),
    [anon_sym_no_DASHsync_DASHcreate] = ACTIONS(1),
    [anon_sym_bidirectional] = ACTIONS(1),
    [anon_sym_inverted] = ACTIONS(1),
    [anon_sym_EQ_GT] = ACTIONS(1),
    [anon_sym_swapped] = ACTIONS(1),
    [anon_sym_styles] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_float] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(143),
    [sym__toplevel] = STATE(10),
    [sym_import_statement] = STATE(10),
    [sym_object] = STATE(81),
    [sym_decorator] = STATE(86),
    [sym_object_definition] = STATE(10),
    [sym_menu_definition] = STATE(10),
    [sym_template_definition] = STATE(10),
    [aux_sym_source_file_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_using] = ACTIONS(5),
    [sym_template] = ACTIONS(7),
    [anon_sym_DOT] = ACTIONS(9),
    [sym__object_fragment] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_menu] = ACTIONS(15),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 15,
    ACTIONS(9), 1,
      anon_sym_DOT,
    ACTIONS(11), 1,
      sym__object_fragment,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      sym__number,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym__,
    ACTIONS(25), 1,
      sym_object_id,
    ACTIONS(31), 1,
      anon_sym_bind,
    ACTIONS(33), 1,
      sym_float,
    STATE(81), 1,
      sym_object,
    STATE(86), 1,
      sym_decorator,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(146), 9,
      sym_string,
      sym_gettext_string,
      sym_identifier,
      sym_object_definition,
      sym_boolean,
      sym_constant,
      sym__property_value,
      sym__property_binding,
      sym_number,
    ACTIONS(29), 20,
      anon_sym_start,
      anon_sym_end,
      anon_sym_top,
      anon_sym_bottom,
      anon_sym_center,
      anon_sym_right,
      anon_sym_left,
      anon_sym_fill,
      anon_sym_vertical,
      anon_sym_horizontal,
      anon_sym_always,
      anon_sym_never,
      anon_sym_natural,
      anon_sym_none,
      anon_sym_word,
      anon_sym_char,
      anon_sym_word_char,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_both,
  [74] = 15,
    ACTIONS(9), 1,
      anon_sym_DOT,
    ACTIONS(11), 1,
      sym__object_fragment,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      sym__number,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym__,
    ACTIONS(25), 1,
      sym_object_id,
    ACTIONS(31), 1,
      anon_sym_bind,
    ACTIONS(35), 1,
      sym_float,
    STATE(81), 1,
      sym_object,
    STATE(86), 1,
      sym_decorator,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(145), 9,
      sym_string,
      sym_gettext_string,
      sym_identifier,
      sym_object_definition,
      sym_boolean,
      sym_constant,
      sym__property_value,
      sym__property_binding,
      sym_number,
    ACTIONS(29), 20,
      anon_sym_start,
      anon_sym_end,
      anon_sym_top,
      anon_sym_bottom,
      anon_sym_center,
      anon_sym_right,
      anon_sym_left,
      anon_sym_fill,
      anon_sym_vertical,
      anon_sym_horizontal,
      anon_sym_always,
      anon_sym_never,
      anon_sym_natural,
      anon_sym_none,
      anon_sym_word,
      anon_sym_char,
      anon_sym_word_char,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_both,
  [148] = 15,
    ACTIONS(9), 1,
      anon_sym_DOT,
    ACTIONS(11), 1,
      sym__object_fragment,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      sym__number,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym__,
    ACTIONS(25), 1,
      sym_object_id,
    ACTIONS(31), 1,
      anon_sym_bind,
    ACTIONS(37), 1,
      sym_float,
    STATE(81), 1,
      sym_object,
    STATE(86), 1,
      sym_decorator,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(122), 9,
      sym_string,
      sym_gettext_string,
      sym_identifier,
      sym_object_definition,
      sym_boolean,
      sym_constant,
      sym__property_value,
      sym__property_binding,
      sym_number,
    ACTIONS(29), 20,
      anon_sym_start,
      anon_sym_end,
      anon_sym_top,
      anon_sym_bottom,
      anon_sym_center,
      anon_sym_right,
      anon_sym_left,
      anon_sym_fill,
      anon_sym_vertical,
      anon_sym_horizontal,
      anon_sym_always,
      anon_sym_never,
      anon_sym_natural,
      anon_sym_none,
      anon_sym_word,
      anon_sym_char,
      anon_sym_word_char,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_both,
  [222] = 12,
    ACTIONS(39), 1,
      anon_sym_DOT,
    ACTIONS(42), 1,
      sym__object_fragment,
    ACTIONS(45), 1,
      anon_sym_RBRACE,
    ACTIONS(47), 1,
      anon_sym_LBRACK,
    ACTIONS(50), 1,
      anon_sym_layout,
    ACTIONS(53), 1,
      sym_property_name,
    ACTIONS(56), 1,
      aux_sym_signal_name_token1,
    ACTIONS(59), 1,
      anon_sym_styles,
    STATE(78), 1,
      sym_decorator,
    STATE(84), 1,
      sym_object,
    STATE(127), 1,
      sym_signal_name,
    STATE(5), 6,
      sym_object_definition,
      sym_layout_definition,
      sym_property_definition,
      sym_signal_binding,
      sym_styles_list,
      aux_sym_block_repeat1,
  [264] = 12,
    ACTIONS(9), 1,
      anon_sym_DOT,
    ACTIONS(11), 1,
      sym__object_fragment,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(62), 1,
      anon_sym_RBRACE,
    ACTIONS(64), 1,
      anon_sym_layout,
    ACTIONS(66), 1,
      sym_property_name,
    ACTIONS(68), 1,
      aux_sym_signal_name_token1,
    ACTIONS(70), 1,
      anon_sym_styles,
    STATE(78), 1,
      sym_decorator,
    STATE(84), 1,
      sym_object,
    STATE(127), 1,
      sym_signal_name,
    STATE(5), 6,
      sym_object_definition,
      sym_layout_definition,
      sym_property_definition,
      sym_signal_binding,
      sym_styles_list,
      aux_sym_block_repeat1,
  [306] = 12,
    ACTIONS(9), 1,
      anon_sym_DOT,
    ACTIONS(11), 1,
      sym__object_fragment,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(64), 1,
      anon_sym_layout,
    ACTIONS(66), 1,
      sym_property_name,
    ACTIONS(68), 1,
      aux_sym_signal_name_token1,
    ACTIONS(70), 1,
      anon_sym_styles,
    ACTIONS(72), 1,
      anon_sym_RBRACE,
    STATE(78), 1,
      sym_decorator,
    STATE(84), 1,
      sym_object,
    STATE(127), 1,
      sym_signal_name,
    STATE(5), 6,
      sym_object_definition,
      sym_layout_definition,
      sym_property_definition,
      sym_signal_binding,
      sym_styles_list,
      aux_sym_block_repeat1,
  [348] = 12,
    ACTIONS(9), 1,
      anon_sym_DOT,
    ACTIONS(11), 1,
      sym__object_fragment,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(64), 1,
      anon_sym_layout,
    ACTIONS(66), 1,
      sym_property_name,
    ACTIONS(68), 1,
      aux_sym_signal_name_token1,
    ACTIONS(70), 1,
      anon_sym_styles,
    ACTIONS(74), 1,
      anon_sym_RBRACE,
    STATE(78), 1,
      sym_decorator,
    STATE(84), 1,
      sym_object,
    STATE(127), 1,
      sym_signal_name,
    STATE(7), 6,
      sym_object_definition,
      sym_layout_definition,
      sym_property_definition,
      sym_signal_binding,
      sym_styles_list,
      aux_sym_block_repeat1,
  [390] = 12,
    ACTIONS(9), 1,
      anon_sym_DOT,
    ACTIONS(11), 1,
      sym__object_fragment,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(64), 1,
      anon_sym_layout,
    ACTIONS(66), 1,
      sym_property_name,
    ACTIONS(68), 1,
      aux_sym_signal_name_token1,
    ACTIONS(70), 1,
      anon_sym_styles,
    ACTIONS(76), 1,
      anon_sym_RBRACE,
    STATE(78), 1,
      sym_decorator,
    STATE(84), 1,
      sym_object,
    STATE(127), 1,
      sym_signal_name,
    STATE(6), 6,
      sym_object_definition,
      sym_layout_definition,
      sym_property_definition,
      sym_signal_binding,
      sym_styles_list,
      aux_sym_block_repeat1,
  [432] = 10,
    ACTIONS(5), 1,
      sym_using,
    ACTIONS(7), 1,
      sym_template,
    ACTIONS(9), 1,
      anon_sym_DOT,
    ACTIONS(11), 1,
      sym__object_fragment,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_menu,
    ACTIONS(78), 1,
      ts_builtin_sym_end,
    STATE(81), 1,
      sym_object,
    STATE(86), 1,
      sym_decorator,
    STATE(11), 6,
      sym__toplevel,
      sym_import_statement,
      sym_object_definition,
      sym_menu_definition,
      sym_template_definition,
      aux_sym_source_file_repeat1,
  [468] = 10,
    ACTIONS(80), 1,
      ts_builtin_sym_end,
    ACTIONS(82), 1,
      sym_using,
    ACTIONS(85), 1,
      sym_template,
    ACTIONS(88), 1,
      anon_sym_DOT,
    ACTIONS(91), 1,
      sym__object_fragment,
    ACTIONS(94), 1,
      anon_sym_LBRACK,
    ACTIONS(97), 1,
      anon_sym_menu,
    STATE(81), 1,
      sym_object,
    STATE(86), 1,
      sym_decorator,
    STATE(11), 6,
      sym__toplevel,
      sym_import_statement,
      sym_object_definition,
      sym_menu_definition,
      sym_template_definition,
      aux_sym_source_file_repeat1,
  [504] = 7,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym__,
    ACTIONS(100), 1,
      sym__number,
    ACTIONS(102), 1,
      sym_object_id,
    ACTIONS(104), 1,
      anon_sym_RBRACK,
    STATE(89), 4,
      sym_string,
      sym_gettext_string,
      sym_identifier,
      sym_number,
  [529] = 6,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym__,
    ACTIONS(100), 1,
      sym__number,
    ACTIONS(102), 1,
      sym_object_id,
    STATE(118), 4,
      sym_string,
      sym_gettext_string,
      sym_identifier,
      sym_number,
  [551] = 1,
    ACTIONS(106), 8,
      ts_builtin_sym_end,
      sym_using,
      sym_template,
      anon_sym_DOT,
      anon_sym_SEMI,
      sym__object_fragment,
      anon_sym_LBRACK,
      anon_sym_menu,
  [562] = 2,
    ACTIONS(110), 3,
      anon_sym_layout,
      sym_property_name,
      anon_sym_styles,
    ACTIONS(108), 5,
      anon_sym_DOT,
      sym__object_fragment,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      aux_sym_signal_name_token1,
  [575] = 2,
    ACTIONS(114), 3,
      anon_sym_layout,
      sym_property_name,
      anon_sym_styles,
    ACTIONS(112), 5,
      anon_sym_DOT,
      sym__object_fragment,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      aux_sym_signal_name_token1,
  [588] = 2,
    ACTIONS(118), 3,
      anon_sym_layout,
      sym_property_name,
      anon_sym_styles,
    ACTIONS(116), 5,
      anon_sym_DOT,
      sym__object_fragment,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      aux_sym_signal_name_token1,
  [601] = 2,
    ACTIONS(122), 3,
      anon_sym_layout,
      sym_property_name,
      anon_sym_styles,
    ACTIONS(120), 5,
      anon_sym_DOT,
      sym__object_fragment,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      aux_sym_signal_name_token1,
  [614] = 1,
    ACTIONS(108), 8,
      ts_builtin_sym_end,
      sym_using,
      sym_template,
      anon_sym_DOT,
      anon_sym_SEMI,
      sym__object_fragment,
      anon_sym_LBRACK,
      anon_sym_menu,
  [625] = 2,
    ACTIONS(126), 3,
      anon_sym_layout,
      sym_property_name,
      anon_sym_styles,
    ACTIONS(124), 5,
      anon_sym_DOT,
      sym__object_fragment,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      aux_sym_signal_name_token1,
  [638] = 1,
    ACTIONS(128), 8,
      ts_builtin_sym_end,
      sym_using,
      sym_template,
      anon_sym_DOT,
      anon_sym_SEMI,
      sym__object_fragment,
      anon_sym_LBRACK,
      anon_sym_menu,
  [649] = 2,
    ACTIONS(132), 3,
      anon_sym_layout,
      sym_property_name,
      anon_sym_styles,
    ACTIONS(130), 5,
      anon_sym_DOT,
      sym__object_fragment,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      aux_sym_signal_name_token1,
  [662] = 1,
    ACTIONS(134), 8,
      ts_builtin_sym_end,
      sym_using,
      sym_template,
      anon_sym_DOT,
      anon_sym_SEMI,
      sym__object_fragment,
      anon_sym_LBRACK,
      anon_sym_menu,
  [673] = 2,
    ACTIONS(138), 3,
      anon_sym_layout,
      sym_property_name,
      anon_sym_styles,
    ACTIONS(136), 5,
      anon_sym_DOT,
      sym__object_fragment,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      aux_sym_signal_name_token1,
  [686] = 1,
    ACTIONS(112), 8,
      ts_builtin_sym_end,
      sym_using,
      sym_template,
      anon_sym_DOT,
      anon_sym_SEMI,
      sym__object_fragment,
      anon_sym_LBRACK,
      anon_sym_menu,
  [697] = 2,
    ACTIONS(142), 3,
      anon_sym_layout,
      sym_property_name,
      anon_sym_styles,
    ACTIONS(140), 5,
      anon_sym_DOT,
      sym__object_fragment,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      aux_sym_signal_name_token1,
  [710] = 2,
    ACTIONS(146), 3,
      anon_sym_layout,
      sym_property_name,
      anon_sym_styles,
    ACTIONS(144), 5,
      anon_sym_DOT,
      sym__object_fragment,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      aux_sym_signal_name_token1,
  [723] = 2,
    ACTIONS(150), 3,
      anon_sym_layout,
      sym_property_name,
      anon_sym_styles,
    ACTIONS(148), 5,
      anon_sym_DOT,
      sym__object_fragment,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      aux_sym_signal_name_token1,
  [736] = 2,
    ACTIONS(154), 3,
      anon_sym_layout,
      sym_property_name,
      anon_sym_styles,
    ACTIONS(152), 5,
      anon_sym_DOT,
      sym__object_fragment,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      aux_sym_signal_name_token1,
  [749] = 2,
    ACTIONS(156), 3,
      anon_sym_layout,
      sym_property_name,
      anon_sym_styles,
    ACTIONS(106), 5,
      anon_sym_DOT,
      sym__object_fragment,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      aux_sym_signal_name_token1,
  [762] = 2,
    ACTIONS(158), 3,
      anon_sym_layout,
      sym_property_name,
      anon_sym_styles,
    ACTIONS(134), 5,
      anon_sym_DOT,
      sym__object_fragment,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      aux_sym_signal_name_token1,
  [775] = 2,
    ACTIONS(160), 3,
      anon_sym_layout,
      sym_property_name,
      anon_sym_styles,
    ACTIONS(128), 5,
      anon_sym_DOT,
      sym__object_fragment,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      aux_sym_signal_name_token1,
  [788] = 1,
    ACTIONS(162), 7,
      ts_builtin_sym_end,
      sym_using,
      sym_template,
      anon_sym_DOT,
      sym__object_fragment,
      anon_sym_LBRACK,
      anon_sym_menu,
  [798] = 1,
    ACTIONS(164), 7,
      ts_builtin_sym_end,
      sym_using,
      sym_template,
      anon_sym_DOT,
      sym__object_fragment,
      anon_sym_LBRACK,
      anon_sym_menu,
  [808] = 5,
    ACTIONS(166), 1,
      anon_sym_RBRACE,
    ACTIONS(168), 1,
      anon_sym_item,
    ACTIONS(170), 1,
      sym_property_name,
    STATE(54), 2,
      sym_property_definition,
      aux_sym_layout_definition_repeat1,
    STATE(61), 2,
      sym_menu_item,
      aux_sym_menu_section_repeat1,
  [826] = 5,
    ACTIONS(168), 1,
      anon_sym_item,
    ACTIONS(170), 1,
      sym_property_name,
    ACTIONS(172), 1,
      anon_sym_RBRACE,
    STATE(35), 2,
      sym_property_definition,
      aux_sym_layout_definition_repeat1,
    STATE(74), 2,
      sym_menu_item,
      aux_sym_menu_section_repeat1,
  [844] = 1,
    ACTIONS(174), 7,
      ts_builtin_sym_end,
      sym_using,
      sym_template,
      anon_sym_DOT,
      sym__object_fragment,
      anon_sym_LBRACK,
      anon_sym_menu,
  [854] = 1,
    ACTIONS(176), 7,
      ts_builtin_sym_end,
      sym_using,
      sym_template,
      anon_sym_DOT,
      sym__object_fragment,
      anon_sym_LBRACK,
      anon_sym_menu,
  [864] = 1,
    ACTIONS(178), 7,
      ts_builtin_sym_end,
      sym_using,
      sym_template,
      anon_sym_DOT,
      sym__object_fragment,
      anon_sym_LBRACK,
      anon_sym_menu,
  [874] = 3,
    ACTIONS(182), 1,
      anon_sym_DOT,
    STATE(45), 1,
      aux_sym_object_repeat1,
    ACTIONS(180), 4,
      sym__number,
      sym_object_id,
      anon_sym_LBRACE,
      anon_sym_COLON,
  [887] = 4,
    ACTIONS(184), 1,
      anon_sym_RBRACE,
    ACTIONS(186), 1,
      anon_sym_section,
    ACTIONS(189), 1,
      anon_sym_item,
    STATE(41), 3,
      sym_menu_section,
      sym_menu_item,
      aux_sym_menu_definition_repeat1,
  [902] = 3,
    ACTIONS(182), 1,
      anon_sym_DOT,
    STATE(48), 1,
      aux_sym_object_repeat1,
    ACTIONS(192), 4,
      sym__number,
      sym_object_id,
      anon_sym_LBRACE,
      anon_sym_COLON,
  [915] = 4,
    ACTIONS(194), 1,
      anon_sym_RBRACE,
    ACTIONS(196), 1,
      anon_sym_section,
    ACTIONS(198), 1,
      anon_sym_item,
    STATE(49), 3,
      sym_menu_section,
      sym_menu_item,
      aux_sym_menu_definition_repeat1,
  [930] = 4,
    ACTIONS(194), 1,
      anon_sym_RBRACE,
    ACTIONS(196), 1,
      anon_sym_section,
    ACTIONS(198), 1,
      anon_sym_item,
    STATE(41), 3,
      sym_menu_section,
      sym_menu_item,
      aux_sym_menu_definition_repeat1,
  [945] = 3,
    ACTIONS(202), 1,
      anon_sym_DOT,
    STATE(45), 1,
      aux_sym_object_repeat1,
    ACTIONS(200), 4,
      sym__number,
      sym_object_id,
      anon_sym_LBRACE,
      anon_sym_COLON,
  [958] = 3,
    ACTIONS(182), 1,
      anon_sym_DOT,
    STATE(40), 1,
      aux_sym_object_repeat1,
    ACTIONS(205), 4,
      sym__number,
      sym_object_id,
      anon_sym_LBRACE,
      anon_sym_COLON,
  [971] = 4,
    ACTIONS(196), 1,
      anon_sym_section,
    ACTIONS(198), 1,
      anon_sym_item,
    ACTIONS(207), 1,
      anon_sym_RBRACE,
    STATE(44), 3,
      sym_menu_section,
      sym_menu_item,
      aux_sym_menu_definition_repeat1,
  [986] = 3,
    ACTIONS(182), 1,
      anon_sym_DOT,
    STATE(45), 1,
      aux_sym_object_repeat1,
    ACTIONS(205), 4,
      sym__number,
      sym_object_id,
      anon_sym_LBRACE,
      anon_sym_COLON,
  [999] = 4,
    ACTIONS(196), 1,
      anon_sym_section,
    ACTIONS(198), 1,
      anon_sym_item,
    ACTIONS(209), 1,
      anon_sym_RBRACE,
    STATE(41), 3,
      sym_menu_section,
      sym_menu_item,
      aux_sym_menu_definition_repeat1,
  [1014] = 3,
    ACTIONS(211), 1,
      anon_sym_SEMI,
    STATE(52), 1,
      aux_sym__property_binding_repeat1,
    ACTIONS(213), 3,
      anon_sym_no_DASHsync_DASHcreate,
      anon_sym_bidirectional,
      anon_sym_inverted,
  [1026] = 4,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym__,
    STATE(114), 2,
      sym_string,
      sym_gettext_string,
  [1040] = 3,
    ACTIONS(215), 1,
      anon_sym_SEMI,
    STATE(52), 1,
      aux_sym__property_binding_repeat1,
    ACTIONS(217), 3,
      anon_sym_no_DASHsync_DASHcreate,
      anon_sym_bidirectional,
      anon_sym_inverted,
  [1052] = 3,
    ACTIONS(220), 1,
      anon_sym_SEMI,
    STATE(50), 1,
      aux_sym__property_binding_repeat1,
    ACTIONS(222), 3,
      anon_sym_no_DASHsync_DASHcreate,
      anon_sym_bidirectional,
      anon_sym_inverted,
  [1064] = 4,
    ACTIONS(224), 1,
      anon_sym_RBRACE,
    ACTIONS(226), 1,
      anon_sym_item,
    ACTIONS(228), 1,
      sym_property_name,
    STATE(54), 2,
      sym_property_definition,
      aux_sym_layout_definition_repeat1,
  [1078] = 1,
    ACTIONS(200), 5,
      sym__number,
      anon_sym_DOT,
      sym_object_id,
      anon_sym_LBRACE,
      anon_sym_COLON,
  [1086] = 3,
    ACTIONS(231), 1,
      anon_sym_RBRACE,
    ACTIONS(233), 1,
      sym_property_name,
    STATE(72), 2,
      sym_property_definition,
      aux_sym_layout_definition_repeat1,
  [1097] = 3,
    ACTIONS(235), 1,
      anon_sym_SQUOTE,
    STATE(64), 1,
      aux_sym_string_repeat2,
    ACTIONS(237), 2,
      sym_unescaped_single_string_fragment,
      sym_escape_sequence,
  [1108] = 4,
    ACTIONS(9), 1,
      anon_sym_DOT,
    ACTIONS(11), 1,
      sym__object_fragment,
    STATE(112), 1,
      sym_gobject_library,
    STATE(134), 1,
      sym_object,
  [1121] = 3,
    ACTIONS(233), 1,
      sym_property_name,
    ACTIONS(239), 1,
      anon_sym_RBRACE,
    STATE(68), 2,
      sym_property_definition,
      aux_sym_layout_definition_repeat1,
  [1132] = 1,
    ACTIONS(241), 4,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [1139] = 3,
    ACTIONS(198), 1,
      anon_sym_item,
    ACTIONS(243), 1,
      anon_sym_RBRACE,
    STATE(63), 2,
      sym_menu_item,
      aux_sym_menu_section_repeat1,
  [1150] = 3,
    ACTIONS(245), 1,
      anon_sym_DQUOTE,
    STATE(62), 1,
      aux_sym_string_repeat1,
    ACTIONS(247), 2,
      sym_unescaped_double_string_fragment,
      sym_escape_sequence,
  [1161] = 3,
    ACTIONS(250), 1,
      anon_sym_RBRACE,
    ACTIONS(252), 1,
      anon_sym_item,
    STATE(63), 2,
      sym_menu_item,
      aux_sym_menu_section_repeat1,
  [1172] = 3,
    ACTIONS(255), 1,
      anon_sym_SQUOTE,
    STATE(64), 1,
      aux_sym_string_repeat2,
    ACTIONS(257), 2,
      sym_unescaped_single_string_fragment,
      sym_escape_sequence,
  [1183] = 1,
    ACTIONS(260), 4,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [1190] = 1,
    ACTIONS(262), 4,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [1197] = 3,
    ACTIONS(264), 1,
      anon_sym_SQUOTE,
    STATE(57), 1,
      aux_sym_string_repeat2,
    ACTIONS(266), 2,
      sym_unescaped_single_string_fragment,
      sym_escape_sequence,
  [1208] = 3,
    ACTIONS(233), 1,
      sym_property_name,
    ACTIONS(268), 1,
      anon_sym_RBRACE,
    STATE(71), 2,
      sym_property_definition,
      aux_sym_layout_definition_repeat1,
  [1219] = 1,
    ACTIONS(270), 4,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [1226] = 3,
    ACTIONS(235), 1,
      anon_sym_DQUOTE,
    STATE(62), 1,
      aux_sym_string_repeat1,
    ACTIONS(272), 2,
      sym_unescaped_double_string_fragment,
      sym_escape_sequence,
  [1237] = 3,
    ACTIONS(224), 1,
      anon_sym_RBRACE,
    ACTIONS(274), 1,
      sym_property_name,
    STATE(71), 2,
      sym_property_definition,
      aux_sym_layout_definition_repeat1,
  [1248] = 3,
    ACTIONS(233), 1,
      sym_property_name,
    ACTIONS(277), 1,
      anon_sym_RBRACE,
    STATE(71), 2,
      sym_property_definition,
      aux_sym_layout_definition_repeat1,
  [1259] = 4,
    ACTIONS(9), 1,
      anon_sym_DOT,
    ACTIONS(11), 1,
      sym__object_fragment,
    STATE(132), 1,
      sym_template_name_qualifier,
    STATE(133), 1,
      sym_object,
  [1272] = 3,
    ACTIONS(166), 1,
      anon_sym_RBRACE,
    ACTIONS(198), 1,
      anon_sym_item,
    STATE(63), 2,
      sym_menu_item,
      aux_sym_menu_section_repeat1,
  [1283] = 3,
    ACTIONS(264), 1,
      anon_sym_DQUOTE,
    STATE(70), 1,
      aux_sym_string_repeat1,
    ACTIONS(279), 2,
      sym_unescaped_double_string_fragment,
      sym_escape_sequence,
  [1294] = 1,
    ACTIONS(281), 3,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_item,
  [1300] = 3,
    ACTIONS(283), 1,
      anon_sym_RBRACK,
    ACTIONS(285), 1,
      anon_sym_COMMA,
    STATE(97), 1,
      aux_sym_array_repeat1,
  [1310] = 3,
    ACTIONS(9), 1,
      anon_sym_DOT,
    ACTIONS(11), 1,
      sym__object_fragment,
    STATE(80), 1,
      sym_object,
  [1320] = 1,
    ACTIONS(287), 3,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_item,
  [1326] = 3,
    ACTIONS(289), 1,
      sym_object_id,
    ACTIONS(291), 1,
      anon_sym_LBRACE,
    STATE(31), 1,
      sym_block,
  [1336] = 3,
    ACTIONS(293), 1,
      sym_object_id,
    ACTIONS(295), 1,
      anon_sym_LBRACE,
    STATE(25), 1,
      sym_block,
  [1346] = 1,
    ACTIONS(297), 3,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_item,
  [1352] = 1,
    ACTIONS(299), 3,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [1358] = 3,
    ACTIONS(291), 1,
      anon_sym_LBRACE,
    ACTIONS(301), 1,
      sym_object_id,
    STATE(16), 1,
      sym_block,
  [1368] = 2,
    ACTIONS(116), 1,
      anon_sym_RBRACE,
    ACTIONS(118), 2,
      anon_sym_item,
      sym_property_name,
  [1376] = 3,
    ACTIONS(9), 1,
      anon_sym_DOT,
    ACTIONS(11), 1,
      sym__object_fragment,
    STATE(93), 1,
      sym_object,
  [1386] = 1,
    ACTIONS(303), 3,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_item,
  [1392] = 3,
    ACTIONS(305), 1,
      anon_sym_DOT,
    ACTIONS(308), 1,
      anon_sym_SEMI,
    STATE(88), 1,
      aux_sym_version_number_repeat1,
  [1402] = 3,
    ACTIONS(285), 1,
      anon_sym_COMMA,
    ACTIONS(310), 1,
      anon_sym_RBRACK,
    STATE(77), 1,
      aux_sym_array_repeat1,
  [1412] = 3,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    STATE(121), 1,
      sym_string,
  [1422] = 1,
    ACTIONS(312), 3,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_item,
  [1428] = 1,
    ACTIONS(314), 3,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_item,
  [1434] = 3,
    ACTIONS(295), 1,
      anon_sym_LBRACE,
    ACTIONS(316), 1,
      sym_object_id,
    STATE(23), 1,
      sym_block,
  [1444] = 3,
    ACTIONS(102), 1,
      sym_object_id,
    STATE(119), 1,
      sym_function,
    STATE(129), 1,
      sym_identifier,
  [1454] = 3,
    ACTIONS(318), 1,
      anon_sym_DOT,
    ACTIONS(320), 1,
      anon_sym_SEMI,
    STATE(96), 1,
      aux_sym_version_number_repeat1,
  [1464] = 3,
    ACTIONS(318), 1,
      anon_sym_DOT,
    ACTIONS(322), 1,
      anon_sym_SEMI,
    STATE(88), 1,
      aux_sym_version_number_repeat1,
  [1474] = 3,
    ACTIONS(324), 1,
      anon_sym_RBRACK,
    ACTIONS(326), 1,
      anon_sym_COMMA,
    STATE(97), 1,
      aux_sym_array_repeat1,
  [1484] = 3,
    ACTIONS(9), 1,
      anon_sym_DOT,
    ACTIONS(11), 1,
      sym__object_fragment,
    STATE(115), 1,
      sym_object,
  [1494] = 3,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    STATE(123), 1,
      sym_string,
  [1504] = 1,
    ACTIONS(329), 3,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_item,
  [1510] = 3,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    STATE(116), 1,
      sym_string,
  [1520] = 1,
    ACTIONS(331), 2,
      anon_sym_DOT,
      sym__object_fragment,
  [1525] = 1,
    ACTIONS(333), 2,
      anon_sym_SEMI,
      anon_sym_swapped,
  [1530] = 2,
    ACTIONS(102), 1,
      sym_object_id,
    STATE(130), 1,
      sym_identifier,
  [1537] = 2,
    ACTIONS(335), 1,
      anon_sym_LBRACK,
    STATE(29), 1,
      sym_array,
  [1544] = 2,
    ACTIONS(337), 1,
      sym_object_id,
    ACTIONS(339), 1,
      anon_sym_LBRACE,
  [1551] = 2,
    ACTIONS(341), 1,
      anon_sym_COLON,
    ACTIONS(343), 1,
      anon_sym_EQ_GT,
  [1558] = 2,
    ACTIONS(291), 1,
      anon_sym_LBRACE,
    STATE(32), 1,
      sym_block,
  [1565] = 2,
    ACTIONS(291), 1,
      anon_sym_LBRACE,
    STATE(31), 1,
      sym_block,
  [1572] = 1,
    ACTIONS(116), 2,
      anon_sym_RBRACE,
      sym_property_name,
  [1577] = 2,
    ACTIONS(345), 1,
      anon_sym_LPAREN,
    ACTIONS(347), 1,
      anon_sym_LBRACE,
  [1584] = 2,
    ACTIONS(349), 1,
      sym__number,
    STATE(125), 1,
      sym_version_number,
  [1591] = 2,
    ACTIONS(295), 1,
      anon_sym_LBRACE,
    STATE(23), 1,
      sym_block,
  [1598] = 2,
    ACTIONS(277), 1,
      anon_sym_RPAREN,
    ACTIONS(351), 1,
      anon_sym_COMMA,
  [1605] = 2,
    ACTIONS(295), 1,
      anon_sym_LBRACE,
    STATE(38), 1,
      sym_block,
  [1612] = 2,
    ACTIONS(353), 1,
      anon_sym_RPAREN,
    ACTIONS(355), 1,
      anon_sym_COMMA,
  [1619] = 1,
    ACTIONS(308), 2,
      anon_sym_DOT,
      anon_sym_SEMI,
  [1624] = 1,
    ACTIONS(324), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [1629] = 2,
    ACTIONS(357), 1,
      anon_sym_SEMI,
    ACTIONS(359), 1,
      anon_sym_swapped,
  [1636] = 2,
    ACTIONS(295), 1,
      anon_sym_LBRACE,
    STATE(21), 1,
      sym_block,
  [1643] = 1,
    ACTIONS(361), 1,
      anon_sym_RPAREN,
  [1647] = 1,
    ACTIONS(363), 1,
      anon_sym_SEMI,
  [1651] = 1,
    ACTIONS(365), 1,
      anon_sym_RPAREN,
  [1655] = 1,
    ACTIONS(367), 1,
      sym_property_name,
  [1659] = 1,
    ACTIONS(369), 1,
      anon_sym_SEMI,
  [1663] = 1,
    ACTIONS(371), 1,
      sym__number,
  [1667] = 1,
    ACTIONS(373), 1,
      anon_sym_EQ_GT,
  [1671] = 1,
    ACTIONS(375), 1,
      anon_sym_LBRACE,
  [1675] = 1,
    ACTIONS(377), 1,
      anon_sym_LPAREN,
  [1679] = 1,
    ACTIONS(379), 1,
      anon_sym_RBRACK,
  [1683] = 1,
    ACTIONS(381), 1,
      sym__object_fragment,
  [1687] = 1,
    ACTIONS(383), 1,
      anon_sym_COLON,
  [1691] = 1,
    ACTIONS(385), 1,
      anon_sym_COLON,
  [1695] = 1,
    ACTIONS(387), 1,
      sym__number,
  [1699] = 1,
    ACTIONS(389), 1,
      anon_sym_DOT,
  [1703] = 1,
    ACTIONS(391), 1,
      anon_sym_LPAREN,
  [1707] = 1,
    ACTIONS(393), 1,
      sym_object_id,
  [1711] = 1,
    ACTIONS(395), 1,
      anon_sym_LBRACE,
  [1715] = 1,
    ACTIONS(397), 1,
      anon_sym_SEMI,
  [1719] = 1,
    ACTIONS(399), 1,
      anon_sym_SEMI,
  [1723] = 1,
    ACTIONS(401), 1,
      anon_sym_SEMI,
  [1727] = 1,
    ACTIONS(403), 1,
      anon_sym_COLON,
  [1731] = 1,
    ACTIONS(405), 1,
      ts_builtin_sym_end,
  [1735] = 1,
    ACTIONS(407), 1,
      anon_sym_LBRACE,
  [1739] = 1,
    ACTIONS(409), 1,
      anon_sym_SEMI,
  [1743] = 1,
    ACTIONS(411), 1,
      anon_sym_SEMI,
  [1747] = 1,
    ACTIONS(413), 1,
      sym__object_fragment,
  [1751] = 1,
    ACTIONS(415), 1,
      anon_sym_RPAREN,
  [1755] = 1,
    ACTIONS(343), 1,
      anon_sym_EQ_GT,
  [1759] = 1,
    ACTIONS(417), 1,
      anon_sym_COLON,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 74,
  [SMALL_STATE(4)] = 148,
  [SMALL_STATE(5)] = 222,
  [SMALL_STATE(6)] = 264,
  [SMALL_STATE(7)] = 306,
  [SMALL_STATE(8)] = 348,
  [SMALL_STATE(9)] = 390,
  [SMALL_STATE(10)] = 432,
  [SMALL_STATE(11)] = 468,
  [SMALL_STATE(12)] = 504,
  [SMALL_STATE(13)] = 529,
  [SMALL_STATE(14)] = 551,
  [SMALL_STATE(15)] = 562,
  [SMALL_STATE(16)] = 575,
  [SMALL_STATE(17)] = 588,
  [SMALL_STATE(18)] = 601,
  [SMALL_STATE(19)] = 614,
  [SMALL_STATE(20)] = 625,
  [SMALL_STATE(21)] = 638,
  [SMALL_STATE(22)] = 649,
  [SMALL_STATE(23)] = 662,
  [SMALL_STATE(24)] = 673,
  [SMALL_STATE(25)] = 686,
  [SMALL_STATE(26)] = 697,
  [SMALL_STATE(27)] = 710,
  [SMALL_STATE(28)] = 723,
  [SMALL_STATE(29)] = 736,
  [SMALL_STATE(30)] = 749,
  [SMALL_STATE(31)] = 762,
  [SMALL_STATE(32)] = 775,
  [SMALL_STATE(33)] = 788,
  [SMALL_STATE(34)] = 798,
  [SMALL_STATE(35)] = 808,
  [SMALL_STATE(36)] = 826,
  [SMALL_STATE(37)] = 844,
  [SMALL_STATE(38)] = 854,
  [SMALL_STATE(39)] = 864,
  [SMALL_STATE(40)] = 874,
  [SMALL_STATE(41)] = 887,
  [SMALL_STATE(42)] = 902,
  [SMALL_STATE(43)] = 915,
  [SMALL_STATE(44)] = 930,
  [SMALL_STATE(45)] = 945,
  [SMALL_STATE(46)] = 958,
  [SMALL_STATE(47)] = 971,
  [SMALL_STATE(48)] = 986,
  [SMALL_STATE(49)] = 999,
  [SMALL_STATE(50)] = 1014,
  [SMALL_STATE(51)] = 1026,
  [SMALL_STATE(52)] = 1040,
  [SMALL_STATE(53)] = 1052,
  [SMALL_STATE(54)] = 1064,
  [SMALL_STATE(55)] = 1078,
  [SMALL_STATE(56)] = 1086,
  [SMALL_STATE(57)] = 1097,
  [SMALL_STATE(58)] = 1108,
  [SMALL_STATE(59)] = 1121,
  [SMALL_STATE(60)] = 1132,
  [SMALL_STATE(61)] = 1139,
  [SMALL_STATE(62)] = 1150,
  [SMALL_STATE(63)] = 1161,
  [SMALL_STATE(64)] = 1172,
  [SMALL_STATE(65)] = 1183,
  [SMALL_STATE(66)] = 1190,
  [SMALL_STATE(67)] = 1197,
  [SMALL_STATE(68)] = 1208,
  [SMALL_STATE(69)] = 1219,
  [SMALL_STATE(70)] = 1226,
  [SMALL_STATE(71)] = 1237,
  [SMALL_STATE(72)] = 1248,
  [SMALL_STATE(73)] = 1259,
  [SMALL_STATE(74)] = 1272,
  [SMALL_STATE(75)] = 1283,
  [SMALL_STATE(76)] = 1294,
  [SMALL_STATE(77)] = 1300,
  [SMALL_STATE(78)] = 1310,
  [SMALL_STATE(79)] = 1320,
  [SMALL_STATE(80)] = 1326,
  [SMALL_STATE(81)] = 1336,
  [SMALL_STATE(82)] = 1346,
  [SMALL_STATE(83)] = 1352,
  [SMALL_STATE(84)] = 1358,
  [SMALL_STATE(85)] = 1368,
  [SMALL_STATE(86)] = 1376,
  [SMALL_STATE(87)] = 1386,
  [SMALL_STATE(88)] = 1392,
  [SMALL_STATE(89)] = 1402,
  [SMALL_STATE(90)] = 1412,
  [SMALL_STATE(91)] = 1422,
  [SMALL_STATE(92)] = 1428,
  [SMALL_STATE(93)] = 1434,
  [SMALL_STATE(94)] = 1444,
  [SMALL_STATE(95)] = 1454,
  [SMALL_STATE(96)] = 1464,
  [SMALL_STATE(97)] = 1474,
  [SMALL_STATE(98)] = 1484,
  [SMALL_STATE(99)] = 1494,
  [SMALL_STATE(100)] = 1504,
  [SMALL_STATE(101)] = 1510,
  [SMALL_STATE(102)] = 1520,
  [SMALL_STATE(103)] = 1525,
  [SMALL_STATE(104)] = 1530,
  [SMALL_STATE(105)] = 1537,
  [SMALL_STATE(106)] = 1544,
  [SMALL_STATE(107)] = 1551,
  [SMALL_STATE(108)] = 1558,
  [SMALL_STATE(109)] = 1565,
  [SMALL_STATE(110)] = 1572,
  [SMALL_STATE(111)] = 1577,
  [SMALL_STATE(112)] = 1584,
  [SMALL_STATE(113)] = 1591,
  [SMALL_STATE(114)] = 1598,
  [SMALL_STATE(115)] = 1605,
  [SMALL_STATE(116)] = 1612,
  [SMALL_STATE(117)] = 1619,
  [SMALL_STATE(118)] = 1624,
  [SMALL_STATE(119)] = 1629,
  [SMALL_STATE(120)] = 1636,
  [SMALL_STATE(121)] = 1643,
  [SMALL_STATE(122)] = 1647,
  [SMALL_STATE(123)] = 1651,
  [SMALL_STATE(124)] = 1655,
  [SMALL_STATE(125)] = 1659,
  [SMALL_STATE(126)] = 1663,
  [SMALL_STATE(127)] = 1667,
  [SMALL_STATE(128)] = 1671,
  [SMALL_STATE(129)] = 1675,
  [SMALL_STATE(130)] = 1679,
  [SMALL_STATE(131)] = 1683,
  [SMALL_STATE(132)] = 1687,
  [SMALL_STATE(133)] = 1691,
  [SMALL_STATE(134)] = 1695,
  [SMALL_STATE(135)] = 1699,
  [SMALL_STATE(136)] = 1703,
  [SMALL_STATE(137)] = 1707,
  [SMALL_STATE(138)] = 1711,
  [SMALL_STATE(139)] = 1715,
  [SMALL_STATE(140)] = 1719,
  [SMALL_STATE(141)] = 1723,
  [SMALL_STATE(142)] = 1727,
  [SMALL_STATE(143)] = 1731,
  [SMALL_STATE(144)] = 1735,
  [SMALL_STATE(145)] = 1739,
  [SMALL_STATE(146)] = 1743,
  [SMALL_STATE(147)] = 1747,
  [SMALL_STATE(148)] = 1751,
  [SMALL_STATE(149)] = 1755,
  [SMALL_STATE(150)] = 1759,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(147),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(42),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(104),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(144),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(107),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(149),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(105),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(58),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(73),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(147),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(42),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(104),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(106),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_definition, 2),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_definition, 2),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_definition, 4),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property_definition, 4),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 3),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 2),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_definition, 4),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_layout_definition, 3),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_layout_definition, 3),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_definition, 3),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal_binding, 4),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal_binding, 4),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal_binding, 5),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal_binding, 5),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_layout_definition, 4),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_layout_definition, 4),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 4),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 4),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_styles_list, 2),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_styles_list, 2),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_definition, 3),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_definition, 4),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_definition, 3),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_definition, 5),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 4),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_definition, 5),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_definition, 4),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 3),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_menu_definition_repeat1, 2),
  [186] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_menu_definition_repeat1, 2), SHIFT_REPEAT(138),
  [189] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_menu_definition_repeat1, 2), SHIFT_REPEAT(111),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 1),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2),
  [202] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2), SHIFT_REPEAT(131),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 2),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__property_binding, 5),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__property_binding_repeat1, 2),
  [217] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__property_binding_repeat1, 2), SHIFT_REPEAT(52),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__property_binding, 4),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_layout_definition_repeat1, 2),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_layout_definition_repeat1, 2),
  [228] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_layout_definition_repeat1, 2), SHIFT_REPEAT(142),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [247] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(62),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_menu_section_repeat1, 2),
  [252] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_menu_section_repeat1, 2), SHIFT_REPEAT(111),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2),
  [257] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(64),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gettext_string, 4),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [274] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_layout_definition_repeat1, 2), SHIFT_REPEAT(150),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_section, 5),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item, 3),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_section, 3),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item, 8),
  [305] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_version_number_repeat1, 2), SHIFT_REPEAT(126),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_version_number_repeat1, 2),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item, 6),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_section, 4),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_number, 1),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_number, 2),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2),
  [326] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(13),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item, 4),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decorator, 3),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 3),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal_name, 1),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_name_qualifier, 1),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gobject_library, 1),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [405] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_blueprint(void) {
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
