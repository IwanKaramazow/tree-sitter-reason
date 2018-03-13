/* type error = */
  /* | None */
  /* | InvalidGrammar */
  /* | InvalidRegex */
  /* | UndefinedSymbol */
  /* | InvalidExtraToken */
  /* | InvalidExternalToken */
  /* | LexConflict */
  /* | ParseConflict */
  /* | EpsilonRule */
  /* | InvalidTokenContents */
  /* | InvalidRuleName; */

/* type result = { */
  /* code: string, */
  /* errorMessage: string, */
  /* error */
/* }; */

/* external ts_compile_grammar : string => result = "caml_ts_compile_grammar"; */

/* let compilerGrammar = input => ts_compile_grammar(input); */
