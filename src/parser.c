#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 17
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 21
#define ALIAS_COUNT 0
#define TOKEN_COUNT 11
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 3

enum {
  sym_identifier = 1,
  sym_as = 2,
  anon_sym_import = 3,
  anon_sym_DOT = 4,
  anon_sym_SEMI = 5,
  anon_sym_todo1 = 6,
  anon_sym_todo2 = 7,
  anon_sym_todo3 = 8,
  anon_sym_todo4 = 9,
  sym_comment = 10,
  sym_compilation_unit = 11,
  sym__top_level_element = 12,
  sym_qualified_name = 13,
  sym_import_declaration = 14,
  sym_class_declaration = 15,
  sym_function_declaration = 16,
  sym_expand_function_declaration = 17,
  sym_statement = 18,
  sym__name = 19,
  aux_sym_compilation_unit_repeat1 = 20,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [sym_as] = "as",
  [anon_sym_import] = "import",
  [anon_sym_DOT] = ".",
  [anon_sym_SEMI] = ";",
  [anon_sym_todo1] = "todo1",
  [anon_sym_todo2] = "todo2",
  [anon_sym_todo3] = "todo3",
  [anon_sym_todo4] = "todo4",
  [sym_comment] = "comment",
  [sym_compilation_unit] = "compilation_unit",
  [sym__top_level_element] = "_top_level_element",
  [sym_qualified_name] = "qualified_name",
  [sym_import_declaration] = "import_declaration",
  [sym_class_declaration] = "class_declaration",
  [sym_function_declaration] = "function_declaration",
  [sym_expand_function_declaration] = "expand_function_declaration",
  [sym_statement] = "statement",
  [sym__name] = "_name",
  [aux_sym_compilation_unit_repeat1] = "compilation_unit_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [sym_as] = sym_as,
  [anon_sym_import] = anon_sym_import,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_todo1] = anon_sym_todo1,
  [anon_sym_todo2] = anon_sym_todo2,
  [anon_sym_todo3] = anon_sym_todo3,
  [anon_sym_todo4] = anon_sym_todo4,
  [sym_comment] = sym_comment,
  [sym_compilation_unit] = sym_compilation_unit,
  [sym__top_level_element] = sym__top_level_element,
  [sym_qualified_name] = sym_qualified_name,
  [sym_import_declaration] = sym_import_declaration,
  [sym_class_declaration] = sym_class_declaration,
  [sym_function_declaration] = sym_function_declaration,
  [sym_expand_function_declaration] = sym_expand_function_declaration,
  [sym_statement] = sym_statement,
  [sym__name] = sym__name,
  [aux_sym_compilation_unit_repeat1] = aux_sym_compilation_unit_repeat1,
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
  [sym_as] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_import] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
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
  [anon_sym_todo2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_todo3] = {
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
  [sym_compilation_unit] = {
    .visible = true,
    .named = true,
  },
  [sym__top_level_element] = {
    .visible = false,
    .named = true,
  },
  [sym_qualified_name] = {
    .visible = true,
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
  [sym_expand_function_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__name] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_compilation_unit_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_alias = 1,
  field_name = 2,
  field_scope = 3,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alias] = "alias",
  [field_name] = "name",
  [field_scope] = "scope",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 2},
    {field_scope, 0},
  [2] =
    {field_alias, 3},
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
      if (eof) ADVANCE(4);
      if (lookahead == '#') ADVANCE(9);
      if (lookahead == '.') ADVANCE(5);
      if (lookahead == '/') ADVANCE(1);
      if (lookahead == ';') ADVANCE(6);
      if (sym_comment_character_set_1(lookahead)) SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      END_STATE();
    case 1:
      if (lookahead == '*') ADVANCE(3);
      if (lookahead == '/') ADVANCE(9);
      END_STATE();
    case 2:
      if (lookahead == '*') ADVANCE(2);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(2);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(9);
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
      if (lookahead == 'i') ADVANCE(2);
      if (lookahead == 't') ADVANCE(3);
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
      if (lookahead == 's') ADVANCE(4);
      END_STATE();
    case 2:
      if (lookahead == 'm') ADVANCE(5);
      END_STATE();
    case 3:
      if (lookahead == 'o') ADVANCE(6);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(sym_as);
      END_STATE();
    case 5:
      if (lookahead == 'p') ADVANCE(7);
      END_STATE();
    case 6:
      if (lookahead == 'd') ADVANCE(8);
      END_STATE();
    case 7:
      if (lookahead == 'o') ADVANCE(9);
      END_STATE();
    case 8:
      if (lookahead == 'o') ADVANCE(10);
      END_STATE();
    case 9:
      if (lookahead == 'r') ADVANCE(11);
      END_STATE();
    case 10:
      if (lookahead == '1') ADVANCE(12);
      if (lookahead == '2') ADVANCE(13);
      if (lookahead == '3') ADVANCE(14);
      if (lookahead == '4') ADVANCE(15);
      END_STATE();
    case 11:
      if (lookahead == 't') ADVANCE(16);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_todo1);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_todo2);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_todo3);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_todo4);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_import);
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
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_as] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_todo1] = ACTIONS(1),
    [anon_sym_todo2] = ACTIONS(1),
    [anon_sym_todo3] = ACTIONS(1),
    [anon_sym_todo4] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_compilation_unit] = STATE(13),
    [sym__top_level_element] = STATE(2),
    [sym_import_declaration] = STATE(2),
    [sym_class_declaration] = STATE(2),
    [sym_function_declaration] = STATE(2),
    [sym_expand_function_declaration] = STATE(2),
    [sym_statement] = STATE(2),
    [aux_sym_compilation_unit_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_import] = ACTIONS(7),
    [anon_sym_todo1] = ACTIONS(9),
    [anon_sym_todo2] = ACTIONS(11),
    [anon_sym_todo3] = ACTIONS(13),
    [anon_sym_todo4] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [sym__top_level_element] = STATE(3),
    [sym_import_declaration] = STATE(3),
    [sym_class_declaration] = STATE(3),
    [sym_function_declaration] = STATE(3),
    [sym_expand_function_declaration] = STATE(3),
    [sym_statement] = STATE(3),
    [aux_sym_compilation_unit_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(17),
    [anon_sym_import] = ACTIONS(7),
    [anon_sym_todo1] = ACTIONS(9),
    [anon_sym_todo2] = ACTIONS(11),
    [anon_sym_todo3] = ACTIONS(13),
    [anon_sym_todo4] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [sym__top_level_element] = STATE(3),
    [sym_import_declaration] = STATE(3),
    [sym_class_declaration] = STATE(3),
    [sym_function_declaration] = STATE(3),
    [sym_expand_function_declaration] = STATE(3),
    [sym_statement] = STATE(3),
    [aux_sym_compilation_unit_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(19),
    [anon_sym_import] = ACTIONS(21),
    [anon_sym_todo1] = ACTIONS(24),
    [anon_sym_todo2] = ACTIONS(27),
    [anon_sym_todo3] = ACTIONS(30),
    [anon_sym_todo4] = ACTIONS(33),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(36), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_todo1,
      anon_sym_todo2,
      anon_sym_todo3,
      anon_sym_todo4,
  [12] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(38), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_todo1,
      anon_sym_todo2,
      anon_sym_todo3,
      anon_sym_todo4,
  [24] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(40), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_todo1,
      anon_sym_todo2,
      anon_sym_todo3,
      anon_sym_todo4,
  [36] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(42), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_todo1,
      anon_sym_todo2,
      anon_sym_todo3,
      anon_sym_todo4,
  [48] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(44), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_todo1,
      anon_sym_todo2,
      anon_sym_todo3,
      anon_sym_todo4,
  [60] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(46), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_todo1,
      anon_sym_todo2,
      anon_sym_todo3,
      anon_sym_todo4,
  [72] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(48), 1,
      sym_identifier,
    STATE(11), 2,
      sym_qualified_name,
      sym__name,
  [83] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(50), 1,
      sym_as,
    ACTIONS(52), 1,
      anon_sym_DOT,
    ACTIONS(54), 1,
      anon_sym_SEMI,
  [96] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(56), 3,
      sym_as,
      anon_sym_DOT,
      anon_sym_SEMI,
  [105] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 1,
      ts_builtin_sym_end,
  [112] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(60), 1,
      sym_identifier,
  [119] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(62), 1,
      sym_identifier,
  [126] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(64), 1,
      anon_sym_SEMI,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 12,
  [SMALL_STATE(6)] = 24,
  [SMALL_STATE(7)] = 36,
  [SMALL_STATE(8)] = 48,
  [SMALL_STATE(9)] = 60,
  [SMALL_STATE(10)] = 72,
  [SMALL_STATE(11)] = 83,
  [SMALL_STATE(12)] = 96,
  [SMALL_STATE(13)] = 105,
  [SMALL_STATE(14)] = 112,
  [SMALL_STATE(15)] = 119,
  [SMALL_STATE(16)] = 126,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compilation_unit, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compilation_unit, 1),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_compilation_unit_repeat1, 2),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_compilation_unit_repeat1, 2), SHIFT_REPEAT(10),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_compilation_unit_repeat1, 2), SHIFT_REPEAT(4),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_compilation_unit_repeat1, 2), SHIFT_REPEAT(5),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_compilation_unit_repeat1, 2), SHIFT_REPEAT(6),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_compilation_unit_repeat1, 2), SHIFT_REPEAT(7),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declaration, 1),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 1),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expand_function_declaration, 1),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_declaration, 3),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_declaration, 5, .production_id = 2),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_name, 3, .production_id = 1),
  [58] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
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
