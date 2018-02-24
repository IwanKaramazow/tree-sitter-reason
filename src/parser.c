#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 5
#define STATE_COUNT 45
#define SYMBOL_COUNT 37
#define ALIAS_COUNT 0
#define TOKEN_COUNT 17
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  sym_hash_bang_line = 1,
  anon_sym_let = 2,
  anon_sym_rec = 3,
  anon_sym_SEMI = 4,
  anon_sym_open = 5,
  anon_sym_EQ = 6,
  aux_sym_SLASH_LBRACKG_DASHZg_DASHz_RBRACK_SLASH = 7,
  anon_sym_DQUOTE = 8,
  aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_DQUOTE_BSLASHn_RBRACK_SLASH = 9,
  aux_sym_SLASH_BSLASH_BSLASH_LPAREN_DOT_PIPE_BSLASHn_RPAREN_SLASH = 10,
  anon_sym_SQUOTE = 11,
  aux_sym_SLASH_LBRACKA_DASHZa_DASHz0_DASH9_RBRACK_SLASH = 12,
  sym_float = 13,
  sym_number = 14,
  sym_upper_ident = 15,
  sym_lower_ident = 16,
  sym_program = 17,
  sym_structure_item = 18,
  sym_str_eval = 19,
  sym_str_value = 20,
  sym_str_open = 21,
  sym_value_binding = 22,
  sym_pattern = 23,
  sym_pat_var = 24,
  sym_expr = 25,
  sym_exp_ident = 26,
  sym_exp_constant = 27,
  sym_const_char = 28,
  sym_const_string = 29,
  sym_const_integer = 30,
  sym_const_float = 31,
  sym_string = 32,
  sym_char = 33,
  sym_ident = 34,
  aux_sym_program_repeat1 = 35,
  aux_sym_string_repeat1 = 36,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [sym_hash_bang_line] = "hash_bang_line",
  [anon_sym_let] = "let",
  [anon_sym_rec] = "rec",
  [anon_sym_SEMI] = ";",
  [anon_sym_open] = "open",
  [anon_sym_EQ] = "=",
  [aux_sym_SLASH_LBRACKG_DASHZg_DASHz_RBRACK_SLASH] = "/[G-Zg-z]/",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_DQUOTE_BSLASHn_RBRACK_SLASH] = "/[^\\\\\"\\n]/",
  [aux_sym_SLASH_BSLASH_BSLASH_LPAREN_DOT_PIPE_BSLASHn_RPAREN_SLASH] = "/\\\\(.|\\n)/",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_SLASH_LBRACKA_DASHZa_DASHz0_DASH9_RBRACK_SLASH] = "/[A-Za-z0-9]/",
  [sym_float] = "float",
  [sym_number] = "number",
  [sym_upper_ident] = "upper_ident",
  [sym_lower_ident] = "lower_ident",
  [sym_program] = "program",
  [sym_structure_item] = "structure_item",
  [sym_str_eval] = "str_eval",
  [sym_str_value] = "str_value",
  [sym_str_open] = "str_open",
  [sym_value_binding] = "value_binding",
  [sym_pattern] = "pattern",
  [sym_pat_var] = "pat_var",
  [sym_expr] = "expr",
  [sym_exp_ident] = "exp_ident",
  [sym_exp_constant] = "exp_constant",
  [sym_const_char] = "const_char",
  [sym_const_string] = "const_string",
  [sym_const_integer] = "const_integer",
  [sym_const_float] = "const_float",
  [sym_string] = "string",
  [sym_char] = "char",
  [sym_ident] = "ident",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_hash_bang_line] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_let] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rec] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_open] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASH_LBRACKG_DASHZg_DASHz_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_DQUOTE_BSLASHn_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_BSLASH_BSLASH_LPAREN_DOT_PIPE_BSLASHn_RPAREN_SLASH] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASH_LBRACKA_DASHZa_DASHz0_DASH9_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_upper_ident] = {
    .visible = true,
    .named = true,
  },
  [sym_lower_ident] = {
    .visible = true,
    .named = true,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym_structure_item] = {
    .visible = true,
    .named = true,
  },
  [sym_str_eval] = {
    .visible = true,
    .named = true,
  },
  [sym_str_value] = {
    .visible = true,
    .named = true,
  },
  [sym_str_open] = {
    .visible = true,
    .named = true,
  },
  [sym_value_binding] = {
    .visible = true,
    .named = true,
  },
  [sym_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_pat_var] = {
    .visible = true,
    .named = true,
  },
  [sym_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_exp_ident] = {
    .visible = true,
    .named = true,
  },
  [sym_exp_constant] = {
    .visible = true,
    .named = true,
  },
  [sym_const_char] = {
    .visible = true,
    .named = true,
  },
  [sym_const_string] = {
    .visible = true,
    .named = true,
  },
  [sym_const_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_const_float] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_char] = {
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
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '\'')
        ADVANCE(5);
      if (lookahead == ';')
        ADVANCE(6);
      if (lookahead == '=')
        ADVANCE(7);
      if (lookahead == '\\')
        ADVANCE(8);
      if (lookahead == 'l')
        ADVANCE(10);
      if (lookahead == 'o')
        ADVANCE(14);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(19);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(24);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 3:
      if (lookahead == '!')
        ADVANCE(4);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(sym_hash_bang_line);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(4);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 8:
      if (lookahead == '\n')
        ADVANCE(9);
      if (lookahead != 0)
        ADVANCE(9);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_BSLASH_LPAREN_DOT_PIPE_BSLASHn_RPAREN_SLASH);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_lower_ident);
      if (lookahead == 'e')
        ADVANCE(11);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_lower_ident);
      if (lookahead == 't')
        ADVANCE(12);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_let);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_lower_ident);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_lower_ident);
      if (lookahead == 'p')
        ADVANCE(15);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_lower_ident);
      if (lookahead == 'e')
        ADVANCE(16);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_lower_ident);
      if (lookahead == 'n')
        ADVANCE(17);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_open);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 18:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(19);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '.')
        ADVANCE(20);
      if (lookahead == 'e')
        ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(19);
      END_STATE();
    case 20:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(21);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'e')
        ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/')
        ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(23);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_upper_ident);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 25:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '\'')
        ADVANCE(5);
      if (lookahead == 'l')
        ADVANCE(10);
      if (lookahead == 'o')
        ADVANCE(14);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(25);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(19);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(24);
      END_STATE();
    case 26:
      if (lookahead == 'r')
        ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(26);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_lower_ident);
      if (lookahead == 'e')
        ADVANCE(28);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_lower_ident);
      if (lookahead == 'c')
        ADVANCE(29);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_rec);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 30:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '\'')
        ADVANCE(5);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(30);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(19);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(24);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 31:
      if (lookahead == '\n')
        SKIP(31);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '\\')
        ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(32);
      if (lookahead != 0)
        ADVANCE(32);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_DQUOTE_BSLASHn_RBRACK_SLASH);
      END_STATE();
    case 33:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKA_DASHZa_DASHz0_DASH9_RBRACK_SLASH);
      END_STATE();
    case 35:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '\'')
        ADVANCE(5);
      if (lookahead == 'l')
        ADVANCE(36);
      if (lookahead == 'o')
        ADVANCE(37);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(35);
      if (('A' <= lookahead && lookahead <= 'F'))
        ADVANCE(24);
      if (('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(19);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(38);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(39);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKG_DASHZg_DASHz_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(11);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKG_DASHZg_DASHz_RBRACK_SLASH);
      if (lookahead == 'p')
        ADVANCE(15);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKG_DASHZg_DASHz_RBRACK_SLASH);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKG_DASHZg_DASHz_RBRACK_SLASH);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 40:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '\'')
        ADVANCE(5);
      if (lookahead == ';')
        ADVANCE(6);
      if (lookahead == 'l')
        ADVANCE(10);
      if (lookahead == 'o')
        ADVANCE(14);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(40);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(19);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(24);
      END_STATE();
    case 41:
      if (lookahead == ';')
        ADVANCE(6);
      if (lookahead == '=')
        ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(41);
      END_STATE();
    case 42:
      if (lookahead == ';')
        ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(42);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(43);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKG_DASHZg_DASHz_RBRACK_SLASH);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 25},
  [2] = {.lex_state = 25},
  [3] = {.lex_state = 26},
  [4] = {.lex_state = 30},
  [5] = {.lex_state = 31},
  [6] = {.lex_state = 33},
  [7] = {.lex_state = 35},
  [8] = {.lex_state = 35},
  [9] = {.lex_state = 40},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 25},
  [12] = {.lex_state = 25},
  [13] = {.lex_state = 25},
  [14] = {.lex_state = 40},
  [15] = {.lex_state = 40},
  [16] = {.lex_state = 40},
  [17] = {.lex_state = 40},
  [18] = {.lex_state = 40},
  [19] = {.lex_state = 25},
  [20] = {.lex_state = 25},
  [21] = {.lex_state = 30},
  [22] = {.lex_state = 41},
  [23] = {.lex_state = 41},
  [24] = {.lex_state = 41},
  [25] = {.lex_state = 41},
  [26] = {.lex_state = 41},
  [27] = {.lex_state = 40},
  [28] = {.lex_state = 31},
  [29] = {.lex_state = 31},
  [30] = {.lex_state = 25},
  [31] = {.lex_state = 40},
  [32] = {.lex_state = 40},
  [33] = {.lex_state = 25},
  [34] = {.lex_state = 41},
  [35] = {.lex_state = 25},
  [36] = {.lex_state = 30},
  [37] = {.lex_state = 25},
  [38] = {.lex_state = 40},
  [39] = {.lex_state = 31},
  [40] = {.lex_state = 40},
  [41] = {.lex_state = 25},
  [42] = {.lex_state = 42},
  [43] = {.lex_state = 42},
  [44] = {.lex_state = 41},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_hash_bang_line] = ACTIONS(3),
    [anon_sym_let] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_open] = ACTIONS(3),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [aux_sym_SLASH_BSLASH_BSLASH_LPAREN_DOT_PIPE_BSLASHn_RPAREN_SLASH] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [sym_float] = ACTIONS(3),
    [sym_number] = ACTIONS(5),
    [sym_upper_ident] = ACTIONS(3),
    [sym_lower_ident] = ACTIONS(5),
  },
  [1] = {
    [sym_program] = STATE(10),
    [sym_structure_item] = STATE(11),
    [sym_str_eval] = STATE(12),
    [sym_str_value] = STATE(12),
    [sym_str_open] = STATE(12),
    [sym_expr] = STATE(13),
    [sym_exp_ident] = STATE(14),
    [sym_exp_constant] = STATE(14),
    [sym_const_char] = STATE(15),
    [sym_const_string] = STATE(15),
    [sym_const_integer] = STATE(15),
    [sym_const_float] = STATE(15),
    [sym_string] = STATE(16),
    [sym_char] = STATE(17),
    [sym_ident] = STATE(18),
    [aux_sym_program_repeat1] = STATE(19),
    [ts_builtin_sym_end] = ACTIONS(7),
    [sym_hash_bang_line] = ACTIONS(9),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_open] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [sym_float] = ACTIONS(19),
    [sym_number] = ACTIONS(21),
    [sym_upper_ident] = ACTIONS(23),
    [sym_lower_ident] = ACTIONS(25),
  },
  [2] = {
    [sym_structure_item] = STATE(11),
    [sym_str_eval] = STATE(12),
    [sym_str_value] = STATE(12),
    [sym_str_open] = STATE(12),
    [sym_expr] = STATE(13),
    [sym_exp_ident] = STATE(14),
    [sym_exp_constant] = STATE(14),
    [sym_const_char] = STATE(15),
    [sym_const_string] = STATE(15),
    [sym_const_integer] = STATE(15),
    [sym_const_float] = STATE(15),
    [sym_string] = STATE(16),
    [sym_char] = STATE(17),
    [sym_ident] = STATE(18),
    [aux_sym_program_repeat1] = STATE(20),
    [ts_builtin_sym_end] = ACTIONS(27),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_open] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [sym_float] = ACTIONS(19),
    [sym_number] = ACTIONS(21),
    [sym_upper_ident] = ACTIONS(23),
    [sym_lower_ident] = ACTIONS(25),
  },
  [3] = {
    [sym_value_binding] = STATE(23),
    [sym_pattern] = STATE(24),
    [sym_pat_var] = STATE(25),
    [anon_sym_rec] = ACTIONS(29),
    [sym_lower_ident] = ACTIONS(31),
  },
  [4] = {
    [sym_ident] = STATE(26),
    [sym_upper_ident] = ACTIONS(23),
    [sym_lower_ident] = ACTIONS(23),
  },
  [5] = {
    [aux_sym_string_repeat1] = STATE(29),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_DQUOTE_BSLASHn_RBRACK_SLASH] = ACTIONS(35),
    [aux_sym_SLASH_BSLASH_BSLASH_LPAREN_DOT_PIPE_BSLASHn_RPAREN_SLASH] = ACTIONS(35),
  },
  [6] = {
    [aux_sym_SLASH_LBRACKA_DASHZa_DASHz0_DASH9_RBRACK_SLASH] = ACTIONS(37),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(39),
    [anon_sym_let] = ACTIONS(41),
    [anon_sym_open] = ACTIONS(41),
    [aux_sym_SLASH_LBRACKG_DASHZg_DASHz_RBRACK_SLASH] = ACTIONS(43),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [sym_float] = ACTIONS(41),
    [sym_number] = ACTIONS(45),
    [sym_upper_ident] = ACTIONS(45),
    [sym_lower_ident] = ACTIONS(45),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(47),
    [anon_sym_let] = ACTIONS(49),
    [anon_sym_open] = ACTIONS(49),
    [aux_sym_SLASH_LBRACKG_DASHZg_DASHz_RBRACK_SLASH] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [sym_float] = ACTIONS(49),
    [sym_number] = ACTIONS(53),
    [sym_upper_ident] = ACTIONS(53),
    [sym_lower_ident] = ACTIONS(53),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(55),
    [anon_sym_let] = ACTIONS(57),
    [anon_sym_SEMI] = ACTIONS(55),
    [anon_sym_open] = ACTIONS(57),
    [anon_sym_DQUOTE] = ACTIONS(55),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [sym_float] = ACTIONS(57),
    [sym_number] = ACTIONS(59),
    [sym_upper_ident] = ACTIONS(57),
    [sym_lower_ident] = ACTIONS(59),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(61),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(63),
    [anon_sym_let] = ACTIONS(65),
    [anon_sym_open] = ACTIONS(65),
    [anon_sym_DQUOTE] = ACTIONS(63),
    [anon_sym_SQUOTE] = ACTIONS(63),
    [sym_float] = ACTIONS(65),
    [sym_number] = ACTIONS(67),
    [sym_upper_ident] = ACTIONS(65),
    [sym_lower_ident] = ACTIONS(67),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(69),
    [anon_sym_let] = ACTIONS(71),
    [anon_sym_open] = ACTIONS(71),
    [anon_sym_DQUOTE] = ACTIONS(69),
    [anon_sym_SQUOTE] = ACTIONS(69),
    [sym_float] = ACTIONS(71),
    [sym_number] = ACTIONS(73),
    [sym_upper_ident] = ACTIONS(71),
    [sym_lower_ident] = ACTIONS(73),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(75),
    [anon_sym_let] = ACTIONS(77),
    [anon_sym_open] = ACTIONS(77),
    [anon_sym_DQUOTE] = ACTIONS(75),
    [anon_sym_SQUOTE] = ACTIONS(75),
    [sym_float] = ACTIONS(77),
    [sym_number] = ACTIONS(79),
    [sym_upper_ident] = ACTIONS(77),
    [sym_lower_ident] = ACTIONS(79),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(81),
    [anon_sym_let] = ACTIONS(83),
    [anon_sym_SEMI] = ACTIONS(81),
    [anon_sym_open] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(81),
    [anon_sym_SQUOTE] = ACTIONS(81),
    [sym_float] = ACTIONS(83),
    [sym_number] = ACTIONS(85),
    [sym_upper_ident] = ACTIONS(83),
    [sym_lower_ident] = ACTIONS(85),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(87),
    [anon_sym_let] = ACTIONS(89),
    [anon_sym_SEMI] = ACTIONS(87),
    [anon_sym_open] = ACTIONS(89),
    [anon_sym_DQUOTE] = ACTIONS(87),
    [anon_sym_SQUOTE] = ACTIONS(87),
    [sym_float] = ACTIONS(89),
    [sym_number] = ACTIONS(91),
    [sym_upper_ident] = ACTIONS(89),
    [sym_lower_ident] = ACTIONS(91),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(93),
    [anon_sym_let] = ACTIONS(95),
    [anon_sym_SEMI] = ACTIONS(93),
    [anon_sym_open] = ACTIONS(95),
    [anon_sym_DQUOTE] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(93),
    [sym_float] = ACTIONS(95),
    [sym_number] = ACTIONS(97),
    [sym_upper_ident] = ACTIONS(95),
    [sym_lower_ident] = ACTIONS(97),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(99),
    [anon_sym_let] = ACTIONS(101),
    [anon_sym_SEMI] = ACTIONS(99),
    [anon_sym_open] = ACTIONS(101),
    [anon_sym_DQUOTE] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(99),
    [sym_float] = ACTIONS(101),
    [sym_number] = ACTIONS(103),
    [sym_upper_ident] = ACTIONS(101),
    [sym_lower_ident] = ACTIONS(103),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(105),
    [anon_sym_let] = ACTIONS(107),
    [anon_sym_SEMI] = ACTIONS(105),
    [anon_sym_open] = ACTIONS(107),
    [anon_sym_DQUOTE] = ACTIONS(105),
    [anon_sym_SQUOTE] = ACTIONS(105),
    [sym_float] = ACTIONS(107),
    [sym_number] = ACTIONS(109),
    [sym_upper_ident] = ACTIONS(107),
    [sym_lower_ident] = ACTIONS(109),
  },
  [19] = {
    [sym_structure_item] = STATE(11),
    [sym_str_eval] = STATE(12),
    [sym_str_value] = STATE(12),
    [sym_str_open] = STATE(12),
    [sym_expr] = STATE(13),
    [sym_exp_ident] = STATE(14),
    [sym_exp_constant] = STATE(14),
    [sym_const_char] = STATE(15),
    [sym_const_string] = STATE(15),
    [sym_const_integer] = STATE(15),
    [sym_const_float] = STATE(15),
    [sym_string] = STATE(16),
    [sym_char] = STATE(17),
    [sym_ident] = STATE(18),
    [aux_sym_program_repeat1] = STATE(33),
    [ts_builtin_sym_end] = ACTIONS(27),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_open] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [sym_float] = ACTIONS(19),
    [sym_number] = ACTIONS(21),
    [sym_upper_ident] = ACTIONS(23),
    [sym_lower_ident] = ACTIONS(25),
  },
  [20] = {
    [sym_structure_item] = STATE(11),
    [sym_str_eval] = STATE(12),
    [sym_str_value] = STATE(12),
    [sym_str_open] = STATE(12),
    [sym_expr] = STATE(13),
    [sym_exp_ident] = STATE(14),
    [sym_exp_constant] = STATE(14),
    [sym_const_char] = STATE(15),
    [sym_const_string] = STATE(15),
    [sym_const_integer] = STATE(15),
    [sym_const_float] = STATE(15),
    [sym_string] = STATE(16),
    [sym_char] = STATE(17),
    [sym_ident] = STATE(18),
    [aux_sym_program_repeat1] = STATE(33),
    [ts_builtin_sym_end] = ACTIONS(111),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_open] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [sym_float] = ACTIONS(19),
    [sym_number] = ACTIONS(21),
    [sym_upper_ident] = ACTIONS(23),
    [sym_lower_ident] = ACTIONS(25),
  },
  [21] = {
    [sym_value_binding] = STATE(34),
    [sym_pattern] = STATE(24),
    [sym_pat_var] = STATE(25),
    [sym_lower_ident] = ACTIONS(113),
  },
  [22] = {
    [anon_sym_EQ] = ACTIONS(115),
  },
  [23] = {
    [anon_sym_SEMI] = ACTIONS(117),
  },
  [24] = {
    [anon_sym_EQ] = ACTIONS(119),
  },
  [25] = {
    [anon_sym_EQ] = ACTIONS(121),
  },
  [26] = {
    [anon_sym_SEMI] = ACTIONS(123),
  },
  [27] = {
    [ts_builtin_sym_end] = ACTIONS(125),
    [anon_sym_let] = ACTIONS(127),
    [anon_sym_SEMI] = ACTIONS(125),
    [anon_sym_open] = ACTIONS(127),
    [anon_sym_DQUOTE] = ACTIONS(125),
    [anon_sym_SQUOTE] = ACTIONS(125),
    [sym_float] = ACTIONS(127),
    [sym_number] = ACTIONS(129),
    [sym_upper_ident] = ACTIONS(127),
    [sym_lower_ident] = ACTIONS(129),
  },
  [28] = {
    [anon_sym_DQUOTE] = ACTIONS(131),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_DQUOTE_BSLASHn_RBRACK_SLASH] = ACTIONS(131),
    [aux_sym_SLASH_BSLASH_BSLASH_LPAREN_DOT_PIPE_BSLASHn_RPAREN_SLASH] = ACTIONS(131),
  },
  [29] = {
    [aux_sym_string_repeat1] = STATE(39),
    [anon_sym_DQUOTE] = ACTIONS(133),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_DQUOTE_BSLASHn_RBRACK_SLASH] = ACTIONS(35),
    [aux_sym_SLASH_BSLASH_BSLASH_LPAREN_DOT_PIPE_BSLASHn_RPAREN_SLASH] = ACTIONS(35),
  },
  [30] = {
    [anon_sym_SQUOTE] = ACTIONS(135),
  },
  [31] = {
    [ts_builtin_sym_end] = ACTIONS(137),
    [anon_sym_let] = ACTIONS(139),
    [anon_sym_SEMI] = ACTIONS(137),
    [anon_sym_open] = ACTIONS(139),
    [anon_sym_DQUOTE] = ACTIONS(137),
    [anon_sym_SQUOTE] = ACTIONS(137),
    [sym_float] = ACTIONS(139),
    [sym_number] = ACTIONS(141),
    [sym_upper_ident] = ACTIONS(139),
    [sym_lower_ident] = ACTIONS(141),
  },
  [32] = {
    [ts_builtin_sym_end] = ACTIONS(143),
    [anon_sym_let] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(143),
    [anon_sym_open] = ACTIONS(145),
    [anon_sym_DQUOTE] = ACTIONS(143),
    [anon_sym_SQUOTE] = ACTIONS(143),
    [sym_float] = ACTIONS(145),
    [sym_number] = ACTIONS(147),
    [sym_upper_ident] = ACTIONS(145),
    [sym_lower_ident] = ACTIONS(147),
  },
  [33] = {
    [sym_structure_item] = STATE(11),
    [sym_str_eval] = STATE(12),
    [sym_str_value] = STATE(12),
    [sym_str_open] = STATE(12),
    [sym_expr] = STATE(13),
    [sym_exp_ident] = STATE(14),
    [sym_exp_constant] = STATE(14),
    [sym_const_char] = STATE(15),
    [sym_const_string] = STATE(15),
    [sym_const_integer] = STATE(15),
    [sym_const_float] = STATE(15),
    [sym_string] = STATE(16),
    [sym_char] = STATE(17),
    [sym_ident] = STATE(18),
    [aux_sym_program_repeat1] = STATE(33),
    [ts_builtin_sym_end] = ACTIONS(149),
    [anon_sym_let] = ACTIONS(151),
    [anon_sym_open] = ACTIONS(154),
    [anon_sym_DQUOTE] = ACTIONS(157),
    [anon_sym_SQUOTE] = ACTIONS(160),
    [sym_float] = ACTIONS(163),
    [sym_number] = ACTIONS(166),
    [sym_upper_ident] = ACTIONS(169),
    [sym_lower_ident] = ACTIONS(172),
  },
  [34] = {
    [anon_sym_SEMI] = ACTIONS(175),
  },
  [35] = {
    [ts_builtin_sym_end] = ACTIONS(177),
    [anon_sym_let] = ACTIONS(179),
    [anon_sym_open] = ACTIONS(179),
    [anon_sym_DQUOTE] = ACTIONS(177),
    [anon_sym_SQUOTE] = ACTIONS(177),
    [sym_float] = ACTIONS(179),
    [sym_number] = ACTIONS(181),
    [sym_upper_ident] = ACTIONS(179),
    [sym_lower_ident] = ACTIONS(181),
  },
  [36] = {
    [sym_expr] = STATE(44),
    [sym_exp_ident] = STATE(14),
    [sym_exp_constant] = STATE(14),
    [sym_const_char] = STATE(15),
    [sym_const_string] = STATE(15),
    [sym_const_integer] = STATE(15),
    [sym_const_float] = STATE(15),
    [sym_string] = STATE(16),
    [sym_char] = STATE(17),
    [sym_ident] = STATE(18),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [sym_float] = ACTIONS(183),
    [sym_number] = ACTIONS(185),
    [sym_upper_ident] = ACTIONS(23),
    [sym_lower_ident] = ACTIONS(23),
  },
  [37] = {
    [ts_builtin_sym_end] = ACTIONS(187),
    [anon_sym_let] = ACTIONS(189),
    [anon_sym_open] = ACTIONS(189),
    [anon_sym_DQUOTE] = ACTIONS(187),
    [anon_sym_SQUOTE] = ACTIONS(187),
    [sym_float] = ACTIONS(189),
    [sym_number] = ACTIONS(191),
    [sym_upper_ident] = ACTIONS(189),
    [sym_lower_ident] = ACTIONS(191),
  },
  [38] = {
    [ts_builtin_sym_end] = ACTIONS(193),
    [anon_sym_let] = ACTIONS(195),
    [anon_sym_SEMI] = ACTIONS(193),
    [anon_sym_open] = ACTIONS(195),
    [anon_sym_DQUOTE] = ACTIONS(193),
    [anon_sym_SQUOTE] = ACTIONS(193),
    [sym_float] = ACTIONS(195),
    [sym_number] = ACTIONS(197),
    [sym_upper_ident] = ACTIONS(195),
    [sym_lower_ident] = ACTIONS(197),
  },
  [39] = {
    [aux_sym_string_repeat1] = STATE(39),
    [anon_sym_DQUOTE] = ACTIONS(199),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_DQUOTE_BSLASHn_RBRACK_SLASH] = ACTIONS(201),
    [aux_sym_SLASH_BSLASH_BSLASH_LPAREN_DOT_PIPE_BSLASHn_RPAREN_SLASH] = ACTIONS(201),
  },
  [40] = {
    [ts_builtin_sym_end] = ACTIONS(204),
    [anon_sym_let] = ACTIONS(206),
    [anon_sym_SEMI] = ACTIONS(204),
    [anon_sym_open] = ACTIONS(206),
    [anon_sym_DQUOTE] = ACTIONS(204),
    [anon_sym_SQUOTE] = ACTIONS(204),
    [sym_float] = ACTIONS(206),
    [sym_number] = ACTIONS(208),
    [sym_upper_ident] = ACTIONS(206),
    [sym_lower_ident] = ACTIONS(208),
  },
  [41] = {
    [ts_builtin_sym_end] = ACTIONS(210),
    [anon_sym_let] = ACTIONS(212),
    [anon_sym_open] = ACTIONS(212),
    [anon_sym_DQUOTE] = ACTIONS(210),
    [anon_sym_SQUOTE] = ACTIONS(210),
    [sym_float] = ACTIONS(212),
    [sym_number] = ACTIONS(214),
    [sym_upper_ident] = ACTIONS(212),
    [sym_lower_ident] = ACTIONS(214),
  },
  [42] = {
    [anon_sym_SEMI] = ACTIONS(39),
    [aux_sym_SLASH_LBRACKG_DASHZg_DASHz_RBRACK_SLASH] = ACTIONS(216),
  },
  [43] = {
    [anon_sym_SEMI] = ACTIONS(47),
    [aux_sym_SLASH_LBRACKG_DASHZg_DASHz_RBRACK_SLASH] = ACTIONS(218),
  },
  [44] = {
    [anon_sym_SEMI] = ACTIONS(220),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false, .depends_on_lookahead = false},
  [1] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(),
  [5] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, RECOVER(),
  [7] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program, 0),
  [9] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(2),
  [11] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(3),
  [13] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(4),
  [15] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(5),
  [17] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(6),
  [19] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(7),
  [21] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(8),
  [23] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(9),
  [25] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(9),
  [27] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program, 1),
  [29] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(21),
  [31] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(22),
  [33] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(27),
  [35] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(28),
  [37] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(30),
  [39] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_const_float, 1),
  [41] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_const_float, 1),
  [43] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(31),
  [45] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_const_float, 1),
  [47] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_const_integer, 1),
  [49] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_const_integer, 1),
  [51] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(32),
  [53] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_const_integer, 1),
  [55] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_ident, 1),
  [57] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_ident, 1),
  [59] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_ident, 1),
  [61] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
  [63] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 1),
  [65] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 1),
  [67] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 1),
  [69] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_structure_item, 1),
  [71] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_structure_item, 1),
  [73] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_structure_item, 1),
  [75] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_str_eval, 1),
  [77] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_str_eval, 1),
  [79] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_str_eval, 1),
  [81] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expr, 1),
  [83] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_expr, 1),
  [85] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_expr, 1),
  [87] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_exp_constant, 1),
  [89] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_exp_constant, 1),
  [91] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_exp_constant, 1),
  [93] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_const_string, 1),
  [95] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_const_string, 1),
  [97] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_const_string, 1),
  [99] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_const_char, 1),
  [101] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_const_char, 1),
  [103] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_const_char, 1),
  [105] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_exp_ident, 1),
  [107] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_exp_ident, 1),
  [109] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_exp_ident, 1),
  [111] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program, 2),
  [113] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(22),
  [115] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_pat_var, 1),
  [117] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(35),
  [119] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(36),
  [121] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_pattern, 1),
  [123] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(37),
  [125] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_string, 2),
  [127] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_string, 2),
  [129] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_string, 2),
  [131] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_string_repeat1, 1),
  [133] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(38),
  [135] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(40),
  [137] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_const_float, 2),
  [139] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_const_float, 2),
  [141] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_const_float, 2),
  [143] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_const_integer, 2),
  [145] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_const_integer, 2),
  [147] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_const_integer, 2),
  [149] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2),
  [151] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(3),
  [154] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(4),
  [157] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(5),
  [160] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(6),
  [163] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(7),
  [166] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(8),
  [169] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(9),
  [172] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(9),
  [175] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(41),
  [177] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_str_value, 3),
  [179] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_str_value, 3),
  [181] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_str_value, 3),
  [183] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(42),
  [185] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(43),
  [187] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_str_open, 3),
  [189] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_str_open, 3),
  [191] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_str_open, 3),
  [193] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_string, 3),
  [195] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_string, 3),
  [197] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_string, 3),
  [199] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_string_repeat1, 2),
  [201] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(28),
  [204] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_char, 3),
  [206] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_char, 3),
  [208] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_char, 3),
  [210] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_str_value, 4),
  [212] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_str_value, 4),
  [214] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_str_value, 4),
  [216] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(31),
  [218] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(32),
  [220] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_value_binding, 3),
};

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_reason() {
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
