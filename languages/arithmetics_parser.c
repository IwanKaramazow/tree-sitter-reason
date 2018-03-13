#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 6
#define STATE_COUNT 11
#define SYMBOL_COUNT 11
#define ALIAS_COUNT 0
#define TOKEN_COUNT 8
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  anon_sym_LPAREN = 1,
  anon_sym_RPAREN = 2,
  anon_sym_PLUS = 3,
  anon_sym_STAR = 4,
  sym_number = 5,
  sym_comment = 6,
  sym_variable = 7,
  sym_expression = 8,
  sym_sum = 9,
  sym_product = 10,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_PLUS] = "+",
  [anon_sym_STAR] = "*",
  [sym_number] = "number",
  [sym_comment] = "comment",
  [sym_variable] = "variable",
  [sym_expression] = "expression",
  [sym_sum] = "sum",
  [sym_product] = "product",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
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
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_sum] = {
    .visible = true,
    .named = true,
  },
  [sym_product] = {
    .visible = true,
    .named = true,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '(')
        ADVANCE(3);
      if (lookahead == ')')
        ADVANCE(4);
      if (lookahead == '*')
        ADVANCE(5);
      if (lookahead == '+')
        ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(7);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(8);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(7);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '(')
        ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(9);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(7);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(8);
      END_STATE();
    case 10:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == ')')
        ADVANCE(4);
      if (lookahead == '*')
        ADVANCE(5);
      if (lookahead == '+')
        ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(10);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 9},
  [2] = {.lex_state = 9},
  [3] = {.lex_state = 10},
  [4] = {.lex_state = 10},
  [5] = {.lex_state = 10},
  [6] = {.lex_state = 9},
  [7] = {.lex_state = 9},
  [8] = {.lex_state = 10},
  [9] = {.lex_state = 10},
  [10] = {.lex_state = 10},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [sym_number] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [sym_variable] = ACTIONS(3),
  },
  [1] = {
    [sym_expression] = STATE(4),
    [sym_sum] = STATE(3),
    [sym_product] = STATE(3),
    [anon_sym_LPAREN] = ACTIONS(8),
    [sym_number] = ACTIONS(10),
    [sym_comment] = ACTIONS(12),
    [sym_variable] = ACTIONS(10),
  },
  [2] = {
    [sym_expression] = STATE(5),
    [sym_sum] = STATE(3),
    [sym_product] = STATE(3),
    [anon_sym_LPAREN] = ACTIONS(8),
    [sym_number] = ACTIONS(10),
    [sym_comment] = ACTIONS(12),
    [sym_variable] = ACTIONS(10),
  },
  [3] = {
    [ts_builtin_sym_end] = ACTIONS(14),
    [anon_sym_RPAREN] = ACTIONS(14),
    [anon_sym_PLUS] = ACTIONS(14),
    [anon_sym_STAR] = ACTIONS(14),
    [sym_comment] = ACTIONS(12),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(16),
    [anon_sym_PLUS] = ACTIONS(18),
    [anon_sym_STAR] = ACTIONS(20),
    [sym_comment] = ACTIONS(12),
  },
  [5] = {
    [anon_sym_RPAREN] = ACTIONS(22),
    [anon_sym_PLUS] = ACTIONS(18),
    [anon_sym_STAR] = ACTIONS(20),
    [sym_comment] = ACTIONS(12),
  },
  [6] = {
    [sym_expression] = STATE(9),
    [sym_sum] = STATE(3),
    [sym_product] = STATE(3),
    [anon_sym_LPAREN] = ACTIONS(8),
    [sym_number] = ACTIONS(10),
    [sym_comment] = ACTIONS(12),
    [sym_variable] = ACTIONS(10),
  },
  [7] = {
    [sym_expression] = STATE(10),
    [sym_sum] = STATE(3),
    [sym_product] = STATE(3),
    [anon_sym_LPAREN] = ACTIONS(8),
    [sym_number] = ACTIONS(10),
    [sym_comment] = ACTIONS(12),
    [sym_variable] = ACTIONS(10),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(24),
    [anon_sym_RPAREN] = ACTIONS(24),
    [anon_sym_PLUS] = ACTIONS(24),
    [anon_sym_STAR] = ACTIONS(24),
    [sym_comment] = ACTIONS(12),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(26),
    [anon_sym_RPAREN] = ACTIONS(26),
    [anon_sym_PLUS] = ACTIONS(26),
    [anon_sym_STAR] = ACTIONS(20),
    [sym_comment] = ACTIONS(12),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(28),
    [anon_sym_RPAREN] = ACTIONS(28),
    [anon_sym_PLUS] = ACTIONS(28),
    [anon_sym_STAR] = ACTIONS(28),
    [sym_comment] = ACTIONS(12),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false, .depends_on_lookahead = false},
  [1] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(),
  [5] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(), RECOVER(),
  [8] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(2),
  [10] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(3),
  [12] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(),
  [14] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression, 1),
  [16] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
  [18] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(6),
  [20] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(7),
  [22] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(8),
  [24] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression, 3),
  [26] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_sum, 3),
  [28] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_product, 3),
};

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_arithmetic() {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
