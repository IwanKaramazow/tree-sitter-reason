module.exports = grammar({
  name: "reason",

  // extras: $ => [$.comment, /\s/],

  rules: {
    program: $ => choice(
      $.upper_ident,
      $.lower_ident,
    ),
    // hash_bang_line: $ => /#!.*/,

    // structure: $ => seq(
      // optional($.hash_bang_line),
      // repeat($.structure_item)
    // ),

    // structure_item: $ => choice(
      // $._str_open
    // ),

    // _str_open: $ => seq(
      // 'open',
      // $._ident 
    // ),

    // _ident: $ => choice(
      // $._upper_ident,
      // $._lower_ident
    // ),

    // _module_ident: $ => choice(
      // $._upper_ident,
      // $._upper_ident, '.', $._module_ident
    // ),

    upper_ident: $ => /[A-Za-z]*/,
    lower_ident: $ => /[a-z]/,


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
