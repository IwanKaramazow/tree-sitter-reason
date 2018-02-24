module.exports = grammar({
  name: "reason",

  // extras: $ => [$.comment, /\s/],

  rules: {
    program: $ => seq(
      optional($.hash_bang_line),
      repeat($.structure_item)
    ),

    // structure: $ => repeat(
      // $.structure_item,
    // ),

    structure_item: $ => choice(
      $.str_open,
      $.str_eval,
      $.str_value
    ),

    hash_bang_line: $ => /#!.*/,

    str_eval: $ => $.expr,

    str_value: $ => prec.left(seq(
      "let",
      optional("rec"),
      $.value_binding,
      repeat(seq("and", $.value_binding)),
    )),

    str_open: $ => seq(
      "open",
      $.ident,
      optional(";")
    ),

    value_binding: $ => seq(
      $.pattern,
      '=',
      choice($.expr, $.braced_expr)
    ),

    pattern: $ => choice(
      $.pat_any,
      $.pat_var,
      $.pat_alias,
      $.pat_interval,
      $.pat_tuple,
      $.pat_array,
      $.pat_or,
      $.pat_lazy,
      $.pat_open,
      $.pat_exception
    ),

    pat_any: $ => '_',

    pat_var: $ => $.lower_ident,

    pat_alias: $ => seq(
      $.pattern,
      'as',
      $.lower_ident
    ),

    pat_interval: $ => seq(
      $.constant,
      '..',
      $.constant
    ),

    pat_tuple: $ => prec.right(seq(
      '(',
      $.pattern,
      repeat(seq(',', $.pattern)),
      optional(','),
      ')'
    )),

    pat_array: $ => seq(
      "[|",
      $.pattern,
      repeat(seq(',', $.pattern)),
      optional(','),
      "|]"
    ),

    pat_or: $ => prec.right(seq(
      $.pattern, '|', $.pattern
    )),

    pat_lazy: $ => prec.right(
      seq("lazy", $.pattern)
    ),

    pat_open: $ => prec.right(seq(
      prec.left($.module_ident),
      '.',
      '(',
      $.pattern,
      ')'
    )),

    pat_exception: $ => prec.right(seq("exception", $.pattern)),

    braced_expr: $ => seq('{', $.expr, '}'),

    expr: $ => choice(
      $.exp_ident,
      $.exp_constant,
      $.exp_let,
      $.exp_function
    ),

    exp_constant: $ => $.constant,

    exp_ident: $ => $.ident,


    exp_let: $ => seq(
      'let',
      optional('rec'),
      $.value_binding,
      repeat(
        seq('and', $.value_binding),
      ),
      // ';',
      $.expr,
    ),

    exp_function: $ => prec.right(seq(
      'fun',
      repeat($.case)
    )),

    case: $ => seq(
      '|',
      $.pattern,
      optional($.guard),
      "=>",
      $.expr
    ),

    guard: $ => seq(
      'when',
      $.expr
    ),

    constant: $ => choice(
      $.const_integer,
      $.const_char,
      $.const_string,
      $.const_float
    ),

    const_char: $ => $.char,

    const_string: $ => $.string,

    const_integer: $ => choice(
      $.number,
      seq($.number, /[G-Zg-z]/)
    ),

    const_float: $ => choice(
      $.float,
      seq($.float, /[G-Zg-z]/)
    ),

    string: $ => seq(
      '"',
      repeat(choice(/[^\\"\n]/, /\\(.|\n)/)),
      '"'
    ),

    char: $ => seq("'", /[A-Za-z0-9]/, "'"),


    // TODO: http://caml.inria.fr/pub/docs/manual-ocaml/lex.html#integer-literal
    //
    number: $ => /[+\-]?\d+/,
    // 3.4 2e5 1.4e-4
    float: $ => /[+\-]?\d+(\.\d+)(e[+/-]?\d*)?/,




    ident: $ => choice(
      $.upper_ident,
      $.lower_ident
    ),

    // todo pat_open bug! | Reason.React.(element)
    module_ident: $ => prec.left(
      seq(
        repeat(seq($.upper_ident, '.')),
        $.upper_ident
      )
    ),

    upper_ident: $ => /[A-Z][a-z]+/,
    lower_ident: $ => /[a-z]+/,


    // program: $ => repeat(choice(
      // $.assignment_statement,
      // $.expression_statement
    // )),

    // assignment_statement: $ => seq(
      // $.variable, "=", $.expression, ";"
    // ),

    // expression_statement: $ => seq(
      // $.expression, ";"
    // ),

    // expression: $ => choice(
      // $.variable,
      // $.number,
      // prec.left(1, seq($.expression, "+", $.expression)),
      // prec.left(1, seq($.expression, "-", $.expression)),
      // prec.left(2, seq($.expression, "*", $.expression)),
      // prec.left(2, seq($.expression, "/", $.expression)),
      // prec.left(3, seq($.expression, "^", $.expression))
    // ),

    // variable: $ => /\a\w*/,

    // number: $ => /\d+/,

    // comment: $ => /#.*/
  }
});

function sep(delim, rule) {
  return seq(
    rule,
    repeat(seq(delim, rule)),
    optional(delim)
  );
}
