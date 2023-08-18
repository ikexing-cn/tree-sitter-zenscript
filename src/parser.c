#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 91
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 53
#define ALIAS_COUNT 0
#define TOKEN_COUNT 30
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 9
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 20

enum {
  sym_identifier = 1,
  anon_sym_import = 2,
  anon_sym_SEMI = 3,
  anon_sym_todo1 = 4,
  anon_sym_function = 5,
  anon_sym_LPAREN = 6,
  anon_sym_RPAREN = 7,
  anon_sym_LBRACE = 8,
  anon_sym_RBRACE = 9,
  anon_sym_DOLLARexpand = 10,
  anon_sym_DOLLAR = 11,
  anon_sym_todo4 = 12,
  sym_comment = 13,
  anon_sym_DOT = 14,
  sym_as = 15,
  sym_static = 16,
  anon_sym_COMMA = 17,
  anon_sym_LBRACK = 18,
  anon_sym_RBRACK = 19,
  anon_sym_any = 20,
  anon_sym_byte = 21,
  anon_sym_short = 22,
  anon_sym_int = 23,
  anon_sym_long = 24,
  anon_sym_float = 25,
  anon_sym_double = 26,
  anon_sym_bool = 27,
  anon_sym_void = 28,
  anon_sym_string = 29,
  sym_compilation_unit = 30,
  sym__top_level_element = 31,
  sym_import_declaration = 32,
  sym_class_declaration = 33,
  sym_function_declaration = 34,
  sym_function_body = 35,
  sym_expand_function_declaration = 36,
  sym__statement = 37,
  sym__name = 38,
  sym_qualified_name = 39,
  sym_formal_parameter_list = 40,
  sym_formal_parameter = 41,
  sym__type_literal = 42,
  sym_type_literal_list = 43,
  sym_function_type = 44,
  sym_list_type = 45,
  sym_array_type = 46,
  sym_map_type = 47,
  sym_primitive_type = 48,
  aux_sym_compilation_unit_repeat1 = 49,
  aux_sym_function_body_repeat1 = 50,
  aux_sym_formal_parameter_list_repeat1 = 51,
  aux_sym_type_literal_list_repeat1 = 52,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_import] = "import",
  [anon_sym_SEMI] = ";",
  [anon_sym_todo1] = "todo1",
  [anon_sym_function] = "function",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_DOLLARexpand] = "$expand",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_todo4] = "todo4",
  [sym_comment] = "comment",
  [anon_sym_DOT] = ".",
  [sym_as] = "as",
  [sym_static] = "static",
  [anon_sym_COMMA] = ",",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_any] = "any",
  [anon_sym_byte] = "byte",
  [anon_sym_short] = "short",
  [anon_sym_int] = "int",
  [anon_sym_long] = "long",
  [anon_sym_float] = "float",
  [anon_sym_double] = "double",
  [anon_sym_bool] = "bool",
  [anon_sym_void] = "void",
  [anon_sym_string] = "string",
  [sym_compilation_unit] = "compilation_unit",
  [sym__top_level_element] = "_top_level_element",
  [sym_import_declaration] = "import_declaration",
  [sym_class_declaration] = "class_declaration",
  [sym_function_declaration] = "function_declaration",
  [sym_function_body] = "function_body",
  [sym_expand_function_declaration] = "expand_function_declaration",
  [sym__statement] = "_statement",
  [sym__name] = "_name",
  [sym_qualified_name] = "qualified_name",
  [sym_formal_parameter_list] = "formal_parameter_list",
  [sym_formal_parameter] = "formal_parameter",
  [sym__type_literal] = "_type_literal",
  [sym_type_literal_list] = "type_literal_list",
  [sym_function_type] = "function_type",
  [sym_list_type] = "list_type",
  [sym_array_type] = "array_type",
  [sym_map_type] = "map_type",
  [sym_primitive_type] = "primitive_type",
  [aux_sym_compilation_unit_repeat1] = "compilation_unit_repeat1",
  [aux_sym_function_body_repeat1] = "function_body_repeat1",
  [aux_sym_formal_parameter_list_repeat1] = "formal_parameter_list_repeat1",
  [aux_sym_type_literal_list_repeat1] = "type_literal_list_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_import] = anon_sym_import,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_todo1] = anon_sym_todo1,
  [anon_sym_function] = anon_sym_function,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_DOLLARexpand] = anon_sym_DOLLARexpand,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_todo4] = anon_sym_todo4,
  [sym_comment] = sym_comment,
  [anon_sym_DOT] = anon_sym_DOT,
  [sym_as] = sym_as,
  [sym_static] = sym_static,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_any] = anon_sym_any,
  [anon_sym_byte] = anon_sym_byte,
  [anon_sym_short] = anon_sym_short,
  [anon_sym_int] = anon_sym_int,
  [anon_sym_long] = anon_sym_long,
  [anon_sym_float] = anon_sym_float,
  [anon_sym_double] = anon_sym_double,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_void] = anon_sym_void,
  [anon_sym_string] = anon_sym_string,
  [sym_compilation_unit] = sym_compilation_unit,
  [sym__top_level_element] = sym__top_level_element,
  [sym_import_declaration] = sym_import_declaration,
  [sym_class_declaration] = sym_class_declaration,
  [sym_function_declaration] = sym_function_declaration,
  [sym_function_body] = sym_function_body,
  [sym_expand_function_declaration] = sym_expand_function_declaration,
  [sym__statement] = sym__statement,
  [sym__name] = sym__name,
  [sym_qualified_name] = sym_qualified_name,
  [sym_formal_parameter_list] = sym_formal_parameter_list,
  [sym_formal_parameter] = sym_formal_parameter,
  [sym__type_literal] = sym__type_literal,
  [sym_type_literal_list] = sym_type_literal_list,
  [sym_function_type] = sym_function_type,
  [sym_list_type] = sym_list_type,
  [sym_array_type] = sym_array_type,
  [sym_map_type] = sym_map_type,
  [sym_primitive_type] = sym_primitive_type,
  [aux_sym_compilation_unit_repeat1] = aux_sym_compilation_unit_repeat1,
  [aux_sym_function_body_repeat1] = aux_sym_function_body_repeat1,
  [aux_sym_formal_parameter_list_repeat1] = aux_sym_formal_parameter_list_repeat1,
  [aux_sym_type_literal_list_repeat1] = aux_sym_type_literal_list_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_import] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_todo1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_function] = {
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
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLARexpand] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_todo4] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym_as] = {
    .visible = true,
    .named = true,
  },
  [sym_static] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COMMA] = {
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
  [anon_sym_any] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_byte] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_short] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_long] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_float] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_double] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_void] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_string] = {
    .visible = true,
    .named = false,
  },
  [sym_compilation_unit] = {
    .visible = true,
    .named = true,
  },
  [sym__top_level_element] = {
    .visible = false,
    .named = true,
  },
  [sym_import_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_class_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_function_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_function_body] = {
    .visible = true,
    .named = true,
  },
  [sym_expand_function_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym__name] = {
    .visible = false,
    .named = true,
  },
  [sym_qualified_name] = {
    .visible = true,
    .named = true,
  },
  [sym_formal_parameter_list] = {
    .visible = true,
    .named = true,
  },
  [sym_formal_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym__type_literal] = {
    .visible = false,
    .named = true,
  },
  [sym_type_literal_list] = {
    .visible = true,
    .named = true,
  },
  [sym_function_type] = {
    .visible = true,
    .named = true,
  },
  [sym_list_type] = {
    .visible = true,
    .named = true,
  },
  [sym_array_type] = {
    .visible = true,
    .named = true,
  },
  [sym_map_type] = {
    .visible = true,
    .named = true,
  },
  [sym_primitive_type] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_compilation_unit_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_formal_parameter_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_literal_list_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_alias = 1,
  field_class_type = 2,
  field_id = 3,
  field_key = 4,
  field_name = 5,
  field_return_type = 6,
  field_scope = 7,
  field_type = 8,
  field_value = 9,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alias] = "alias",
  [field_class_type] = "class_type",
  [field_id] = "id",
  [field_key] = "key",
  [field_name] = "name",
  [field_return_type] = "return_type",
  [field_scope] = "scope",
  [field_type] = "type",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 1},
  [4] = {.index = 4, .length = 1},
  [5] = {.index = 5, .length = 1},
  [6] = {.index = 6, .length = 1},
  [7] = {.index = 7, .length = 1},
  [8] = {.index = 8, .length = 2},
  [9] = {.index = 10, .length = 4},
  [10] = {.index = 14, .length = 3},
  [11] = {.index = 17, .length = 2},
  [12] = {.index = 19, .length = 1},
  [13] = {.index = 20, .length = 3},
  [14] = {.index = 23, .length = 3},
  [15] = {.index = 26, .length = 3},
  [16] = {.index = 29, .length = 3},
  [17] = {.index = 32, .length = 5},
  [18] = {.index = 37, .length = 3},
  [19] = {.index = 40, .length = 5},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_class_type, 0},
  [1] =
    {field_name, 2},
    {field_scope, 0},
  [3] =
    {field_id, 0},
  [4] =
    {field_class_type, 0, .inherited = true},
  [5] =
    {field_class_type, 1, .inherited = true},
  [6] =
    {field_alias, 3},
  [7] =
    {field_id, 1},
  [8] =
    {field_class_type, 0, .inherited = true},
    {field_class_type, 1, .inherited = true},
  [10] =
    {field_class_type, 0, .inherited = true},
    {field_class_type, 2, .inherited = true},
    {field_key, 2},
    {field_value, 0},
  [14] =
    {field_class_type, 2, .inherited = true},
    {field_id, 0},
    {field_type, 2},
  [17] =
    {field_class_type, 4, .inherited = true},
    {field_return_type, 4},
  [19] =
    {field_id, 2},
  [20] =
    {field_class_type, 5, .inherited = true},
    {field_id, 1},
    {field_return_type, 5},
  [23] =
    {field_class_type, 1, .inherited = true},
    {field_id, 3},
    {field_type, 1},
  [26] =
    {field_class_type, 6, .inherited = true},
    {field_id, 1},
    {field_return_type, 6},
  [29] =
    {field_class_type, 6, .inherited = true},
    {field_id, 2},
    {field_return_type, 6},
  [32] =
    {field_class_type, 1, .inherited = true},
    {field_class_type, 7, .inherited = true},
    {field_id, 3},
    {field_return_type, 7},
    {field_type, 1},
  [37] =
    {field_class_type, 7, .inherited = true},
    {field_id, 2},
    {field_return_type, 7},
  [40] =
    {field_class_type, 1, .inherited = true},
    {field_class_type, 8, .inherited = true},
    {field_id, 3},
    {field_return_type, 8},
    {field_type, 1},
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
};

