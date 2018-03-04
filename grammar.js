// TODO: implement as array
const PREC = {
  prefix: 12,
  hash: 11,
  apply: 10, // function application, constructor application, tag application, assert, lazy
  minus: 9, // - -. (prefix)
  shift: 8, // **… lsl lsr asr
  mult: 7, // *… /… %… mod land lor lxor
  add: 6, // +… -…
  concat: 5, // @… ^…
  equal: 4, // =… <… >… |… &… $… !=
  and: 3, // & &&
  or: 2, // or ||

}
const operatorChars = choice(
  '!', '$', '%', '&', '*', '+', '-', '.', '/', ':', '<', '=', '>', '?', '@', '^', '|', '~'
);

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
    parenthesized_expr: $ => seq(
      '(',
      $.expr,
      ')',
    ),

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
      $.exp_infix,
      $.exp_prefix,
      $.expr_jsx,
      $.exp_ifthenelse,
      $.exp_assert,
      $.exp_while
    ),

    expr_jsx: $ => choice(
      $.jsx_element,
      $.jsx_element_self_closing,
      $.jsx_fragment,
      $.jsx_fragment_self_closing
    ),

    // TODO: can we put fragment & fragment_self_closing under one rule ?
    jsx_fragment: $ => seq(
      seq('<', '>'),
      repeat($.exp_jsx),
      seq('<', '/', '>')
    ),

    jsx_fragment_self_closing: $ => seq(
      '<', '/', '>'
    ),

    jsx_element: $ => seq(
      $.jsx_start_tag,
      repeat($.exp_jsx),
      $.jsx_closing_tag
    ),

   exp_jsx: $ => choice(
      $.exp_ident,
      $.exp_constant,
      $.exp_let,
      $.exp_unreachable,
      $.exp_lazy,
      $.exp_tuple,
      $.exp_jsx_parens
    ),

    exp_jsx_parens: $ => seq(
      '(',
      choice(
        $.exp_apply,
        $.exp_fun,
        $.exp_function,
        $.exp_ident,
        $.exp_constant,
        $.exp_let,
        $.exp_unreachable,
        $.exp_lazy,
        $.exp_tuple,
       ),
      ')'
    ),

    jsx_attr: $ => seq(
      $.lower_ident,
      optional(
        seq(
          '=',
          $.exp_jsx
        )
      )
    ),

    jsx_start_tag: $ => seq(
      '<',
      // TODO modules
      choice($.lower_ident, $.upper_ident),
      repeat($.jsx_attr),
      '>'
    ),

    jsx_closing_tag: $ => seq(
      '<',
      '/',
      // TODO modules
      choice($.lower_ident, $.upper_ident),
      '>'
    ),

    jsx_element_self_closing: $ => seq(
      '<',
      // TODO modules
      choice($.lower_ident, $.upper_ident),
      repeat($.jsx_attr),
      '/',
      '>'
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

    exp_infix: $ => choice(
      prec.left(PREC.hash, seq(
        $.expr,
        $.hash_operator,
        $.expr
      )),
      prec.right(PREC.shift, choice(
        seq($.expr, $.shift_operator, $.expr),
        choice("lsl", "lsr", "asr")
      )),
      prec.left(PREC.mult, choice(
        seq($.expr, $.mult_operator, $.expr),
        choice("mod", "land", "lor", "lxor")
      )),
      prec.left(
        PREC.add,
        seq($.expr, $.add_operator, $.expr)
      ),
      prec.right(
        PREC.concat,
        seq($.expr, $.concat_operator, $.expr)
      ),
      prec.left(
        PREC.equal,
        seq($.expr, $.equal_operator, $.expr),
      ),
      prec.right(
        PREC.and,
        seq($.expr, token(choice('&', '&&')), $.expr)
      ),
      prec.right(
        PREC.or,
        seq($.expr, token(choice("or", "||")), $.expr)
      )
    ),

    exp_prefix: $ => choice(
      prec(
        PREC.prefix,
        seq(
          $.prefix_operator,
          $.expr
        )
      ),
      prec(
        PREC.minus,
        seq(
          choice('-', '-.'),
          $.expr
        ),
      ),
    ),

    exp_ifthenelse: $ => seq(
      'if',
      $.parenthesized_expr,
      $.braced_expr,
      repeat(
        seq(
          'else if',
          $.parenthesized_expr,
          $.braced_expr
        )
      ),
      optional(
        seq(
          'else',
          $.braced_expr
        )
      )
    ),

    exp_while: $ => seq(
      "while",
      $.parenthesized_expr,
      $.braced_expr
    ),

    exp_assert: $ => seq(
      'assert',
      $.parenthesized_expr,
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
      // TODO can probably written in one/less rule
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
      $.parenthesized_expr
    ),

    exp_unreachable: $ => '.',

    exp_apply: $ => prec.right(PREC.apply, seq(
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

    hash_operator: $ => token(
      seq(
        '#', repeat1(operatorChars)
      )
    ),

    prefix_operator: $ => token(
      choice(
        seq('!', repeat(operatorChars)),
        seq(
          choice('?', '~'),
          repeat1(operatorChars)
        )
      )
    ),

    shift_operator: $ => token(
      seq("**", repeat(operatorChars))
    ),

    mult_operator: $ => token(
      seq(
        choice("*", "/", "%"),
        repeat(operatorChars)
      )
    ),

    // TODO check precedence of ++ for list concatenation
    add_operator: $ => token(
      seq(
        choice('+', '-'),
        repeat(operatorChars)
      )
    ),

    concat_operator: $ => token(
      seq(
        choice('@', '^'),
        repeat(operatorChars)
      )
    ),

    equal_operator: $ => token(
      choice(
        seq(
          choice("=", "<", ">", "|", "&", "$"),
          repeat(operatorChars)
        ),
        "!="
      )
    ),
  }
});
