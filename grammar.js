module.exports = grammar({
  name: "reason",

  // extras: $ => [$.comment, /\s/],

  conflicts: $ => [
    /*
     * This is the infamous es6 syntax problem in Reason
     * Imagine the following:
     *   let x = (a, b)
     *   let x = (a, b) => a + b;
     *  is (a, b) a tuple or es6 function arguments?
     */
    [$.pat_var, $.ident],
    [$.pat_tuple, $.parameter]
  ],

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
      $.str_value,
      $.str_type
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
      $.expr
      // choice($.expr, $.braced_expr)
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
      $.pat_exception,
      $.pat_unpack
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

    pat_unpack: $ => seq(
      "(",
      // TODO make this a module expr
      "module",
      $.upper_ident,
      ")",
    ),

    braced_expr: $ => seq('{', $.expr, '}'),

    expr: $ => choice(
      $.exp_ident,
      $.exp_constant,
      $.exp_let,
      $.exp_function,
      $.exp_unreachable,
      $.exp_lazy,
      $.braced_expr,
      $.exp_apply,
      $.exp_fun,
      $.exp_tuple,
    ),

    exp_constant: $ => $.constant,

    exp_ident: $ => $.ident,
    // seq(
      // $.ident,
      // choice(';', '\n')
    // ),

    exp_tuple: $ => seq(
      '(',
      $.expr,
      repeat1(seq(',', $.expr)),
      optional(','),
      ')',
    ),

    exp_let: $ => seq(
      'let',
      optional('rec'),
      $.value_binding,
      repeat(
        seq('and', $.value_binding),
      ),
      $.expr,
    ),

    exp_function: $ => prec.right(seq(
      'fun',
      repeat($.case)
    )),

    exp_fun: $ => seq(
      $.es6_args,
      "=>",
      $.expr,
    ),

    es6_args: $ => seq(
      '(',
      $.parameter,
      repeat(seq(',', $.parameter)),
      optional(','),
      ')',
    ),

    parameter: $ => choice(
      $.pattern,
      // TODO can probably written in one rule
      $.param_labeled,
      $.param_labeled_punned,
      $.param_labeled_constraint,
      $.param_optional,
      $.param_optional_punned
    ),

    param_labeled: $ => seq(
      '~',
      $.lower_ident,
      'as',
      $.lower_ident,
    ),

    param_labeled_punned: $ => seq(
      '~',
      $.lower_ident
    ),

    param_labeled_constraint: $ => seq(
      '~',
      $.lower_ident,
      seq(':', $.core_type)
    ),

    param_optional_punned: $ => seq(
      '~',
      $.lower_ident,
      '=',
      '?',
    ),

    param_optional: $ => seq(
      '~',
      $.lower_ident,
      'as',
      $.pattern,
      optional(
        seq(':', $.core_type)
      ),
      '=',
      choice('?', $.expr)
    ),

    exp_lazy: $ => seq(
      'lazy',
      $.expr
    ),

    exp_unreachable: $ => '.',

    exp_apply: $ => prec.right(2, seq(
      // TODO React.make (module)
      $.lower_ident,
      '(',
      repeat($.argument),
      ')'
    )),

    argument: $ => choice(
      $.expr,
      // TODO can we put the labeled w/expr & punned
      // version under one rule? e.g. optional($.expr)
      $.arg_labeled,
      $.arg_labeled_punned,
      $.arg_optional,
      $.arg_optional_punned
    ),

    arg_labeled: $ => seq(
      '~',
      $.lower_ident,
      '=',
      $.expr
    ),

    arg_labeled_punned: $ => seq(
      '~',
      $.ident
    ),

    arg_optional: $ => seq(
      '~',
      $.lower_ident,
      '=',
      '?',
      $.expr
    ),

    arg_optional_punned: $ => seq(
      '~',
      $.lower_ident,
      '?',
    ),

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

    module_ident: $ => choice(
      $.upper_ident,
      seq($.module_ident, '.', $.upper_ident)
    ),

    upper_ident: $ => /[A-Z][a-z]+/,
    lower_ident: $ => /[a-z]+/,

    str_type: $ => seq(
      "type",
      optional("rec"),
      $.type_declaration,
      repeat(seq('and', $.type_declaration)),
      optional(';')
    ),

    type_declaration: $ => prec.right(seq(
      $.lower_ident, // TODO make type ident
      optional($.type_params),
      optional($.type_manifest),
      optional($.type_representation),
      repeat($.type_constraint),
    )),

    type_constraint: $ => seq(
      "optional",
      // TODO type_ident
      $.lower_ident,
      '=',
      $.core_type
    ),

    type_representation: $ => seq(
      '=',
      choice(
        seq(
          optional('|'),
          $.constr_decl,
          repeat(seq('|', $.constr_decl)),
        ),
        $.record_decl,
      )
    ),

    constr_decl: $ => seq(
      $.upper_ident,
      $.constr_args
    ),

    constr_args: $ => seq(
      '(',
      $.core_type,
      repeat(seq(',', $.core_type)),
      optional(','),
      ')',
    ),

    record_decl: $ => seq(
      '{',
      $.field_decl,
      repeat(seq(',', $.field_decl)),
      optional(','),
      '}'
    ),

    field_decl: $ => seq(
      optional('mutable'),
      $.lower_ident,
      ':',
      // TODO poly-typexpr?
      $.core_type,
    ),

    // rename to type_equation?
    type_manifest: $ => seq(
      '=',
      $.core_type,
    ),

    // todo inline ?
    type_params: $ => seq(
      '(',
      repeat($.type_param),
      ')',
    ),

    type_param: $ => seq(
      // $.variance,
      optional(choice('+', '-')),
      "'",
      $.lower_ident, // todo make type_identifier
    ),

    type_open: $ => "..",

    core_type: $ =>
      //todo attibutes
      $.core_type_desc,

    core_type_desc: $ => choice(
      $.typ_any,
      $.typ_var,
      $.typ_tuple,
      // $.typ_constr,
      $.typ_alias,
      // TODO limited to context
      // $.typ_poly,
    ),

    typ_any: $ => '_',

    typ_var: $ => $.lower_ident,

    typ_tuple: $ => seq(
      '(',
      $.core_type,
      repeat(seq(',', $.core_type)),
      optional(','),
      ')',
    ),

    typ_alias: $ => seq(
      $.core_type,
      'as',
      // TODO type_identifier '
      $.lower_ident,
    ),

    typ_poly: $ => seq(
      repeat1($.lower_ident),
      '.',
      $.core_type
    ),

    // typ_constr: $ => seq(
      // optional(seq($.extended_module_path, '.')),
      // $.lower_ident,

    // ),

    // extended_module_path: $ => prec.left(seq(
      // // TODO there's someting with parens
      // $.upper_ident,
      // repeat(seq('.', $.extended_module_path)),
    // )),








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