static inline bool sym_comment_character_set_1(int32_t c) {
  return (c < 8192
    ? (c < ' '
      ? (c < '\r'
        ? (c >= '\t' && c <= '\n')
        : c <= '\r')
      : (c <= ' ' || (c < 5760
        ? c == 160
        : c <= 5760)))
    : (c <= 8203 || (c < 12288
      ? (c < 8287
        ? c == 8239
        : c <= 8288)
      : (c <= 12288 || c == 65279))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(11);
      if (lookahead == '#') ADVANCE(21);
      if (lookahead == '$') ADVANCE(18);
      if (lookahead == '(') ADVANCE(13);
      if (lookahead == ')') ADVANCE(14);
      if (lookahead == ',') ADVANCE(23);
      if (lookahead == '.') ADVANCE(22);
      if (lookahead == '/') ADVANCE(1);
      if (lookahead == ';') ADVANCE(12);
      if (lookahead == '[') ADVANCE(24);
      if (lookahead == ']') ADVANCE(25);
      if (lookahead == '{') ADVANCE(15);
      if (lookahead == '}') ADVANCE(16);
      if (sym_comment_character_set_1(lookahead)) SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 1:
      if (lookahead == '*') ADVANCE(3);
      if (lookahead == '/') ADVANCE(21);
      END_STATE();
    case 2:
      if (lookahead == '*') ADVANCE(2);
      if (lookahead == '/') ADVANCE(20);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(2);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(7);
      END_STATE();
    case 5:
      if (lookahead == 'd') ADVANCE(17);
      END_STATE();
    case 6:
      if (lookahead == 'e') ADVANCE(9);
      END_STATE();
    case 7:
      if (lookahead == 'n') ADVANCE(5);
      END_STATE();
    case 8:
      if (lookahead == 'p') ADVANCE(4);
      END_STATE();
    case 9:
      if (lookahead == 'x') ADVANCE(8);
      END_STATE();
    case 10:
      if (eof) ADVANCE(11);
      if (lookahead == '#') ADVANCE(21);
      if (lookahead == '$') ADVANCE(6);
      if (lookahead == '/') ADVANCE(1);
      if (sym_comment_character_set_1(lookahead)) SKIP(10)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_DOLLARexpand);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == 'a') ADVANCE(1);
      if (lookahead == 'b') ADVANCE(2);
      if (lookahead == 'd') ADVANCE(3);
      if (lookahead == 'f') ADVANCE(4);
      if (lookahead == 'i') ADVANCE(5);
      if (lookahead == 'l') ADVANCE(6);
      if (lookahead == 's') ADVANCE(7);
      if (lookahead == 't') ADVANCE(8);
      if (lookahead == 'v') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'n') ADVANCE(10);
      if (lookahead == 's') ADVANCE(11);
      END_STATE();
    case 2:
      if (lookahead == 'o') ADVANCE(12);
      if (lookahead == 'y') ADVANCE(13);
      END_STATE();
    case 3:
      if (lookahead == 'o') ADVANCE(14);
      END_STATE();
    case 4:
      if (lookahead == 'l') ADVANCE(15);
      if (lookahead == 'u') ADVANCE(16);
      END_STATE();
    case 5:
      if (lookahead == 'm') ADVANCE(17);
      if (lookahead == 'n') ADVANCE(18);
      END_STATE();
    case 6:
      if (lookahead == 'o') ADVANCE(19);
      END_STATE();
    case 7:
      if (lookahead == 'h') ADVANCE(20);
      if (lookahead == 't') ADVANCE(21);
      END_STATE();
    case 8:
      if (lookahead == 'o') ADVANCE(22);
      END_STATE();
    case 9:
      if (lookahead == 'o') ADVANCE(23);
      END_STATE();
    case 10:
      if (lookahead == 'y') ADVANCE(24);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_as);
      END_STATE();
    case 12:
      if (lookahead == 'o') ADVANCE(25);
      END_STATE();
    case 13:
      if (lookahead == 't') ADVANCE(26);
      END_STATE();
    case 14:
      if (lookahead == 'u') ADVANCE(27);
      END_STATE();
    case 15:
      if (lookahead == 'o') ADVANCE(28);
      END_STATE();
    case 16:
      if (lookahead == 'n') ADVANCE(29);
      END_STATE();
    case 17:
      if (lookahead == 'p') ADVANCE(30);
      END_STATE();
    case 18:
      if (lookahead == 't') ADVANCE(31);
      END_STATE();
    case 19:
      if (lookahead == 'n') ADVANCE(32);
      END_STATE();
    case 20:
      if (lookahead == 'o') ADVANCE(33);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(34);
      if (lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 22:
      if (lookahead == 'd') ADVANCE(36);
      END_STATE();
    case 23:
      if (lookahead == 'i') ADVANCE(37);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_any);
      END_STATE();
    case 25:
      if (lookahead == 'l') ADVANCE(38);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 27:
      if (lookahead == 'b') ADVANCE(40);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(41);
      END_STATE();
    case 29:
      if (lookahead == 'c') ADVANCE(42);
      END_STATE();
    case 30:
      if (lookahead == 'o') ADVANCE(43);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 32:
      if (lookahead == 'g') ADVANCE(44);
      END_STATE();
    case 33:
      if (lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 34:
      if (lookahead == 't') ADVANCE(46);
      END_STATE();
    case 35:
      if (lookahead == 'i') ADVANCE(47);
      END_STATE();
    case 36:
      if (lookahead == 'o') ADVANCE(48);
      END_STATE();
    case 37:
      if (lookahead == 'd') ADVANCE(49);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_byte);
      END_STATE();
    case 40:
      if (lookahead == 'l') ADVANCE(50);
      END_STATE();
    case 41:
      if (lookahead == 't') ADVANCE(51);
      END_STATE();
    case 42:
      if (lookahead == 't') ADVANCE(52);
      END_STATE();
    case 43:
      if (lookahead == 'r') ADVANCE(53);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_long);
      END_STATE();
    case 45:
      if (lookahead == 't') ADVANCE(54);
      END_STATE();
    case 46:
      if (lookahead == 'i') ADVANCE(55);
      END_STATE();
    case 47:
      if (lookahead == 'n') ADVANCE(56);
      END_STATE();
    case 48:
      if (lookahead == '1') ADVANCE(57);
      if (lookahead == '4') ADVANCE(58);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 52:
      if (lookahead == 'i') ADVANCE(60);
      END_STATE();
    case 53:
      if (lookahead == 't') ADVANCE(61);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_short);
      END_STATE();
    case 55:
      if (lookahead == 'c') ADVANCE(62);
      END_STATE();
    case 56:
      if (lookahead == 'g') ADVANCE(63);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_todo1);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_todo4);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_double);
      END_STATE();
    case 60:
      if (lookahead == 'o') ADVANCE(64);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_static);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 64:
      if (lookahead == 'n') ADVANCE(65);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 10},
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
  [15] = {.lex_state = 10},
  [16] = {.lex_state = 10},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 10},
  [20] = {.lex_state = 10},
  [21] = {.lex_state = 10},
  [22] = {.lex_state = 10},
  [23] = {.lex_state = 10},
  [24] = {.lex_state = 10},
  [25] = {.lex_state = 10},
  [26] = {.lex_state = 10},
  [27] = {.lex_state = 10},
  [28] = {.lex_state = 10},
  [29] = {.lex_state = 10},
  [30] = {.lex_state = 10},
  [31] = {.lex_state = 10},
  [32] = {.lex_state = 10},
  [33] = {.lex_state = 10},
  [34] = {.lex_state = 10},
  [35] = {.lex_state = 10},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
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
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_todo1] = ACTIONS(1),
    [anon_sym_function] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_todo4] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(1),
    [sym_as] = ACTIONS(1),
    [sym_static] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_any] = ACTIONS(1),
    [anon_sym_byte] = ACTIONS(1),
    [anon_sym_short] = ACTIONS(1),
    [anon_sym_int] = ACTIONS(1),
    [anon_sym_long] = ACTIONS(1),
    [anon_sym_float] = ACTIONS(1),
    [anon_sym_double] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_void] = ACTIONS(1),
    [anon_sym_string] = ACTIONS(1),
  },
  [1] = {
    [sym_compilation_unit] = STATE(87),
    [sym__top_level_element] = STATE(15),
    [sym_import_declaration] = STATE(15),
    [sym_class_declaration] = STATE(15),
    [sym_function_declaration] = STATE(15),
    [sym_expand_function_declaration] = STATE(15),
    [sym__statement] = STATE(15),
    [aux_sym_compilation_unit_repeat1] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_import] = ACTIONS(7),
    [anon_sym_todo1] = ACTIONS(9),
    [anon_sym_function] = ACTIONS(11),
    [anon_sym_DOLLARexpand] = ACTIONS(13),
    [anon_sym_todo4] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
    [sym_static] = ACTIONS(17),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      sym_identifier,
    ACTIONS(21), 1,
      anon_sym_function,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_RBRACK,
    STATE(18), 2,
      sym__name,
      sym_qualified_name,
    STATE(72), 6,
      sym__type_literal,
      sym_function_type,
      sym_list_type,
      sym_array_type,
      sym_map_type,
      sym_primitive_type,
    ACTIONS(27), 10,
      anon_sym_any,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_string,
  [40] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      sym_identifier,
    ACTIONS(21), 1,
      anon_sym_function,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    STATE(88), 1,
      sym_type_literal_list,
    STATE(18), 2,
      sym__name,
      sym_qualified_name,
    STATE(47), 6,
      sym__type_literal,
      sym_function_type,
      sym_list_type,
      sym_array_type,
      sym_map_type,
      sym_primitive_type,
    ACTIONS(27), 10,
      anon_sym_any,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_string,
  [80] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      sym_identifier,
    ACTIONS(21), 1,
      anon_sym_function,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    STATE(18), 2,
      sym__name,
      sym_qualified_name,
    STATE(60), 6,
      sym__type_literal,
      sym_function_type,
      sym_list_type,
      sym_array_type,
      sym_map_type,
      sym_primitive_type,
    ACTIONS(27), 10,
      anon_sym_any,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_string,
  [117] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      sym_identifier,
    ACTIONS(21), 1,
      anon_sym_function,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    STATE(18), 2,
      sym__name,
      sym_qualified_name,
    STATE(58), 6,
      sym__type_literal,
      sym_function_type,
      sym_list_type,
      sym_array_type,
      sym_map_type,
      sym_primitive_type,
    ACTIONS(27), 10,
      anon_sym_any,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_string,
  [154] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      sym_identifier,
    ACTIONS(21), 1,
      anon_sym_function,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    STATE(18), 2,
      sym__name,
      sym_qualified_name,
    STATE(57), 6,
      sym__type_literal,
      sym_function_type,
      sym_list_type,
      sym_array_type,
      sym_map_type,
      sym_primitive_type,
    ACTIONS(27), 10,
      anon_sym_any,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_string,
  [191] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      sym_identifier,
    ACTIONS(21), 1,
      anon_sym_function,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    STATE(18), 2,
      sym__name,
      sym_qualified_name,
    STATE(63), 6,
      sym__type_literal,
      sym_function_type,
      sym_list_type,
      sym_array_type,
      sym_map_type,
      sym_primitive_type,
    ACTIONS(27), 10,
      anon_sym_any,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_string,
  [228] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      sym_identifier,
    ACTIONS(21), 1,
      anon_sym_function,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    STATE(18), 2,
      sym__name,
      sym_qualified_name,
    STATE(39), 6,
      sym__type_literal,
      sym_function_type,
      sym_list_type,
      sym_array_type,
      sym_map_type,
      sym_primitive_type,
    ACTIONS(27), 10,
      anon_sym_any,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_string,
  [265] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      sym_identifier,
    ACTIONS(21), 1,
      anon_sym_function,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    STATE(18), 2,
      sym__name,
      sym_qualified_name,
    STATE(53), 6,
      sym__type_literal,
      sym_function_type,
      sym_list_type,
      sym_array_type,
      sym_map_type,
      sym_primitive_type,
    ACTIONS(27), 10,
      anon_sym_any,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_string,
  [302] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      sym_identifier,
    ACTIONS(21), 1,
      anon_sym_function,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    STATE(18), 2,
      sym__name,
      sym_qualified_name,
    STATE(48), 6,
      sym__type_literal,
      sym_function_type,
      sym_list_type,
      sym_array_type,
      sym_map_type,
      sym_primitive_type,
    ACTIONS(27), 10,
      anon_sym_any,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_string,
  [339] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      sym_identifier,
    ACTIONS(21), 1,
      anon_sym_function,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    STATE(18), 2,
      sym__name,
      sym_qualified_name,
    STATE(73), 6,
      sym__type_literal,
      sym_function_type,
      sym_list_type,
      sym_array_type,
      sym_map_type,
      sym_primitive_type,
    ACTIONS(27), 10,
      anon_sym_any,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_string,
  [376] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      sym_identifier,
    ACTIONS(21), 1,
      anon_sym_function,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    STATE(18), 2,
      sym__name,
      sym_qualified_name,
    STATE(74), 6,
      sym__type_literal,
      sym_function_type,
      sym_list_type,
      sym_array_type,
      sym_map_type,
      sym_primitive_type,
    ACTIONS(27), 10,
      anon_sym_any,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_string,
  [413] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      sym_identifier,
    ACTIONS(21), 1,
      anon_sym_function,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    STATE(18), 2,
      sym__name,
      sym_qualified_name,
    STATE(67), 6,
      sym__type_literal,
      sym_function_type,
      sym_list_type,
      sym_array_type,
      sym_map_type,
      sym_primitive_type,
    ACTIONS(27), 10,
      anon_sym_any,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_string,
  [450] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      sym_identifier,
    ACTIONS(21), 1,
      anon_sym_function,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    STATE(18), 2,
      sym__name,
      sym_qualified_name,
    STATE(54), 6,
      sym__type_literal,
      sym_function_type,
      sym_list_type,
      sym_array_type,
      sym_map_type,
      sym_primitive_type,
    ACTIONS(27), 10,
      anon_sym_any,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_string,
  [487] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_import,
    ACTIONS(9), 1,
      anon_sym_todo1,
    ACTIONS(11), 1,
      anon_sym_function,
    ACTIONS(13), 1,
      anon_sym_DOLLARexpand,
    ACTIONS(17), 1,
      sym_static,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    ACTIONS(31), 1,
      anon_sym_todo4,
    STATE(16), 7,
      sym__top_level_element,
      sym_import_declaration,
      sym_class_declaration,
      sym_function_declaration,
      sym_expand_function_declaration,
      sym__statement,
      aux_sym_compilation_unit_repeat1,
  [521] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    ACTIONS(35), 1,
      anon_sym_import,
    ACTIONS(38), 1,
      anon_sym_todo1,
    ACTIONS(41), 1,
      anon_sym_function,
    ACTIONS(44), 1,
      anon_sym_DOLLARexpand,
    ACTIONS(47), 1,
      anon_sym_todo4,
    ACTIONS(50), 1,
      sym_static,
    STATE(16), 7,
      sym__top_level_element,
      sym_import_declaration,
      sym_class_declaration,
      sym_function_declaration,
      sym_expand_function_declaration,
      sym__statement,
      aux_sym_compilation_unit_repeat1,
  [555] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 9,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_DOLLAR,
      anon_sym_DOT,
      sym_as,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [570] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_DOT,
    ACTIONS(55), 6,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_DOLLAR,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [585] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 7,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_todo1,
      anon_sym_function,
      anon_sym_DOLLARexpand,
      anon_sym_todo4,
      sym_static,
  [598] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 7,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_todo1,
      anon_sym_function,
      anon_sym_DOLLARexpand,
      anon_sym_todo4,
      sym_static,
  [611] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 7,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_todo1,
      anon_sym_function,
      anon_sym_DOLLARexpand,
      anon_sym_todo4,
      sym_static,
  [624] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 7,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_todo1,
      anon_sym_function,
      anon_sym_DOLLARexpand,
      anon_sym_todo4,
      sym_static,
  [637] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 7,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_todo1,
      anon_sym_function,
      anon_sym_DOLLARexpand,
      anon_sym_todo4,
      sym_static,
  [650] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 7,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_todo1,
      anon_sym_function,
      anon_sym_DOLLARexpand,
      anon_sym_todo4,
      sym_static,
  [663] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 7,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_todo1,
      anon_sym_function,
      anon_sym_DOLLARexpand,
      anon_sym_todo4,
      sym_static,
  [676] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 7,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_todo1,
      anon_sym_function,
      anon_sym_DOLLARexpand,
      anon_sym_todo4,
      sym_static,
  [689] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 7,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_todo1,
      anon_sym_function,
      anon_sym_DOLLARexpand,
      anon_sym_todo4,
      sym_static,
  [702] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 7,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_todo1,
      anon_sym_function,
      anon_sym_DOLLARexpand,
      anon_sym_todo4,
      sym_static,
  [715] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 7,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_todo1,
      anon_sym_function,
      anon_sym_DOLLARexpand,
      anon_sym_todo4,
      sym_static,
  [728] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 7,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_todo1,
      anon_sym_function,
      anon_sym_DOLLARexpand,
      anon_sym_todo4,
      sym_static,
  [741] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 7,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_todo1,
      anon_sym_function,
      anon_sym_DOLLARexpand,
      anon_sym_todo4,
      sym_static,
  [754] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 7,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_todo1,
      anon_sym_function,
      anon_sym_DOLLARexpand,
      anon_sym_todo4,
      sym_static,
  [767] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 7,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_todo1,
      anon_sym_function,
      anon_sym_DOLLARexpand,
      anon_sym_todo4,
      sym_static,
  [780] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 7,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_todo1,
      anon_sym_function,
      anon_sym_DOLLARexpand,
      anon_sym_todo4,
      sym_static,
  [793] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 7,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_todo1,
      anon_sym_function,
      anon_sym_DOLLARexpand,
      anon_sym_todo4,
      sym_static,
  [806] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 6,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_DOLLAR,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [818] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 6,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_DOLLAR,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [830] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 6,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_DOLLAR,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [842] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      anon_sym_LBRACK,
    ACTIONS(99), 5,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_DOLLAR,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [856] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 6,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_DOLLAR,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [868] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      sym_identifier,
    ACTIONS(107), 1,
      anon_sym_RPAREN,
    STATE(49), 1,
      sym_formal_parameter,
    STATE(85), 1,
      sym_formal_parameter_list,
  [884] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      sym_identifier,
    ACTIONS(109), 1,
      anon_sym_RPAREN,
    STATE(49), 1,
      sym_formal_parameter,
    STATE(82), 1,
      sym_formal_parameter_list,
  [900] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      sym_identifier,
    ACTIONS(111), 1,
      anon_sym_RPAREN,
    STATE(49), 1,
      sym_formal_parameter,
    STATE(86), 1,
      sym_formal_parameter_list,
  [916] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      anon_sym_RBRACE,
    ACTIONS(115), 1,
      anon_sym_todo4,
    STATE(46), 2,
      sym__statement,
      aux_sym_function_body_repeat1,
  [930] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 1,
      anon_sym_RBRACE,
    ACTIONS(119), 1,
      anon_sym_todo4,
    STATE(45), 2,
      sym__statement,
      aux_sym_function_body_repeat1,
  [944] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      anon_sym_RBRACE,
    ACTIONS(124), 1,
      anon_sym_todo4,
    STATE(45), 2,
      sym__statement,
      aux_sym_function_body_repeat1,
  [958] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      anon_sym_LBRACK,
    ACTIONS(126), 1,
      anon_sym_RPAREN,
    ACTIONS(128), 1,
      anon_sym_COMMA,
    STATE(52), 1,
      aux_sym_type_literal_list_repeat1,
  [974] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      anon_sym_LBRACK,
    ACTIONS(130), 1,
      anon_sym_LBRACE,
    STATE(33), 1,
      sym_function_body,
  [987] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 1,
      anon_sym_RPAREN,
    ACTIONS(134), 1,
      anon_sym_COMMA,
    STATE(50), 1,
      aux_sym_formal_parameter_list_repeat1,
  [1000] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 1,
      anon_sym_COMMA,
    ACTIONS(136), 1,
      anon_sym_RPAREN,
    STATE(62), 1,
      aux_sym_formal_parameter_list_repeat1,
  [1013] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 1,
      sym_identifier,
    STATE(56), 2,
      sym__name,
      sym_qualified_name,
  [1024] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 1,
      anon_sym_COMMA,
    ACTIONS(140), 1,
      anon_sym_RPAREN,
    STATE(64), 1,
      aux_sym_type_literal_list_repeat1,
  [1037] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      anon_sym_LBRACK,
    ACTIONS(130), 1,
      anon_sym_LBRACE,
    STATE(21), 1,
      sym_function_body,
  [1050] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      anon_sym_LBRACK,
    ACTIONS(130), 1,
      anon_sym_LBRACE,
    STATE(29), 1,
      sym_function_body,
  [1063] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 1,
      anon_sym_LBRACE,
    ACTIONS(142), 1,
      sym_as,
    STATE(26), 1,
      sym_function_body,
  [1076] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_DOT,
    ACTIONS(144), 1,
      anon_sym_SEMI,
    ACTIONS(146), 1,
      sym_as,
  [1089] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      anon_sym_LBRACK,
    ACTIONS(130), 1,
      anon_sym_LBRACE,
    STATE(24), 1,
      sym_function_body,
  [1102] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      anon_sym_LBRACK,
    ACTIONS(148), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1113] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 1,
      anon_sym_LBRACE,
    ACTIONS(150), 1,
      sym_as,
    STATE(30), 1,
      sym_function_body,
  [1126] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      anon_sym_LBRACK,
    ACTIONS(130), 1,
      anon_sym_LBRACE,
    STATE(23), 1,
      sym_function_body,
  [1139] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 1,
      anon_sym_LBRACE,
    ACTIONS(152), 1,
      sym_as,
    STATE(35), 1,
      sym_function_body,
  [1152] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 1,
      anon_sym_RPAREN,
    ACTIONS(156), 1,
      anon_sym_COMMA,
    STATE(62), 1,
      aux_sym_formal_parameter_list_repeat1,
  [1165] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      anon_sym_LBRACK,
    ACTIONS(159), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1176] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      anon_sym_RPAREN,
    ACTIONS(163), 1,
      anon_sym_COMMA,
    STATE(64), 1,
      aux_sym_type_literal_list_repeat1,
  [1189] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 1,
      sym_as,
    ACTIONS(166), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1200] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 1,
      anon_sym_LBRACE,
    ACTIONS(170), 1,
      sym_as,
    STATE(20), 1,
      sym_function_body,
  [1213] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      anon_sym_LBRACK,
    ACTIONS(130), 1,
      anon_sym_LBRACE,
    STATE(19), 1,
      sym_function_body,
  [1226] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 1,
      anon_sym_LBRACE,
    ACTIONS(172), 1,
      sym_as,
    STATE(22), 1,
      sym_function_body,
  [1239] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 1,
      anon_sym_LBRACE,
    ACTIONS(174), 1,
      sym_as,
    STATE(27), 1,
      sym_function_body,
  [1252] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1260] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      sym_identifier,
    STATE(70), 1,
      sym_formal_parameter,
  [1270] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      anon_sym_LBRACK,
    ACTIONS(176), 1,
      anon_sym_RBRACK,
  [1280] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      anon_sym_LBRACK,
    ACTIONS(178), 1,
      anon_sym_RBRACK,
  [1290] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      anon_sym_LBRACK,
    ACTIONS(180), 1,
      anon_sym_DOLLAR,
  [1300] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_SEMI,
  [1307] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 1,
      sym_identifier,
  [1314] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 1,
      anon_sym_LPAREN,
  [1321] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 1,
      sym_identifier,
  [1328] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 1,
      sym_identifier,
  [1335] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 1,
      sym_identifier,
  [1342] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      anon_sym_LPAREN,
  [1349] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      anon_sym_RPAREN,
  [1356] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 1,
      anon_sym_LPAREN,
  [1363] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      anon_sym_LPAREN,
  [1370] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_RPAREN,
  [1377] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 1,
      anon_sym_RPAREN,
  [1384] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      ts_builtin_sym_end,
  [1391] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_RPAREN,
  [1398] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 1,
      anon_sym_function,
  [1405] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 40,
  [SMALL_STATE(4)] = 80,
  [SMALL_STATE(5)] = 117,
  [SMALL_STATE(6)] = 154,
  [SMALL_STATE(7)] = 191,
  [SMALL_STATE(8)] = 228,
  [SMALL_STATE(9)] = 265,
  [SMALL_STATE(10)] = 302,
  [SMALL_STATE(11)] = 339,
  [SMALL_STATE(12)] = 376,
  [SMALL_STATE(13)] = 413,
  [SMALL_STATE(14)] = 450,
  [SMALL_STATE(15)] = 487,
  [SMALL_STATE(16)] = 521,
  [SMALL_STATE(17)] = 555,
  [SMALL_STATE(18)] = 570,
  [SMALL_STATE(19)] = 585,
  [SMALL_STATE(20)] = 598,
  [SMALL_STATE(21)] = 611,
  [SMALL_STATE(22)] = 624,
  [SMALL_STATE(23)] = 637,
  [SMALL_STATE(24)] = 650,
  [SMALL_STATE(25)] = 663,
  [SMALL_STATE(26)] = 676,
  [SMALL_STATE(27)] = 689,
  [SMALL_STATE(28)] = 702,
  [SMALL_STATE(29)] = 715,
  [SMALL_STATE(30)] = 728,
  [SMALL_STATE(31)] = 741,
  [SMALL_STATE(32)] = 754,
  [SMALL_STATE(33)] = 767,
  [SMALL_STATE(34)] = 780,
  [SMALL_STATE(35)] = 793,
  [SMALL_STATE(36)] = 806,
  [SMALL_STATE(37)] = 818,
  [SMALL_STATE(38)] = 830,
  [SMALL_STATE(39)] = 842,
  [SMALL_STATE(40)] = 856,
  [SMALL_STATE(41)] = 868,
  [SMALL_STATE(42)] = 884,
  [SMALL_STATE(43)] = 900,
  [SMALL_STATE(44)] = 916,
  [SMALL_STATE(45)] = 930,
  [SMALL_STATE(46)] = 944,
  [SMALL_STATE(47)] = 958,
  [SMALL_STATE(48)] = 974,
  [SMALL_STATE(49)] = 987,
  [SMALL_STATE(50)] = 1000,
  [SMALL_STATE(51)] = 1013,
  [SMALL_STATE(52)] = 1024,
  [SMALL_STATE(53)] = 1037,
  [SMALL_STATE(54)] = 1050,
  [SMALL_STATE(55)] = 1063,
  [SMALL_STATE(56)] = 1076,
  [SMALL_STATE(57)] = 1089,
  [SMALL_STATE(58)] = 1102,
  [SMALL_STATE(59)] = 1113,
  [SMALL_STATE(60)] = 1126,
  [SMALL_STATE(61)] = 1139,
  [SMALL_STATE(62)] = 1152,
  [SMALL_STATE(63)] = 1165,
  [SMALL_STATE(64)] = 1176,
  [SMALL_STATE(65)] = 1189,
  [SMALL_STATE(66)] = 1200,
  [SMALL_STATE(67)] = 1213,
  [SMALL_STATE(68)] = 1226,
  [SMALL_STATE(69)] = 1239,
  [SMALL_STATE(70)] = 1252,
  [SMALL_STATE(71)] = 1260,
  [SMALL_STATE(72)] = 1270,
  [SMALL_STATE(73)] = 1280,
  [SMALL_STATE(74)] = 1290,
  [SMALL_STATE(75)] = 1300,
  [SMALL_STATE(76)] = 1307,
  [SMALL_STATE(77)] = 1314,
  [SMALL_STATE(78)] = 1321,
  [SMALL_STATE(79)] = 1328,
  [SMALL_STATE(80)] = 1335,
  [SMALL_STATE(81)] = 1342,
  [SMALL_STATE(82)] = 1349,
  [SMALL_STATE(83)] = 1356,
  [SMALL_STATE(84)] = 1363,
  [SMALL_STATE(85)] = 1370,
  [SMALL_STATE(86)] = 1377,
  [SMALL_STATE(87)] = 1384,
  [SMALL_STATE(88)] = 1391,
  [SMALL_STATE(89)] = 1398,
  [SMALL_STATE(90)] = 1405,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compilation_unit, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compilation_unit, 1),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_compilation_unit_repeat1, 2),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_compilation_unit_repeat1, 2), SHIFT_REPEAT(51),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_compilation_unit_repeat1, 2), SHIFT_REPEAT(25),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_compilation_unit_repeat1, 2), SHIFT_REPEAT(90),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_compilation_unit_repeat1, 2), SHIFT_REPEAT(12),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_compilation_unit_repeat1, 2), SHIFT_REPEAT(16),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_compilation_unit_repeat1, 2), SHIFT_REPEAT(89),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_name, 3, .production_id = 2),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_literal, 1, .production_id = 1),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 8, .production_id = 15),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expand_function_declaration, 7, .production_id = 14),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expand_function_declaration, 10, .production_id = 19),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 5, .production_id = 7),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expand_function_declaration, 9, .production_id = 17),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 7, .production_id = 13),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declaration, 1),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 6, .production_id = 12),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 7, .production_id = 12),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_declaration, 5, .production_id = 6),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 9, .production_id = 18),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 6, .production_id = 7),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_body, 3),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_body, 2),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 8, .production_id = 16),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_declaration, 3),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expand_function_declaration, 8, .production_id = 14),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_type, 3, .production_id = 5),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 3, .production_id = 4),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_type, 4, .production_id = 9),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type, 5, .production_id = 11),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 1),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_body_repeat1, 2),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_body_repeat1, 2), SHIFT_REPEAT(45),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_literal_list, 1, .production_id = 4),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formal_parameter_list, 1),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formal_parameter_list, 2),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_literal_list, 2, .production_id = 8),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formal_parameter, 3, .production_id = 10),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_formal_parameter_list_repeat1, 2),
  [156] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_formal_parameter_list_repeat1, 2), SHIFT_REPEAT(71),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_literal_list_repeat1, 2, .production_id = 5),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_literal_list_repeat1, 2, .production_id = 8),
  [163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_literal_list_repeat1, 2, .production_id = 8), SHIFT_REPEAT(7),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formal_parameter, 1, .production_id = 3),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [206] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_zenscript(void) {
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
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
