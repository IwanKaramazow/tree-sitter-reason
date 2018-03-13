#include <tree_sitter/compiler.h>

extern "C" {
  #include <caml/mlvalues.h>
  #include <caml/memory.h>
  #include <caml/alloc.h>
  CAMLprim value caml_ts_compile_grammar(value input) {
    CAMLparam1(input);

    CAMLlocal1(result);

    const char *c_input = String_val(input);

    TSCompileResult c_result = ts_compile_grammar(c_input);

    result = caml_alloc(3, 0);

    Store_field(result, 0, caml_copy_string(c_result.code));
    Store_field(result, 1, caml_copy_string(c_result.error_message));
    Store_field(result, 2, Int_val(c_result.error_type));

    CAMLreturn(result);
  }
}
