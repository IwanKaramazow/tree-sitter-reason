#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 5
#define STATE_COUNT 127
#define SYMBOL_COUNT 43
#define ALIAS_COUNT 0
#define TOKEN_COUNT 20
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  sym_hash_bang_line = 1,
  anon_sym_let = 2,
  anon_sym_rec = 3,
  anon_sym_and = 4,
  anon_sym_open = 5,
  anon_sym_SEMI = 6,
  anon_sym_EQ = 7,
  anon_sym_LBRACE = 8,
  anon_sym_RBRACE = 9,
  aux_sym_SLASH_LBRACKG_DASHZg_DASHz_RBRACK_SLASH = 10,
  anon_sym_DQUOTE = 11,
  aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_DQUOTE_BSLASHn_RBRACK_SLASH = 12,
  aux_sym_SLASH_BSLASH_BSLASH_LPAREN_DOT_PIPE_BSLASHn_RPAREN_SLASH = 13,
  anon_sym_SQUOTE = 14,
  aux_sym_SLASH_LBRACKA_DASHZa_DASHz0_DASH9_RBRACK_SLASH = 15,
  sym_number = 16,
  sym_float = 17,
  sym_upper_ident = 18,
  sym_lower_ident = 19,
  sym_program = 20,
  sym_structure_item = 21,
  sym_str_eval = 22,
  sym_str_value = 23,
  sym_str_open = 24,
  sym_value_binding = 25,
  sym_pattern = 26,
  sym_pat_var = 27,
  sym_braced_expr = 28,
  sym_expr = 29,
  sym_exp_ident = 30,
  sym_exp_let = 31,
  sym_exp_constant = 32,
  sym_const_char = 33,
  sym_const_string = 34,
  sym_const_integer = 35,
  sym_const_float = 36,
  sym_string = 37,
  sym_char = 38,
  sym_ident = 39,
  aux_sym_program_repeat1 = 40,
  aux_sym_str_value_repeat1 = 41,
  aux_sym_string_repeat1 = 42,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [sym_hash_bang_line] = "hash_bang_line",
  [anon_sym_let] = "let",
  [anon_sym_rec] = "rec",
  [anon_sym_and] = "and",
  [anon_sym_open] = "open",
  [anon_sym_SEMI] = ";",
  [anon_sym_EQ] = "=",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [aux_sym_SLASH_LBRACKG_DASHZg_DASHz_RBRACK_SLASH] = "/[G-Zg-z]/",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_DQUOTE_BSLASHn_RBRACK_SLASH] = "/[^\\\\\"\\n]/",
  [aux_sym_SLASH_BSLASH_BSLASH_LPAREN_DOT_PIPE_BSLASHn_RPAREN_SLASH] = "/\\\\(.|\\n)/",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_SLASH_LBRACKA_DASHZa_DASHz0_DASH9_RBRACK_SLASH] = "/[A-Za-z0-9]/",
  [sym_number] = "number",
  [sym_float] = "float",
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
  [sym_braced_expr] = "braced_expr",
  [sym_expr] = "expr",
  [sym_exp_ident] = "exp_ident",
  [sym_exp_let] = "exp_let",
  [sym_exp_constant] = "exp_constant",
  [sym_const_char] = "const_char",
  [sym_const_string] = "const_string",
  [sym_const_integer] = "const_integer",
  [sym_const_float] = "const_float",
  [sym_string] = "string",
  [sym_char] = "char",
  [sym_ident] = "ident",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_str_value_repeat1] = "str_value_repeat1",
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
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_open] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
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
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_float] = {
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
  [sym_braced_expr] = {
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
  [sym_exp_let] = {
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
  [aux_sym_str_value_repeat1] = {
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
      if (lookahead == 'a')
        ADVANCE(10);
      if (lookahead == 'l')
        ADVANCE(14);
      if (lookahead == 'o')
        ADVANCE(17);
      if (lookahead == '{')
        ADVANCE(21);
      if (lookahead == '}')
        ADVANCE(22);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(24);
      if (('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(29);
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
      if (lookahead == 'n')
        ADVANCE(11);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_lower_ident);
      if (lookahead == 'd')
        ADVANCE(12);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_and);
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
      if (lookahead == 'e')
        ADVANCE(15);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_lower_ident);
      if (lookahead == 't')
        ADVANCE(16);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_let);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_lower_ident);
      if (lookahead == 'p')
        ADVANCE(18);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_lower_ident);
      if (lookahead == 'e')
        ADVANCE(19);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_lower_ident);
      if (lookahead == 'n')
        ADVANCE(20);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_open);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 23:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(24);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.')
        ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(24);
      END_STATE();
    case 25:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(26);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'e')
        ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/')
        ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(28);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_upper_ident);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 30:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '\'')
        ADVANCE(5);
      if (lookahead == 'l')
        ADVANCE(14);
      if (lookahead == 'o')
        ADVANCE(17);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(30);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(24);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(29);
      END_STATE();
    case 31:
      if (lookahead == 'r')
        ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(31);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_lower_ident);
      if (lookahead == 'e')
        ADVANCE(33);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_lower_ident);
      if (lookahead == 'c')
        ADVANCE(34);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_rec);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 35:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(35);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(29);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 36:
      if (lookahead == '\n')
        SKIP(36);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '\\')
        ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(37);
      if (lookahead != 0)
        ADVANCE(37);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_DQUOTE_BSLASHn_RBRACK_SLASH);
      END_STATE();
    case 38:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(39);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKA_DASHZa_DASHz0_DASH9_RBRACK_SLASH);
      END_STATE();
    case 40:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '\'')
        ADVANCE(5);
      if (lookahead == 'l')
        ADVANCE(41);
      if (lookahead == 'o')
        ADVANCE(42);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(40);
      if (('A' <= lookahead && lookahead <= 'F'))
        ADVANCE(29);
      if (('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(24);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(43);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(44);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKG_DASHZg_DASHz_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(15);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKG_DASHZg_DASHz_RBRACK_SLASH);
      if (lookahead == 'p')
        ADVANCE(18);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKG_DASHZg_DASHz_RBRACK_SLASH);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKG_DASHZg_DASHz_RBRACK_SLASH);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 45:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '\'')
        ADVANCE(5);
      if (lookahead == ';')
        ADVANCE(6);
      if (lookahead == 'l')
        ADVANCE(14);
      if (lookahead == 'o')
        ADVANCE(17);
      if (lookahead == '}')
        ADVANCE(22);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(45);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(24);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(29);
      END_STATE();
    case 46:
      if (lookahead == '=')
        ADVANCE(7);
      if (lookahead == '}')
        ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(46);
      END_STATE();
    case 47:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '\'')
        ADVANCE(5);
      if (lookahead == 'a')
        ADVANCE(10);
      if (lookahead == 'l')
        ADVANCE(14);
      if (lookahead == 'o')
        ADVANCE(17);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(47);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(24);
      if (('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(29);
      END_STATE();
    case 48:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '\'')
        ADVANCE(5);
      if (lookahead == ';')
        ADVANCE(6);
      if (lookahead == 'l')
        ADVANCE(14);
      if (lookahead == 'o')
        ADVANCE(17);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(48);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(24);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(29);
      END_STATE();
    case 49:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '\'')
        ADVANCE(5);
      if (lookahead == 'l')
        ADVANCE(14);
      if (lookahead == '{')
        ADVANCE(21);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(49);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(24);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(29);
      END_STATE();
    case 50:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '\'')
        ADVANCE(5);
      if (lookahead == 'a')
        ADVANCE(10);
      if (lookahead == 'l')
        ADVANCE(14);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(50);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(24);
      if (('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(29);
      END_STATE();
    case 51:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '\'')
        ADVANCE(5);
      if (lookahead == 'a')
        ADVANCE(10);
      if (lookahead == 'l')
        ADVANCE(41);
      if (lookahead == 'o')
        ADVANCE(42);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(51);
      if (('b' <= lookahead && lookahead <= 'f'))
        ADVANCE(13);
      if (('A' <= lookahead && lookahead <= 'F'))
        ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(24);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(43);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(44);
      END_STATE();
    case 52:
      if (lookahead == '}')
        ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(52);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(53);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKG_DASHZg_DASHz_RBRACK_SLASH);
      END_STATE();
    case 54:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '\'')
        ADVANCE(5);
      if (lookahead == 'a')
        ADVANCE(10);
      if (lookahead == 'l')
        ADVANCE(41);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(54);
      if (('b' <= lookahead && lookahead <= 'f'))
        ADVANCE(13);
      if (('A' <= lookahead && lookahead <= 'F'))
        ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(24);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(43);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(44);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 30},
  [2] = {.lex_state = 30},
  [3] = {.lex_state = 31},
  [4] = {.lex_state = 35},
  [5] = {.lex_state = 36},
  [6] = {.lex_state = 38},
  [7] = {.lex_state = 40},
  [8] = {.lex_state = 40},
  [9] = {.lex_state = 45},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 30},
  [12] = {.lex_state = 30},
  [13] = {.lex_state = 30},
  [14] = {.lex_state = 45},
  [15] = {.lex_state = 45},
  [16] = {.lex_state = 45},
  [17] = {.lex_state = 45},
  [18] = {.lex_state = 45},
  [19] = {.lex_state = 30},
  [20] = {.lex_state = 30},
  [21] = {.lex_state = 35},
  [22] = {.lex_state = 46},
  [23] = {.lex_state = 47},
  [24] = {.lex_state = 46},
  [25] = {.lex_state = 46},
  [26] = {.lex_state = 48},
  [27] = {.lex_state = 45},
  [28] = {.lex_state = 36},
  [29] = {.lex_state = 36},
  [30] = {.lex_state = 30},
  [31] = {.lex_state = 45},
  [32] = {.lex_state = 45},
  [33] = {.lex_state = 30},
  [34] = {.lex_state = 47},
  [35] = {.lex_state = 31},
  [36] = {.lex_state = 35},
  [37] = {.lex_state = 45},
  [38] = {.lex_state = 47},
  [39] = {.lex_state = 49},
  [40] = {.lex_state = 30},
  [41] = {.lex_state = 45},
  [42] = {.lex_state = 36},
  [43] = {.lex_state = 45},
  [44] = {.lex_state = 45},
  [45] = {.lex_state = 47},
  [46] = {.lex_state = 35},
  [47] = {.lex_state = 50},
  [48] = {.lex_state = 46},
  [49] = {.lex_state = 47},
  [50] = {.lex_state = 47},
  [51] = {.lex_state = 31},
  [52] = {.lex_state = 49},
  [53] = {.lex_state = 36},
  [54] = {.lex_state = 38},
  [55] = {.lex_state = 51},
  [56] = {.lex_state = 51},
  [57] = {.lex_state = 47},
  [58] = {.lex_state = 47},
  [59] = {.lex_state = 47},
  [60] = {.lex_state = 47},
  [61] = {.lex_state = 47},
  [62] = {.lex_state = 47},
  [63] = {.lex_state = 47},
  [64] = {.lex_state = 45},
  [65] = {.lex_state = 50},
  [66] = {.lex_state = 35},
  [67] = {.lex_state = 50},
  [68] = {.lex_state = 49},
  [69] = {.lex_state = 35},
  [70] = {.lex_state = 50},
  [71] = {.lex_state = 31},
  [72] = {.lex_state = 52},
  [73] = {.lex_state = 52},
  [74] = {.lex_state = 46},
  [75] = {.lex_state = 47},
  [76] = {.lex_state = 36},
  [77] = {.lex_state = 30},
  [78] = {.lex_state = 47},
  [79] = {.lex_state = 47},
  [80] = {.lex_state = 50},
  [81] = {.lex_state = 50},
  [82] = {.lex_state = 50},
  [83] = {.lex_state = 31},
  [84] = {.lex_state = 49},
  [85] = {.lex_state = 36},
  [86] = {.lex_state = 38},
  [87] = {.lex_state = 54},
  [88] = {.lex_state = 54},
  [89] = {.lex_state = 50},
  [90] = {.lex_state = 50},
  [91] = {.lex_state = 50},
  [92] = {.lex_state = 50},
  [93] = {.lex_state = 50},
  [94] = {.lex_state = 50},
  [95] = {.lex_state = 50},
  [96] = {.lex_state = 50},
  [97] = {.lex_state = 47},
  [98] = {.lex_state = 50},
  [99] = {.lex_state = 35},
  [100] = {.lex_state = 50},
  [101] = {.lex_state = 47},
  [102] = {.lex_state = 47},
  [103] = {.lex_state = 47},
  [104] = {.lex_state = 35},
  [105] = {.lex_state = 50},
  [106] = {.lex_state = 46},
  [107] = {.lex_state = 50},
  [108] = {.lex_state = 36},
  [109] = {.lex_state = 30},
  [110] = {.lex_state = 50},
  [111] = {.lex_state = 50},
  [112] = {.lex_state = 47},
  [113] = {.lex_state = 50},
  [114] = {.lex_state = 50},
  [115] = {.lex_state = 50},
  [116] = {.lex_state = 50},
  [117] = {.lex_state = 50},
  [118] = {.lex_state = 50},
  [119] = {.lex_state = 50},
  [120] = {.lex_state = 50},
  [121] = {.lex_state = 50},
  [122] = {.lex_state = 47},
  [123] = {.lex_state = 50},
  [124] = {.lex_state = 50},
  [125] = {.lex_state = 50},
  [126] = {.lex_state = 50},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_hash_bang_line] = ACTIONS(3),
    [anon_sym_let] = ACTIONS(3),
    [anon_sym_and] = ACTIONS(3),
    [anon_sym_open] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [aux_sym_SLASH_BSLASH_BSLASH_LPAREN_DOT_PIPE_BSLASHn_RPAREN_SLASH] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [sym_number] = ACTIONS(3),
    [sym_float] = ACTIONS(3),
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
    [sym_exp_let] = STATE(14),
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
    [sym_number] = ACTIONS(19),
    [sym_float] = ACTIONS(21),
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
    [sym_exp_let] = STATE(14),
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
    [sym_number] = ACTIONS(19),
    [sym_float] = ACTIONS(21),
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
    [sym_number] = ACTIONS(41),
    [sym_float] = ACTIONS(41),
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
    [sym_number] = ACTIONS(49),
    [sym_float] = ACTIONS(49),
    [sym_upper_ident] = ACTIONS(53),
    [sym_lower_ident] = ACTIONS(53),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(55),
    [anon_sym_let] = ACTIONS(57),
    [anon_sym_open] = ACTIONS(57),
    [anon_sym_SEMI] = ACTIONS(55),
    [anon_sym_RBRACE] = ACTIONS(55),
    [anon_sym_DQUOTE] = ACTIONS(55),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [sym_number] = ACTIONS(57),
    [sym_float] = ACTIONS(57),
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
    [sym_number] = ACTIONS(65),
    [sym_float] = ACTIONS(65),
    [sym_upper_ident] = ACTIONS(65),
    [sym_lower_ident] = ACTIONS(67),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(69),
    [anon_sym_let] = ACTIONS(71),
    [anon_sym_open] = ACTIONS(71),
    [anon_sym_DQUOTE] = ACTIONS(69),
    [anon_sym_SQUOTE] = ACTIONS(69),
    [sym_number] = ACTIONS(71),
    [sym_float] = ACTIONS(71),
    [sym_upper_ident] = ACTIONS(71),
    [sym_lower_ident] = ACTIONS(73),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(75),
    [anon_sym_let] = ACTIONS(77),
    [anon_sym_open] = ACTIONS(77),
    [anon_sym_DQUOTE] = ACTIONS(75),
    [anon_sym_SQUOTE] = ACTIONS(75),
    [sym_number] = ACTIONS(77),
    [sym_float] = ACTIONS(77),
    [sym_upper_ident] = ACTIONS(77),
    [sym_lower_ident] = ACTIONS(79),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(81),
    [anon_sym_let] = ACTIONS(83),
    [anon_sym_open] = ACTIONS(83),
    [anon_sym_RBRACE] = ACTIONS(81),
    [anon_sym_DQUOTE] = ACTIONS(81),
    [anon_sym_SQUOTE] = ACTIONS(81),
    [sym_number] = ACTIONS(83),
    [sym_float] = ACTIONS(83),
    [sym_upper_ident] = ACTIONS(83),
    [sym_lower_ident] = ACTIONS(85),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(87),
    [anon_sym_let] = ACTIONS(89),
    [anon_sym_open] = ACTIONS(89),
    [anon_sym_RBRACE] = ACTIONS(87),
    [anon_sym_DQUOTE] = ACTIONS(87),
    [anon_sym_SQUOTE] = ACTIONS(87),
    [sym_number] = ACTIONS(89),
    [sym_float] = ACTIONS(89),
    [sym_upper_ident] = ACTIONS(89),
    [sym_lower_ident] = ACTIONS(91),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(93),
    [anon_sym_let] = ACTIONS(95),
    [anon_sym_open] = ACTIONS(95),
    [anon_sym_RBRACE] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(93),
    [sym_number] = ACTIONS(95),
    [sym_float] = ACTIONS(95),
    [sym_upper_ident] = ACTIONS(95),
    [sym_lower_ident] = ACTIONS(97),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(99),
    [anon_sym_let] = ACTIONS(101),
    [anon_sym_open] = ACTIONS(101),
    [anon_sym_RBRACE] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(99),
    [sym_number] = ACTIONS(101),
    [sym_float] = ACTIONS(101),
    [sym_upper_ident] = ACTIONS(101),
    [sym_lower_ident] = ACTIONS(103),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(105),
    [anon_sym_let] = ACTIONS(107),
    [anon_sym_open] = ACTIONS(107),
    [anon_sym_RBRACE] = ACTIONS(105),
    [anon_sym_DQUOTE] = ACTIONS(105),
    [anon_sym_SQUOTE] = ACTIONS(105),
    [sym_number] = ACTIONS(107),
    [sym_float] = ACTIONS(107),
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
    [sym_exp_let] = STATE(14),
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
    [sym_number] = ACTIONS(19),
    [sym_float] = ACTIONS(21),
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
    [sym_exp_let] = STATE(14),
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
    [sym_number] = ACTIONS(19),
    [sym_float] = ACTIONS(21),
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
    [sym_expr] = STATE(37),
    [sym_exp_ident] = STATE(14),
    [sym_exp_let] = STATE(14),
    [sym_exp_constant] = STATE(14),
    [sym_const_char] = STATE(15),
    [sym_const_string] = STATE(15),
    [sym_const_integer] = STATE(15),
    [sym_const_float] = STATE(15),
    [sym_string] = STATE(16),
    [sym_char] = STATE(17),
    [sym_ident] = STATE(18),
    [aux_sym_str_value_repeat1] = STATE(38),
    [ts_builtin_sym_end] = ACTIONS(117),
    [anon_sym_let] = ACTIONS(119),
    [anon_sym_and] = ACTIONS(121),
    [anon_sym_open] = ACTIONS(119),
    [anon_sym_DQUOTE] = ACTIONS(117),
    [anon_sym_SQUOTE] = ACTIONS(117),
    [sym_number] = ACTIONS(119),
    [sym_float] = ACTIONS(119),
    [sym_upper_ident] = ACTIONS(119),
    [sym_lower_ident] = ACTIONS(123),
  },
  [24] = {
    [anon_sym_EQ] = ACTIONS(125),
  },
  [25] = {
    [anon_sym_EQ] = ACTIONS(127),
  },
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(129),
    [anon_sym_let] = ACTIONS(131),
    [anon_sym_open] = ACTIONS(131),
    [anon_sym_SEMI] = ACTIONS(133),
    [anon_sym_DQUOTE] = ACTIONS(129),
    [anon_sym_SQUOTE] = ACTIONS(129),
    [sym_number] = ACTIONS(131),
    [sym_float] = ACTIONS(131),
    [sym_upper_ident] = ACTIONS(131),
    [sym_lower_ident] = ACTIONS(135),
  },
  [27] = {
    [ts_builtin_sym_end] = ACTIONS(137),
    [anon_sym_let] = ACTIONS(139),
    [anon_sym_open] = ACTIONS(139),
    [anon_sym_RBRACE] = ACTIONS(137),
    [anon_sym_DQUOTE] = ACTIONS(137),
    [anon_sym_SQUOTE] = ACTIONS(137),
    [sym_number] = ACTIONS(139),
    [sym_float] = ACTIONS(139),
    [sym_upper_ident] = ACTIONS(139),
    [sym_lower_ident] = ACTIONS(141),
  },
  [28] = {
    [anon_sym_DQUOTE] = ACTIONS(143),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_DQUOTE_BSLASHn_RBRACK_SLASH] = ACTIONS(143),
    [aux_sym_SLASH_BSLASH_BSLASH_LPAREN_DOT_PIPE_BSLASHn_RPAREN_SLASH] = ACTIONS(143),
  },
  [29] = {
    [aux_sym_string_repeat1] = STATE(42),
    [anon_sym_DQUOTE] = ACTIONS(145),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_DQUOTE_BSLASHn_RBRACK_SLASH] = ACTIONS(35),
    [aux_sym_SLASH_BSLASH_BSLASH_LPAREN_DOT_PIPE_BSLASHn_RPAREN_SLASH] = ACTIONS(35),
  },
  [30] = {
    [anon_sym_SQUOTE] = ACTIONS(147),
  },
  [31] = {
    [ts_builtin_sym_end] = ACTIONS(149),
    [anon_sym_let] = ACTIONS(151),
    [anon_sym_open] = ACTIONS(151),
    [anon_sym_RBRACE] = ACTIONS(149),
    [anon_sym_DQUOTE] = ACTIONS(149),
    [anon_sym_SQUOTE] = ACTIONS(149),
    [sym_number] = ACTIONS(151),
    [sym_float] = ACTIONS(151),
    [sym_upper_ident] = ACTIONS(151),
    [sym_lower_ident] = ACTIONS(153),
  },
  [32] = {
    [ts_builtin_sym_end] = ACTIONS(155),
    [anon_sym_let] = ACTIONS(157),
    [anon_sym_open] = ACTIONS(157),
    [anon_sym_RBRACE] = ACTIONS(155),
    [anon_sym_DQUOTE] = ACTIONS(155),
    [anon_sym_SQUOTE] = ACTIONS(155),
    [sym_number] = ACTIONS(157),
    [sym_float] = ACTIONS(157),
    [sym_upper_ident] = ACTIONS(157),
    [sym_lower_ident] = ACTIONS(159),
  },
  [33] = {
    [sym_structure_item] = STATE(11),
    [sym_str_eval] = STATE(12),
    [sym_str_value] = STATE(12),
    [sym_str_open] = STATE(12),
    [sym_expr] = STATE(13),
    [sym_exp_ident] = STATE(14),
    [sym_exp_let] = STATE(14),
    [sym_exp_constant] = STATE(14),
    [sym_const_char] = STATE(15),
    [sym_const_string] = STATE(15),
    [sym_const_integer] = STATE(15),
    [sym_const_float] = STATE(15),
    [sym_string] = STATE(16),
    [sym_char] = STATE(17),
    [sym_ident] = STATE(18),
    [aux_sym_program_repeat1] = STATE(33),
    [ts_builtin_sym_end] = ACTIONS(161),
    [anon_sym_let] = ACTIONS(163),
    [anon_sym_open] = ACTIONS(166),
    [anon_sym_DQUOTE] = ACTIONS(169),
    [anon_sym_SQUOTE] = ACTIONS(172),
    [sym_number] = ACTIONS(175),
    [sym_float] = ACTIONS(178),
    [sym_upper_ident] = ACTIONS(181),
    [sym_lower_ident] = ACTIONS(184),
  },
  [34] = {
    [sym_expr] = STATE(44),
    [sym_exp_ident] = STATE(14),
    [sym_exp_let] = STATE(14),
    [sym_exp_constant] = STATE(14),
    [sym_const_char] = STATE(15),
    [sym_const_string] = STATE(15),
    [sym_const_integer] = STATE(15),
    [sym_const_float] = STATE(15),
    [sym_string] = STATE(16),
    [sym_char] = STATE(17),
    [sym_ident] = STATE(18),
    [aux_sym_str_value_repeat1] = STATE(45),
    [ts_builtin_sym_end] = ACTIONS(187),
    [anon_sym_let] = ACTIONS(189),
    [anon_sym_and] = ACTIONS(121),
    [anon_sym_open] = ACTIONS(189),
    [anon_sym_DQUOTE] = ACTIONS(187),
    [anon_sym_SQUOTE] = ACTIONS(187),
    [sym_number] = ACTIONS(189),
    [sym_float] = ACTIONS(189),
    [sym_upper_ident] = ACTIONS(189),
    [sym_lower_ident] = ACTIONS(191),
  },
  [35] = {
    [sym_value_binding] = STATE(47),
    [sym_pattern] = STATE(48),
    [sym_pat_var] = STATE(25),
    [anon_sym_rec] = ACTIONS(193),
    [sym_lower_ident] = ACTIONS(31),
  },
  [36] = {
    [sym_value_binding] = STATE(49),
    [sym_pattern] = STATE(24),
    [sym_pat_var] = STATE(25),
    [sym_lower_ident] = ACTIONS(113),
  },
  [37] = {
    [ts_builtin_sym_end] = ACTIONS(195),
    [anon_sym_let] = ACTIONS(197),
    [anon_sym_open] = ACTIONS(197),
    [anon_sym_RBRACE] = ACTIONS(195),
    [anon_sym_DQUOTE] = ACTIONS(195),
    [anon_sym_SQUOTE] = ACTIONS(195),
    [sym_number] = ACTIONS(197),
    [sym_float] = ACTIONS(197),
    [sym_upper_ident] = ACTIONS(197),
    [sym_lower_ident] = ACTIONS(199),
  },
  [38] = {
    [sym_expr] = STATE(44),
    [sym_exp_ident] = STATE(14),
    [sym_exp_let] = STATE(14),
    [sym_exp_constant] = STATE(14),
    [sym_const_char] = STATE(15),
    [sym_const_string] = STATE(15),
    [sym_const_integer] = STATE(15),
    [sym_const_float] = STATE(15),
    [sym_string] = STATE(16),
    [sym_char] = STATE(17),
    [sym_ident] = STATE(18),
    [aux_sym_str_value_repeat1] = STATE(50),
    [ts_builtin_sym_end] = ACTIONS(187),
    [anon_sym_let] = ACTIONS(189),
    [anon_sym_and] = ACTIONS(121),
    [anon_sym_open] = ACTIONS(189),
    [anon_sym_DQUOTE] = ACTIONS(187),
    [anon_sym_SQUOTE] = ACTIONS(187),
    [sym_number] = ACTIONS(189),
    [sym_float] = ACTIONS(189),
    [sym_upper_ident] = ACTIONS(189),
    [sym_lower_ident] = ACTIONS(191),
  },
  [39] = {
    [sym_braced_expr] = STATE(58),
    [sym_expr] = STATE(58),
    [sym_exp_ident] = STATE(59),
    [sym_exp_let] = STATE(59),
    [sym_exp_constant] = STATE(59),
    [sym_const_char] = STATE(60),
    [sym_const_string] = STATE(60),
    [sym_const_integer] = STATE(60),
    [sym_const_float] = STATE(60),
    [sym_string] = STATE(61),
    [sym_char] = STATE(62),
    [sym_ident] = STATE(63),
    [anon_sym_let] = ACTIONS(201),
    [anon_sym_LBRACE] = ACTIONS(203),
    [anon_sym_DQUOTE] = ACTIONS(205),
    [anon_sym_SQUOTE] = ACTIONS(207),
    [sym_number] = ACTIONS(209),
    [sym_float] = ACTIONS(211),
    [sym_upper_ident] = ACTIONS(213),
    [sym_lower_ident] = ACTIONS(215),
  },
  [40] = {
    [ts_builtin_sym_end] = ACTIONS(217),
    [anon_sym_let] = ACTIONS(219),
    [anon_sym_open] = ACTIONS(219),
    [anon_sym_DQUOTE] = ACTIONS(217),
    [anon_sym_SQUOTE] = ACTIONS(217),
    [sym_number] = ACTIONS(219),
    [sym_float] = ACTIONS(219),
    [sym_upper_ident] = ACTIONS(219),
    [sym_lower_ident] = ACTIONS(221),
  },
  [41] = {
    [ts_builtin_sym_end] = ACTIONS(223),
    [anon_sym_let] = ACTIONS(225),
    [anon_sym_open] = ACTIONS(225),
    [anon_sym_RBRACE] = ACTIONS(223),
    [anon_sym_DQUOTE] = ACTIONS(223),
    [anon_sym_SQUOTE] = ACTIONS(223),
    [sym_number] = ACTIONS(225),
    [sym_float] = ACTIONS(225),
    [sym_upper_ident] = ACTIONS(225),
    [sym_lower_ident] = ACTIONS(227),
  },
  [42] = {
    [aux_sym_string_repeat1] = STATE(42),
    [anon_sym_DQUOTE] = ACTIONS(229),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_DQUOTE_BSLASHn_RBRACK_SLASH] = ACTIONS(231),
    [aux_sym_SLASH_BSLASH_BSLASH_LPAREN_DOT_PIPE_BSLASHn_RPAREN_SLASH] = ACTIONS(231),
  },
  [43] = {
    [ts_builtin_sym_end] = ACTIONS(234),
    [anon_sym_let] = ACTIONS(236),
    [anon_sym_open] = ACTIONS(236),
    [anon_sym_RBRACE] = ACTIONS(234),
    [anon_sym_DQUOTE] = ACTIONS(234),
    [anon_sym_SQUOTE] = ACTIONS(234),
    [sym_number] = ACTIONS(236),
    [sym_float] = ACTIONS(236),
    [sym_upper_ident] = ACTIONS(236),
    [sym_lower_ident] = ACTIONS(238),
  },
  [44] = {
    [ts_builtin_sym_end] = ACTIONS(240),
    [anon_sym_let] = ACTIONS(242),
    [anon_sym_open] = ACTIONS(242),
    [anon_sym_RBRACE] = ACTIONS(240),
    [anon_sym_DQUOTE] = ACTIONS(240),
    [anon_sym_SQUOTE] = ACTIONS(240),
    [sym_number] = ACTIONS(242),
    [sym_float] = ACTIONS(242),
    [sym_upper_ident] = ACTIONS(242),
    [sym_lower_ident] = ACTIONS(244),
  },
  [45] = {
    [sym_expr] = STATE(64),
    [sym_exp_ident] = STATE(14),
    [sym_exp_let] = STATE(14),
    [sym_exp_constant] = STATE(14),
    [sym_const_char] = STATE(15),
    [sym_const_string] = STATE(15),
    [sym_const_integer] = STATE(15),
    [sym_const_float] = STATE(15),
    [sym_string] = STATE(16),
    [sym_char] = STATE(17),
    [sym_ident] = STATE(18),
    [aux_sym_str_value_repeat1] = STATE(50),
    [ts_builtin_sym_end] = ACTIONS(246),
    [anon_sym_let] = ACTIONS(248),
    [anon_sym_and] = ACTIONS(121),
    [anon_sym_open] = ACTIONS(248),
    [anon_sym_DQUOTE] = ACTIONS(246),
    [anon_sym_SQUOTE] = ACTIONS(246),
    [sym_number] = ACTIONS(248),
    [sym_float] = ACTIONS(248),
    [sym_upper_ident] = ACTIONS(248),
    [sym_lower_ident] = ACTIONS(250),
  },
  [46] = {
    [sym_value_binding] = STATE(65),
    [sym_pattern] = STATE(48),
    [sym_pat_var] = STATE(25),
    [sym_lower_ident] = ACTIONS(113),
  },
  [47] = {
    [sym_expr] = STATE(37),
    [sym_exp_ident] = STATE(14),
    [sym_exp_let] = STATE(14),
    [sym_exp_constant] = STATE(14),
    [sym_const_char] = STATE(15),
    [sym_const_string] = STATE(15),
    [sym_const_integer] = STATE(15),
    [sym_const_float] = STATE(15),
    [sym_string] = STATE(16),
    [sym_char] = STATE(17),
    [sym_ident] = STATE(18),
    [aux_sym_str_value_repeat1] = STATE(67),
    [anon_sym_let] = ACTIONS(252),
    [anon_sym_and] = ACTIONS(254),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [sym_number] = ACTIONS(19),
    [sym_float] = ACTIONS(21),
    [sym_upper_ident] = ACTIONS(23),
    [sym_lower_ident] = ACTIONS(25),
  },
  [48] = {
    [anon_sym_EQ] = ACTIONS(256),
  },
  [49] = {
    [ts_builtin_sym_end] = ACTIONS(258),
    [anon_sym_let] = ACTIONS(260),
    [anon_sym_and] = ACTIONS(260),
    [anon_sym_open] = ACTIONS(260),
    [anon_sym_DQUOTE] = ACTIONS(258),
    [anon_sym_SQUOTE] = ACTIONS(258),
    [sym_number] = ACTIONS(260),
    [sym_float] = ACTIONS(260),
    [sym_upper_ident] = ACTIONS(260),
    [sym_lower_ident] = ACTIONS(262),
  },
  [50] = {
    [aux_sym_str_value_repeat1] = STATE(50),
    [ts_builtin_sym_end] = ACTIONS(258),
    [anon_sym_let] = ACTIONS(260),
    [anon_sym_and] = ACTIONS(264),
    [anon_sym_open] = ACTIONS(260),
    [anon_sym_DQUOTE] = ACTIONS(258),
    [anon_sym_SQUOTE] = ACTIONS(258),
    [sym_number] = ACTIONS(260),
    [sym_float] = ACTIONS(260),
    [sym_upper_ident] = ACTIONS(260),
    [sym_lower_ident] = ACTIONS(262),
  },
  [51] = {
    [sym_value_binding] = STATE(70),
    [sym_pattern] = STATE(48),
    [sym_pat_var] = STATE(25),
    [anon_sym_rec] = ACTIONS(267),
    [sym_lower_ident] = ACTIONS(31),
  },
  [52] = {
    [sym_expr] = STATE(74),
    [sym_exp_ident] = STATE(14),
    [sym_exp_let] = STATE(14),
    [sym_exp_constant] = STATE(14),
    [sym_const_char] = STATE(15),
    [sym_const_string] = STATE(15),
    [sym_const_integer] = STATE(15),
    [sym_const_float] = STATE(15),
    [sym_string] = STATE(16),
    [sym_char] = STATE(17),
    [sym_ident] = STATE(18),
    [anon_sym_let] = ACTIONS(269),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [sym_number] = ACTIONS(271),
    [sym_float] = ACTIONS(273),
    [sym_upper_ident] = ACTIONS(23),
    [sym_lower_ident] = ACTIONS(25),
  },
  [53] = {
    [aux_sym_string_repeat1] = STATE(76),
    [anon_sym_DQUOTE] = ACTIONS(275),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_DQUOTE_BSLASHn_RBRACK_SLASH] = ACTIONS(35),
    [aux_sym_SLASH_BSLASH_BSLASH_LPAREN_DOT_PIPE_BSLASHn_RPAREN_SLASH] = ACTIONS(35),
  },
  [54] = {
    [aux_sym_SLASH_LBRACKA_DASHZa_DASHz0_DASH9_RBRACK_SLASH] = ACTIONS(277),
  },
  [55] = {
    [ts_builtin_sym_end] = ACTIONS(39),
    [anon_sym_let] = ACTIONS(41),
    [anon_sym_and] = ACTIONS(41),
    [anon_sym_open] = ACTIONS(41),
    [aux_sym_SLASH_LBRACKG_DASHZg_DASHz_RBRACK_SLASH] = ACTIONS(279),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [sym_number] = ACTIONS(41),
    [sym_float] = ACTIONS(41),
    [sym_upper_ident] = ACTIONS(45),
    [sym_lower_ident] = ACTIONS(45),
  },
  [56] = {
    [ts_builtin_sym_end] = ACTIONS(47),
    [anon_sym_let] = ACTIONS(49),
    [anon_sym_and] = ACTIONS(49),
    [anon_sym_open] = ACTIONS(49),
    [aux_sym_SLASH_LBRACKG_DASHZg_DASHz_RBRACK_SLASH] = ACTIONS(281),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [sym_number] = ACTIONS(49),
    [sym_float] = ACTIONS(49),
    [sym_upper_ident] = ACTIONS(53),
    [sym_lower_ident] = ACTIONS(53),
  },
  [57] = {
    [ts_builtin_sym_end] = ACTIONS(55),
    [anon_sym_let] = ACTIONS(57),
    [anon_sym_and] = ACTIONS(57),
    [anon_sym_open] = ACTIONS(57),
    [anon_sym_DQUOTE] = ACTIONS(55),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [sym_number] = ACTIONS(57),
    [sym_float] = ACTIONS(57),
    [sym_upper_ident] = ACTIONS(57),
    [sym_lower_ident] = ACTIONS(59),
  },
  [58] = {
    [ts_builtin_sym_end] = ACTIONS(283),
    [anon_sym_let] = ACTIONS(285),
    [anon_sym_and] = ACTIONS(285),
    [anon_sym_open] = ACTIONS(285),
    [anon_sym_DQUOTE] = ACTIONS(283),
    [anon_sym_SQUOTE] = ACTIONS(283),
    [sym_number] = ACTIONS(285),
    [sym_float] = ACTIONS(285),
    [sym_upper_ident] = ACTIONS(285),
    [sym_lower_ident] = ACTIONS(287),
  },
  [59] = {
    [ts_builtin_sym_end] = ACTIONS(81),
    [anon_sym_let] = ACTIONS(83),
    [anon_sym_and] = ACTIONS(83),
    [anon_sym_open] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(81),
    [anon_sym_SQUOTE] = ACTIONS(81),
    [sym_number] = ACTIONS(83),
    [sym_float] = ACTIONS(83),
    [sym_upper_ident] = ACTIONS(83),
    [sym_lower_ident] = ACTIONS(85),
  },
  [60] = {
    [ts_builtin_sym_end] = ACTIONS(87),
    [anon_sym_let] = ACTIONS(89),
    [anon_sym_and] = ACTIONS(89),
    [anon_sym_open] = ACTIONS(89),
    [anon_sym_DQUOTE] = ACTIONS(87),
    [anon_sym_SQUOTE] = ACTIONS(87),
    [sym_number] = ACTIONS(89),
    [sym_float] = ACTIONS(89),
    [sym_upper_ident] = ACTIONS(89),
    [sym_lower_ident] = ACTIONS(91),
  },
  [61] = {
    [ts_builtin_sym_end] = ACTIONS(93),
    [anon_sym_let] = ACTIONS(95),
    [anon_sym_and] = ACTIONS(95),
    [anon_sym_open] = ACTIONS(95),
    [anon_sym_DQUOTE] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(93),
    [sym_number] = ACTIONS(95),
    [sym_float] = ACTIONS(95),
    [sym_upper_ident] = ACTIONS(95),
    [sym_lower_ident] = ACTIONS(97),
  },
  [62] = {
    [ts_builtin_sym_end] = ACTIONS(99),
    [anon_sym_let] = ACTIONS(101),
    [anon_sym_and] = ACTIONS(101),
    [anon_sym_open] = ACTIONS(101),
    [anon_sym_DQUOTE] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(99),
    [sym_number] = ACTIONS(101),
    [sym_float] = ACTIONS(101),
    [sym_upper_ident] = ACTIONS(101),
    [sym_lower_ident] = ACTIONS(103),
  },
  [63] = {
    [ts_builtin_sym_end] = ACTIONS(105),
    [anon_sym_let] = ACTIONS(107),
    [anon_sym_and] = ACTIONS(107),
    [anon_sym_open] = ACTIONS(107),
    [anon_sym_DQUOTE] = ACTIONS(105),
    [anon_sym_SQUOTE] = ACTIONS(105),
    [sym_number] = ACTIONS(107),
    [sym_float] = ACTIONS(107),
    [sym_upper_ident] = ACTIONS(107),
    [sym_lower_ident] = ACTIONS(109),
  },
  [64] = {
    [ts_builtin_sym_end] = ACTIONS(289),
    [anon_sym_let] = ACTIONS(291),
    [anon_sym_open] = ACTIONS(291),
    [anon_sym_RBRACE] = ACTIONS(289),
    [anon_sym_DQUOTE] = ACTIONS(289),
    [anon_sym_SQUOTE] = ACTIONS(289),
    [sym_number] = ACTIONS(291),
    [sym_float] = ACTIONS(291),
    [sym_upper_ident] = ACTIONS(291),
    [sym_lower_ident] = ACTIONS(293),
  },
  [65] = {
    [sym_expr] = STATE(44),
    [sym_exp_ident] = STATE(14),
    [sym_exp_let] = STATE(14),
    [sym_exp_constant] = STATE(14),
    [sym_const_char] = STATE(15),
    [sym_const_string] = STATE(15),
    [sym_const_integer] = STATE(15),
    [sym_const_float] = STATE(15),
    [sym_string] = STATE(16),
    [sym_char] = STATE(17),
    [sym_ident] = STATE(18),
    [aux_sym_str_value_repeat1] = STATE(80),
    [anon_sym_let] = ACTIONS(252),
    [anon_sym_and] = ACTIONS(254),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [sym_number] = ACTIONS(19),
    [sym_float] = ACTIONS(21),
    [sym_upper_ident] = ACTIONS(23),
    [sym_lower_ident] = ACTIONS(25),
  },
  [66] = {
    [sym_value_binding] = STATE(81),
    [sym_pattern] = STATE(48),
    [sym_pat_var] = STATE(25),
    [sym_lower_ident] = ACTIONS(113),
  },
  [67] = {
    [sym_expr] = STATE(44),
    [sym_exp_ident] = STATE(14),
    [sym_exp_let] = STATE(14),
    [sym_exp_constant] = STATE(14),
    [sym_const_char] = STATE(15),
    [sym_const_string] = STATE(15),
    [sym_const_integer] = STATE(15),
    [sym_const_float] = STATE(15),
    [sym_string] = STATE(16),
    [sym_char] = STATE(17),
    [sym_ident] = STATE(18),
    [aux_sym_str_value_repeat1] = STATE(82),
    [anon_sym_let] = ACTIONS(252),
    [anon_sym_and] = ACTIONS(254),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [sym_number] = ACTIONS(19),
    [sym_float] = ACTIONS(21),
    [sym_upper_ident] = ACTIONS(23),
    [sym_lower_ident] = ACTIONS(25),
  },
  [68] = {
    [sym_braced_expr] = STATE(90),
    [sym_expr] = STATE(90),
    [sym_exp_ident] = STATE(91),
    [sym_exp_let] = STATE(91),
    [sym_exp_constant] = STATE(91),
    [sym_const_char] = STATE(92),
    [sym_const_string] = STATE(92),
    [sym_const_integer] = STATE(92),
    [sym_const_float] = STATE(92),
    [sym_string] = STATE(93),
    [sym_char] = STATE(94),
    [sym_ident] = STATE(95),
    [anon_sym_let] = ACTIONS(295),
    [anon_sym_LBRACE] = ACTIONS(297),
    [anon_sym_DQUOTE] = ACTIONS(299),
    [anon_sym_SQUOTE] = ACTIONS(301),
    [sym_number] = ACTIONS(303),
    [sym_float] = ACTIONS(305),
    [sym_upper_ident] = ACTIONS(307),
    [sym_lower_ident] = ACTIONS(309),
  },
  [69] = {
    [sym_value_binding] = STATE(96),
    [sym_pattern] = STATE(48),
    [sym_pat_var] = STATE(25),
    [sym_lower_ident] = ACTIONS(113),
  },
  [70] = {
    [sym_expr] = STATE(97),
    [sym_exp_ident] = STATE(59),
    [sym_exp_let] = STATE(59),
    [sym_exp_constant] = STATE(59),
    [sym_const_char] = STATE(60),
    [sym_const_string] = STATE(60),
    [sym_const_integer] = STATE(60),
    [sym_const_float] = STATE(60),
    [sym_string] = STATE(61),
    [sym_char] = STATE(62),
    [sym_ident] = STATE(63),
    [aux_sym_str_value_repeat1] = STATE(98),
    [anon_sym_let] = ACTIONS(201),
    [anon_sym_and] = ACTIONS(254),
    [anon_sym_DQUOTE] = ACTIONS(205),
    [anon_sym_SQUOTE] = ACTIONS(207),
    [sym_number] = ACTIONS(209),
    [sym_float] = ACTIONS(211),
    [sym_upper_ident] = ACTIONS(213),
    [sym_lower_ident] = ACTIONS(215),
  },
  [71] = {
    [sym_value_binding] = STATE(100),
    [sym_pattern] = STATE(48),
    [sym_pat_var] = STATE(25),
    [anon_sym_rec] = ACTIONS(311),
    [sym_lower_ident] = ACTIONS(31),
  },
  [72] = {
    [anon_sym_RBRACE] = ACTIONS(39),
    [aux_sym_SLASH_LBRACKG_DASHZg_DASHz_RBRACK_SLASH] = ACTIONS(313),
  },
  [73] = {
    [anon_sym_RBRACE] = ACTIONS(47),
    [aux_sym_SLASH_LBRACKG_DASHZg_DASHz_RBRACK_SLASH] = ACTIONS(315),
  },
  [74] = {
    [anon_sym_RBRACE] = ACTIONS(317),
  },
  [75] = {
    [ts_builtin_sym_end] = ACTIONS(137),
    [anon_sym_let] = ACTIONS(139),
    [anon_sym_and] = ACTIONS(139),
    [anon_sym_open] = ACTIONS(139),
    [anon_sym_DQUOTE] = ACTIONS(137),
    [anon_sym_SQUOTE] = ACTIONS(137),
    [sym_number] = ACTIONS(139),
    [sym_float] = ACTIONS(139),
    [sym_upper_ident] = ACTIONS(139),
    [sym_lower_ident] = ACTIONS(141),
  },
  [76] = {
    [aux_sym_string_repeat1] = STATE(42),
    [anon_sym_DQUOTE] = ACTIONS(319),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_DQUOTE_BSLASHn_RBRACK_SLASH] = ACTIONS(35),
    [aux_sym_SLASH_BSLASH_BSLASH_LPAREN_DOT_PIPE_BSLASHn_RPAREN_SLASH] = ACTIONS(35),
  },
  [77] = {
    [anon_sym_SQUOTE] = ACTIONS(321),
  },
  [78] = {
    [ts_builtin_sym_end] = ACTIONS(149),
    [anon_sym_let] = ACTIONS(151),
    [anon_sym_and] = ACTIONS(151),
    [anon_sym_open] = ACTIONS(151),
    [anon_sym_DQUOTE] = ACTIONS(149),
    [anon_sym_SQUOTE] = ACTIONS(149),
    [sym_number] = ACTIONS(151),
    [sym_float] = ACTIONS(151),
    [sym_upper_ident] = ACTIONS(151),
    [sym_lower_ident] = ACTIONS(153),
  },
  [79] = {
    [ts_builtin_sym_end] = ACTIONS(155),
    [anon_sym_let] = ACTIONS(157),
    [anon_sym_and] = ACTIONS(157),
    [anon_sym_open] = ACTIONS(157),
    [anon_sym_DQUOTE] = ACTIONS(155),
    [anon_sym_SQUOTE] = ACTIONS(155),
    [sym_number] = ACTIONS(157),
    [sym_float] = ACTIONS(157),
    [sym_upper_ident] = ACTIONS(157),
    [sym_lower_ident] = ACTIONS(159),
  },
  [80] = {
    [sym_expr] = STATE(64),
    [sym_exp_ident] = STATE(14),
    [sym_exp_let] = STATE(14),
    [sym_exp_constant] = STATE(14),
    [sym_const_char] = STATE(15),
    [sym_const_string] = STATE(15),
    [sym_const_integer] = STATE(15),
    [sym_const_float] = STATE(15),
    [sym_string] = STATE(16),
    [sym_char] = STATE(17),
    [sym_ident] = STATE(18),
    [aux_sym_str_value_repeat1] = STATE(82),
    [anon_sym_let] = ACTIONS(252),
    [anon_sym_and] = ACTIONS(254),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [sym_number] = ACTIONS(19),
    [sym_float] = ACTIONS(21),
    [sym_upper_ident] = ACTIONS(23),
    [sym_lower_ident] = ACTIONS(25),
  },
  [81] = {
    [anon_sym_let] = ACTIONS(260),
    [anon_sym_and] = ACTIONS(260),
    [anon_sym_DQUOTE] = ACTIONS(258),
    [anon_sym_SQUOTE] = ACTIONS(258),
    [sym_number] = ACTIONS(260),
    [sym_float] = ACTIONS(260),
    [sym_upper_ident] = ACTIONS(260),
    [sym_lower_ident] = ACTIONS(262),
  },
  [82] = {
    [aux_sym_str_value_repeat1] = STATE(82),
    [anon_sym_let] = ACTIONS(260),
    [anon_sym_and] = ACTIONS(323),
    [anon_sym_DQUOTE] = ACTIONS(258),
    [anon_sym_SQUOTE] = ACTIONS(258),
    [sym_number] = ACTIONS(260),
    [sym_float] = ACTIONS(260),
    [sym_upper_ident] = ACTIONS(260),
    [sym_lower_ident] = ACTIONS(262),
  },
  [83] = {
    [sym_value_binding] = STATE(105),
    [sym_pattern] = STATE(48),
    [sym_pat_var] = STATE(25),
    [anon_sym_rec] = ACTIONS(326),
    [sym_lower_ident] = ACTIONS(31),
  },
  [84] = {
    [sym_expr] = STATE(106),
    [sym_exp_ident] = STATE(14),
    [sym_exp_let] = STATE(14),
    [sym_exp_constant] = STATE(14),
    [sym_const_char] = STATE(15),
    [sym_const_string] = STATE(15),
    [sym_const_integer] = STATE(15),
    [sym_const_float] = STATE(15),
    [sym_string] = STATE(16),
    [sym_char] = STATE(17),
    [sym_ident] = STATE(18),
    [anon_sym_let] = ACTIONS(269),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [sym_number] = ACTIONS(271),
    [sym_float] = ACTIONS(273),
    [sym_upper_ident] = ACTIONS(23),
    [sym_lower_ident] = ACTIONS(25),
  },
  [85] = {
    [aux_sym_string_repeat1] = STATE(108),
    [anon_sym_DQUOTE] = ACTIONS(328),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_DQUOTE_BSLASHn_RBRACK_SLASH] = ACTIONS(35),
    [aux_sym_SLASH_BSLASH_BSLASH_LPAREN_DOT_PIPE_BSLASHn_RPAREN_SLASH] = ACTIONS(35),
  },
  [86] = {
    [aux_sym_SLASH_LBRACKA_DASHZa_DASHz0_DASH9_RBRACK_SLASH] = ACTIONS(330),
  },
  [87] = {
    [anon_sym_let] = ACTIONS(41),
    [anon_sym_and] = ACTIONS(41),
    [aux_sym_SLASH_LBRACKG_DASHZg_DASHz_RBRACK_SLASH] = ACTIONS(332),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [sym_number] = ACTIONS(41),
    [sym_float] = ACTIONS(41),
    [sym_upper_ident] = ACTIONS(45),
    [sym_lower_ident] = ACTIONS(45),
  },
  [88] = {
    [anon_sym_let] = ACTIONS(49),
    [anon_sym_and] = ACTIONS(49),
    [aux_sym_SLASH_LBRACKG_DASHZg_DASHz_RBRACK_SLASH] = ACTIONS(334),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [sym_number] = ACTIONS(49),
    [sym_float] = ACTIONS(49),
    [sym_upper_ident] = ACTIONS(53),
    [sym_lower_ident] = ACTIONS(53),
  },
  [89] = {
    [anon_sym_let] = ACTIONS(57),
    [anon_sym_and] = ACTIONS(57),
    [anon_sym_DQUOTE] = ACTIONS(55),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [sym_number] = ACTIONS(57),
    [sym_float] = ACTIONS(57),
    [sym_upper_ident] = ACTIONS(57),
    [sym_lower_ident] = ACTIONS(59),
  },
  [90] = {
    [anon_sym_let] = ACTIONS(285),
    [anon_sym_and] = ACTIONS(285),
    [anon_sym_DQUOTE] = ACTIONS(283),
    [anon_sym_SQUOTE] = ACTIONS(283),
    [sym_number] = ACTIONS(285),
    [sym_float] = ACTIONS(285),
    [sym_upper_ident] = ACTIONS(285),
    [sym_lower_ident] = ACTIONS(287),
  },
  [91] = {
    [anon_sym_let] = ACTIONS(83),
    [anon_sym_and] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(81),
    [anon_sym_SQUOTE] = ACTIONS(81),
    [sym_number] = ACTIONS(83),
    [sym_float] = ACTIONS(83),
    [sym_upper_ident] = ACTIONS(83),
    [sym_lower_ident] = ACTIONS(85),
  },
  [92] = {
    [anon_sym_let] = ACTIONS(89),
    [anon_sym_and] = ACTIONS(89),
    [anon_sym_DQUOTE] = ACTIONS(87),
    [anon_sym_SQUOTE] = ACTIONS(87),
    [sym_number] = ACTIONS(89),
    [sym_float] = ACTIONS(89),
    [sym_upper_ident] = ACTIONS(89),
    [sym_lower_ident] = ACTIONS(91),
  },
  [93] = {
    [anon_sym_let] = ACTIONS(95),
    [anon_sym_and] = ACTIONS(95),
    [anon_sym_DQUOTE] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(93),
    [sym_number] = ACTIONS(95),
    [sym_float] = ACTIONS(95),
    [sym_upper_ident] = ACTIONS(95),
    [sym_lower_ident] = ACTIONS(97),
  },
  [94] = {
    [anon_sym_let] = ACTIONS(101),
    [anon_sym_and] = ACTIONS(101),
    [anon_sym_DQUOTE] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(99),
    [sym_number] = ACTIONS(101),
    [sym_float] = ACTIONS(101),
    [sym_upper_ident] = ACTIONS(101),
    [sym_lower_ident] = ACTIONS(103),
  },
  [95] = {
    [anon_sym_let] = ACTIONS(107),
    [anon_sym_and] = ACTIONS(107),
    [anon_sym_DQUOTE] = ACTIONS(105),
    [anon_sym_SQUOTE] = ACTIONS(105),
    [sym_number] = ACTIONS(107),
    [sym_float] = ACTIONS(107),
    [sym_upper_ident] = ACTIONS(107),
    [sym_lower_ident] = ACTIONS(109),
  },
  [96] = {
    [sym_expr] = STATE(112),
    [sym_exp_ident] = STATE(59),
    [sym_exp_let] = STATE(59),
    [sym_exp_constant] = STATE(59),
    [sym_const_char] = STATE(60),
    [sym_const_string] = STATE(60),
    [sym_const_integer] = STATE(60),
    [sym_const_float] = STATE(60),
    [sym_string] = STATE(61),
    [sym_char] = STATE(62),
    [sym_ident] = STATE(63),
    [aux_sym_str_value_repeat1] = STATE(113),
    [anon_sym_let] = ACTIONS(201),
    [anon_sym_and] = ACTIONS(254),
    [anon_sym_DQUOTE] = ACTIONS(205),
    [anon_sym_SQUOTE] = ACTIONS(207),
    [sym_number] = ACTIONS(209),
    [sym_float] = ACTIONS(211),
    [sym_upper_ident] = ACTIONS(213),
    [sym_lower_ident] = ACTIONS(215),
  },
  [97] = {
    [ts_builtin_sym_end] = ACTIONS(195),
    [anon_sym_let] = ACTIONS(197),
    [anon_sym_and] = ACTIONS(197),
    [anon_sym_open] = ACTIONS(197),
    [anon_sym_DQUOTE] = ACTIONS(195),
    [anon_sym_SQUOTE] = ACTIONS(195),
    [sym_number] = ACTIONS(197),
    [sym_float] = ACTIONS(197),
    [sym_upper_ident] = ACTIONS(197),
    [sym_lower_ident] = ACTIONS(199),
  },
  [98] = {
    [sym_expr] = STATE(112),
    [sym_exp_ident] = STATE(59),
    [sym_exp_let] = STATE(59),
    [sym_exp_constant] = STATE(59),
    [sym_const_char] = STATE(60),
    [sym_const_string] = STATE(60),
    [sym_const_integer] = STATE(60),
    [sym_const_float] = STATE(60),
    [sym_string] = STATE(61),
    [sym_char] = STATE(62),
    [sym_ident] = STATE(63),
    [aux_sym_str_value_repeat1] = STATE(82),
    [anon_sym_let] = ACTIONS(201),
    [anon_sym_and] = ACTIONS(254),
    [anon_sym_DQUOTE] = ACTIONS(205),
    [anon_sym_SQUOTE] = ACTIONS(207),
    [sym_number] = ACTIONS(209),
    [sym_float] = ACTIONS(211),
    [sym_upper_ident] = ACTIONS(213),
    [sym_lower_ident] = ACTIONS(215),
  },
  [99] = {
    [sym_value_binding] = STATE(114),
    [sym_pattern] = STATE(48),
    [sym_pat_var] = STATE(25),
    [sym_lower_ident] = ACTIONS(113),
  },
  [100] = {
    [sym_expr] = STATE(37),
    [sym_exp_ident] = STATE(14),
    [sym_exp_let] = STATE(14),
    [sym_exp_constant] = STATE(14),
    [sym_const_char] = STATE(15),
    [sym_const_string] = STATE(15),
    [sym_const_integer] = STATE(15),
    [sym_const_float] = STATE(15),
    [sym_string] = STATE(16),
    [sym_char] = STATE(17),
    [sym_ident] = STATE(18),
    [aux_sym_str_value_repeat1] = STATE(115),
    [anon_sym_let] = ACTIONS(269),
    [anon_sym_and] = ACTIONS(254),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [sym_number] = ACTIONS(271),
    [sym_float] = ACTIONS(273),
    [sym_upper_ident] = ACTIONS(23),
    [sym_lower_ident] = ACTIONS(25),
  },
  [101] = {
    [ts_builtin_sym_end] = ACTIONS(336),
    [anon_sym_let] = ACTIONS(338),
    [anon_sym_and] = ACTIONS(338),
    [anon_sym_open] = ACTIONS(338),
    [anon_sym_DQUOTE] = ACTIONS(336),
    [anon_sym_SQUOTE] = ACTIONS(336),
    [sym_number] = ACTIONS(338),
    [sym_float] = ACTIONS(338),
    [sym_upper_ident] = ACTIONS(338),
    [sym_lower_ident] = ACTIONS(340),
  },
  [102] = {
    [ts_builtin_sym_end] = ACTIONS(223),
    [anon_sym_let] = ACTIONS(225),
    [anon_sym_and] = ACTIONS(225),
    [anon_sym_open] = ACTIONS(225),
    [anon_sym_DQUOTE] = ACTIONS(223),
    [anon_sym_SQUOTE] = ACTIONS(223),
    [sym_number] = ACTIONS(225),
    [sym_float] = ACTIONS(225),
    [sym_upper_ident] = ACTIONS(225),
    [sym_lower_ident] = ACTIONS(227),
  },
  [103] = {
    [ts_builtin_sym_end] = ACTIONS(234),
    [anon_sym_let] = ACTIONS(236),
    [anon_sym_and] = ACTIONS(236),
    [anon_sym_open] = ACTIONS(236),
    [anon_sym_DQUOTE] = ACTIONS(234),
    [anon_sym_SQUOTE] = ACTIONS(234),
    [sym_number] = ACTIONS(236),
    [sym_float] = ACTIONS(236),
    [sym_upper_ident] = ACTIONS(236),
    [sym_lower_ident] = ACTIONS(238),
  },
  [104] = {
    [sym_value_binding] = STATE(116),
    [sym_pattern] = STATE(48),
    [sym_pat_var] = STATE(25),
    [sym_lower_ident] = ACTIONS(113),
  },
  [105] = {
    [sym_expr] = STATE(117),
    [sym_exp_ident] = STATE(91),
    [sym_exp_let] = STATE(91),
    [sym_exp_constant] = STATE(91),
    [sym_const_char] = STATE(92),
    [sym_const_string] = STATE(92),
    [sym_const_integer] = STATE(92),
    [sym_const_float] = STATE(92),
    [sym_string] = STATE(93),
    [sym_char] = STATE(94),
    [sym_ident] = STATE(95),
    [aux_sym_str_value_repeat1] = STATE(118),
    [anon_sym_let] = ACTIONS(295),
    [anon_sym_and] = ACTIONS(254),
    [anon_sym_DQUOTE] = ACTIONS(299),
    [anon_sym_SQUOTE] = ACTIONS(301),
    [sym_number] = ACTIONS(303),
    [sym_float] = ACTIONS(305),
    [sym_upper_ident] = ACTIONS(307),
    [sym_lower_ident] = ACTIONS(309),
  },
  [106] = {
    [anon_sym_RBRACE] = ACTIONS(342),
  },
  [107] = {
    [anon_sym_let] = ACTIONS(139),
    [anon_sym_and] = ACTIONS(139),
    [anon_sym_DQUOTE] = ACTIONS(137),
    [anon_sym_SQUOTE] = ACTIONS(137),
    [sym_number] = ACTIONS(139),
    [sym_float] = ACTIONS(139),
    [sym_upper_ident] = ACTIONS(139),
    [sym_lower_ident] = ACTIONS(141),
  },
  [108] = {
    [aux_sym_string_repeat1] = STATE(42),
    [anon_sym_DQUOTE] = ACTIONS(344),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_DQUOTE_BSLASHn_RBRACK_SLASH] = ACTIONS(35),
    [aux_sym_SLASH_BSLASH_BSLASH_LPAREN_DOT_PIPE_BSLASHn_RPAREN_SLASH] = ACTIONS(35),
  },
  [109] = {
    [anon_sym_SQUOTE] = ACTIONS(346),
  },
  [110] = {
    [anon_sym_let] = ACTIONS(151),
    [anon_sym_and] = ACTIONS(151),
    [anon_sym_DQUOTE] = ACTIONS(149),
    [anon_sym_SQUOTE] = ACTIONS(149),
    [sym_number] = ACTIONS(151),
    [sym_float] = ACTIONS(151),
    [sym_upper_ident] = ACTIONS(151),
    [sym_lower_ident] = ACTIONS(153),
  },
  [111] = {
    [anon_sym_let] = ACTIONS(157),
    [anon_sym_and] = ACTIONS(157),
    [anon_sym_DQUOTE] = ACTIONS(155),
    [anon_sym_SQUOTE] = ACTIONS(155),
    [sym_number] = ACTIONS(157),
    [sym_float] = ACTIONS(157),
    [sym_upper_ident] = ACTIONS(157),
    [sym_lower_ident] = ACTIONS(159),
  },
  [112] = {
    [ts_builtin_sym_end] = ACTIONS(240),
    [anon_sym_let] = ACTIONS(242),
    [anon_sym_and] = ACTIONS(242),
    [anon_sym_open] = ACTIONS(242),
    [anon_sym_DQUOTE] = ACTIONS(240),
    [anon_sym_SQUOTE] = ACTIONS(240),
    [sym_number] = ACTIONS(242),
    [sym_float] = ACTIONS(242),
    [sym_upper_ident] = ACTIONS(242),
    [sym_lower_ident] = ACTIONS(244),
  },
  [113] = {
    [sym_expr] = STATE(122),
    [sym_exp_ident] = STATE(59),
    [sym_exp_let] = STATE(59),
    [sym_exp_constant] = STATE(59),
    [sym_const_char] = STATE(60),
    [sym_const_string] = STATE(60),
    [sym_const_integer] = STATE(60),
    [sym_const_float] = STATE(60),
    [sym_string] = STATE(61),
    [sym_char] = STATE(62),
    [sym_ident] = STATE(63),
    [aux_sym_str_value_repeat1] = STATE(82),
    [anon_sym_let] = ACTIONS(201),
    [anon_sym_and] = ACTIONS(254),
    [anon_sym_DQUOTE] = ACTIONS(205),
    [anon_sym_SQUOTE] = ACTIONS(207),
    [sym_number] = ACTIONS(209),
    [sym_float] = ACTIONS(211),
    [sym_upper_ident] = ACTIONS(213),
    [sym_lower_ident] = ACTIONS(215),
  },
  [114] = {
    [sym_expr] = STATE(44),
    [sym_exp_ident] = STATE(14),
    [sym_exp_let] = STATE(14),
    [sym_exp_constant] = STATE(14),
    [sym_const_char] = STATE(15),
    [sym_const_string] = STATE(15),
    [sym_const_integer] = STATE(15),
    [sym_const_float] = STATE(15),
    [sym_string] = STATE(16),
    [sym_char] = STATE(17),
    [sym_ident] = STATE(18),
    [aux_sym_str_value_repeat1] = STATE(123),
    [anon_sym_let] = ACTIONS(269),
    [anon_sym_and] = ACTIONS(254),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [sym_number] = ACTIONS(271),
    [sym_float] = ACTIONS(273),
    [sym_upper_ident] = ACTIONS(23),
    [sym_lower_ident] = ACTIONS(25),
  },
  [115] = {
    [sym_expr] = STATE(44),
    [sym_exp_ident] = STATE(14),
    [sym_exp_let] = STATE(14),
    [sym_exp_constant] = STATE(14),
    [sym_const_char] = STATE(15),
    [sym_const_string] = STATE(15),
    [sym_const_integer] = STATE(15),
    [sym_const_float] = STATE(15),
    [sym_string] = STATE(16),
    [sym_char] = STATE(17),
    [sym_ident] = STATE(18),
    [aux_sym_str_value_repeat1] = STATE(82),
    [anon_sym_let] = ACTIONS(269),
    [anon_sym_and] = ACTIONS(254),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [sym_number] = ACTIONS(271),
    [sym_float] = ACTIONS(273),
    [sym_upper_ident] = ACTIONS(23),
    [sym_lower_ident] = ACTIONS(25),
  },
  [116] = {
    [sym_expr] = STATE(124),
    [sym_exp_ident] = STATE(91),
    [sym_exp_let] = STATE(91),
    [sym_exp_constant] = STATE(91),
    [sym_const_char] = STATE(92),
    [sym_const_string] = STATE(92),
    [sym_const_integer] = STATE(92),
    [sym_const_float] = STATE(92),
    [sym_string] = STATE(93),
    [sym_char] = STATE(94),
    [sym_ident] = STATE(95),
    [aux_sym_str_value_repeat1] = STATE(125),
    [anon_sym_let] = ACTIONS(295),
    [anon_sym_and] = ACTIONS(254),
    [anon_sym_DQUOTE] = ACTIONS(299),
    [anon_sym_SQUOTE] = ACTIONS(301),
    [sym_number] = ACTIONS(303),
    [sym_float] = ACTIONS(305),
    [sym_upper_ident] = ACTIONS(307),
    [sym_lower_ident] = ACTIONS(309),
  },
  [117] = {
    [anon_sym_let] = ACTIONS(197),
    [anon_sym_and] = ACTIONS(197),
    [anon_sym_DQUOTE] = ACTIONS(195),
    [anon_sym_SQUOTE] = ACTIONS(195),
    [sym_number] = ACTIONS(197),
    [sym_float] = ACTIONS(197),
    [sym_upper_ident] = ACTIONS(197),
    [sym_lower_ident] = ACTIONS(199),
  },
  [118] = {
    [sym_expr] = STATE(124),
    [sym_exp_ident] = STATE(91),
    [sym_exp_let] = STATE(91),
    [sym_exp_constant] = STATE(91),
    [sym_const_char] = STATE(92),
    [sym_const_string] = STATE(92),
    [sym_const_integer] = STATE(92),
    [sym_const_float] = STATE(92),
    [sym_string] = STATE(93),
    [sym_char] = STATE(94),
    [sym_ident] = STATE(95),
    [aux_sym_str_value_repeat1] = STATE(82),
    [anon_sym_let] = ACTIONS(295),
    [anon_sym_and] = ACTIONS(254),
    [anon_sym_DQUOTE] = ACTIONS(299),
    [anon_sym_SQUOTE] = ACTIONS(301),
    [sym_number] = ACTIONS(303),
    [sym_float] = ACTIONS(305),
    [sym_upper_ident] = ACTIONS(307),
    [sym_lower_ident] = ACTIONS(309),
  },
  [119] = {
    [anon_sym_let] = ACTIONS(338),
    [anon_sym_and] = ACTIONS(338),
    [anon_sym_DQUOTE] = ACTIONS(336),
    [anon_sym_SQUOTE] = ACTIONS(336),
    [sym_number] = ACTIONS(338),
    [sym_float] = ACTIONS(338),
    [sym_upper_ident] = ACTIONS(338),
    [sym_lower_ident] = ACTIONS(340),
  },
  [120] = {
    [anon_sym_let] = ACTIONS(225),
    [anon_sym_and] = ACTIONS(225),
    [anon_sym_DQUOTE] = ACTIONS(223),
    [anon_sym_SQUOTE] = ACTIONS(223),
    [sym_number] = ACTIONS(225),
    [sym_float] = ACTIONS(225),
    [sym_upper_ident] = ACTIONS(225),
    [sym_lower_ident] = ACTIONS(227),
  },
  [121] = {
    [anon_sym_let] = ACTIONS(236),
    [anon_sym_and] = ACTIONS(236),
    [anon_sym_DQUOTE] = ACTIONS(234),
    [anon_sym_SQUOTE] = ACTIONS(234),
    [sym_number] = ACTIONS(236),
    [sym_float] = ACTIONS(236),
    [sym_upper_ident] = ACTIONS(236),
    [sym_lower_ident] = ACTIONS(238),
  },
  [122] = {
    [ts_builtin_sym_end] = ACTIONS(289),
    [anon_sym_let] = ACTIONS(291),
    [anon_sym_and] = ACTIONS(291),
    [anon_sym_open] = ACTIONS(291),
    [anon_sym_DQUOTE] = ACTIONS(289),
    [anon_sym_SQUOTE] = ACTIONS(289),
    [sym_number] = ACTIONS(291),
    [sym_float] = ACTIONS(291),
    [sym_upper_ident] = ACTIONS(291),
    [sym_lower_ident] = ACTIONS(293),
  },
  [123] = {
    [sym_expr] = STATE(64),
    [sym_exp_ident] = STATE(14),
    [sym_exp_let] = STATE(14),
    [sym_exp_constant] = STATE(14),
    [sym_const_char] = STATE(15),
    [sym_const_string] = STATE(15),
    [sym_const_integer] = STATE(15),
    [sym_const_float] = STATE(15),
    [sym_string] = STATE(16),
    [sym_char] = STATE(17),
    [sym_ident] = STATE(18),
    [aux_sym_str_value_repeat1] = STATE(82),
    [anon_sym_let] = ACTIONS(269),
    [anon_sym_and] = ACTIONS(254),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [sym_number] = ACTIONS(271),
    [sym_float] = ACTIONS(273),
    [sym_upper_ident] = ACTIONS(23),
    [sym_lower_ident] = ACTIONS(25),
  },
  [124] = {
    [anon_sym_let] = ACTIONS(242),
    [anon_sym_and] = ACTIONS(242),
    [anon_sym_DQUOTE] = ACTIONS(240),
    [anon_sym_SQUOTE] = ACTIONS(240),
    [sym_number] = ACTIONS(242),
    [sym_float] = ACTIONS(242),
    [sym_upper_ident] = ACTIONS(242),
    [sym_lower_ident] = ACTIONS(244),
  },
  [125] = {
    [sym_expr] = STATE(126),
    [sym_exp_ident] = STATE(91),
    [sym_exp_let] = STATE(91),
    [sym_exp_constant] = STATE(91),
    [sym_const_char] = STATE(92),
    [sym_const_string] = STATE(92),
    [sym_const_integer] = STATE(92),
    [sym_const_float] = STATE(92),
    [sym_string] = STATE(93),
    [sym_char] = STATE(94),
    [sym_ident] = STATE(95),
    [aux_sym_str_value_repeat1] = STATE(82),
    [anon_sym_let] = ACTIONS(295),
    [anon_sym_and] = ACTIONS(254),
    [anon_sym_DQUOTE] = ACTIONS(299),
    [anon_sym_SQUOTE] = ACTIONS(301),
    [sym_number] = ACTIONS(303),
    [sym_float] = ACTIONS(305),
    [sym_upper_ident] = ACTIONS(307),
    [sym_lower_ident] = ACTIONS(309),
  },
  [126] = {
    [anon_sym_let] = ACTIONS(291),
    [anon_sym_and] = ACTIONS(291),
    [anon_sym_DQUOTE] = ACTIONS(289),
    [anon_sym_SQUOTE] = ACTIONS(289),
    [sym_number] = ACTIONS(291),
    [sym_float] = ACTIONS(291),
    [sym_upper_ident] = ACTIONS(291),
    [sym_lower_ident] = ACTIONS(293),
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
  [21] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(8),
  [23] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(9),
  [25] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(9),
  [27] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program, 1),
  [29] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(21),
  [31] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(22),
  [33] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(27),
  [35] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(28),
  [37] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(30),
  [39] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_const_integer, 1),
  [41] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_const_integer, 1),
  [43] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(31),
  [45] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_const_integer, 1),
  [47] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_const_float, 1),
  [49] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_const_float, 1),
  [51] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(32),
  [53] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_const_float, 1),
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
  [117] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_str_value, 2),
  [119] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_str_value, 2),
  [121] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(36),
  [123] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_str_value, 2),
  [125] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(39),
  [127] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_pattern, 1),
  [129] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_str_open, 2),
  [131] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_str_open, 2),
  [133] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(40),
  [135] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_str_open, 2),
  [137] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_string, 2),
  [139] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_string, 2),
  [141] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_string, 2),
  [143] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_string_repeat1, 1),
  [145] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(41),
  [147] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(43),
  [149] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_const_integer, 2),
  [151] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_const_integer, 2),
  [153] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_const_integer, 2),
  [155] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_const_float, 2),
  [157] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_const_float, 2),
  [159] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_const_float, 2),
  [161] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2),
  [163] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(3),
  [166] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(4),
  [169] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(5),
  [172] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(6),
  [175] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(7),
  [178] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(8),
  [181] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(9),
  [184] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(9),
  [187] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_str_value, 3),
  [189] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_str_value, 3),
  [191] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_str_value, 3),
  [193] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(46),
  [195] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_exp_let, 3),
  [197] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_exp_let, 3),
  [199] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_exp_let, 3),
  [201] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(51),
  [203] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(52),
  [205] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(53),
  [207] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(54),
  [209] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(55),
  [211] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(56),
  [213] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(57),
  [215] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(57),
  [217] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_str_open, 3),
  [219] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_str_open, 3),
  [221] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_str_open, 3),
  [223] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_string, 3),
  [225] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_string, 3),
  [227] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_string, 3),
  [229] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_string_repeat1, 2),
  [231] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(28),
  [234] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_char, 3),
  [236] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_char, 3),
  [238] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_char, 3),
  [240] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_exp_let, 4),
  [242] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_exp_let, 4),
  [244] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_exp_let, 4),
  [246] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_str_value, 4),
  [248] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_str_value, 4),
  [250] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_str_value, 4),
  [252] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(35),
  [254] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(66),
  [256] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(68),
  [258] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_str_value_repeat1, 2),
  [260] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_str_value_repeat1, 2),
  [262] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_str_value_repeat1, 2),
  [264] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_str_value_repeat1, 2), SHIFT_REPEAT(36),
  [267] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(69),
  [269] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(71),
  [271] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(72),
  [273] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(73),
  [275] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(75),
  [277] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(77),
  [279] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(78),
  [281] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(79),
  [283] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_value_binding, 3),
  [285] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_value_binding, 3),
  [287] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_value_binding, 3),
  [289] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_exp_let, 5),
  [291] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_exp_let, 5),
  [293] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_exp_let, 5),
  [295] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(83),
  [297] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(84),
  [299] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(85),
  [301] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(86),
  [303] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(87),
  [305] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(88),
  [307] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(89),
  [309] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(89),
  [311] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(99),
  [313] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(31),
  [315] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(32),
  [317] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(101),
  [319] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(102),
  [321] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(103),
  [323] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_str_value_repeat1, 2), SHIFT_REPEAT(66),
  [326] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(104),
  [328] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(107),
  [330] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(109),
  [332] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(110),
  [334] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(111),
  [336] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_braced_expr, 3),
  [338] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_braced_expr, 3),
  [340] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_braced_expr, 3),
  [342] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(119),
  [344] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(120),
  [346] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(121),
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
