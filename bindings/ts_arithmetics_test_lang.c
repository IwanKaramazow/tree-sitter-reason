#include <caml/mlvalues.h>
#include <caml/memory.h>

#include <tree_sitter/runtime.h>

TSLanguage *tree_sitter_arithmetic();

CAMLprim value caml_ts_arithmetic_test_lang(value unit) {
  CAMLparam1(unit);
  TSLanguage* l = tree_sitter_arithmetic();   
  CAMLreturn((value) l);
}
