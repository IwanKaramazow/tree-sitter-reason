#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 5
#define STATE_COUNT 214
#define SYMBOL_COUNT 51
#define ALIAS_COUNT 0
#define TOKEN_COUNT 24
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
  anon_sym_fun = 10,
  anon_sym_PIPE = 11,
  anon_sym_EQ_GT = 12,
  anon_sym_when = 13,
  aux_sym_SLASH_LBRACKG_DASHZg_DASHz_RBRACK_SLASH = 14,
  anon_sym_DQUOTE = 15,
  aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_DQUOTE_BSLASHn_RBRACK_SLASH = 16,
  aux_sym_SLASH_BSLASH_BSLASH_LPAREN_DOT_PIPE_BSLASHn_RPAREN_SLASH = 17,
  anon_sym_SQUOTE = 18,
  aux_sym_SLASH_LBRACKA_DASHZa_DASHz0_DASH9_RBRACK_SLASH = 19,
  sym_number = 20,
  sym_float = 21,
  sym_upper_ident = 22,
  sym_lower_ident = 23,
  sym_program = 24,
  sym_structure_item = 25,
  sym_str_eval = 26,
  sym_str_value = 27,
  sym_str_open = 28,
  sym_value_binding = 29,
  sym_pattern = 30,
  sym_pat_var = 31,
  sym_braced_expr = 32,
  sym_expr = 33,
  sym_exp_ident = 34,
  sym_exp_let = 35,
  sym_exp_function = 36,
  sym_case = 37,
  sym_guard = 38,
  sym_exp_constant = 39,
  sym_const_char = 40,
  sym_const_string = 41,
  sym_const_integer = 42,
  sym_const_float = 43,
  sym_string = 44,
  sym_char = 45,
  sym_ident = 46,
  aux_sym_program_repeat1 = 47,
  aux_sym_str_value_repeat1 = 48,
  aux_sym_exp_function_repeat1 = 49,
  aux_sym_string_repeat1 = 50,
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
  [anon_sym_fun] = "fun",
  [anon_sym_PIPE] = "|",
  [anon_sym_EQ_GT] = "=>",
  [anon_sym_when] = "when",
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
  [sym_exp_function] = "exp_function",
  [sym_case] = "case",
  [sym_guard] = "guard",
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
  [aux_sym_exp_function_repeat1] = "exp_function_repeat1",
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
  [anon_sym_fun] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_when] = {
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
  [sym_exp_function] = {
    .visible = true,
    .named = true,
  },
  [sym_case] = {
    .visible = true,
    .named = true,
  },
  [sym_guard] = {
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
  [aux_sym_exp_function_repeat1] = {
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
        ADVANCE(9);
      if (lookahead == 'a')
        ADVANCE(11);
      if (lookahead == 'f')
        ADVANCE(15);
      if (lookahead == 'l')
        ADVANCE(18);
      if (lookahead == 'o')
        ADVANCE(21);
      if (lookahead == '{')
        ADVANCE(25);
      if (lookahead == '|')
        ADVANCE(26);
      if (lookahead == '}')
        ADVANCE(27);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(29);
      if (('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(14);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(34);
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
      if (lookahead == '>')
        ADVANCE(8);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 9:
      if (lookahead == '\n')
        ADVANCE(10);
      if (lookahead != 0)
        ADVANCE(10);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_BSLASH_LPAREN_DOT_PIPE_BSLASHn_RPAREN_SLASH);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_lower_ident);
      if (lookahead == 'n')
        ADVANCE(12);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(14);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_lower_ident);
      if (lookahead == 'd')
        ADVANCE(13);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(14);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_and);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(14);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_lower_ident);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(14);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_lower_ident);
      if (lookahead == 'u')
        ADVANCE(16);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(14);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_lower_ident);
      if (lookahead == 'n')
        ADVANCE(17);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(14);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_fun);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(14);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_lower_ident);
      if (lookahead == 'e')
        ADVANCE(19);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(14);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_lower_ident);
      if (lookahead == 't')
        ADVANCE(20);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(14);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_let);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(14);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_lower_ident);
      if (lookahead == 'p')
        ADVANCE(22);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(14);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_lower_ident);
      if (lookahead == 'e')
        ADVANCE(23);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(14);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_lower_ident);
      if (lookahead == 'n')
        ADVANCE(24);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(14);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_open);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(14);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 28:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(29);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.')
        ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(29);
      END_STATE();
    case 30:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(31);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'e')
        ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/')
        ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(33);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_upper_ident);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 35:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '\'')
        ADVANCE(5);
      if (lookahead == 'f')
        ADVANCE(15);
      if (lookahead == 'l')
        ADVANCE(18);
      if (lookahead == 'o')
        ADVANCE(21);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(35);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(29);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(14);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(34);
      END_STATE();
    case 36:
      if (lookahead == 'r')
        ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(36);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(14);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_lower_ident);
      if (lookahead == 'e')
        ADVANCE(38);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(14);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_lower_ident);
      if (lookahead == 'c')
        ADVANCE(39);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(14);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_rec);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(14);
      END_STATE();
    case 40:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(40);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(34);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(14);
      END_STATE();
    case 41:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '\'')
        ADVANCE(5);
      if (lookahead == ';')
        ADVANCE(6);
      if (lookahead == 'f')
        ADVANCE(15);
      if (lookahead == 'l')
        ADVANCE(18);
      if (lookahead == 'o')
        ADVANCE(21);
      if (lookahead == '|')
        ADVANCE(26);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(41);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(29);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(14);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(34);
      END_STATE();
    case 42:
      if (lookahead == '\n')
        SKIP(42);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '\\')
        ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(43);
      if (lookahead != 0)
        ADVANCE(43);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_DQUOTE_BSLASHn_RBRACK_SLASH);
      END_STATE();
    case 44:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(45);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKA_DASHZa_DASHz0_DASH9_RBRACK_SLASH);
      END_STATE();
    case 46:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '\'')
        ADVANCE(5);
      if (lookahead == 'f')
        ADVANCE(15);
      if (lookahead == 'l')
        ADVANCE(47);
      if (lookahead == 'o')
        ADVANCE(48);
      if (lookahead == '|')
        ADVANCE(26);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(46);
      if (('a' <= lookahead && lookahead <= 'e'))
        ADVANCE(14);
      if (('A' <= lookahead && lookahead <= 'F'))
        ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(29);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(50);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKG_DASHZg_DASHz_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(19);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(14);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKG_DASHZg_DASHz_RBRACK_SLASH);
      if (lookahead == 'p')
        ADVANCE(22);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(14);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKG_DASHZg_DASHz_RBRACK_SLASH);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(14);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKG_DASHZg_DASHz_RBRACK_SLASH);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 51:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '\'')
        ADVANCE(5);
      if (lookahead == ';')
        ADVANCE(6);
      if (lookahead == '=')
        ADVANCE(52);
      if (lookahead == 'f')
        ADVANCE(15);
      if (lookahead == 'l')
        ADVANCE(18);
      if (lookahead == 'o')
        ADVANCE(21);
      if (lookahead == '|')
        ADVANCE(26);
      if (lookahead == '}')
        ADVANCE(27);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(51);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(29);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(14);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(34);
      END_STATE();
    case 52:
      if (lookahead == '>')
        ADVANCE(8);
      END_STATE();
    case 53:
      if (lookahead == '=')
        ADVANCE(7);
      if (lookahead == 'w')
        ADVANCE(54);
      if (lookahead == '|')
        ADVANCE(26);
      if (lookahead == '}')
        ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(53);
      END_STATE();
    case 54:
      if (lookahead == 'h')
        ADVANCE(55);
      END_STATE();
    case 55:
      if (lookahead == 'e')
        ADVANCE(56);
      END_STATE();
    case 56:
      if (lookahead == 'n')
        ADVANCE(57);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_when);
      END_STATE();
    case 58:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '\'')
        ADVANCE(5);
      if (lookahead == 'a')
        ADVANCE(11);
      if (lookahead == 'f')
        ADVANCE(15);
      if (lookahead == 'l')
        ADVANCE(18);
      if (lookahead == 'o')
        ADVANCE(21);
      if (lookahead == '|')
        ADVANCE(26);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(58);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(29);
      if (('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(14);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(34);
      END_STATE();
    case 59:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '\'')
        ADVANCE(5);
      if (lookahead == 'f')
        ADVANCE(15);
      if (lookahead == 'l')
        ADVANCE(18);
      if (lookahead == '{')
        ADVANCE(25);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(59);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(29);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(14);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(34);
      END_STATE();
    case 60:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '\'')
        ADVANCE(5);
      if (lookahead == 'a')
        ADVANCE(11);
      if (lookahead == 'f')
        ADVANCE(15);
      if (lookahead == 'l')
        ADVANCE(18);
      if (lookahead == '|')
        ADVANCE(26);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(60);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(29);
      if (('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(14);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(34);
      END_STATE();
    case 61:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '\'')
        ADVANCE(5);
      if (lookahead == 'a')
        ADVANCE(11);
      if (lookahead == 'f')
        ADVANCE(15);
      if (lookahead == 'l')
        ADVANCE(47);
      if (lookahead == 'o')
        ADVANCE(48);
      if (lookahead == '|')
        ADVANCE(26);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(61);
      if (('b' <= lookahead && lookahead <= 'e'))
        ADVANCE(14);
      if (('A' <= lookahead && lookahead <= 'F'))
        ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(29);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(50);
      END_STATE();
    case 62:
      if (lookahead == '=')
        ADVANCE(52);
      if (lookahead == '|')
        ADVANCE(26);
      if (lookahead == '}')
        ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(62);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(63);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKG_DASHZg_DASHz_RBRACK_SLASH);
      END_STATE();
    case 64:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '\'')
        ADVANCE(5);
      if (lookahead == 'a')
        ADVANCE(11);
      if (lookahead == 'f')
        ADVANCE(15);
      if (lookahead == 'l')
        ADVANCE(47);
      if (lookahead == '|')
        ADVANCE(26);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(64);
      if (('b' <= lookahead && lookahead <= 'e'))
        ADVANCE(14);
      if (('A' <= lookahead && lookahead <= 'F'))
        ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(29);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(50);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 35},
  [2] = {.lex_state = 35},
  [3] = {.lex_state = 36},
  [4] = {.lex_state = 40},
  [5] = {.lex_state = 41},
  [6] = {.lex_state = 42},
  [7] = {.lex_state = 44},
  [8] = {.lex_state = 46},
  [9] = {.lex_state = 46},
  [10] = {.lex_state = 51},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 35},
  [13] = {.lex_state = 35},
  [14] = {.lex_state = 35},
  [15] = {.lex_state = 51},
  [16] = {.lex_state = 51},
  [17] = {.lex_state = 51},
  [18] = {.lex_state = 51},
  [19] = {.lex_state = 51},
  [20] = {.lex_state = 35},
  [21] = {.lex_state = 35},
  [22] = {.lex_state = 40},
  [23] = {.lex_state = 53},
  [24] = {.lex_state = 58},
  [25] = {.lex_state = 53},
  [26] = {.lex_state = 53},
  [27] = {.lex_state = 41},
  [28] = {.lex_state = 40},
  [29] = {.lex_state = 51},
  [30] = {.lex_state = 41},
  [31] = {.lex_state = 51},
  [32] = {.lex_state = 42},
  [33] = {.lex_state = 42},
  [34] = {.lex_state = 35},
  [35] = {.lex_state = 51},
  [36] = {.lex_state = 51},
  [37] = {.lex_state = 35},
  [38] = {.lex_state = 58},
  [39] = {.lex_state = 36},
  [40] = {.lex_state = 40},
  [41] = {.lex_state = 51},
  [42] = {.lex_state = 58},
  [43] = {.lex_state = 59},
  [44] = {.lex_state = 35},
  [45] = {.lex_state = 53},
  [46] = {.lex_state = 41},
  [47] = {.lex_state = 51},
  [48] = {.lex_state = 42},
  [49] = {.lex_state = 51},
  [50] = {.lex_state = 51},
  [51] = {.lex_state = 58},
  [52] = {.lex_state = 40},
  [53] = {.lex_state = 60},
  [54] = {.lex_state = 53},
  [55] = {.lex_state = 58},
  [56] = {.lex_state = 58},
  [57] = {.lex_state = 36},
  [58] = {.lex_state = 59},
  [59] = {.lex_state = 58},
  [60] = {.lex_state = 42},
  [61] = {.lex_state = 44},
  [62] = {.lex_state = 61},
  [63] = {.lex_state = 61},
  [64] = {.lex_state = 58},
  [65] = {.lex_state = 58},
  [66] = {.lex_state = 58},
  [67] = {.lex_state = 58},
  [68] = {.lex_state = 58},
  [69] = {.lex_state = 58},
  [70] = {.lex_state = 58},
  [71] = {.lex_state = 59},
  [72] = {.lex_state = 59},
  [73] = {.lex_state = 53},
  [74] = {.lex_state = 51},
  [75] = {.lex_state = 60},
  [76] = {.lex_state = 40},
  [77] = {.lex_state = 60},
  [78] = {.lex_state = 59},
  [79] = {.lex_state = 40},
  [80] = {.lex_state = 60},
  [81] = {.lex_state = 36},
  [82] = {.lex_state = 53},
  [83] = {.lex_state = 62},
  [84] = {.lex_state = 62},
  [85] = {.lex_state = 53},
  [86] = {.lex_state = 40},
  [87] = {.lex_state = 58},
  [88] = {.lex_state = 58},
  [89] = {.lex_state = 58},
  [90] = {.lex_state = 42},
  [91] = {.lex_state = 35},
  [92] = {.lex_state = 58},
  [93] = {.lex_state = 58},
  [94] = {.lex_state = 36},
  [95] = {.lex_state = 51},
  [96] = {.lex_state = 36},
  [97] = {.lex_state = 53},
  [98] = {.lex_state = 53},
  [99] = {.lex_state = 59},
  [100] = {.lex_state = 60},
  [101] = {.lex_state = 60},
  [102] = {.lex_state = 60},
  [103] = {.lex_state = 36},
  [104] = {.lex_state = 59},
  [105] = {.lex_state = 60},
  [106] = {.lex_state = 42},
  [107] = {.lex_state = 44},
  [108] = {.lex_state = 64},
  [109] = {.lex_state = 64},
  [110] = {.lex_state = 60},
  [111] = {.lex_state = 60},
  [112] = {.lex_state = 60},
  [113] = {.lex_state = 60},
  [114] = {.lex_state = 60},
  [115] = {.lex_state = 60},
  [116] = {.lex_state = 60},
  [117] = {.lex_state = 60},
  [118] = {.lex_state = 58},
  [119] = {.lex_state = 60},
  [120] = {.lex_state = 40},
  [121] = {.lex_state = 60},
  [122] = {.lex_state = 40},
  [123] = {.lex_state = 53},
  [124] = {.lex_state = 58},
  [125] = {.lex_state = 53},
  [126] = {.lex_state = 58},
  [127] = {.lex_state = 58},
  [128] = {.lex_state = 58},
  [129] = {.lex_state = 40},
  [130] = {.lex_state = 60},
  [131] = {.lex_state = 40},
  [132] = {.lex_state = 60},
  [133] = {.lex_state = 40},
  [134] = {.lex_state = 53},
  [135] = {.lex_state = 51},
  [136] = {.lex_state = 40},
  [137] = {.lex_state = 60},
  [138] = {.lex_state = 53},
  [139] = {.lex_state = 40},
  [140] = {.lex_state = 60},
  [141] = {.lex_state = 60},
  [142] = {.lex_state = 60},
  [143] = {.lex_state = 42},
  [144] = {.lex_state = 35},
  [145] = {.lex_state = 60},
  [146] = {.lex_state = 60},
  [147] = {.lex_state = 58},
  [148] = {.lex_state = 60},
  [149] = {.lex_state = 60},
  [150] = {.lex_state = 60},
  [151] = {.lex_state = 53},
  [152] = {.lex_state = 53},
  [153] = {.lex_state = 59},
  [154] = {.lex_state = 53},
  [155] = {.lex_state = 60},
  [156] = {.lex_state = 60},
  [157] = {.lex_state = 60},
  [158] = {.lex_state = 60},
  [159] = {.lex_state = 53},
  [160] = {.lex_state = 53},
  [161] = {.lex_state = 60},
  [162] = {.lex_state = 60},
  [163] = {.lex_state = 60},
  [164] = {.lex_state = 60},
  [165] = {.lex_state = 53},
  [166] = {.lex_state = 60},
  [167] = {.lex_state = 60},
  [168] = {.lex_state = 60},
  [169] = {.lex_state = 58},
  [170] = {.lex_state = 60},
  [171] = {.lex_state = 59},
  [172] = {.lex_state = 53},
  [173] = {.lex_state = 36},
  [174] = {.lex_state = 58},
  [175] = {.lex_state = 59},
  [176] = {.lex_state = 60},
  [177] = {.lex_state = 60},
  [178] = {.lex_state = 59},
  [179] = {.lex_state = 53},
  [180] = {.lex_state = 60},
  [181] = {.lex_state = 60},
  [182] = {.lex_state = 59},
  [183] = {.lex_state = 53},
  [184] = {.lex_state = 36},
  [185] = {.lex_state = 59},
  [186] = {.lex_state = 40},
  [187] = {.lex_state = 60},
  [188] = {.lex_state = 58},
  [189] = {.lex_state = 36},
  [190] = {.lex_state = 59},
  [191] = {.lex_state = 60},
  [192] = {.lex_state = 36},
  [193] = {.lex_state = 60},
  [194] = {.lex_state = 59},
  [195] = {.lex_state = 40},
  [196] = {.lex_state = 60},
  [197] = {.lex_state = 60},
  [198] = {.lex_state = 60},
  [199] = {.lex_state = 40},
  [200] = {.lex_state = 60},
  [201] = {.lex_state = 40},
  [202] = {.lex_state = 60},
  [203] = {.lex_state = 60},
  [204] = {.lex_state = 60},
  [205] = {.lex_state = 60},
  [206] = {.lex_state = 60},
  [207] = {.lex_state = 60},
  [208] = {.lex_state = 60},
  [209] = {.lex_state = 60},
  [210] = {.lex_state = 60},
  [211] = {.lex_state = 60},
  [212] = {.lex_state = 60},
  [213] = {.lex_state = 60},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_hash_bang_line] = ACTIONS(3),
    [anon_sym_let] = ACTIONS(3),
    [anon_sym_and] = ACTIONS(3),
    [anon_sym_open] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_fun] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_EQ_GT] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [aux_sym_SLASH_BSLASH_BSLASH_LPAREN_DOT_PIPE_BSLASHn_RPAREN_SLASH] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [sym_number] = ACTIONS(3),
    [sym_float] = ACTIONS(3),
    [sym_upper_ident] = ACTIONS(3),
    [sym_lower_ident] = ACTIONS(5),
  },
  [1] = {
    [sym_program] = STATE(11),
    [sym_structure_item] = STATE(12),
    [sym_str_eval] = STATE(13),
    [sym_str_value] = STATE(13),
    [sym_str_open] = STATE(13),
    [sym_expr] = STATE(14),
    [sym_exp_ident] = STATE(15),
    [sym_exp_let] = STATE(15),
    [sym_exp_function] = STATE(15),
    [sym_exp_constant] = STATE(15),
    [sym_const_char] = STATE(16),
    [sym_const_string] = STATE(16),
    [sym_const_integer] = STATE(16),
    [sym_const_float] = STATE(16),
    [sym_string] = STATE(17),
    [sym_char] = STATE(18),
    [sym_ident] = STATE(19),
    [aux_sym_program_repeat1] = STATE(20),
    [ts_builtin_sym_end] = ACTIONS(7),
    [sym_hash_bang_line] = ACTIONS(9),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_open] = ACTIONS(13),
    [anon_sym_fun] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [sym_number] = ACTIONS(21),
    [sym_float] = ACTIONS(23),
    [sym_upper_ident] = ACTIONS(25),
    [sym_lower_ident] = ACTIONS(27),
  },
  [2] = {
    [sym_structure_item] = STATE(12),
    [sym_str_eval] = STATE(13),
    [sym_str_value] = STATE(13),
    [sym_str_open] = STATE(13),
    [sym_expr] = STATE(14),
    [sym_exp_ident] = STATE(15),
    [sym_exp_let] = STATE(15),
    [sym_exp_function] = STATE(15),
    [sym_exp_constant] = STATE(15),
    [sym_const_char] = STATE(16),
    [sym_const_string] = STATE(16),
    [sym_const_integer] = STATE(16),
    [sym_const_float] = STATE(16),
    [sym_string] = STATE(17),
    [sym_char] = STATE(18),
    [sym_ident] = STATE(19),
    [aux_sym_program_repeat1] = STATE(21),
    [ts_builtin_sym_end] = ACTIONS(29),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_open] = ACTIONS(13),
    [anon_sym_fun] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [sym_number] = ACTIONS(21),
    [sym_float] = ACTIONS(23),
    [sym_upper_ident] = ACTIONS(25),
    [sym_lower_ident] = ACTIONS(27),
  },
  [3] = {
    [sym_value_binding] = STATE(24),
    [sym_pattern] = STATE(25),
    [sym_pat_var] = STATE(26),
    [anon_sym_rec] = ACTIONS(31),
    [sym_lower_ident] = ACTIONS(33),
  },
  [4] = {
    [sym_ident] = STATE(27),
    [sym_upper_ident] = ACTIONS(25),
    [sym_lower_ident] = ACTIONS(25),
  },
  [5] = {
    [sym_case] = STATE(29),
    [aux_sym_exp_function_repeat1] = STATE(30),
    [ts_builtin_sym_end] = ACTIONS(35),
    [anon_sym_let] = ACTIONS(37),
    [anon_sym_open] = ACTIONS(37),
    [anon_sym_fun] = ACTIONS(37),
    [anon_sym_PIPE] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [anon_sym_SQUOTE] = ACTIONS(35),
    [sym_number] = ACTIONS(37),
    [sym_float] = ACTIONS(37),
    [sym_upper_ident] = ACTIONS(37),
    [sym_lower_ident] = ACTIONS(41),
  },
  [6] = {
    [aux_sym_string_repeat1] = STATE(33),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_DQUOTE_BSLASHn_RBRACK_SLASH] = ACTIONS(45),
    [aux_sym_SLASH_BSLASH_BSLASH_LPAREN_DOT_PIPE_BSLASHn_RPAREN_SLASH] = ACTIONS(45),
  },
  [7] = {
    [aux_sym_SLASH_LBRACKA_DASHZa_DASHz0_DASH9_RBRACK_SLASH] = ACTIONS(47),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(49),
    [anon_sym_let] = ACTIONS(51),
    [anon_sym_open] = ACTIONS(51),
    [anon_sym_fun] = ACTIONS(51),
    [anon_sym_PIPE] = ACTIONS(49),
    [aux_sym_SLASH_LBRACKG_DASHZg_DASHz_RBRACK_SLASH] = ACTIONS(53),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [anon_sym_SQUOTE] = ACTIONS(49),
    [sym_number] = ACTIONS(51),
    [sym_float] = ACTIONS(51),
    [sym_upper_ident] = ACTIONS(55),
    [sym_lower_ident] = ACTIONS(55),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(57),
    [anon_sym_let] = ACTIONS(59),
    [anon_sym_open] = ACTIONS(59),
    [anon_sym_fun] = ACTIONS(59),
    [anon_sym_PIPE] = ACTIONS(57),
    [aux_sym_SLASH_LBRACKG_DASHZg_DASHz_RBRACK_SLASH] = ACTIONS(61),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [anon_sym_SQUOTE] = ACTIONS(57),
    [sym_number] = ACTIONS(59),
    [sym_float] = ACTIONS(59),
    [sym_upper_ident] = ACTIONS(63),
    [sym_lower_ident] = ACTIONS(63),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(65),
    [anon_sym_let] = ACTIONS(67),
    [anon_sym_open] = ACTIONS(67),
    [anon_sym_SEMI] = ACTIONS(65),
    [anon_sym_RBRACE] = ACTIONS(65),
    [anon_sym_fun] = ACTIONS(67),
    [anon_sym_PIPE] = ACTIONS(65),
    [anon_sym_EQ_GT] = ACTIONS(65),
    [anon_sym_DQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE] = ACTIONS(65),
    [sym_number] = ACTIONS(67),
    [sym_float] = ACTIONS(67),
    [sym_upper_ident] = ACTIONS(67),
    [sym_lower_ident] = ACTIONS(69),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(71),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(73),
    [anon_sym_let] = ACTIONS(75),
    [anon_sym_open] = ACTIONS(75),
    [anon_sym_fun] = ACTIONS(75),
    [anon_sym_DQUOTE] = ACTIONS(73),
    [anon_sym_SQUOTE] = ACTIONS(73),
    [sym_number] = ACTIONS(75),
    [sym_float] = ACTIONS(75),
    [sym_upper_ident] = ACTIONS(75),
    [sym_lower_ident] = ACTIONS(77),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(79),
    [anon_sym_let] = ACTIONS(81),
    [anon_sym_open] = ACTIONS(81),
    [anon_sym_fun] = ACTIONS(81),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [anon_sym_SQUOTE] = ACTIONS(79),
    [sym_number] = ACTIONS(81),
    [sym_float] = ACTIONS(81),
    [sym_upper_ident] = ACTIONS(81),
    [sym_lower_ident] = ACTIONS(83),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(85),
    [anon_sym_let] = ACTIONS(87),
    [anon_sym_open] = ACTIONS(87),
    [anon_sym_fun] = ACTIONS(87),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [anon_sym_SQUOTE] = ACTIONS(85),
    [sym_number] = ACTIONS(87),
    [sym_float] = ACTIONS(87),
    [sym_upper_ident] = ACTIONS(87),
    [sym_lower_ident] = ACTIONS(89),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(91),
    [anon_sym_let] = ACTIONS(93),
    [anon_sym_open] = ACTIONS(93),
    [anon_sym_RBRACE] = ACTIONS(91),
    [anon_sym_fun] = ACTIONS(93),
    [anon_sym_PIPE] = ACTIONS(91),
    [anon_sym_EQ_GT] = ACTIONS(91),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [anon_sym_SQUOTE] = ACTIONS(91),
    [sym_number] = ACTIONS(93),
    [sym_float] = ACTIONS(93),
    [sym_upper_ident] = ACTIONS(93),
    [sym_lower_ident] = ACTIONS(95),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(97),
    [anon_sym_let] = ACTIONS(99),
    [anon_sym_open] = ACTIONS(99),
    [anon_sym_RBRACE] = ACTIONS(97),
    [anon_sym_fun] = ACTIONS(99),
    [anon_sym_PIPE] = ACTIONS(97),
    [anon_sym_EQ_GT] = ACTIONS(97),
    [anon_sym_DQUOTE] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_number] = ACTIONS(99),
    [sym_float] = ACTIONS(99),
    [sym_upper_ident] = ACTIONS(99),
    [sym_lower_ident] = ACTIONS(101),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(103),
    [anon_sym_let] = ACTIONS(105),
    [anon_sym_open] = ACTIONS(105),
    [anon_sym_RBRACE] = ACTIONS(103),
    [anon_sym_fun] = ACTIONS(105),
    [anon_sym_PIPE] = ACTIONS(103),
    [anon_sym_EQ_GT] = ACTIONS(103),
    [anon_sym_DQUOTE] = ACTIONS(103),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_number] = ACTIONS(105),
    [sym_float] = ACTIONS(105),
    [sym_upper_ident] = ACTIONS(105),
    [sym_lower_ident] = ACTIONS(107),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(109),
    [anon_sym_let] = ACTIONS(111),
    [anon_sym_open] = ACTIONS(111),
    [anon_sym_RBRACE] = ACTIONS(109),
    [anon_sym_fun] = ACTIONS(111),
    [anon_sym_PIPE] = ACTIONS(109),
    [anon_sym_EQ_GT] = ACTIONS(109),
    [anon_sym_DQUOTE] = ACTIONS(109),
    [anon_sym_SQUOTE] = ACTIONS(109),
    [sym_number] = ACTIONS(111),
    [sym_float] = ACTIONS(111),
    [sym_upper_ident] = ACTIONS(111),
    [sym_lower_ident] = ACTIONS(113),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(115),
    [anon_sym_let] = ACTIONS(117),
    [anon_sym_open] = ACTIONS(117),
    [anon_sym_RBRACE] = ACTIONS(115),
    [anon_sym_fun] = ACTIONS(117),
    [anon_sym_PIPE] = ACTIONS(115),
    [anon_sym_EQ_GT] = ACTIONS(115),
    [anon_sym_DQUOTE] = ACTIONS(115),
    [anon_sym_SQUOTE] = ACTIONS(115),
    [sym_number] = ACTIONS(117),
    [sym_float] = ACTIONS(117),
    [sym_upper_ident] = ACTIONS(117),
    [sym_lower_ident] = ACTIONS(119),
  },
  [20] = {
    [sym_structure_item] = STATE(12),
    [sym_str_eval] = STATE(13),
    [sym_str_value] = STATE(13),
    [sym_str_open] = STATE(13),
    [sym_expr] = STATE(14),
    [sym_exp_ident] = STATE(15),
    [sym_exp_let] = STATE(15),
    [sym_exp_function] = STATE(15),
    [sym_exp_constant] = STATE(15),
    [sym_const_char] = STATE(16),
    [sym_const_string] = STATE(16),
    [sym_const_integer] = STATE(16),
    [sym_const_float] = STATE(16),
    [sym_string] = STATE(17),
    [sym_char] = STATE(18),
    [sym_ident] = STATE(19),
    [aux_sym_program_repeat1] = STATE(37),
    [ts_builtin_sym_end] = ACTIONS(29),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_open] = ACTIONS(13),
    [anon_sym_fun] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [sym_number] = ACTIONS(21),
    [sym_float] = ACTIONS(23),
    [sym_upper_ident] = ACTIONS(25),
    [sym_lower_ident] = ACTIONS(27),
  },
  [21] = {
    [sym_structure_item] = STATE(12),
    [sym_str_eval] = STATE(13),
    [sym_str_value] = STATE(13),
    [sym_str_open] = STATE(13),
    [sym_expr] = STATE(14),
    [sym_exp_ident] = STATE(15),
    [sym_exp_let] = STATE(15),
    [sym_exp_function] = STATE(15),
    [sym_exp_constant] = STATE(15),
    [sym_const_char] = STATE(16),
    [sym_const_string] = STATE(16),
    [sym_const_integer] = STATE(16),
    [sym_const_float] = STATE(16),
    [sym_string] = STATE(17),
    [sym_char] = STATE(18),
    [sym_ident] = STATE(19),
    [aux_sym_program_repeat1] = STATE(37),
    [ts_builtin_sym_end] = ACTIONS(121),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_open] = ACTIONS(13),
    [anon_sym_fun] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [sym_number] = ACTIONS(21),
    [sym_float] = ACTIONS(23),
    [sym_upper_ident] = ACTIONS(25),
    [sym_lower_ident] = ACTIONS(27),
  },
  [22] = {
    [sym_value_binding] = STATE(38),
    [sym_pattern] = STATE(25),
    [sym_pat_var] = STATE(26),
    [sym_lower_ident] = ACTIONS(123),
  },
  [23] = {
    [anon_sym_EQ] = ACTIONS(125),
    [anon_sym_EQ_GT] = ACTIONS(127),
    [anon_sym_when] = ACTIONS(127),
  },
  [24] = {
    [sym_expr] = STATE(41),
    [sym_exp_ident] = STATE(15),
    [sym_exp_let] = STATE(15),
    [sym_exp_function] = STATE(15),
    [sym_exp_constant] = STATE(15),
    [sym_const_char] = STATE(16),
    [sym_const_string] = STATE(16),
    [sym_const_integer] = STATE(16),
    [sym_const_float] = STATE(16),
    [sym_string] = STATE(17),
    [sym_char] = STATE(18),
    [sym_ident] = STATE(19),
    [aux_sym_str_value_repeat1] = STATE(42),
    [ts_builtin_sym_end] = ACTIONS(129),
    [anon_sym_let] = ACTIONS(131),
    [anon_sym_and] = ACTIONS(133),
    [anon_sym_open] = ACTIONS(131),
    [anon_sym_fun] = ACTIONS(131),
    [anon_sym_DQUOTE] = ACTIONS(129),
    [anon_sym_SQUOTE] = ACTIONS(129),
    [sym_number] = ACTIONS(131),
    [sym_float] = ACTIONS(131),
    [sym_upper_ident] = ACTIONS(131),
    [sym_lower_ident] = ACTIONS(135),
  },
  [25] = {
    [anon_sym_EQ] = ACTIONS(137),
  },
  [26] = {
    [anon_sym_EQ] = ACTIONS(139),
    [anon_sym_EQ_GT] = ACTIONS(141),
    [anon_sym_when] = ACTIONS(141),
  },
  [27] = {
    [ts_builtin_sym_end] = ACTIONS(143),
    [anon_sym_let] = ACTIONS(145),
    [anon_sym_open] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(147),
    [anon_sym_fun] = ACTIONS(145),
    [anon_sym_DQUOTE] = ACTIONS(143),
    [anon_sym_SQUOTE] = ACTIONS(143),
    [sym_number] = ACTIONS(145),
    [sym_float] = ACTIONS(145),
    [sym_upper_ident] = ACTIONS(145),
    [sym_lower_ident] = ACTIONS(149),
  },
  [28] = {
    [sym_pattern] = STATE(45),
    [sym_pat_var] = STATE(26),
    [sym_lower_ident] = ACTIONS(123),
  },
  [29] = {
    [ts_builtin_sym_end] = ACTIONS(151),
    [anon_sym_let] = ACTIONS(153),
    [anon_sym_open] = ACTIONS(153),
    [anon_sym_RBRACE] = ACTIONS(151),
    [anon_sym_fun] = ACTIONS(153),
    [anon_sym_PIPE] = ACTIONS(151),
    [anon_sym_EQ_GT] = ACTIONS(151),
    [anon_sym_DQUOTE] = ACTIONS(151),
    [anon_sym_SQUOTE] = ACTIONS(151),
    [sym_number] = ACTIONS(153),
    [sym_float] = ACTIONS(153),
    [sym_upper_ident] = ACTIONS(153),
    [sym_lower_ident] = ACTIONS(155),
  },
  [30] = {
    [sym_case] = STATE(29),
    [aux_sym_exp_function_repeat1] = STATE(46),
    [ts_builtin_sym_end] = ACTIONS(157),
    [anon_sym_let] = ACTIONS(159),
    [anon_sym_open] = ACTIONS(159),
    [anon_sym_fun] = ACTIONS(159),
    [anon_sym_PIPE] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(157),
    [anon_sym_SQUOTE] = ACTIONS(157),
    [sym_number] = ACTIONS(159),
    [sym_float] = ACTIONS(159),
    [sym_upper_ident] = ACTIONS(159),
    [sym_lower_ident] = ACTIONS(161),
  },
  [31] = {
    [ts_builtin_sym_end] = ACTIONS(163),
    [anon_sym_let] = ACTIONS(165),
    [anon_sym_open] = ACTIONS(165),
    [anon_sym_RBRACE] = ACTIONS(163),
    [anon_sym_fun] = ACTIONS(165),
    [anon_sym_PIPE] = ACTIONS(163),
    [anon_sym_EQ_GT] = ACTIONS(163),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [anon_sym_SQUOTE] = ACTIONS(163),
    [sym_number] = ACTIONS(165),
    [sym_float] = ACTIONS(165),
    [sym_upper_ident] = ACTIONS(165),
    [sym_lower_ident] = ACTIONS(167),
  },
  [32] = {
    [anon_sym_DQUOTE] = ACTIONS(169),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_DQUOTE_BSLASHn_RBRACK_SLASH] = ACTIONS(169),
    [aux_sym_SLASH_BSLASH_BSLASH_LPAREN_DOT_PIPE_BSLASHn_RPAREN_SLASH] = ACTIONS(169),
  },
  [33] = {
    [aux_sym_string_repeat1] = STATE(48),
    [anon_sym_DQUOTE] = ACTIONS(171),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_DQUOTE_BSLASHn_RBRACK_SLASH] = ACTIONS(45),
    [aux_sym_SLASH_BSLASH_BSLASH_LPAREN_DOT_PIPE_BSLASHn_RPAREN_SLASH] = ACTIONS(45),
  },
  [34] = {
    [anon_sym_SQUOTE] = ACTIONS(173),
  },
  [35] = {
    [ts_builtin_sym_end] = ACTIONS(175),
    [anon_sym_let] = ACTIONS(177),
    [anon_sym_open] = ACTIONS(177),
    [anon_sym_RBRACE] = ACTIONS(175),
    [anon_sym_fun] = ACTIONS(177),
    [anon_sym_PIPE] = ACTIONS(175),
    [anon_sym_EQ_GT] = ACTIONS(175),
    [anon_sym_DQUOTE] = ACTIONS(175),
    [anon_sym_SQUOTE] = ACTIONS(175),
    [sym_number] = ACTIONS(177),
    [sym_float] = ACTIONS(177),
    [sym_upper_ident] = ACTIONS(177),
    [sym_lower_ident] = ACTIONS(179),
  },
  [36] = {
    [ts_builtin_sym_end] = ACTIONS(181),
    [anon_sym_let] = ACTIONS(183),
    [anon_sym_open] = ACTIONS(183),
    [anon_sym_RBRACE] = ACTIONS(181),
    [anon_sym_fun] = ACTIONS(183),
    [anon_sym_PIPE] = ACTIONS(181),
    [anon_sym_EQ_GT] = ACTIONS(181),
    [anon_sym_DQUOTE] = ACTIONS(181),
    [anon_sym_SQUOTE] = ACTIONS(181),
    [sym_number] = ACTIONS(183),
    [sym_float] = ACTIONS(183),
    [sym_upper_ident] = ACTIONS(183),
    [sym_lower_ident] = ACTIONS(185),
  },
  [37] = {
    [sym_structure_item] = STATE(12),
    [sym_str_eval] = STATE(13),
    [sym_str_value] = STATE(13),
    [sym_str_open] = STATE(13),
    [sym_expr] = STATE(14),
    [sym_exp_ident] = STATE(15),
    [sym_exp_let] = STATE(15),
    [sym_exp_function] = STATE(15),
    [sym_exp_constant] = STATE(15),
    [sym_const_char] = STATE(16),
    [sym_const_string] = STATE(16),
    [sym_const_integer] = STATE(16),
    [sym_const_float] = STATE(16),
    [sym_string] = STATE(17),
    [sym_char] = STATE(18),
    [sym_ident] = STATE(19),
    [aux_sym_program_repeat1] = STATE(37),
    [ts_builtin_sym_end] = ACTIONS(187),
    [anon_sym_let] = ACTIONS(189),
    [anon_sym_open] = ACTIONS(192),
    [anon_sym_fun] = ACTIONS(195),
    [anon_sym_DQUOTE] = ACTIONS(198),
    [anon_sym_SQUOTE] = ACTIONS(201),
    [sym_number] = ACTIONS(204),
    [sym_float] = ACTIONS(207),
    [sym_upper_ident] = ACTIONS(210),
    [sym_lower_ident] = ACTIONS(213),
  },
  [38] = {
    [sym_expr] = STATE(50),
    [sym_exp_ident] = STATE(15),
    [sym_exp_let] = STATE(15),
    [sym_exp_function] = STATE(15),
    [sym_exp_constant] = STATE(15),
    [sym_const_char] = STATE(16),
    [sym_const_string] = STATE(16),
    [sym_const_integer] = STATE(16),
    [sym_const_float] = STATE(16),
    [sym_string] = STATE(17),
    [sym_char] = STATE(18),
    [sym_ident] = STATE(19),
    [aux_sym_str_value_repeat1] = STATE(51),
    [ts_builtin_sym_end] = ACTIONS(216),
    [anon_sym_let] = ACTIONS(218),
    [anon_sym_and] = ACTIONS(133),
    [anon_sym_open] = ACTIONS(218),
    [anon_sym_fun] = ACTIONS(218),
    [anon_sym_DQUOTE] = ACTIONS(216),
    [anon_sym_SQUOTE] = ACTIONS(216),
    [sym_number] = ACTIONS(218),
    [sym_float] = ACTIONS(218),
    [sym_upper_ident] = ACTIONS(218),
    [sym_lower_ident] = ACTIONS(220),
  },
  [39] = {
    [sym_value_binding] = STATE(53),
    [sym_pattern] = STATE(54),
    [sym_pat_var] = STATE(26),
    [anon_sym_rec] = ACTIONS(222),
    [sym_lower_ident] = ACTIONS(33),
  },
  [40] = {
    [sym_value_binding] = STATE(55),
    [sym_pattern] = STATE(25),
    [sym_pat_var] = STATE(26),
    [sym_lower_ident] = ACTIONS(123),
  },
  [41] = {
    [ts_builtin_sym_end] = ACTIONS(224),
    [anon_sym_let] = ACTIONS(226),
    [anon_sym_open] = ACTIONS(226),
    [anon_sym_RBRACE] = ACTIONS(224),
    [anon_sym_fun] = ACTIONS(226),
    [anon_sym_PIPE] = ACTIONS(224),
    [anon_sym_EQ_GT] = ACTIONS(224),
    [anon_sym_DQUOTE] = ACTIONS(224),
    [anon_sym_SQUOTE] = ACTIONS(224),
    [sym_number] = ACTIONS(226),
    [sym_float] = ACTIONS(226),
    [sym_upper_ident] = ACTIONS(226),
    [sym_lower_ident] = ACTIONS(228),
  },
  [42] = {
    [sym_expr] = STATE(50),
    [sym_exp_ident] = STATE(15),
    [sym_exp_let] = STATE(15),
    [sym_exp_function] = STATE(15),
    [sym_exp_constant] = STATE(15),
    [sym_const_char] = STATE(16),
    [sym_const_string] = STATE(16),
    [sym_const_integer] = STATE(16),
    [sym_const_float] = STATE(16),
    [sym_string] = STATE(17),
    [sym_char] = STATE(18),
    [sym_ident] = STATE(19),
    [aux_sym_str_value_repeat1] = STATE(56),
    [ts_builtin_sym_end] = ACTIONS(216),
    [anon_sym_let] = ACTIONS(218),
    [anon_sym_and] = ACTIONS(133),
    [anon_sym_open] = ACTIONS(218),
    [anon_sym_fun] = ACTIONS(218),
    [anon_sym_DQUOTE] = ACTIONS(216),
    [anon_sym_SQUOTE] = ACTIONS(216),
    [sym_number] = ACTIONS(218),
    [sym_float] = ACTIONS(218),
    [sym_upper_ident] = ACTIONS(218),
    [sym_lower_ident] = ACTIONS(220),
  },
  [43] = {
    [sym_braced_expr] = STATE(65),
    [sym_expr] = STATE(65),
    [sym_exp_ident] = STATE(66),
    [sym_exp_let] = STATE(66),
    [sym_exp_function] = STATE(66),
    [sym_exp_constant] = STATE(66),
    [sym_const_char] = STATE(67),
    [sym_const_string] = STATE(67),
    [sym_const_integer] = STATE(67),
    [sym_const_float] = STATE(67),
    [sym_string] = STATE(68),
    [sym_char] = STATE(69),
    [sym_ident] = STATE(70),
    [anon_sym_let] = ACTIONS(230),
    [anon_sym_LBRACE] = ACTIONS(232),
    [anon_sym_fun] = ACTIONS(234),
    [anon_sym_DQUOTE] = ACTIONS(236),
    [anon_sym_SQUOTE] = ACTIONS(238),
    [sym_number] = ACTIONS(240),
    [sym_float] = ACTIONS(242),
    [sym_upper_ident] = ACTIONS(244),
    [sym_lower_ident] = ACTIONS(246),
  },
  [44] = {
    [ts_builtin_sym_end] = ACTIONS(248),
    [anon_sym_let] = ACTIONS(250),
    [anon_sym_open] = ACTIONS(250),
    [anon_sym_fun] = ACTIONS(250),
    [anon_sym_DQUOTE] = ACTIONS(248),
    [anon_sym_SQUOTE] = ACTIONS(248),
    [sym_number] = ACTIONS(250),
    [sym_float] = ACTIONS(250),
    [sym_upper_ident] = ACTIONS(250),
    [sym_lower_ident] = ACTIONS(252),
  },
  [45] = {
    [sym_guard] = STATE(73),
    [anon_sym_EQ_GT] = ACTIONS(254),
    [anon_sym_when] = ACTIONS(256),
  },
  [46] = {
    [sym_case] = STATE(29),
    [aux_sym_exp_function_repeat1] = STATE(46),
    [ts_builtin_sym_end] = ACTIONS(258),
    [anon_sym_let] = ACTIONS(260),
    [anon_sym_open] = ACTIONS(260),
    [anon_sym_fun] = ACTIONS(260),
    [anon_sym_PIPE] = ACTIONS(262),
    [anon_sym_DQUOTE] = ACTIONS(258),
    [anon_sym_SQUOTE] = ACTIONS(258),
    [sym_number] = ACTIONS(260),
    [sym_float] = ACTIONS(260),
    [sym_upper_ident] = ACTIONS(260),
    [sym_lower_ident] = ACTIONS(265),
  },
  [47] = {
    [ts_builtin_sym_end] = ACTIONS(267),
    [anon_sym_let] = ACTIONS(269),
    [anon_sym_open] = ACTIONS(269),
    [anon_sym_RBRACE] = ACTIONS(267),
    [anon_sym_fun] = ACTIONS(269),
    [anon_sym_PIPE] = ACTIONS(267),
    [anon_sym_EQ_GT] = ACTIONS(267),
    [anon_sym_DQUOTE] = ACTIONS(267),
    [anon_sym_SQUOTE] = ACTIONS(267),
    [sym_number] = ACTIONS(269),
    [sym_float] = ACTIONS(269),
    [sym_upper_ident] = ACTIONS(269),
    [sym_lower_ident] = ACTIONS(271),
  },
  [48] = {
    [aux_sym_string_repeat1] = STATE(48),
    [anon_sym_DQUOTE] = ACTIONS(273),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_DQUOTE_BSLASHn_RBRACK_SLASH] = ACTIONS(275),
    [aux_sym_SLASH_BSLASH_BSLASH_LPAREN_DOT_PIPE_BSLASHn_RPAREN_SLASH] = ACTIONS(275),
  },
  [49] = {
    [ts_builtin_sym_end] = ACTIONS(278),
    [anon_sym_let] = ACTIONS(280),
    [anon_sym_open] = ACTIONS(280),
    [anon_sym_RBRACE] = ACTIONS(278),
    [anon_sym_fun] = ACTIONS(280),
    [anon_sym_PIPE] = ACTIONS(278),
    [anon_sym_EQ_GT] = ACTIONS(278),
    [anon_sym_DQUOTE] = ACTIONS(278),
    [anon_sym_SQUOTE] = ACTIONS(278),
    [sym_number] = ACTIONS(280),
    [sym_float] = ACTIONS(280),
    [sym_upper_ident] = ACTIONS(280),
    [sym_lower_ident] = ACTIONS(282),
  },
  [50] = {
    [ts_builtin_sym_end] = ACTIONS(284),
    [anon_sym_let] = ACTIONS(286),
    [anon_sym_open] = ACTIONS(286),
    [anon_sym_RBRACE] = ACTIONS(284),
    [anon_sym_fun] = ACTIONS(286),
    [anon_sym_PIPE] = ACTIONS(284),
    [anon_sym_EQ_GT] = ACTIONS(284),
    [anon_sym_DQUOTE] = ACTIONS(284),
    [anon_sym_SQUOTE] = ACTIONS(284),
    [sym_number] = ACTIONS(286),
    [sym_float] = ACTIONS(286),
    [sym_upper_ident] = ACTIONS(286),
    [sym_lower_ident] = ACTIONS(288),
  },
  [51] = {
    [sym_expr] = STATE(74),
    [sym_exp_ident] = STATE(15),
    [sym_exp_let] = STATE(15),
    [sym_exp_function] = STATE(15),
    [sym_exp_constant] = STATE(15),
    [sym_const_char] = STATE(16),
    [sym_const_string] = STATE(16),
    [sym_const_integer] = STATE(16),
    [sym_const_float] = STATE(16),
    [sym_string] = STATE(17),
    [sym_char] = STATE(18),
    [sym_ident] = STATE(19),
    [aux_sym_str_value_repeat1] = STATE(56),
    [ts_builtin_sym_end] = ACTIONS(290),
    [anon_sym_let] = ACTIONS(292),
    [anon_sym_and] = ACTIONS(133),
    [anon_sym_open] = ACTIONS(292),
    [anon_sym_fun] = ACTIONS(292),
    [anon_sym_DQUOTE] = ACTIONS(290),
    [anon_sym_SQUOTE] = ACTIONS(290),
    [sym_number] = ACTIONS(292),
    [sym_float] = ACTIONS(292),
    [sym_upper_ident] = ACTIONS(292),
    [sym_lower_ident] = ACTIONS(294),
  },
  [52] = {
    [sym_value_binding] = STATE(75),
    [sym_pattern] = STATE(54),
    [sym_pat_var] = STATE(26),
    [sym_lower_ident] = ACTIONS(123),
  },
  [53] = {
    [sym_expr] = STATE(41),
    [sym_exp_ident] = STATE(15),
    [sym_exp_let] = STATE(15),
    [sym_exp_function] = STATE(15),
    [sym_exp_constant] = STATE(15),
    [sym_const_char] = STATE(16),
    [sym_const_string] = STATE(16),
    [sym_const_integer] = STATE(16),
    [sym_const_float] = STATE(16),
    [sym_string] = STATE(17),
    [sym_char] = STATE(18),
    [sym_ident] = STATE(19),
    [aux_sym_str_value_repeat1] = STATE(77),
    [anon_sym_let] = ACTIONS(296),
    [anon_sym_and] = ACTIONS(298),
    [anon_sym_fun] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [sym_number] = ACTIONS(21),
    [sym_float] = ACTIONS(23),
    [sym_upper_ident] = ACTIONS(25),
    [sym_lower_ident] = ACTIONS(27),
  },
  [54] = {
    [anon_sym_EQ] = ACTIONS(300),
  },
  [55] = {
    [ts_builtin_sym_end] = ACTIONS(302),
    [anon_sym_let] = ACTIONS(304),
    [anon_sym_and] = ACTIONS(304),
    [anon_sym_open] = ACTIONS(304),
    [anon_sym_fun] = ACTIONS(304),
    [anon_sym_DQUOTE] = ACTIONS(302),
    [anon_sym_SQUOTE] = ACTIONS(302),
    [sym_number] = ACTIONS(304),
    [sym_float] = ACTIONS(304),
    [sym_upper_ident] = ACTIONS(304),
    [sym_lower_ident] = ACTIONS(306),
  },
  [56] = {
    [aux_sym_str_value_repeat1] = STATE(56),
    [ts_builtin_sym_end] = ACTIONS(302),
    [anon_sym_let] = ACTIONS(304),
    [anon_sym_and] = ACTIONS(308),
    [anon_sym_open] = ACTIONS(304),
    [anon_sym_fun] = ACTIONS(304),
    [anon_sym_DQUOTE] = ACTIONS(302),
    [anon_sym_SQUOTE] = ACTIONS(302),
    [sym_number] = ACTIONS(304),
    [sym_float] = ACTIONS(304),
    [sym_upper_ident] = ACTIONS(304),
    [sym_lower_ident] = ACTIONS(306),
  },
  [57] = {
    [sym_value_binding] = STATE(80),
    [sym_pattern] = STATE(54),
    [sym_pat_var] = STATE(26),
    [anon_sym_rec] = ACTIONS(311),
    [sym_lower_ident] = ACTIONS(33),
  },
  [58] = {
    [sym_expr] = STATE(85),
    [sym_exp_ident] = STATE(15),
    [sym_exp_let] = STATE(15),
    [sym_exp_function] = STATE(15),
    [sym_exp_constant] = STATE(15),
    [sym_const_char] = STATE(16),
    [sym_const_string] = STATE(16),
    [sym_const_integer] = STATE(16),
    [sym_const_float] = STATE(16),
    [sym_string] = STATE(17),
    [sym_char] = STATE(18),
    [sym_ident] = STATE(19),
    [anon_sym_let] = ACTIONS(313),
    [anon_sym_fun] = ACTIONS(315),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [sym_number] = ACTIONS(317),
    [sym_float] = ACTIONS(319),
    [sym_upper_ident] = ACTIONS(25),
    [sym_lower_ident] = ACTIONS(27),
  },
  [59] = {
    [sym_case] = STATE(87),
    [aux_sym_exp_function_repeat1] = STATE(88),
    [ts_builtin_sym_end] = ACTIONS(35),
    [anon_sym_let] = ACTIONS(37),
    [anon_sym_and] = ACTIONS(37),
    [anon_sym_open] = ACTIONS(37),
    [anon_sym_fun] = ACTIONS(37),
    [anon_sym_PIPE] = ACTIONS(321),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [anon_sym_SQUOTE] = ACTIONS(35),
    [sym_number] = ACTIONS(37),
    [sym_float] = ACTIONS(37),
    [sym_upper_ident] = ACTIONS(37),
    [sym_lower_ident] = ACTIONS(41),
  },
  [60] = {
    [aux_sym_string_repeat1] = STATE(90),
    [anon_sym_DQUOTE] = ACTIONS(323),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_DQUOTE_BSLASHn_RBRACK_SLASH] = ACTIONS(45),
    [aux_sym_SLASH_BSLASH_BSLASH_LPAREN_DOT_PIPE_BSLASHn_RPAREN_SLASH] = ACTIONS(45),
  },
  [61] = {
    [aux_sym_SLASH_LBRACKA_DASHZa_DASHz0_DASH9_RBRACK_SLASH] = ACTIONS(325),
  },
  [62] = {
    [ts_builtin_sym_end] = ACTIONS(49),
    [anon_sym_let] = ACTIONS(51),
    [anon_sym_and] = ACTIONS(51),
    [anon_sym_open] = ACTIONS(51),
    [anon_sym_fun] = ACTIONS(51),
    [anon_sym_PIPE] = ACTIONS(49),
    [aux_sym_SLASH_LBRACKG_DASHZg_DASHz_RBRACK_SLASH] = ACTIONS(327),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [anon_sym_SQUOTE] = ACTIONS(49),
    [sym_number] = ACTIONS(51),
    [sym_float] = ACTIONS(51),
    [sym_upper_ident] = ACTIONS(55),
    [sym_lower_ident] = ACTIONS(55),
  },
  [63] = {
    [ts_builtin_sym_end] = ACTIONS(57),
    [anon_sym_let] = ACTIONS(59),
    [anon_sym_and] = ACTIONS(59),
    [anon_sym_open] = ACTIONS(59),
    [anon_sym_fun] = ACTIONS(59),
    [anon_sym_PIPE] = ACTIONS(57),
    [aux_sym_SLASH_LBRACKG_DASHZg_DASHz_RBRACK_SLASH] = ACTIONS(329),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [anon_sym_SQUOTE] = ACTIONS(57),
    [sym_number] = ACTIONS(59),
    [sym_float] = ACTIONS(59),
    [sym_upper_ident] = ACTIONS(63),
    [sym_lower_ident] = ACTIONS(63),
  },
  [64] = {
    [ts_builtin_sym_end] = ACTIONS(65),
    [anon_sym_let] = ACTIONS(67),
    [anon_sym_and] = ACTIONS(67),
    [anon_sym_open] = ACTIONS(67),
    [anon_sym_fun] = ACTIONS(67),
    [anon_sym_PIPE] = ACTIONS(65),
    [anon_sym_DQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE] = ACTIONS(65),
    [sym_number] = ACTIONS(67),
    [sym_float] = ACTIONS(67),
    [sym_upper_ident] = ACTIONS(67),
    [sym_lower_ident] = ACTIONS(69),
  },
  [65] = {
    [ts_builtin_sym_end] = ACTIONS(331),
    [anon_sym_let] = ACTIONS(333),
    [anon_sym_and] = ACTIONS(333),
    [anon_sym_open] = ACTIONS(333),
    [anon_sym_fun] = ACTIONS(333),
    [anon_sym_DQUOTE] = ACTIONS(331),
    [anon_sym_SQUOTE] = ACTIONS(331),
    [sym_number] = ACTIONS(333),
    [sym_float] = ACTIONS(333),
    [sym_upper_ident] = ACTIONS(333),
    [sym_lower_ident] = ACTIONS(335),
  },
  [66] = {
    [ts_builtin_sym_end] = ACTIONS(91),
    [anon_sym_let] = ACTIONS(93),
    [anon_sym_and] = ACTIONS(93),
    [anon_sym_open] = ACTIONS(93),
    [anon_sym_fun] = ACTIONS(93),
    [anon_sym_PIPE] = ACTIONS(91),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [anon_sym_SQUOTE] = ACTIONS(91),
    [sym_number] = ACTIONS(93),
    [sym_float] = ACTIONS(93),
    [sym_upper_ident] = ACTIONS(93),
    [sym_lower_ident] = ACTIONS(95),
  },
  [67] = {
    [ts_builtin_sym_end] = ACTIONS(97),
    [anon_sym_let] = ACTIONS(99),
    [anon_sym_and] = ACTIONS(99),
    [anon_sym_open] = ACTIONS(99),
    [anon_sym_fun] = ACTIONS(99),
    [anon_sym_PIPE] = ACTIONS(97),
    [anon_sym_DQUOTE] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_number] = ACTIONS(99),
    [sym_float] = ACTIONS(99),
    [sym_upper_ident] = ACTIONS(99),
    [sym_lower_ident] = ACTIONS(101),
  },
  [68] = {
    [ts_builtin_sym_end] = ACTIONS(103),
    [anon_sym_let] = ACTIONS(105),
    [anon_sym_and] = ACTIONS(105),
    [anon_sym_open] = ACTIONS(105),
    [anon_sym_fun] = ACTIONS(105),
    [anon_sym_PIPE] = ACTIONS(103),
    [anon_sym_DQUOTE] = ACTIONS(103),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_number] = ACTIONS(105),
    [sym_float] = ACTIONS(105),
    [sym_upper_ident] = ACTIONS(105),
    [sym_lower_ident] = ACTIONS(107),
  },
  [69] = {
    [ts_builtin_sym_end] = ACTIONS(109),
    [anon_sym_let] = ACTIONS(111),
    [anon_sym_and] = ACTIONS(111),
    [anon_sym_open] = ACTIONS(111),
    [anon_sym_fun] = ACTIONS(111),
    [anon_sym_PIPE] = ACTIONS(109),
    [anon_sym_DQUOTE] = ACTIONS(109),
    [anon_sym_SQUOTE] = ACTIONS(109),
    [sym_number] = ACTIONS(111),
    [sym_float] = ACTIONS(111),
    [sym_upper_ident] = ACTIONS(111),
    [sym_lower_ident] = ACTIONS(113),
  },
  [70] = {
    [ts_builtin_sym_end] = ACTIONS(115),
    [anon_sym_let] = ACTIONS(117),
    [anon_sym_and] = ACTIONS(117),
    [anon_sym_open] = ACTIONS(117),
    [anon_sym_fun] = ACTIONS(117),
    [anon_sym_PIPE] = ACTIONS(115),
    [anon_sym_DQUOTE] = ACTIONS(115),
    [anon_sym_SQUOTE] = ACTIONS(115),
    [sym_number] = ACTIONS(117),
    [sym_float] = ACTIONS(117),
    [sym_upper_ident] = ACTIONS(117),
    [sym_lower_ident] = ACTIONS(119),
  },
  [71] = {
    [sym_expr] = STATE(95),
    [sym_exp_ident] = STATE(15),
    [sym_exp_let] = STATE(15),
    [sym_exp_function] = STATE(15),
    [sym_exp_constant] = STATE(15),
    [sym_const_char] = STATE(16),
    [sym_const_string] = STATE(16),
    [sym_const_integer] = STATE(16),
    [sym_const_float] = STATE(16),
    [sym_string] = STATE(17),
    [sym_char] = STATE(18),
    [sym_ident] = STATE(19),
    [anon_sym_let] = ACTIONS(337),
    [anon_sym_fun] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [sym_number] = ACTIONS(21),
    [sym_float] = ACTIONS(23),
    [sym_upper_ident] = ACTIONS(25),
    [sym_lower_ident] = ACTIONS(27),
  },
  [72] = {
    [sym_expr] = STATE(98),
    [sym_exp_ident] = STATE(15),
    [sym_exp_let] = STATE(15),
    [sym_exp_function] = STATE(15),
    [sym_exp_constant] = STATE(15),
    [sym_const_char] = STATE(16),
    [sym_const_string] = STATE(16),
    [sym_const_integer] = STATE(16),
    [sym_const_float] = STATE(16),
    [sym_string] = STATE(17),
    [sym_char] = STATE(18),
    [sym_ident] = STATE(19),
    [anon_sym_let] = ACTIONS(339),
    [anon_sym_fun] = ACTIONS(341),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [sym_number] = ACTIONS(317),
    [sym_float] = ACTIONS(319),
    [sym_upper_ident] = ACTIONS(25),
    [sym_lower_ident] = ACTIONS(27),
  },
  [73] = {
    [anon_sym_EQ_GT] = ACTIONS(343),
  },
  [74] = {
    [ts_builtin_sym_end] = ACTIONS(345),
    [anon_sym_let] = ACTIONS(347),
    [anon_sym_open] = ACTIONS(347),
    [anon_sym_RBRACE] = ACTIONS(345),
    [anon_sym_fun] = ACTIONS(347),
    [anon_sym_PIPE] = ACTIONS(345),
    [anon_sym_EQ_GT] = ACTIONS(345),
    [anon_sym_DQUOTE] = ACTIONS(345),
    [anon_sym_SQUOTE] = ACTIONS(345),
    [sym_number] = ACTIONS(347),
    [sym_float] = ACTIONS(347),
    [sym_upper_ident] = ACTIONS(347),
    [sym_lower_ident] = ACTIONS(349),
  },
  [75] = {
    [sym_expr] = STATE(50),
    [sym_exp_ident] = STATE(15),
    [sym_exp_let] = STATE(15),
    [sym_exp_function] = STATE(15),
    [sym_exp_constant] = STATE(15),
    [sym_const_char] = STATE(16),
    [sym_const_string] = STATE(16),
    [sym_const_integer] = STATE(16),
    [sym_const_float] = STATE(16),
    [sym_string] = STATE(17),
    [sym_char] = STATE(18),
    [sym_ident] = STATE(19),
    [aux_sym_str_value_repeat1] = STATE(100),
    [anon_sym_let] = ACTIONS(296),
    [anon_sym_and] = ACTIONS(298),
    [anon_sym_fun] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [sym_number] = ACTIONS(21),
    [sym_float] = ACTIONS(23),
    [sym_upper_ident] = ACTIONS(25),
    [sym_lower_ident] = ACTIONS(27),
  },
  [76] = {
    [sym_value_binding] = STATE(101),
    [sym_pattern] = STATE(54),
    [sym_pat_var] = STATE(26),
    [sym_lower_ident] = ACTIONS(123),
  },
  [77] = {
    [sym_expr] = STATE(50),
    [sym_exp_ident] = STATE(15),
    [sym_exp_let] = STATE(15),
    [sym_exp_function] = STATE(15),
    [sym_exp_constant] = STATE(15),
    [sym_const_char] = STATE(16),
    [sym_const_string] = STATE(16),
    [sym_const_integer] = STATE(16),
    [sym_const_float] = STATE(16),
    [sym_string] = STATE(17),
    [sym_char] = STATE(18),
    [sym_ident] = STATE(19),
    [aux_sym_str_value_repeat1] = STATE(102),
    [anon_sym_let] = ACTIONS(296),
    [anon_sym_and] = ACTIONS(298),
    [anon_sym_fun] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [sym_number] = ACTIONS(21),
    [sym_float] = ACTIONS(23),
    [sym_upper_ident] = ACTIONS(25),
    [sym_lower_ident] = ACTIONS(27),
  },
  [78] = {
    [sym_braced_expr] = STATE(111),
    [sym_expr] = STATE(111),
    [sym_exp_ident] = STATE(112),
    [sym_exp_let] = STATE(112),
    [sym_exp_function] = STATE(112),
    [sym_exp_constant] = STATE(112),
    [sym_const_char] = STATE(113),
    [sym_const_string] = STATE(113),
    [sym_const_integer] = STATE(113),
    [sym_const_float] = STATE(113),
    [sym_string] = STATE(114),
    [sym_char] = STATE(115),
    [sym_ident] = STATE(116),
    [anon_sym_let] = ACTIONS(351),
    [anon_sym_LBRACE] = ACTIONS(353),
    [anon_sym_fun] = ACTIONS(355),
    [anon_sym_DQUOTE] = ACTIONS(357),
    [anon_sym_SQUOTE] = ACTIONS(359),
    [sym_number] = ACTIONS(361),
    [sym_float] = ACTIONS(363),
    [sym_upper_ident] = ACTIONS(365),
    [sym_lower_ident] = ACTIONS(367),
  },
  [79] = {
    [sym_value_binding] = STATE(117),
    [sym_pattern] = STATE(54),
    [sym_pat_var] = STATE(26),
    [sym_lower_ident] = ACTIONS(123),
  },
  [80] = {
    [sym_expr] = STATE(118),
    [sym_exp_ident] = STATE(66),
    [sym_exp_let] = STATE(66),
    [sym_exp_function] = STATE(66),
    [sym_exp_constant] = STATE(66),
    [sym_const_char] = STATE(67),
    [sym_const_string] = STATE(67),
    [sym_const_integer] = STATE(67),
    [sym_const_float] = STATE(67),
    [sym_string] = STATE(68),
    [sym_char] = STATE(69),
    [sym_ident] = STATE(70),
    [aux_sym_str_value_repeat1] = STATE(119),
    [anon_sym_let] = ACTIONS(230),
    [anon_sym_and] = ACTIONS(298),
    [anon_sym_fun] = ACTIONS(234),
    [anon_sym_DQUOTE] = ACTIONS(236),
    [anon_sym_SQUOTE] = ACTIONS(238),
    [sym_number] = ACTIONS(240),
    [sym_float] = ACTIONS(242),
    [sym_upper_ident] = ACTIONS(244),
    [sym_lower_ident] = ACTIONS(246),
  },
  [81] = {
    [sym_value_binding] = STATE(121),
    [sym_pattern] = STATE(54),
    [sym_pat_var] = STATE(26),
    [anon_sym_rec] = ACTIONS(369),
    [sym_lower_ident] = ACTIONS(33),
  },
  [82] = {
    [sym_case] = STATE(29),
    [aux_sym_exp_function_repeat1] = STATE(123),
    [anon_sym_RBRACE] = ACTIONS(35),
    [anon_sym_PIPE] = ACTIONS(371),
  },
  [83] = {
    [anon_sym_RBRACE] = ACTIONS(49),
    [anon_sym_PIPE] = ACTIONS(49),
    [anon_sym_EQ_GT] = ACTIONS(49),
    [aux_sym_SLASH_LBRACKG_DASHZg_DASHz_RBRACK_SLASH] = ACTIONS(373),
  },
  [84] = {
    [anon_sym_RBRACE] = ACTIONS(57),
    [anon_sym_PIPE] = ACTIONS(57),
    [anon_sym_EQ_GT] = ACTIONS(57),
    [aux_sym_SLASH_LBRACKG_DASHZg_DASHz_RBRACK_SLASH] = ACTIONS(375),
  },
  [85] = {
    [anon_sym_RBRACE] = ACTIONS(377),
  },
  [86] = {
    [sym_pattern] = STATE(125),
    [sym_pat_var] = STATE(26),
    [sym_lower_ident] = ACTIONS(123),
  },
  [87] = {
    [ts_builtin_sym_end] = ACTIONS(151),
    [anon_sym_let] = ACTIONS(153),
    [anon_sym_and] = ACTIONS(153),
    [anon_sym_open] = ACTIONS(153),
    [anon_sym_fun] = ACTIONS(153),
    [anon_sym_PIPE] = ACTIONS(151),
    [anon_sym_DQUOTE] = ACTIONS(151),
    [anon_sym_SQUOTE] = ACTIONS(151),
    [sym_number] = ACTIONS(153),
    [sym_float] = ACTIONS(153),
    [sym_upper_ident] = ACTIONS(153),
    [sym_lower_ident] = ACTIONS(155),
  },
  [88] = {
    [sym_case] = STATE(87),
    [aux_sym_exp_function_repeat1] = STATE(126),
    [ts_builtin_sym_end] = ACTIONS(157),
    [anon_sym_let] = ACTIONS(159),
    [anon_sym_and] = ACTIONS(159),
    [anon_sym_open] = ACTIONS(159),
    [anon_sym_fun] = ACTIONS(159),
    [anon_sym_PIPE] = ACTIONS(321),
    [anon_sym_DQUOTE] = ACTIONS(157),
    [anon_sym_SQUOTE] = ACTIONS(157),
    [sym_number] = ACTIONS(159),
    [sym_float] = ACTIONS(159),
    [sym_upper_ident] = ACTIONS(159),
    [sym_lower_ident] = ACTIONS(161),
  },
  [89] = {
    [ts_builtin_sym_end] = ACTIONS(163),
    [anon_sym_let] = ACTIONS(165),
    [anon_sym_and] = ACTIONS(165),
    [anon_sym_open] = ACTIONS(165),
    [anon_sym_fun] = ACTIONS(165),
    [anon_sym_PIPE] = ACTIONS(163),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [anon_sym_SQUOTE] = ACTIONS(163),
    [sym_number] = ACTIONS(165),
    [sym_float] = ACTIONS(165),
    [sym_upper_ident] = ACTIONS(165),
    [sym_lower_ident] = ACTIONS(167),
  },
  [90] = {
    [aux_sym_string_repeat1] = STATE(48),
    [anon_sym_DQUOTE] = ACTIONS(379),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_DQUOTE_BSLASHn_RBRACK_SLASH] = ACTIONS(45),
    [aux_sym_SLASH_BSLASH_BSLASH_LPAREN_DOT_PIPE_BSLASHn_RPAREN_SLASH] = ACTIONS(45),
  },
  [91] = {
    [anon_sym_SQUOTE] = ACTIONS(381),
  },
  [92] = {
    [ts_builtin_sym_end] = ACTIONS(175),
    [anon_sym_let] = ACTIONS(177),
    [anon_sym_and] = ACTIONS(177),
    [anon_sym_open] = ACTIONS(177),
    [anon_sym_fun] = ACTIONS(177),
    [anon_sym_PIPE] = ACTIONS(175),
    [anon_sym_DQUOTE] = ACTIONS(175),
    [anon_sym_SQUOTE] = ACTIONS(175),
    [sym_number] = ACTIONS(177),
    [sym_float] = ACTIONS(177),
    [sym_upper_ident] = ACTIONS(177),
    [sym_lower_ident] = ACTIONS(179),
  },
  [93] = {
    [ts_builtin_sym_end] = ACTIONS(181),
    [anon_sym_let] = ACTIONS(183),
    [anon_sym_and] = ACTIONS(183),
    [anon_sym_open] = ACTIONS(183),
    [anon_sym_fun] = ACTIONS(183),
    [anon_sym_PIPE] = ACTIONS(181),
    [anon_sym_DQUOTE] = ACTIONS(181),
    [anon_sym_SQUOTE] = ACTIONS(181),
    [sym_number] = ACTIONS(183),
    [sym_float] = ACTIONS(183),
    [sym_upper_ident] = ACTIONS(183),
    [sym_lower_ident] = ACTIONS(185),
  },
  [94] = {
    [sym_value_binding] = STATE(130),
    [sym_pattern] = STATE(54),
    [sym_pat_var] = STATE(26),
    [anon_sym_rec] = ACTIONS(383),
    [sym_lower_ident] = ACTIONS(33),
  },
  [95] = {
    [ts_builtin_sym_end] = ACTIONS(385),
    [anon_sym_let] = ACTIONS(387),
    [anon_sym_open] = ACTIONS(387),
    [anon_sym_RBRACE] = ACTIONS(385),
    [anon_sym_fun] = ACTIONS(387),
    [anon_sym_PIPE] = ACTIONS(385),
    [anon_sym_EQ_GT] = ACTIONS(385),
    [anon_sym_DQUOTE] = ACTIONS(385),
    [anon_sym_SQUOTE] = ACTIONS(385),
    [sym_number] = ACTIONS(387),
    [sym_float] = ACTIONS(387),
    [sym_upper_ident] = ACTIONS(387),
    [sym_lower_ident] = ACTIONS(389),
  },
  [96] = {
    [sym_value_binding] = STATE(132),
    [sym_pattern] = STATE(54),
    [sym_pat_var] = STATE(26),
    [anon_sym_rec] = ACTIONS(391),
    [sym_lower_ident] = ACTIONS(33),
  },
  [97] = {
    [sym_case] = STATE(29),
    [aux_sym_exp_function_repeat1] = STATE(134),
    [anon_sym_PIPE] = ACTIONS(393),
    [anon_sym_EQ_GT] = ACTIONS(35),
  },
  [98] = {
    [anon_sym_EQ_GT] = ACTIONS(395),
  },
  [99] = {
    [sym_expr] = STATE(135),
    [sym_exp_ident] = STATE(15),
    [sym_exp_let] = STATE(15),
    [sym_exp_function] = STATE(15),
    [sym_exp_constant] = STATE(15),
    [sym_const_char] = STATE(16),
    [sym_const_string] = STATE(16),
    [sym_const_integer] = STATE(16),
    [sym_const_float] = STATE(16),
    [sym_string] = STATE(17),
    [sym_char] = STATE(18),
    [sym_ident] = STATE(19),
    [anon_sym_let] = ACTIONS(337),
    [anon_sym_fun] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [sym_number] = ACTIONS(21),
    [sym_float] = ACTIONS(23),
    [sym_upper_ident] = ACTIONS(25),
    [sym_lower_ident] = ACTIONS(27),
  },
  [100] = {
    [sym_expr] = STATE(74),
    [sym_exp_ident] = STATE(15),
    [sym_exp_let] = STATE(15),
    [sym_exp_function] = STATE(15),
    [sym_exp_constant] = STATE(15),
    [sym_const_char] = STATE(16),
    [sym_const_string] = STATE(16),
    [sym_const_integer] = STATE(16),
    [sym_const_float] = STATE(16),
    [sym_string] = STATE(17),
    [sym_char] = STATE(18),
    [sym_ident] = STATE(19),
    [aux_sym_str_value_repeat1] = STATE(102),
    [anon_sym_let] = ACTIONS(296),
    [anon_sym_and] = ACTIONS(298),
    [anon_sym_fun] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [sym_number] = ACTIONS(21),
    [sym_float] = ACTIONS(23),
    [sym_upper_ident] = ACTIONS(25),
    [sym_lower_ident] = ACTIONS(27),
  },
  [101] = {
    [anon_sym_let] = ACTIONS(304),
    [anon_sym_and] = ACTIONS(304),
    [anon_sym_fun] = ACTIONS(304),
    [anon_sym_DQUOTE] = ACTIONS(302),
    [anon_sym_SQUOTE] = ACTIONS(302),
    [sym_number] = ACTIONS(304),
    [sym_float] = ACTIONS(304),
    [sym_upper_ident] = ACTIONS(304),
    [sym_lower_ident] = ACTIONS(306),
  },
  [102] = {
    [aux_sym_str_value_repeat1] = STATE(102),
    [anon_sym_let] = ACTIONS(304),
    [anon_sym_and] = ACTIONS(397),
    [anon_sym_fun] = ACTIONS(304),
    [anon_sym_DQUOTE] = ACTIONS(302),
    [anon_sym_SQUOTE] = ACTIONS(302),
    [sym_number] = ACTIONS(304),
    [sym_float] = ACTIONS(304),
    [sym_upper_ident] = ACTIONS(304),
    [sym_lower_ident] = ACTIONS(306),
  },
  [103] = {
    [sym_value_binding] = STATE(137),
    [sym_pattern] = STATE(54),
    [sym_pat_var] = STATE(26),
    [anon_sym_rec] = ACTIONS(400),
    [sym_lower_ident] = ACTIONS(33),
  },
  [104] = {
    [sym_expr] = STATE(138),
    [sym_exp_ident] = STATE(15),
    [sym_exp_let] = STATE(15),
    [sym_exp_function] = STATE(15),
    [sym_exp_constant] = STATE(15),
    [sym_const_char] = STATE(16),
    [sym_const_string] = STATE(16),
    [sym_const_integer] = STATE(16),
    [sym_const_float] = STATE(16),
    [sym_string] = STATE(17),
    [sym_char] = STATE(18),
    [sym_ident] = STATE(19),
    [anon_sym_let] = ACTIONS(313),
    [anon_sym_fun] = ACTIONS(315),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [sym_number] = ACTIONS(317),
    [sym_float] = ACTIONS(319),
    [sym_upper_ident] = ACTIONS(25),
    [sym_lower_ident] = ACTIONS(27),
  },
  [105] = {
    [sym_case] = STATE(140),
    [aux_sym_exp_function_repeat1] = STATE(141),
    [anon_sym_let] = ACTIONS(37),
    [anon_sym_and] = ACTIONS(37),
    [anon_sym_fun] = ACTIONS(37),
    [anon_sym_PIPE] = ACTIONS(402),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [anon_sym_SQUOTE] = ACTIONS(35),
    [sym_number] = ACTIONS(37),
    [sym_float] = ACTIONS(37),
    [sym_upper_ident] = ACTIONS(37),
    [sym_lower_ident] = ACTIONS(41),
  },
  [106] = {
    [aux_sym_string_repeat1] = STATE(143),
    [anon_sym_DQUOTE] = ACTIONS(404),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_DQUOTE_BSLASHn_RBRACK_SLASH] = ACTIONS(45),
    [aux_sym_SLASH_BSLASH_BSLASH_LPAREN_DOT_PIPE_BSLASHn_RPAREN_SLASH] = ACTIONS(45),
  },
  [107] = {
    [aux_sym_SLASH_LBRACKA_DASHZa_DASHz0_DASH9_RBRACK_SLASH] = ACTIONS(406),
  },
  [108] = {
    [anon_sym_let] = ACTIONS(51),
    [anon_sym_and] = ACTIONS(51),
    [anon_sym_fun] = ACTIONS(51),
    [anon_sym_PIPE] = ACTIONS(49),
    [aux_sym_SLASH_LBRACKG_DASHZg_DASHz_RBRACK_SLASH] = ACTIONS(408),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [anon_sym_SQUOTE] = ACTIONS(49),
    [sym_number] = ACTIONS(51),
    [sym_float] = ACTIONS(51),
    [sym_upper_ident] = ACTIONS(55),
    [sym_lower_ident] = ACTIONS(55),
  },
  [109] = {
    [anon_sym_let] = ACTIONS(59),
    [anon_sym_and] = ACTIONS(59),
    [anon_sym_fun] = ACTIONS(59),
    [anon_sym_PIPE] = ACTIONS(57),
    [aux_sym_SLASH_LBRACKG_DASHZg_DASHz_RBRACK_SLASH] = ACTIONS(410),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [anon_sym_SQUOTE] = ACTIONS(57),
    [sym_number] = ACTIONS(59),
    [sym_float] = ACTIONS(59),
    [sym_upper_ident] = ACTIONS(63),
    [sym_lower_ident] = ACTIONS(63),
  },
  [110] = {
    [anon_sym_let] = ACTIONS(67),
    [anon_sym_and] = ACTIONS(67),
    [anon_sym_fun] = ACTIONS(67),
    [anon_sym_PIPE] = ACTIONS(65),
    [anon_sym_DQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE] = ACTIONS(65),
    [sym_number] = ACTIONS(67),
    [sym_float] = ACTIONS(67),
    [sym_upper_ident] = ACTIONS(67),
    [sym_lower_ident] = ACTIONS(69),
  },
  [111] = {
    [anon_sym_let] = ACTIONS(333),
    [anon_sym_and] = ACTIONS(333),
    [anon_sym_fun] = ACTIONS(333),
    [anon_sym_DQUOTE] = ACTIONS(331),
    [anon_sym_SQUOTE] = ACTIONS(331),
    [sym_number] = ACTIONS(333),
    [sym_float] = ACTIONS(333),
    [sym_upper_ident] = ACTIONS(333),
    [sym_lower_ident] = ACTIONS(335),
  },
  [112] = {
    [anon_sym_let] = ACTIONS(93),
    [anon_sym_and] = ACTIONS(93),
    [anon_sym_fun] = ACTIONS(93),
    [anon_sym_PIPE] = ACTIONS(91),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [anon_sym_SQUOTE] = ACTIONS(91),
    [sym_number] = ACTIONS(93),
    [sym_float] = ACTIONS(93),
    [sym_upper_ident] = ACTIONS(93),
    [sym_lower_ident] = ACTIONS(95),
  },
  [113] = {
    [anon_sym_let] = ACTIONS(99),
    [anon_sym_and] = ACTIONS(99),
    [anon_sym_fun] = ACTIONS(99),
    [anon_sym_PIPE] = ACTIONS(97),
    [anon_sym_DQUOTE] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_number] = ACTIONS(99),
    [sym_float] = ACTIONS(99),
    [sym_upper_ident] = ACTIONS(99),
    [sym_lower_ident] = ACTIONS(101),
  },
  [114] = {
    [anon_sym_let] = ACTIONS(105),
    [anon_sym_and] = ACTIONS(105),
    [anon_sym_fun] = ACTIONS(105),
    [anon_sym_PIPE] = ACTIONS(103),
    [anon_sym_DQUOTE] = ACTIONS(103),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_number] = ACTIONS(105),
    [sym_float] = ACTIONS(105),
    [sym_upper_ident] = ACTIONS(105),
    [sym_lower_ident] = ACTIONS(107),
  },
  [115] = {
    [anon_sym_let] = ACTIONS(111),
    [anon_sym_and] = ACTIONS(111),
    [anon_sym_fun] = ACTIONS(111),
    [anon_sym_PIPE] = ACTIONS(109),
    [anon_sym_DQUOTE] = ACTIONS(109),
    [anon_sym_SQUOTE] = ACTIONS(109),
    [sym_number] = ACTIONS(111),
    [sym_float] = ACTIONS(111),
    [sym_upper_ident] = ACTIONS(111),
    [sym_lower_ident] = ACTIONS(113),
  },
  [116] = {
    [anon_sym_let] = ACTIONS(117),
    [anon_sym_and] = ACTIONS(117),
    [anon_sym_fun] = ACTIONS(117),
    [anon_sym_PIPE] = ACTIONS(115),
    [anon_sym_DQUOTE] = ACTIONS(115),
    [anon_sym_SQUOTE] = ACTIONS(115),
    [sym_number] = ACTIONS(117),
    [sym_float] = ACTIONS(117),
    [sym_upper_ident] = ACTIONS(117),
    [sym_lower_ident] = ACTIONS(119),
  },
  [117] = {
    [sym_expr] = STATE(147),
    [sym_exp_ident] = STATE(66),
    [sym_exp_let] = STATE(66),
    [sym_exp_function] = STATE(66),
    [sym_exp_constant] = STATE(66),
    [sym_const_char] = STATE(67),
    [sym_const_string] = STATE(67),
    [sym_const_integer] = STATE(67),
    [sym_const_float] = STATE(67),
    [sym_string] = STATE(68),
    [sym_char] = STATE(69),
    [sym_ident] = STATE(70),
    [aux_sym_str_value_repeat1] = STATE(148),
    [anon_sym_let] = ACTIONS(230),
    [anon_sym_and] = ACTIONS(298),
    [anon_sym_fun] = ACTIONS(234),
    [anon_sym_DQUOTE] = ACTIONS(236),
    [anon_sym_SQUOTE] = ACTIONS(238),
    [sym_number] = ACTIONS(240),
    [sym_float] = ACTIONS(242),
    [sym_upper_ident] = ACTIONS(244),
    [sym_lower_ident] = ACTIONS(246),
  },
  [118] = {
    [ts_builtin_sym_end] = ACTIONS(224),
    [anon_sym_let] = ACTIONS(226),
    [anon_sym_and] = ACTIONS(226),
    [anon_sym_open] = ACTIONS(226),
    [anon_sym_fun] = ACTIONS(226),
    [anon_sym_PIPE] = ACTIONS(224),
    [anon_sym_DQUOTE] = ACTIONS(224),
    [anon_sym_SQUOTE] = ACTIONS(224),
    [sym_number] = ACTIONS(226),
    [sym_float] = ACTIONS(226),
    [sym_upper_ident] = ACTIONS(226),
    [sym_lower_ident] = ACTIONS(228),
  },
  [119] = {
    [sym_expr] = STATE(147),
    [sym_exp_ident] = STATE(66),
    [sym_exp_let] = STATE(66),
    [sym_exp_function] = STATE(66),
    [sym_exp_constant] = STATE(66),
    [sym_const_char] = STATE(67),
    [sym_const_string] = STATE(67),
    [sym_const_integer] = STATE(67),
    [sym_const_float] = STATE(67),
    [sym_string] = STATE(68),
    [sym_char] = STATE(69),
    [sym_ident] = STATE(70),
    [aux_sym_str_value_repeat1] = STATE(102),
    [anon_sym_let] = ACTIONS(230),
    [anon_sym_and] = ACTIONS(298),
    [anon_sym_fun] = ACTIONS(234),
    [anon_sym_DQUOTE] = ACTIONS(236),
    [anon_sym_SQUOTE] = ACTIONS(238),
    [sym_number] = ACTIONS(240),
    [sym_float] = ACTIONS(242),
    [sym_upper_ident] = ACTIONS(244),
    [sym_lower_ident] = ACTIONS(246),
  },
  [120] = {
    [sym_value_binding] = STATE(149),
    [sym_pattern] = STATE(54),
    [sym_pat_var] = STATE(26),
    [sym_lower_ident] = ACTIONS(123),
  },
  [121] = {
    [sym_expr] = STATE(41),
    [sym_exp_ident] = STATE(15),
    [sym_exp_let] = STATE(15),
    [sym_exp_function] = STATE(15),
    [sym_exp_constant] = STATE(15),
    [sym_const_char] = STATE(16),
    [sym_const_string] = STATE(16),
    [sym_const_integer] = STATE(16),
    [sym_const_float] = STATE(16),
    [sym_string] = STATE(17),
    [sym_char] = STATE(18),
    [sym_ident] = STATE(19),
    [aux_sym_str_value_repeat1] = STATE(150),
    [anon_sym_let] = ACTIONS(313),
    [anon_sym_and] = ACTIONS(298),
    [anon_sym_fun] = ACTIONS(315),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [sym_number] = ACTIONS(317),
    [sym_float] = ACTIONS(319),
    [sym_upper_ident] = ACTIONS(25),
    [sym_lower_ident] = ACTIONS(27),
  },
  [122] = {
    [sym_pattern] = STATE(151),
    [sym_pat_var] = STATE(26),
    [sym_lower_ident] = ACTIONS(123),
  },
  [123] = {
    [sym_case] = STATE(29),
    [aux_sym_exp_function_repeat1] = STATE(152),
    [anon_sym_RBRACE] = ACTIONS(157),
    [anon_sym_PIPE] = ACTIONS(371),
  },
  [124] = {
    [ts_builtin_sym_end] = ACTIONS(412),
    [anon_sym_let] = ACTIONS(414),
    [anon_sym_and] = ACTIONS(414),
    [anon_sym_open] = ACTIONS(414),
    [anon_sym_fun] = ACTIONS(414),
    [anon_sym_DQUOTE] = ACTIONS(412),
    [anon_sym_SQUOTE] = ACTIONS(412),
    [sym_number] = ACTIONS(414),
    [sym_float] = ACTIONS(414),
    [sym_upper_ident] = ACTIONS(414),
    [sym_lower_ident] = ACTIONS(416),
  },
  [125] = {
    [sym_guard] = STATE(154),
    [anon_sym_EQ_GT] = ACTIONS(418),
    [anon_sym_when] = ACTIONS(256),
  },
  [126] = {
    [sym_case] = STATE(87),
    [aux_sym_exp_function_repeat1] = STATE(126),
    [ts_builtin_sym_end] = ACTIONS(258),
    [anon_sym_let] = ACTIONS(260),
    [anon_sym_and] = ACTIONS(260),
    [anon_sym_open] = ACTIONS(260),
    [anon_sym_fun] = ACTIONS(260),
    [anon_sym_PIPE] = ACTIONS(420),
    [anon_sym_DQUOTE] = ACTIONS(258),
    [anon_sym_SQUOTE] = ACTIONS(258),
    [sym_number] = ACTIONS(260),
    [sym_float] = ACTIONS(260),
    [sym_upper_ident] = ACTIONS(260),
    [sym_lower_ident] = ACTIONS(265),
  },
  [127] = {
    [ts_builtin_sym_end] = ACTIONS(267),
    [anon_sym_let] = ACTIONS(269),
    [anon_sym_and] = ACTIONS(269),
    [anon_sym_open] = ACTIONS(269),
    [anon_sym_fun] = ACTIONS(269),
    [anon_sym_PIPE] = ACTIONS(267),
    [anon_sym_DQUOTE] = ACTIONS(267),
    [anon_sym_SQUOTE] = ACTIONS(267),
    [sym_number] = ACTIONS(269),
    [sym_float] = ACTIONS(269),
    [sym_upper_ident] = ACTIONS(269),
    [sym_lower_ident] = ACTIONS(271),
  },
  [128] = {
    [ts_builtin_sym_end] = ACTIONS(278),
    [anon_sym_let] = ACTIONS(280),
    [anon_sym_and] = ACTIONS(280),
    [anon_sym_open] = ACTIONS(280),
    [anon_sym_fun] = ACTIONS(280),
    [anon_sym_PIPE] = ACTIONS(278),
    [anon_sym_DQUOTE] = ACTIONS(278),
    [anon_sym_SQUOTE] = ACTIONS(278),
    [sym_number] = ACTIONS(280),
    [sym_float] = ACTIONS(280),
    [sym_upper_ident] = ACTIONS(280),
    [sym_lower_ident] = ACTIONS(282),
  },
  [129] = {
    [sym_value_binding] = STATE(155),
    [sym_pattern] = STATE(54),
    [sym_pat_var] = STATE(26),
    [sym_lower_ident] = ACTIONS(123),
  },
  [130] = {
    [sym_expr] = STATE(41),
    [sym_exp_ident] = STATE(15),
    [sym_exp_let] = STATE(15),
    [sym_exp_function] = STATE(15),
    [sym_exp_constant] = STATE(15),
    [sym_const_char] = STATE(16),
    [sym_const_string] = STATE(16),
    [sym_const_integer] = STATE(16),
    [sym_const_float] = STATE(16),
    [sym_string] = STATE(17),
    [sym_char] = STATE(18),
    [sym_ident] = STATE(19),
    [aux_sym_str_value_repeat1] = STATE(156),
    [anon_sym_let] = ACTIONS(337),
    [anon_sym_and] = ACTIONS(298),
    [anon_sym_fun] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [sym_number] = ACTIONS(21),
    [sym_float] = ACTIONS(23),
    [sym_upper_ident] = ACTIONS(25),
    [sym_lower_ident] = ACTIONS(27),
  },
  [131] = {
    [sym_value_binding] = STATE(157),
    [sym_pattern] = STATE(54),
    [sym_pat_var] = STATE(26),
    [sym_lower_ident] = ACTIONS(123),
  },
  [132] = {
    [sym_expr] = STATE(41),
    [sym_exp_ident] = STATE(15),
    [sym_exp_let] = STATE(15),
    [sym_exp_function] = STATE(15),
    [sym_exp_constant] = STATE(15),
    [sym_const_char] = STATE(16),
    [sym_const_string] = STATE(16),
    [sym_const_integer] = STATE(16),
    [sym_const_float] = STATE(16),
    [sym_string] = STATE(17),
    [sym_char] = STATE(18),
    [sym_ident] = STATE(19),
    [aux_sym_str_value_repeat1] = STATE(158),
    [anon_sym_let] = ACTIONS(339),
    [anon_sym_and] = ACTIONS(298),
    [anon_sym_fun] = ACTIONS(341),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [sym_number] = ACTIONS(317),
    [sym_float] = ACTIONS(319),
    [sym_upper_ident] = ACTIONS(25),
    [sym_lower_ident] = ACTIONS(27),
  },
  [133] = {
    [sym_pattern] = STATE(159),
    [sym_pat_var] = STATE(26),
    [sym_lower_ident] = ACTIONS(123),
  },
  [134] = {
    [sym_case] = STATE(29),
    [aux_sym_exp_function_repeat1] = STATE(160),
    [anon_sym_PIPE] = ACTIONS(393),
    [anon_sym_EQ_GT] = ACTIONS(157),
  },
  [135] = {
    [ts_builtin_sym_end] = ACTIONS(423),
    [anon_sym_let] = ACTIONS(425),
    [anon_sym_open] = ACTIONS(425),
    [anon_sym_RBRACE] = ACTIONS(423),
    [anon_sym_fun] = ACTIONS(425),
    [anon_sym_PIPE] = ACTIONS(423),
    [anon_sym_EQ_GT] = ACTIONS(423),
    [anon_sym_DQUOTE] = ACTIONS(423),
    [anon_sym_SQUOTE] = ACTIONS(423),
    [sym_number] = ACTIONS(425),
    [sym_float] = ACTIONS(425),
    [sym_upper_ident] = ACTIONS(425),
    [sym_lower_ident] = ACTIONS(427),
  },
  [136] = {
    [sym_value_binding] = STATE(161),
    [sym_pattern] = STATE(54),
    [sym_pat_var] = STATE(26),
    [sym_lower_ident] = ACTIONS(123),
  },
  [137] = {
    [sym_expr] = STATE(162),
    [sym_exp_ident] = STATE(112),
    [sym_exp_let] = STATE(112),
    [sym_exp_function] = STATE(112),
    [sym_exp_constant] = STATE(112),
    [sym_const_char] = STATE(113),
    [sym_const_string] = STATE(113),
    [sym_const_integer] = STATE(113),
    [sym_const_float] = STATE(113),
    [sym_string] = STATE(114),
    [sym_char] = STATE(115),
    [sym_ident] = STATE(116),
    [aux_sym_str_value_repeat1] = STATE(163),
    [anon_sym_let] = ACTIONS(351),
    [anon_sym_and] = ACTIONS(298),
    [anon_sym_fun] = ACTIONS(355),
    [anon_sym_DQUOTE] = ACTIONS(357),
    [anon_sym_SQUOTE] = ACTIONS(359),
    [sym_number] = ACTIONS(361),
    [sym_float] = ACTIONS(363),
    [sym_upper_ident] = ACTIONS(365),
    [sym_lower_ident] = ACTIONS(367),
  },
  [138] = {
    [anon_sym_RBRACE] = ACTIONS(429),
  },
  [139] = {
    [sym_pattern] = STATE(165),
    [sym_pat_var] = STATE(26),
    [sym_lower_ident] = ACTIONS(123),
  },
  [140] = {
    [anon_sym_let] = ACTIONS(153),
    [anon_sym_and] = ACTIONS(153),
    [anon_sym_fun] = ACTIONS(153),
    [anon_sym_PIPE] = ACTIONS(151),
    [anon_sym_DQUOTE] = ACTIONS(151),
    [anon_sym_SQUOTE] = ACTIONS(151),
    [sym_number] = ACTIONS(153),
    [sym_float] = ACTIONS(153),
    [sym_upper_ident] = ACTIONS(153),
    [sym_lower_ident] = ACTIONS(155),
  },
  [141] = {
    [sym_case] = STATE(140),
    [aux_sym_exp_function_repeat1] = STATE(166),
    [anon_sym_let] = ACTIONS(159),
    [anon_sym_and] = ACTIONS(159),
    [anon_sym_fun] = ACTIONS(159),
    [anon_sym_PIPE] = ACTIONS(402),
    [anon_sym_DQUOTE] = ACTIONS(157),
    [anon_sym_SQUOTE] = ACTIONS(157),
    [sym_number] = ACTIONS(159),
    [sym_float] = ACTIONS(159),
    [sym_upper_ident] = ACTIONS(159),
    [sym_lower_ident] = ACTIONS(161),
  },
  [142] = {
    [anon_sym_let] = ACTIONS(165),
    [anon_sym_and] = ACTIONS(165),
    [anon_sym_fun] = ACTIONS(165),
    [anon_sym_PIPE] = ACTIONS(163),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [anon_sym_SQUOTE] = ACTIONS(163),
    [sym_number] = ACTIONS(165),
    [sym_float] = ACTIONS(165),
    [sym_upper_ident] = ACTIONS(165),
    [sym_lower_ident] = ACTIONS(167),
  },
  [143] = {
    [aux_sym_string_repeat1] = STATE(48),
    [anon_sym_DQUOTE] = ACTIONS(431),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_DQUOTE_BSLASHn_RBRACK_SLASH] = ACTIONS(45),
    [aux_sym_SLASH_BSLASH_BSLASH_LPAREN_DOT_PIPE_BSLASHn_RPAREN_SLASH] = ACTIONS(45),
  },
  [144] = {
    [anon_sym_SQUOTE] = ACTIONS(433),
  },
  [145] = {
    [anon_sym_let] = ACTIONS(177),
    [anon_sym_and] = ACTIONS(177),
    [anon_sym_fun] = ACTIONS(177),
    [anon_sym_PIPE] = ACTIONS(175),
    [anon_sym_DQUOTE] = ACTIONS(175),
    [anon_sym_SQUOTE] = ACTIONS(175),
    [sym_number] = ACTIONS(177),
    [sym_float] = ACTIONS(177),
    [sym_upper_ident] = ACTIONS(177),
    [sym_lower_ident] = ACTIONS(179),
  },
  [146] = {
    [anon_sym_let] = ACTIONS(183),
    [anon_sym_and] = ACTIONS(183),
    [anon_sym_fun] = ACTIONS(183),
    [anon_sym_PIPE] = ACTIONS(181),
    [anon_sym_DQUOTE] = ACTIONS(181),
    [anon_sym_SQUOTE] = ACTIONS(181),
    [sym_number] = ACTIONS(183),
    [sym_float] = ACTIONS(183),
    [sym_upper_ident] = ACTIONS(183),
    [sym_lower_ident] = ACTIONS(185),
  },
  [147] = {
    [ts_builtin_sym_end] = ACTIONS(284),
    [anon_sym_let] = ACTIONS(286),
    [anon_sym_and] = ACTIONS(286),
    [anon_sym_open] = ACTIONS(286),
    [anon_sym_fun] = ACTIONS(286),
    [anon_sym_PIPE] = ACTIONS(284),
    [anon_sym_DQUOTE] = ACTIONS(284),
    [anon_sym_SQUOTE] = ACTIONS(284),
    [sym_number] = ACTIONS(286),
    [sym_float] = ACTIONS(286),
    [sym_upper_ident] = ACTIONS(286),
    [sym_lower_ident] = ACTIONS(288),
  },
  [148] = {
    [sym_expr] = STATE(169),
    [sym_exp_ident] = STATE(66),
    [sym_exp_let] = STATE(66),
    [sym_exp_function] = STATE(66),
    [sym_exp_constant] = STATE(66),
    [sym_const_char] = STATE(67),
    [sym_const_string] = STATE(67),
    [sym_const_integer] = STATE(67),
    [sym_const_float] = STATE(67),
    [sym_string] = STATE(68),
    [sym_char] = STATE(69),
    [sym_ident] = STATE(70),
    [aux_sym_str_value_repeat1] = STATE(102),
    [anon_sym_let] = ACTIONS(230),
    [anon_sym_and] = ACTIONS(298),
    [anon_sym_fun] = ACTIONS(234),
    [anon_sym_DQUOTE] = ACTIONS(236),
    [anon_sym_SQUOTE] = ACTIONS(238),
    [sym_number] = ACTIONS(240),
    [sym_float] = ACTIONS(242),
    [sym_upper_ident] = ACTIONS(244),
    [sym_lower_ident] = ACTIONS(246),
  },
  [149] = {
    [sym_expr] = STATE(50),
    [sym_exp_ident] = STATE(15),
    [sym_exp_let] = STATE(15),
    [sym_exp_function] = STATE(15),
    [sym_exp_constant] = STATE(15),
    [sym_const_char] = STATE(16),
    [sym_const_string] = STATE(16),
    [sym_const_integer] = STATE(16),
    [sym_const_float] = STATE(16),
    [sym_string] = STATE(17),
    [sym_char] = STATE(18),
    [sym_ident] = STATE(19),
    [aux_sym_str_value_repeat1] = STATE(170),
    [anon_sym_let] = ACTIONS(313),
    [anon_sym_and] = ACTIONS(298),
    [anon_sym_fun] = ACTIONS(315),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [sym_number] = ACTIONS(317),
    [sym_float] = ACTIONS(319),
    [sym_upper_ident] = ACTIONS(25),
    [sym_lower_ident] = ACTIONS(27),
  },
  [150] = {
    [sym_expr] = STATE(50),
    [sym_exp_ident] = STATE(15),
    [sym_exp_let] = STATE(15),
    [sym_exp_function] = STATE(15),
    [sym_exp_constant] = STATE(15),
    [sym_const_char] = STATE(16),
    [sym_const_string] = STATE(16),
    [sym_const_integer] = STATE(16),
    [sym_const_float] = STATE(16),
    [sym_string] = STATE(17),
    [sym_char] = STATE(18),
    [sym_ident] = STATE(19),
    [aux_sym_str_value_repeat1] = STATE(102),
    [anon_sym_let] = ACTIONS(313),
    [anon_sym_and] = ACTIONS(298),
    [anon_sym_fun] = ACTIONS(315),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [sym_number] = ACTIONS(317),
    [sym_float] = ACTIONS(319),
    [sym_upper_ident] = ACTIONS(25),
    [sym_lower_ident] = ACTIONS(27),
  },
  [151] = {
    [sym_guard] = STATE(172),
    [anon_sym_EQ_GT] = ACTIONS(435),
    [anon_sym_when] = ACTIONS(256),
  },
  [152] = {
    [sym_case] = STATE(29),
    [aux_sym_exp_function_repeat1] = STATE(152),
    [anon_sym_RBRACE] = ACTIONS(258),
    [anon_sym_PIPE] = ACTIONS(437),
  },
  [153] = {
    [sym_expr] = STATE(174),
    [sym_exp_ident] = STATE(66),
    [sym_exp_let] = STATE(66),
    [sym_exp_function] = STATE(66),
    [sym_exp_constant] = STATE(66),
    [sym_const_char] = STATE(67),
    [sym_const_string] = STATE(67),
    [sym_const_integer] = STATE(67),
    [sym_const_float] = STATE(67),
    [sym_string] = STATE(68),
    [sym_char] = STATE(69),
    [sym_ident] = STATE(70),
    [anon_sym_let] = ACTIONS(440),
    [anon_sym_fun] = ACTIONS(234),
    [anon_sym_DQUOTE] = ACTIONS(236),
    [anon_sym_SQUOTE] = ACTIONS(238),
    [sym_number] = ACTIONS(240),
    [sym_float] = ACTIONS(242),
    [sym_upper_ident] = ACTIONS(244),
    [sym_lower_ident] = ACTIONS(246),
  },
  [154] = {
    [anon_sym_EQ_GT] = ACTIONS(442),
  },
  [155] = {
    [sym_expr] = STATE(50),
    [sym_exp_ident] = STATE(15),
    [sym_exp_let] = STATE(15),
    [sym_exp_function] = STATE(15),
    [sym_exp_constant] = STATE(15),
    [sym_const_char] = STATE(16),
    [sym_const_string] = STATE(16),
    [sym_const_integer] = STATE(16),
    [sym_const_float] = STATE(16),
    [sym_string] = STATE(17),
    [sym_char] = STATE(18),
    [sym_ident] = STATE(19),
    [aux_sym_str_value_repeat1] = STATE(176),
    [anon_sym_let] = ACTIONS(337),
    [anon_sym_and] = ACTIONS(298),
    [anon_sym_fun] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [sym_number] = ACTIONS(21),
    [sym_float] = ACTIONS(23),
    [sym_upper_ident] = ACTIONS(25),
    [sym_lower_ident] = ACTIONS(27),
  },
  [156] = {
    [sym_expr] = STATE(50),
    [sym_exp_ident] = STATE(15),
    [sym_exp_let] = STATE(15),
    [sym_exp_function] = STATE(15),
    [sym_exp_constant] = STATE(15),
    [sym_const_char] = STATE(16),
    [sym_const_string] = STATE(16),
    [sym_const_integer] = STATE(16),
    [sym_const_float] = STATE(16),
    [sym_string] = STATE(17),
    [sym_char] = STATE(18),
    [sym_ident] = STATE(19),
    [aux_sym_str_value_repeat1] = STATE(102),
    [anon_sym_let] = ACTIONS(337),
    [anon_sym_and] = ACTIONS(298),
    [anon_sym_fun] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [sym_number] = ACTIONS(21),
    [sym_float] = ACTIONS(23),
    [sym_upper_ident] = ACTIONS(25),
    [sym_lower_ident] = ACTIONS(27),
  },
  [157] = {
    [sym_expr] = STATE(50),
    [sym_exp_ident] = STATE(15),
    [sym_exp_let] = STATE(15),
    [sym_exp_function] = STATE(15),
    [sym_exp_constant] = STATE(15),
    [sym_const_char] = STATE(16),
    [sym_const_string] = STATE(16),
    [sym_const_integer] = STATE(16),
    [sym_const_float] = STATE(16),
    [sym_string] = STATE(17),
    [sym_char] = STATE(18),
    [sym_ident] = STATE(19),
    [aux_sym_str_value_repeat1] = STATE(177),
    [anon_sym_let] = ACTIONS(339),
    [anon_sym_and] = ACTIONS(298),
    [anon_sym_fun] = ACTIONS(341),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [sym_number] = ACTIONS(317),
    [sym_float] = ACTIONS(319),
    [sym_upper_ident] = ACTIONS(25),
    [sym_lower_ident] = ACTIONS(27),
  },
  [158] = {
    [sym_expr] = STATE(50),
    [sym_exp_ident] = STATE(15),
    [sym_exp_let] = STATE(15),
    [sym_exp_function] = STATE(15),
    [sym_exp_constant] = STATE(15),
    [sym_const_char] = STATE(16),
    [sym_const_string] = STATE(16),
    [sym_const_integer] = STATE(16),
    [sym_const_float] = STATE(16),
    [sym_string] = STATE(17),
    [sym_char] = STATE(18),
    [sym_ident] = STATE(19),
    [aux_sym_str_value_repeat1] = STATE(102),
    [anon_sym_let] = ACTIONS(339),
    [anon_sym_and] = ACTIONS(298),
    [anon_sym_fun] = ACTIONS(341),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [sym_number] = ACTIONS(317),
    [sym_float] = ACTIONS(319),
    [sym_upper_ident] = ACTIONS(25),
    [sym_lower_ident] = ACTIONS(27),
  },
  [159] = {
    [sym_guard] = STATE(179),
    [anon_sym_EQ_GT] = ACTIONS(444),
    [anon_sym_when] = ACTIONS(256),
  },
  [160] = {
    [sym_case] = STATE(29),
    [aux_sym_exp_function_repeat1] = STATE(160),
    [anon_sym_PIPE] = ACTIONS(446),
    [anon_sym_EQ_GT] = ACTIONS(258),
  },
  [161] = {
    [sym_expr] = STATE(180),
    [sym_exp_ident] = STATE(112),
    [sym_exp_let] = STATE(112),
    [sym_exp_function] = STATE(112),
    [sym_exp_constant] = STATE(112),
    [sym_const_char] = STATE(113),
    [sym_const_string] = STATE(113),
    [sym_const_integer] = STATE(113),
    [sym_const_float] = STATE(113),
    [sym_string] = STATE(114),
    [sym_char] = STATE(115),
    [sym_ident] = STATE(116),
    [aux_sym_str_value_repeat1] = STATE(181),
    [anon_sym_let] = ACTIONS(351),
    [anon_sym_and] = ACTIONS(298),
    [anon_sym_fun] = ACTIONS(355),
    [anon_sym_DQUOTE] = ACTIONS(357),
    [anon_sym_SQUOTE] = ACTIONS(359),
    [sym_number] = ACTIONS(361),
    [sym_float] = ACTIONS(363),
    [sym_upper_ident] = ACTIONS(365),
    [sym_lower_ident] = ACTIONS(367),
  },
  [162] = {
    [anon_sym_let] = ACTIONS(226),
    [anon_sym_and] = ACTIONS(226),
    [anon_sym_fun] = ACTIONS(226),
    [anon_sym_PIPE] = ACTIONS(224),
    [anon_sym_DQUOTE] = ACTIONS(224),
    [anon_sym_SQUOTE] = ACTIONS(224),
    [sym_number] = ACTIONS(226),
    [sym_float] = ACTIONS(226),
    [sym_upper_ident] = ACTIONS(226),
    [sym_lower_ident] = ACTIONS(228),
  },
  [163] = {
    [sym_expr] = STATE(180),
    [sym_exp_ident] = STATE(112),
    [sym_exp_let] = STATE(112),
    [sym_exp_function] = STATE(112),
    [sym_exp_constant] = STATE(112),
    [sym_const_char] = STATE(113),
    [sym_const_string] = STATE(113),
    [sym_const_integer] = STATE(113),
    [sym_const_float] = STATE(113),
    [sym_string] = STATE(114),
    [sym_char] = STATE(115),
    [sym_ident] = STATE(116),
    [aux_sym_str_value_repeat1] = STATE(102),
    [anon_sym_let] = ACTIONS(351),
    [anon_sym_and] = ACTIONS(298),
    [anon_sym_fun] = ACTIONS(355),
    [anon_sym_DQUOTE] = ACTIONS(357),
    [anon_sym_SQUOTE] = ACTIONS(359),
    [sym_number] = ACTIONS(361),
    [sym_float] = ACTIONS(363),
    [sym_upper_ident] = ACTIONS(365),
    [sym_lower_ident] = ACTIONS(367),
  },
  [164] = {
    [anon_sym_let] = ACTIONS(414),
    [anon_sym_and] = ACTIONS(414),
    [anon_sym_fun] = ACTIONS(414),
    [anon_sym_DQUOTE] = ACTIONS(412),
    [anon_sym_SQUOTE] = ACTIONS(412),
    [sym_number] = ACTIONS(414),
    [sym_float] = ACTIONS(414),
    [sym_upper_ident] = ACTIONS(414),
    [sym_lower_ident] = ACTIONS(416),
  },
  [165] = {
    [sym_guard] = STATE(183),
    [anon_sym_EQ_GT] = ACTIONS(449),
    [anon_sym_when] = ACTIONS(256),
  },
  [166] = {
    [sym_case] = STATE(140),
    [aux_sym_exp_function_repeat1] = STATE(166),
    [anon_sym_let] = ACTIONS(260),
    [anon_sym_and] = ACTIONS(260),
    [anon_sym_fun] = ACTIONS(260),
    [anon_sym_PIPE] = ACTIONS(451),
    [anon_sym_DQUOTE] = ACTIONS(258),
    [anon_sym_SQUOTE] = ACTIONS(258),
    [sym_number] = ACTIONS(260),
    [sym_float] = ACTIONS(260),
    [sym_upper_ident] = ACTIONS(260),
    [sym_lower_ident] = ACTIONS(265),
  },
  [167] = {
    [anon_sym_let] = ACTIONS(269),
    [anon_sym_and] = ACTIONS(269),
    [anon_sym_fun] = ACTIONS(269),
    [anon_sym_PIPE] = ACTIONS(267),
    [anon_sym_DQUOTE] = ACTIONS(267),
    [anon_sym_SQUOTE] = ACTIONS(267),
    [sym_number] = ACTIONS(269),
    [sym_float] = ACTIONS(269),
    [sym_upper_ident] = ACTIONS(269),
    [sym_lower_ident] = ACTIONS(271),
  },
  [168] = {
    [anon_sym_let] = ACTIONS(280),
    [anon_sym_and] = ACTIONS(280),
    [anon_sym_fun] = ACTIONS(280),
    [anon_sym_PIPE] = ACTIONS(278),
    [anon_sym_DQUOTE] = ACTIONS(278),
    [anon_sym_SQUOTE] = ACTIONS(278),
    [sym_number] = ACTIONS(280),
    [sym_float] = ACTIONS(280),
    [sym_upper_ident] = ACTIONS(280),
    [sym_lower_ident] = ACTIONS(282),
  },
  [169] = {
    [ts_builtin_sym_end] = ACTIONS(345),
    [anon_sym_let] = ACTIONS(347),
    [anon_sym_and] = ACTIONS(347),
    [anon_sym_open] = ACTIONS(347),
    [anon_sym_fun] = ACTIONS(347),
    [anon_sym_PIPE] = ACTIONS(345),
    [anon_sym_DQUOTE] = ACTIONS(345),
    [anon_sym_SQUOTE] = ACTIONS(345),
    [sym_number] = ACTIONS(347),
    [sym_float] = ACTIONS(347),
    [sym_upper_ident] = ACTIONS(347),
    [sym_lower_ident] = ACTIONS(349),
  },
  [170] = {
    [sym_expr] = STATE(74),
    [sym_exp_ident] = STATE(15),
    [sym_exp_let] = STATE(15),
    [sym_exp_function] = STATE(15),
    [sym_exp_constant] = STATE(15),
    [sym_const_char] = STATE(16),
    [sym_const_string] = STATE(16),
    [sym_const_integer] = STATE(16),
    [sym_const_float] = STATE(16),
    [sym_string] = STATE(17),
    [sym_char] = STATE(18),
    [sym_ident] = STATE(19),
    [aux_sym_str_value_repeat1] = STATE(102),
    [anon_sym_let] = ACTIONS(313),
    [anon_sym_and] = ACTIONS(298),
    [anon_sym_fun] = ACTIONS(315),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [sym_number] = ACTIONS(317),
    [sym_float] = ACTIONS(319),
    [sym_upper_ident] = ACTIONS(25),
    [sym_lower_ident] = ACTIONS(27),
  },
  [171] = {
    [sym_expr] = STATE(95),
    [sym_exp_ident] = STATE(15),
    [sym_exp_let] = STATE(15),
    [sym_exp_function] = STATE(15),
    [sym_exp_constant] = STATE(15),
    [sym_const_char] = STATE(16),
    [sym_const_string] = STATE(16),
    [sym_const_integer] = STATE(16),
    [sym_const_float] = STATE(16),
    [sym_string] = STATE(17),
    [sym_char] = STATE(18),
    [sym_ident] = STATE(19),
    [anon_sym_let] = ACTIONS(454),
    [anon_sym_fun] = ACTIONS(315),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [sym_number] = ACTIONS(317),
    [sym_float] = ACTIONS(319),
    [sym_upper_ident] = ACTIONS(25),
    [sym_lower_ident] = ACTIONS(27),
  },
  [172] = {
    [anon_sym_EQ_GT] = ACTIONS(456),
  },
  [173] = {
    [sym_value_binding] = STATE(187),
    [sym_pattern] = STATE(54),
    [sym_pat_var] = STATE(26),
    [anon_sym_rec] = ACTIONS(458),
    [sym_lower_ident] = ACTIONS(33),
  },
  [174] = {
    [ts_builtin_sym_end] = ACTIONS(385),
    [anon_sym_let] = ACTIONS(387),
    [anon_sym_and] = ACTIONS(387),
    [anon_sym_open] = ACTIONS(387),
    [anon_sym_fun] = ACTIONS(387),
    [anon_sym_PIPE] = ACTIONS(385),
    [anon_sym_DQUOTE] = ACTIONS(385),
    [anon_sym_SQUOTE] = ACTIONS(385),
    [sym_number] = ACTIONS(387),
    [sym_float] = ACTIONS(387),
    [sym_upper_ident] = ACTIONS(387),
    [sym_lower_ident] = ACTIONS(389),
  },
  [175] = {
    [sym_expr] = STATE(188),
    [sym_exp_ident] = STATE(66),
    [sym_exp_let] = STATE(66),
    [sym_exp_function] = STATE(66),
    [sym_exp_constant] = STATE(66),
    [sym_const_char] = STATE(67),
    [sym_const_string] = STATE(67),
    [sym_const_integer] = STATE(67),
    [sym_const_float] = STATE(67),
    [sym_string] = STATE(68),
    [sym_char] = STATE(69),
    [sym_ident] = STATE(70),
    [anon_sym_let] = ACTIONS(440),
    [anon_sym_fun] = ACTIONS(234),
    [anon_sym_DQUOTE] = ACTIONS(236),
    [anon_sym_SQUOTE] = ACTIONS(238),
    [sym_number] = ACTIONS(240),
    [sym_float] = ACTIONS(242),
    [sym_upper_ident] = ACTIONS(244),
    [sym_lower_ident] = ACTIONS(246),
  },
  [176] = {
    [sym_expr] = STATE(74),
    [sym_exp_ident] = STATE(15),
    [sym_exp_let] = STATE(15),
    [sym_exp_function] = STATE(15),
    [sym_exp_constant] = STATE(15),
    [sym_const_char] = STATE(16),
    [sym_const_string] = STATE(16),
    [sym_const_integer] = STATE(16),
    [sym_const_float] = STATE(16),
    [sym_string] = STATE(17),
    [sym_char] = STATE(18),
    [sym_ident] = STATE(19),
    [aux_sym_str_value_repeat1] = STATE(102),
    [anon_sym_let] = ACTIONS(337),
    [anon_sym_and] = ACTIONS(298),
    [anon_sym_fun] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [sym_number] = ACTIONS(21),
    [sym_float] = ACTIONS(23),
    [sym_upper_ident] = ACTIONS(25),
    [sym_lower_ident] = ACTIONS(27),
  },
  [177] = {
    [sym_expr] = STATE(74),
    [sym_exp_ident] = STATE(15),
    [sym_exp_let] = STATE(15),
    [sym_exp_function] = STATE(15),
    [sym_exp_constant] = STATE(15),
    [sym_const_char] = STATE(16),
    [sym_const_string] = STATE(16),
    [sym_const_integer] = STATE(16),
    [sym_const_float] = STATE(16),
    [sym_string] = STATE(17),
    [sym_char] = STATE(18),
    [sym_ident] = STATE(19),
    [aux_sym_str_value_repeat1] = STATE(102),
    [anon_sym_let] = ACTIONS(339),
    [anon_sym_and] = ACTIONS(298),
    [anon_sym_fun] = ACTIONS(341),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [sym_number] = ACTIONS(317),
    [sym_float] = ACTIONS(319),
    [sym_upper_ident] = ACTIONS(25),
    [sym_lower_ident] = ACTIONS(27),
  },
  [178] = {
    [sym_expr] = STATE(95),
    [sym_exp_ident] = STATE(15),
    [sym_exp_let] = STATE(15),
    [sym_exp_function] = STATE(15),
    [sym_exp_constant] = STATE(15),
    [sym_const_char] = STATE(16),
    [sym_const_string] = STATE(16),
    [sym_const_integer] = STATE(16),
    [sym_const_float] = STATE(16),
    [sym_string] = STATE(17),
    [sym_char] = STATE(18),
    [sym_ident] = STATE(19),
    [anon_sym_let] = ACTIONS(460),
    [anon_sym_fun] = ACTIONS(341),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [sym_number] = ACTIONS(317),
    [sym_float] = ACTIONS(319),
    [sym_upper_ident] = ACTIONS(25),
    [sym_lower_ident] = ACTIONS(27),
  },
  [179] = {
    [anon_sym_EQ_GT] = ACTIONS(462),
  },
  [180] = {
    [anon_sym_let] = ACTIONS(286),
    [anon_sym_and] = ACTIONS(286),
    [anon_sym_fun] = ACTIONS(286),
    [anon_sym_PIPE] = ACTIONS(284),
    [anon_sym_DQUOTE] = ACTIONS(284),
    [anon_sym_SQUOTE] = ACTIONS(284),
    [sym_number] = ACTIONS(286),
    [sym_float] = ACTIONS(286),
    [sym_upper_ident] = ACTIONS(286),
    [sym_lower_ident] = ACTIONS(288),
  },
  [181] = {
    [sym_expr] = STATE(191),
    [sym_exp_ident] = STATE(112),
    [sym_exp_let] = STATE(112),
    [sym_exp_function] = STATE(112),
    [sym_exp_constant] = STATE(112),
    [sym_const_char] = STATE(113),
    [sym_const_string] = STATE(113),
    [sym_const_integer] = STATE(113),
    [sym_const_float] = STATE(113),
    [sym_string] = STATE(114),
    [sym_char] = STATE(115),
    [sym_ident] = STATE(116),
    [aux_sym_str_value_repeat1] = STATE(102),
    [anon_sym_let] = ACTIONS(351),
    [anon_sym_and] = ACTIONS(298),
    [anon_sym_fun] = ACTIONS(355),
    [anon_sym_DQUOTE] = ACTIONS(357),
    [anon_sym_SQUOTE] = ACTIONS(359),
    [sym_number] = ACTIONS(361),
    [sym_float] = ACTIONS(363),
    [sym_upper_ident] = ACTIONS(365),
    [sym_lower_ident] = ACTIONS(367),
  },
  [182] = {
    [sym_expr] = STATE(193),
    [sym_exp_ident] = STATE(112),
    [sym_exp_let] = STATE(112),
    [sym_exp_function] = STATE(112),
    [sym_exp_constant] = STATE(112),
    [sym_const_char] = STATE(113),
    [sym_const_string] = STATE(113),
    [sym_const_integer] = STATE(113),
    [sym_const_float] = STATE(113),
    [sym_string] = STATE(114),
    [sym_char] = STATE(115),
    [sym_ident] = STATE(116),
    [anon_sym_let] = ACTIONS(464),
    [anon_sym_fun] = ACTIONS(355),
    [anon_sym_DQUOTE] = ACTIONS(357),
    [anon_sym_SQUOTE] = ACTIONS(359),
    [sym_number] = ACTIONS(361),
    [sym_float] = ACTIONS(363),
    [sym_upper_ident] = ACTIONS(365),
    [sym_lower_ident] = ACTIONS(367),
  },
  [183] = {
    [anon_sym_EQ_GT] = ACTIONS(466),
  },
  [184] = {
    [sym_value_binding] = STATE(196),
    [sym_pattern] = STATE(54),
    [sym_pat_var] = STATE(26),
    [anon_sym_rec] = ACTIONS(468),
    [sym_lower_ident] = ACTIONS(33),
  },
  [185] = {
    [sym_expr] = STATE(135),
    [sym_exp_ident] = STATE(15),
    [sym_exp_let] = STATE(15),
    [sym_exp_function] = STATE(15),
    [sym_exp_constant] = STATE(15),
    [sym_const_char] = STATE(16),
    [sym_const_string] = STATE(16),
    [sym_const_integer] = STATE(16),
    [sym_const_float] = STATE(16),
    [sym_string] = STATE(17),
    [sym_char] = STATE(18),
    [sym_ident] = STATE(19),
    [anon_sym_let] = ACTIONS(454),
    [anon_sym_fun] = ACTIONS(315),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [sym_number] = ACTIONS(317),
    [sym_float] = ACTIONS(319),
    [sym_upper_ident] = ACTIONS(25),
    [sym_lower_ident] = ACTIONS(27),
  },
  [186] = {
    [sym_value_binding] = STATE(197),
    [sym_pattern] = STATE(54),
    [sym_pat_var] = STATE(26),
    [sym_lower_ident] = ACTIONS(123),
  },
  [187] = {
    [sym_expr] = STATE(118),
    [sym_exp_ident] = STATE(66),
    [sym_exp_let] = STATE(66),
    [sym_exp_function] = STATE(66),
    [sym_exp_constant] = STATE(66),
    [sym_const_char] = STATE(67),
    [sym_const_string] = STATE(67),
    [sym_const_integer] = STATE(67),
    [sym_const_float] = STATE(67),
    [sym_string] = STATE(68),
    [sym_char] = STATE(69),
    [sym_ident] = STATE(70),
    [aux_sym_str_value_repeat1] = STATE(198),
    [anon_sym_let] = ACTIONS(440),
    [anon_sym_and] = ACTIONS(298),
    [anon_sym_fun] = ACTIONS(234),
    [anon_sym_DQUOTE] = ACTIONS(236),
    [anon_sym_SQUOTE] = ACTIONS(238),
    [sym_number] = ACTIONS(240),
    [sym_float] = ACTIONS(242),
    [sym_upper_ident] = ACTIONS(244),
    [sym_lower_ident] = ACTIONS(246),
  },
  [188] = {
    [ts_builtin_sym_end] = ACTIONS(423),
    [anon_sym_let] = ACTIONS(425),
    [anon_sym_and] = ACTIONS(425),
    [anon_sym_open] = ACTIONS(425),
    [anon_sym_fun] = ACTIONS(425),
    [anon_sym_PIPE] = ACTIONS(423),
    [anon_sym_DQUOTE] = ACTIONS(423),
    [anon_sym_SQUOTE] = ACTIONS(423),
    [sym_number] = ACTIONS(425),
    [sym_float] = ACTIONS(425),
    [sym_upper_ident] = ACTIONS(425),
    [sym_lower_ident] = ACTIONS(427),
  },
  [189] = {
    [sym_value_binding] = STATE(200),
    [sym_pattern] = STATE(54),
    [sym_pat_var] = STATE(26),
    [anon_sym_rec] = ACTIONS(470),
    [sym_lower_ident] = ACTIONS(33),
  },
  [190] = {
    [sym_expr] = STATE(135),
    [sym_exp_ident] = STATE(15),
    [sym_exp_let] = STATE(15),
    [sym_exp_function] = STATE(15),
    [sym_exp_constant] = STATE(15),
    [sym_const_char] = STATE(16),
    [sym_const_string] = STATE(16),
    [sym_const_integer] = STATE(16),
    [sym_const_float] = STATE(16),
    [sym_string] = STATE(17),
    [sym_char] = STATE(18),
    [sym_ident] = STATE(19),
    [anon_sym_let] = ACTIONS(460),
    [anon_sym_fun] = ACTIONS(341),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [sym_number] = ACTIONS(317),
    [sym_float] = ACTIONS(319),
    [sym_upper_ident] = ACTIONS(25),
    [sym_lower_ident] = ACTIONS(27),
  },
  [191] = {
    [anon_sym_let] = ACTIONS(347),
    [anon_sym_and] = ACTIONS(347),
    [anon_sym_fun] = ACTIONS(347),
    [anon_sym_PIPE] = ACTIONS(345),
    [anon_sym_DQUOTE] = ACTIONS(345),
    [anon_sym_SQUOTE] = ACTIONS(345),
    [sym_number] = ACTIONS(347),
    [sym_float] = ACTIONS(347),
    [sym_upper_ident] = ACTIONS(347),
    [sym_lower_ident] = ACTIONS(349),
  },
  [192] = {
    [sym_value_binding] = STATE(202),
    [sym_pattern] = STATE(54),
    [sym_pat_var] = STATE(26),
    [anon_sym_rec] = ACTIONS(472),
    [sym_lower_ident] = ACTIONS(33),
  },
  [193] = {
    [anon_sym_let] = ACTIONS(387),
    [anon_sym_and] = ACTIONS(387),
    [anon_sym_fun] = ACTIONS(387),
    [anon_sym_PIPE] = ACTIONS(385),
    [anon_sym_DQUOTE] = ACTIONS(385),
    [anon_sym_SQUOTE] = ACTIONS(385),
    [sym_number] = ACTIONS(387),
    [sym_float] = ACTIONS(387),
    [sym_upper_ident] = ACTIONS(387),
    [sym_lower_ident] = ACTIONS(389),
  },
  [194] = {
    [sym_expr] = STATE(203),
    [sym_exp_ident] = STATE(112),
    [sym_exp_let] = STATE(112),
    [sym_exp_function] = STATE(112),
    [sym_exp_constant] = STATE(112),
    [sym_const_char] = STATE(113),
    [sym_const_string] = STATE(113),
    [sym_const_integer] = STATE(113),
    [sym_const_float] = STATE(113),
    [sym_string] = STATE(114),
    [sym_char] = STATE(115),
    [sym_ident] = STATE(116),
    [anon_sym_let] = ACTIONS(464),
    [anon_sym_fun] = ACTIONS(355),
    [anon_sym_DQUOTE] = ACTIONS(357),
    [anon_sym_SQUOTE] = ACTIONS(359),
    [sym_number] = ACTIONS(361),
    [sym_float] = ACTIONS(363),
    [sym_upper_ident] = ACTIONS(365),
    [sym_lower_ident] = ACTIONS(367),
  },
  [195] = {
    [sym_value_binding] = STATE(204),
    [sym_pattern] = STATE(54),
    [sym_pat_var] = STATE(26),
    [sym_lower_ident] = ACTIONS(123),
  },
  [196] = {
    [sym_expr] = STATE(41),
    [sym_exp_ident] = STATE(15),
    [sym_exp_let] = STATE(15),
    [sym_exp_function] = STATE(15),
    [sym_exp_constant] = STATE(15),
    [sym_const_char] = STATE(16),
    [sym_const_string] = STATE(16),
    [sym_const_integer] = STATE(16),
    [sym_const_float] = STATE(16),
    [sym_string] = STATE(17),
    [sym_char] = STATE(18),
    [sym_ident] = STATE(19),
    [aux_sym_str_value_repeat1] = STATE(205),
    [anon_sym_let] = ACTIONS(454),
    [anon_sym_and] = ACTIONS(298),
    [anon_sym_fun] = ACTIONS(315),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [sym_number] = ACTIONS(317),
    [sym_float] = ACTIONS(319),
    [sym_upper_ident] = ACTIONS(25),
    [sym_lower_ident] = ACTIONS(27),
  },
  [197] = {
    [sym_expr] = STATE(147),
    [sym_exp_ident] = STATE(66),
    [sym_exp_let] = STATE(66),
    [sym_exp_function] = STATE(66),
    [sym_exp_constant] = STATE(66),
    [sym_const_char] = STATE(67),
    [sym_const_string] = STATE(67),
    [sym_const_integer] = STATE(67),
    [sym_const_float] = STATE(67),
    [sym_string] = STATE(68),
    [sym_char] = STATE(69),
    [sym_ident] = STATE(70),
    [aux_sym_str_value_repeat1] = STATE(206),
    [anon_sym_let] = ACTIONS(440),
    [anon_sym_and] = ACTIONS(298),
    [anon_sym_fun] = ACTIONS(234),
    [anon_sym_DQUOTE] = ACTIONS(236),
    [anon_sym_SQUOTE] = ACTIONS(238),
    [sym_number] = ACTIONS(240),
    [sym_float] = ACTIONS(242),
    [sym_upper_ident] = ACTIONS(244),
    [sym_lower_ident] = ACTIONS(246),
  },
  [198] = {
    [sym_expr] = STATE(147),
    [sym_exp_ident] = STATE(66),
    [sym_exp_let] = STATE(66),
    [sym_exp_function] = STATE(66),
    [sym_exp_constant] = STATE(66),
    [sym_const_char] = STATE(67),
    [sym_const_string] = STATE(67),
    [sym_const_integer] = STATE(67),
    [sym_const_float] = STATE(67),
    [sym_string] = STATE(68),
    [sym_char] = STATE(69),
    [sym_ident] = STATE(70),
    [aux_sym_str_value_repeat1] = STATE(102),
    [anon_sym_let] = ACTIONS(440),
    [anon_sym_and] = ACTIONS(298),
    [anon_sym_fun] = ACTIONS(234),
    [anon_sym_DQUOTE] = ACTIONS(236),
    [anon_sym_SQUOTE] = ACTIONS(238),
    [sym_number] = ACTIONS(240),
    [sym_float] = ACTIONS(242),
    [sym_upper_ident] = ACTIONS(244),
    [sym_lower_ident] = ACTIONS(246),
  },
  [199] = {
    [sym_value_binding] = STATE(207),
    [sym_pattern] = STATE(54),
    [sym_pat_var] = STATE(26),
    [sym_lower_ident] = ACTIONS(123),
  },
  [200] = {
    [sym_expr] = STATE(41),
    [sym_exp_ident] = STATE(15),
    [sym_exp_let] = STATE(15),
    [sym_exp_function] = STATE(15),
    [sym_exp_constant] = STATE(15),
    [sym_const_char] = STATE(16),
    [sym_const_string] = STATE(16),
    [sym_const_integer] = STATE(16),
    [sym_const_float] = STATE(16),
    [sym_string] = STATE(17),
    [sym_char] = STATE(18),
    [sym_ident] = STATE(19),
    [aux_sym_str_value_repeat1] = STATE(208),
    [anon_sym_let] = ACTIONS(460),
    [anon_sym_and] = ACTIONS(298),
    [anon_sym_fun] = ACTIONS(341),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [sym_number] = ACTIONS(317),
    [sym_float] = ACTIONS(319),
    [sym_upper_ident] = ACTIONS(25),
    [sym_lower_ident] = ACTIONS(27),
  },
  [201] = {
    [sym_value_binding] = STATE(209),
    [sym_pattern] = STATE(54),
    [sym_pat_var] = STATE(26),
    [sym_lower_ident] = ACTIONS(123),
  },
  [202] = {
    [sym_expr] = STATE(162),
    [sym_exp_ident] = STATE(112),
    [sym_exp_let] = STATE(112),
    [sym_exp_function] = STATE(112),
    [sym_exp_constant] = STATE(112),
    [sym_const_char] = STATE(113),
    [sym_const_string] = STATE(113),
    [sym_const_integer] = STATE(113),
    [sym_const_float] = STATE(113),
    [sym_string] = STATE(114),
    [sym_char] = STATE(115),
    [sym_ident] = STATE(116),
    [aux_sym_str_value_repeat1] = STATE(210),
    [anon_sym_let] = ACTIONS(464),
    [anon_sym_and] = ACTIONS(298),
    [anon_sym_fun] = ACTIONS(355),
    [anon_sym_DQUOTE] = ACTIONS(357),
    [anon_sym_SQUOTE] = ACTIONS(359),
    [sym_number] = ACTIONS(361),
    [sym_float] = ACTIONS(363),
    [sym_upper_ident] = ACTIONS(365),
    [sym_lower_ident] = ACTIONS(367),
  },
  [203] = {
    [anon_sym_let] = ACTIONS(425),
    [anon_sym_and] = ACTIONS(425),
    [anon_sym_fun] = ACTIONS(425),
    [anon_sym_PIPE] = ACTIONS(423),
    [anon_sym_DQUOTE] = ACTIONS(423),
    [anon_sym_SQUOTE] = ACTIONS(423),
    [sym_number] = ACTIONS(425),
    [sym_float] = ACTIONS(425),
    [sym_upper_ident] = ACTIONS(425),
    [sym_lower_ident] = ACTIONS(427),
  },
  [204] = {
    [sym_expr] = STATE(50),
    [sym_exp_ident] = STATE(15),
    [sym_exp_let] = STATE(15),
    [sym_exp_function] = STATE(15),
    [sym_exp_constant] = STATE(15),
    [sym_const_char] = STATE(16),
    [sym_const_string] = STATE(16),
    [sym_const_integer] = STATE(16),
    [sym_const_float] = STATE(16),
    [sym_string] = STATE(17),
    [sym_char] = STATE(18),
    [sym_ident] = STATE(19),
    [aux_sym_str_value_repeat1] = STATE(211),
    [anon_sym_let] = ACTIONS(454),
    [anon_sym_and] = ACTIONS(298),
    [anon_sym_fun] = ACTIONS(315),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [sym_number] = ACTIONS(317),
    [sym_float] = ACTIONS(319),
    [sym_upper_ident] = ACTIONS(25),
    [sym_lower_ident] = ACTIONS(27),
  },
  [205] = {
    [sym_expr] = STATE(50),
    [sym_exp_ident] = STATE(15),
    [sym_exp_let] = STATE(15),
    [sym_exp_function] = STATE(15),
    [sym_exp_constant] = STATE(15),
    [sym_const_char] = STATE(16),
    [sym_const_string] = STATE(16),
    [sym_const_integer] = STATE(16),
    [sym_const_float] = STATE(16),
    [sym_string] = STATE(17),
    [sym_char] = STATE(18),
    [sym_ident] = STATE(19),
    [aux_sym_str_value_repeat1] = STATE(102),
    [anon_sym_let] = ACTIONS(454),
    [anon_sym_and] = ACTIONS(298),
    [anon_sym_fun] = ACTIONS(315),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [sym_number] = ACTIONS(317),
    [sym_float] = ACTIONS(319),
    [sym_upper_ident] = ACTIONS(25),
    [sym_lower_ident] = ACTIONS(27),
  },
  [206] = {
    [sym_expr] = STATE(169),
    [sym_exp_ident] = STATE(66),
    [sym_exp_let] = STATE(66),
    [sym_exp_function] = STATE(66),
    [sym_exp_constant] = STATE(66),
    [sym_const_char] = STATE(67),
    [sym_const_string] = STATE(67),
    [sym_const_integer] = STATE(67),
    [sym_const_float] = STATE(67),
    [sym_string] = STATE(68),
    [sym_char] = STATE(69),
    [sym_ident] = STATE(70),
    [aux_sym_str_value_repeat1] = STATE(102),
    [anon_sym_let] = ACTIONS(440),
    [anon_sym_and] = ACTIONS(298),
    [anon_sym_fun] = ACTIONS(234),
    [anon_sym_DQUOTE] = ACTIONS(236),
    [anon_sym_SQUOTE] = ACTIONS(238),
    [sym_number] = ACTIONS(240),
    [sym_float] = ACTIONS(242),
    [sym_upper_ident] = ACTIONS(244),
    [sym_lower_ident] = ACTIONS(246),
  },
  [207] = {
    [sym_expr] = STATE(50),
    [sym_exp_ident] = STATE(15),
    [sym_exp_let] = STATE(15),
    [sym_exp_function] = STATE(15),
    [sym_exp_constant] = STATE(15),
    [sym_const_char] = STATE(16),
    [sym_const_string] = STATE(16),
    [sym_const_integer] = STATE(16),
    [sym_const_float] = STATE(16),
    [sym_string] = STATE(17),
    [sym_char] = STATE(18),
    [sym_ident] = STATE(19),
    [aux_sym_str_value_repeat1] = STATE(212),
    [anon_sym_let] = ACTIONS(460),
    [anon_sym_and] = ACTIONS(298),
    [anon_sym_fun] = ACTIONS(341),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [sym_number] = ACTIONS(317),
    [sym_float] = ACTIONS(319),
    [sym_upper_ident] = ACTIONS(25),
    [sym_lower_ident] = ACTIONS(27),
  },
  [208] = {
    [sym_expr] = STATE(50),
    [sym_exp_ident] = STATE(15),
    [sym_exp_let] = STATE(15),
    [sym_exp_function] = STATE(15),
    [sym_exp_constant] = STATE(15),
    [sym_const_char] = STATE(16),
    [sym_const_string] = STATE(16),
    [sym_const_integer] = STATE(16),
    [sym_const_float] = STATE(16),
    [sym_string] = STATE(17),
    [sym_char] = STATE(18),
    [sym_ident] = STATE(19),
    [aux_sym_str_value_repeat1] = STATE(102),
    [anon_sym_let] = ACTIONS(460),
    [anon_sym_and] = ACTIONS(298),
    [anon_sym_fun] = ACTIONS(341),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [sym_number] = ACTIONS(317),
    [sym_float] = ACTIONS(319),
    [sym_upper_ident] = ACTIONS(25),
    [sym_lower_ident] = ACTIONS(27),
  },
  [209] = {
    [sym_expr] = STATE(180),
    [sym_exp_ident] = STATE(112),
    [sym_exp_let] = STATE(112),
    [sym_exp_function] = STATE(112),
    [sym_exp_constant] = STATE(112),
    [sym_const_char] = STATE(113),
    [sym_const_string] = STATE(113),
    [sym_const_integer] = STATE(113),
    [sym_const_float] = STATE(113),
    [sym_string] = STATE(114),
    [sym_char] = STATE(115),
    [sym_ident] = STATE(116),
    [aux_sym_str_value_repeat1] = STATE(213),
    [anon_sym_let] = ACTIONS(464),
    [anon_sym_and] = ACTIONS(298),
    [anon_sym_fun] = ACTIONS(355),
    [anon_sym_DQUOTE] = ACTIONS(357),
    [anon_sym_SQUOTE] = ACTIONS(359),
    [sym_number] = ACTIONS(361),
    [sym_float] = ACTIONS(363),
    [sym_upper_ident] = ACTIONS(365),
    [sym_lower_ident] = ACTIONS(367),
  },
  [210] = {
    [sym_expr] = STATE(180),
    [sym_exp_ident] = STATE(112),
    [sym_exp_let] = STATE(112),
    [sym_exp_function] = STATE(112),
    [sym_exp_constant] = STATE(112),
    [sym_const_char] = STATE(113),
    [sym_const_string] = STATE(113),
    [sym_const_integer] = STATE(113),
    [sym_const_float] = STATE(113),
    [sym_string] = STATE(114),
    [sym_char] = STATE(115),
    [sym_ident] = STATE(116),
    [aux_sym_str_value_repeat1] = STATE(102),
    [anon_sym_let] = ACTIONS(464),
    [anon_sym_and] = ACTIONS(298),
    [anon_sym_fun] = ACTIONS(355),
    [anon_sym_DQUOTE] = ACTIONS(357),
    [anon_sym_SQUOTE] = ACTIONS(359),
    [sym_number] = ACTIONS(361),
    [sym_float] = ACTIONS(363),
    [sym_upper_ident] = ACTIONS(365),
    [sym_lower_ident] = ACTIONS(367),
  },
  [211] = {
    [sym_expr] = STATE(74),
    [sym_exp_ident] = STATE(15),
    [sym_exp_let] = STATE(15),
    [sym_exp_function] = STATE(15),
    [sym_exp_constant] = STATE(15),
    [sym_const_char] = STATE(16),
    [sym_const_string] = STATE(16),
    [sym_const_integer] = STATE(16),
    [sym_const_float] = STATE(16),
    [sym_string] = STATE(17),
    [sym_char] = STATE(18),
    [sym_ident] = STATE(19),
    [aux_sym_str_value_repeat1] = STATE(102),
    [anon_sym_let] = ACTIONS(454),
    [anon_sym_and] = ACTIONS(298),
    [anon_sym_fun] = ACTIONS(315),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [sym_number] = ACTIONS(317),
    [sym_float] = ACTIONS(319),
    [sym_upper_ident] = ACTIONS(25),
    [sym_lower_ident] = ACTIONS(27),
  },
  [212] = {
    [sym_expr] = STATE(74),
    [sym_exp_ident] = STATE(15),
    [sym_exp_let] = STATE(15),
    [sym_exp_function] = STATE(15),
    [sym_exp_constant] = STATE(15),
    [sym_const_char] = STATE(16),
    [sym_const_string] = STATE(16),
    [sym_const_integer] = STATE(16),
    [sym_const_float] = STATE(16),
    [sym_string] = STATE(17),
    [sym_char] = STATE(18),
    [sym_ident] = STATE(19),
    [aux_sym_str_value_repeat1] = STATE(102),
    [anon_sym_let] = ACTIONS(460),
    [anon_sym_and] = ACTIONS(298),
    [anon_sym_fun] = ACTIONS(341),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [sym_number] = ACTIONS(317),
    [sym_float] = ACTIONS(319),
    [sym_upper_ident] = ACTIONS(25),
    [sym_lower_ident] = ACTIONS(27),
  },
  [213] = {
    [sym_expr] = STATE(191),
    [sym_exp_ident] = STATE(112),
    [sym_exp_let] = STATE(112),
    [sym_exp_function] = STATE(112),
    [sym_exp_constant] = STATE(112),
    [sym_const_char] = STATE(113),
    [sym_const_string] = STATE(113),
    [sym_const_integer] = STATE(113),
    [sym_const_float] = STATE(113),
    [sym_string] = STATE(114),
    [sym_char] = STATE(115),
    [sym_ident] = STATE(116),
    [aux_sym_str_value_repeat1] = STATE(102),
    [anon_sym_let] = ACTIONS(464),
    [anon_sym_and] = ACTIONS(298),
    [anon_sym_fun] = ACTIONS(355),
    [anon_sym_DQUOTE] = ACTIONS(357),
    [anon_sym_SQUOTE] = ACTIONS(359),
    [sym_number] = ACTIONS(361),
    [sym_float] = ACTIONS(363),
    [sym_upper_ident] = ACTIONS(365),
    [sym_lower_ident] = ACTIONS(367),
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
  [15] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(5),
  [17] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(6),
  [19] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(7),
  [21] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(8),
  [23] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(9),
  [25] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(10),
  [27] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(10),
  [29] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program, 1),
  [31] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(22),
  [33] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(23),
  [35] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_exp_function, 1, .fragile = true),
  [37] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_exp_function, 1, .fragile = true),
  [39] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(28),
  [41] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_exp_function, 1, .fragile = true),
  [43] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(31),
  [45] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(32),
  [47] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(34),
  [49] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_const_integer, 1),
  [51] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_const_integer, 1),
  [53] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(35),
  [55] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_const_integer, 1),
  [57] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_const_float, 1),
  [59] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_const_float, 1),
  [61] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(36),
  [63] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_const_float, 1),
  [65] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_ident, 1),
  [67] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_ident, 1),
  [69] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_ident, 1),
  [71] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
  [73] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 1),
  [75] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 1),
  [77] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 1),
  [79] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_structure_item, 1),
  [81] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_structure_item, 1),
  [83] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_structure_item, 1),
  [85] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_str_eval, 1),
  [87] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_str_eval, 1),
  [89] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_str_eval, 1),
  [91] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expr, 1),
  [93] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_expr, 1),
  [95] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_expr, 1),
  [97] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_exp_constant, 1),
  [99] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_exp_constant, 1),
  [101] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_exp_constant, 1),
  [103] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_const_string, 1),
  [105] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_const_string, 1),
  [107] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_const_string, 1),
  [109] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_const_char, 1),
  [111] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_const_char, 1),
  [113] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_const_char, 1),
  [115] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_exp_ident, 1),
  [117] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_exp_ident, 1),
  [119] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_exp_ident, 1),
  [121] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program, 2),
  [123] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(23),
  [125] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_pat_var, 1),
  [127] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_pat_var, 1),
  [129] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_str_value, 2),
  [131] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_str_value, 2),
  [133] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(40),
  [135] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_str_value, 2),
  [137] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(43),
  [139] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_pattern, 1),
  [141] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_pattern, 1),
  [143] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_str_open, 2),
  [145] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_str_open, 2),
  [147] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(44),
  [149] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_str_open, 2),
  [151] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_exp_function_repeat1, 1),
  [153] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_exp_function_repeat1, 1),
  [155] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_exp_function_repeat1, 1),
  [157] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_exp_function, 2, .fragile = true),
  [159] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_exp_function, 2, .fragile = true),
  [161] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_exp_function, 2, .fragile = true),
  [163] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_string, 2),
  [165] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_string, 2),
  [167] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_string, 2),
  [169] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_string_repeat1, 1),
  [171] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(47),
  [173] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(49),
  [175] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_const_integer, 2),
  [177] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_const_integer, 2),
  [179] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_const_integer, 2),
  [181] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_const_float, 2),
  [183] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_const_float, 2),
  [185] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_const_float, 2),
  [187] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2),
  [189] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(3),
  [192] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(4),
  [195] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(5),
  [198] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(6),
  [201] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(7),
  [204] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(8),
  [207] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(9),
  [210] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(10),
  [213] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(10),
  [216] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_str_value, 3),
  [218] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_str_value, 3),
  [220] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_str_value, 3),
  [222] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(52),
  [224] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_exp_let, 3),
  [226] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_exp_let, 3),
  [228] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_exp_let, 3),
  [230] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(57),
  [232] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(58),
  [234] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(59),
  [236] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(60),
  [238] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(61),
  [240] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(62),
  [242] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(63),
  [244] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(64),
  [246] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(64),
  [248] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_str_open, 3),
  [250] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_str_open, 3),
  [252] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_str_open, 3),
  [254] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(71),
  [256] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(72),
  [258] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_exp_function_repeat1, 2),
  [260] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_exp_function_repeat1, 2),
  [262] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_exp_function_repeat1, 2), SHIFT_REPEAT(28),
  [265] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_exp_function_repeat1, 2),
  [267] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_string, 3),
  [269] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_string, 3),
  [271] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_string, 3),
  [273] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_string_repeat1, 2),
  [275] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(32),
  [278] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_char, 3),
  [280] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_char, 3),
  [282] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_char, 3),
  [284] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_exp_let, 4),
  [286] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_exp_let, 4),
  [288] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_exp_let, 4),
  [290] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_str_value, 4),
  [292] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_str_value, 4),
  [294] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_str_value, 4),
  [296] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(39),
  [298] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(76),
  [300] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(78),
  [302] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_str_value_repeat1, 2),
  [304] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_str_value_repeat1, 2),
  [306] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_str_value_repeat1, 2),
  [308] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_str_value_repeat1, 2), SHIFT_REPEAT(40),
  [311] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(79),
  [313] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(81),
  [315] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(82),
  [317] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(83),
  [319] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(84),
  [321] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(86),
  [323] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(89),
  [325] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(91),
  [327] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(92),
  [329] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(93),
  [331] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_value_binding, 3),
  [333] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_value_binding, 3),
  [335] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_value_binding, 3),
  [337] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(94),
  [339] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(96),
  [341] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(97),
  [343] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(99),
  [345] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_exp_let, 5),
  [347] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_exp_let, 5),
  [349] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_exp_let, 5),
  [351] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(103),
  [353] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(104),
  [355] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(105),
  [357] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(106),
  [359] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(107),
  [361] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(108),
  [363] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(109),
  [365] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(110),
  [367] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(110),
  [369] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(120),
  [371] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(122),
  [373] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(35),
  [375] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(36),
  [377] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(124),
  [379] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(127),
  [381] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(128),
  [383] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(129),
  [385] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_case, 4),
  [387] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_case, 4),
  [389] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_case, 4),
  [391] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(131),
  [393] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(133),
  [395] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_guard, 2),
  [397] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_str_value_repeat1, 2), SHIFT_REPEAT(76),
  [400] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(136),
  [402] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(139),
  [404] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(142),
  [406] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(144),
  [408] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(145),
  [410] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(146),
  [412] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_braced_expr, 3),
  [414] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_braced_expr, 3),
  [416] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_braced_expr, 3),
  [418] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(153),
  [420] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_exp_function_repeat1, 2), SHIFT_REPEAT(86),
  [423] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_case, 5),
  [425] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_case, 5),
  [427] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_case, 5),
  [429] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(164),
  [431] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(167),
  [433] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(168),
  [435] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(171),
  [437] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_exp_function_repeat1, 2), SHIFT_REPEAT(122),
  [440] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(173),
  [442] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(175),
  [444] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(178),
  [446] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_exp_function_repeat1, 2), SHIFT_REPEAT(133),
  [449] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(182),
  [451] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_exp_function_repeat1, 2), SHIFT_REPEAT(139),
  [454] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(184),
  [456] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(185),
  [458] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(186),
  [460] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(189),
  [462] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(190),
  [464] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(192),
  [466] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(194),
  [468] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(195),
  [470] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(199),
  [472] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(201),
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
