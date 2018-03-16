#include <stdio.h>
#include <string.h>

#include <caml/mlvalues.h>
#include <caml/memory.h>
#include <caml/alloc.h>

#include <tree_sitter/runtime.h>

TSLanguage *tree_sitter_reason();

CAMLprim value caml_tree_sitter_reason(value unit) {
  CAMLparam1(unit);
  TSLanguage* l = tree_sitter_reason();   
  CAMLreturn((value) l);
}

CAMLprim value caml_ts_document_new(value unit) {
  CAMLparam1(unit);
  TSDocument *doc = ts_document_new();
  CAMLreturn((value) doc);
}

CAMLprim value caml_ts_set_language(value document, value language) {
  CAMLparam2(document, language);
  ts_document_set_language((TSDocument*) document, (TSLanguage*) language);
  CAMLreturn(Val_unit);
}

CAMLprim value caml_ts_document_set_input_string(value document, value str) {
  CAMLparam2(document, str);
  char *s = String_val(str);

  ts_document_set_input_string((TSDocument*) document, s);

  CAMLreturn(Val_unit);
}

CAMLprim value caml_ts_document_parse(value document) {
  CAMLparam1(document);

  ts_document_parse((TSDocument*) document);

  CAMLreturn(Val_unit);
}


CAMLprim value caml_ts_document_root_node(value document) {
  CAMLparam1(document);

  TSNode root_node = ts_document_root_node((TSDocument *) document);

  TSNode* node = malloc(sizeof(TSNode));
  *node = root_node;

  CAMLlocal4(astNode, typString, startPointCaml, endPointCaml);

  astNode = caml_alloc(7, 0);
  startPointCaml = caml_alloc(2, 0);
  endPointCaml = caml_alloc(2, 0);

  const char* typ = ts_node_type(root_node, (TSDocument *) document);
  typString = caml_copy_string(typ);
  uint32_t startByte = ts_node_start_byte(root_node); 
  uint32_t endByte = ts_node_end_byte(root_node);

  TSPoint startPoint = ts_node_start_point(root_node);
  TSPoint endPoint = ts_node_end_point(root_node);

  Store_field(startPointCaml, 0, Val_int(startPoint.row));
  Store_field(startPointCaml, 1, Val_int(startPoint.column));
  Store_field(endPointCaml, 0, Val_int(endPoint.row));
  Store_field(endPointCaml, 1, Val_int(endPoint.column));


  Store_field(astNode, 0, (value) node);
  Store_field(astNode, 1, document);
  Store_field(astNode, 2, typString);
  Store_field(astNode, 3, Val_int(startByte)); 
  Store_field(astNode, 4, Val_int(endByte));
  Store_field(astNode, 5, startPointCaml);
  Store_field(astNode, 6, endPointCaml);

  CAMLreturn(astNode);
}


CAMLprim value caml_ts_node_string(value node, value document) {
  CAMLparam2(node, document);
  CAMLlocal1(mls);

  TSNode* n = (TSNode*) node;
  char *s = ts_node_string(*n, (TSDocument*) document);

  mls = caml_copy_string(s);

  CAMLreturn(mls);
  free(s);
}

CAMLprim value caml_ts_document_free(value document) {
  CAMLparam1(document);
  ts_document_free((TSDocument *) document);
  CAMLreturn(Val_unit);
}

CAMLprim value caml_ts_node_child_count(value ts_node) {
  CAMLparam1(ts_node);
  
  TSNode* node = (TSNode*) ts_node;
  uint32_t count = ts_node_child_count(*node);

  CAMLreturn(Val_int(count));
}

CAMLprim value caml_ts_node_named_child_count(value ts_node) {
  CAMLparam1(ts_node);
  
  TSNode* node = (TSNode*) ts_node;
  uint32_t count = ts_node_named_child_count(*node);

  CAMLreturn(Val_int(count));
}

CAMLprim value caml_ts_node_child_index(value ts_node) {
  CAMLparam1(ts_node);
  
  TSNode* node = (TSNode*) ts_node;
  uint32_t count = ts_node_child_index(*node);

  CAMLreturn(Val_int(count));
}

CAMLprim value caml_free_ts_node(value ts_node_ptr) {
  CAMLparam1(ts_node_ptr);

  TSNode* ptr = (TSNode*) ts_node_ptr;
  free(ptr);

  CAMLreturn(Val_unit);
}

CAMLprim value caml_ts_node_eq(value n1, value n2) {
  CAMLparam2(n1, n2);

  TSNode *node1 = (TSNode*) n1;
  TSNode *node2 = (TSNode*) n2;

  int eq = ts_node_eq(*node1, *node2);

  CAMLreturn(Val_bool(eq));
}

CAMLprim value caml_ts_node_is_named(value n) {
  CAMLparam1(n);

  TSNode *node = (TSNode*) n;

  int isNamed = ts_node_is_named(*node);

  CAMLreturn(Val_bool(isNamed));
}

CAMLprim value caml_ts_node_is_missing(value n) {
  CAMLparam1(n);

  TSNode *node = (TSNode*) n;

  int isMissing = ts_node_is_missing(*node);

  CAMLreturn(Val_bool(isMissing));
}

CAMLprim value caml_ts_node_has_changes(value n) {
  CAMLparam1(n);

  TSNode *node = (TSNode*) n;

  int hasChanges = ts_node_has_changes(*node);

  CAMLreturn(Val_bool(hasChanges));
}

CAMLprim value caml_ts_node_has_error(value n) {
  CAMLparam1(n);

  TSNode *node = (TSNode*) n;

  int hasError = ts_node_has_error(*node);

  CAMLreturn(Val_bool(hasError));
}

CAMLprim value caml_ts_node_parent(value n, value document) {
  CAMLparam2(n, document);

  TSNode *node = (TSNode*) n;

  TSNode parent = ts_node_parent(*node);

  TSNode* proxy = malloc(sizeof(TSNode));
  *proxy = parent;

  CAMLlocal4(astNode, typString, startPointCaml, endPointCaml);

  astNode = caml_alloc(7,0);
  startPointCaml = caml_alloc(2, 0);
  endPointCaml = caml_alloc(2, 0);

  const char* typ = ts_node_type(parent, (TSDocument*) document);
  typString = caml_copy_string(typ);
  uint32_t startByte = ts_node_start_byte(parent); 
  uint32_t endByte = ts_node_end_byte(parent);

  TSPoint startPoint = ts_node_start_point(parent);
  TSPoint endPoint = ts_node_start_point(parent);

  Store_field(startPointCaml, 0, Val_int(startPoint.row));
  Store_field(startPointCaml, 1, Val_int(startPoint.column));
  Store_field(endPointCaml, 0, Val_int(endPoint.row));
  Store_field(endPointCaml, 1, Val_int(endPoint.column));

  Store_field(astNode, 0, (value) proxy);
  Store_field(astNode, 1, document);
  Store_field(astNode, 2, typString);
  Store_field(astNode, 3, Val_int(startByte)); 
  Store_field(astNode, 4, Val_int(endByte));
  Store_field(astNode, 5, startPointCaml);
  Store_field(astNode, 6, endPointCaml);

  CAMLreturn(astNode);
}

CAMLprim value caml_ts_node_child(value n, value document, value i) {
  CAMLparam3(n, document, i);

  TSNode *node = (TSNode*) n;

  TSNode child = ts_node_child(*node, Int_val(i));

  TSNode* proxy = malloc(sizeof(TSNode));
  *proxy = child;

  CAMLlocal4(astNode, typString, startPointCaml, endPointCaml);

  astNode = caml_alloc(7,0);
  startPointCaml = caml_alloc(2,0);
  endPointCaml = caml_alloc(2,0);

  const char* typ = ts_node_type(child, (TSDocument*) document);
  typString = caml_copy_string(typ);
  uint32_t startByte = ts_node_start_byte(child); 
  uint32_t endByte = ts_node_end_byte(child);

  TSPoint startPoint = ts_node_start_point(*proxy);
  TSPoint endPoint = ts_node_end_point(child);

  Store_field(startPointCaml, 0, Val_int(startPoint.row));
  Store_field(startPointCaml, 1, Val_int(startPoint.column));
  Store_field(endPointCaml, 0, Val_int(endPoint.row));
  Store_field(endPointCaml, 1, Val_int(endPoint.column));

  Store_field(astNode, 0, (value) proxy);
  Store_field(astNode, 1, document);
  Store_field(astNode, 2, typString);
  Store_field(astNode, 3, Val_int(startByte)); 
  Store_field(astNode, 4, Val_int(endByte));
  Store_field(astNode, 5, startPointCaml);
  Store_field(astNode, 6, endPointCaml);

  CAMLreturn(astNode);
}

CAMLprim value caml_ts_node_named_child(value n, value document, value i) {
  CAMLparam3(n, document, i);

  TSNode *node = (TSNode*) n;

  TSNode child = ts_node_named_child(*node, Int_val(i));
  TSPoint ending = ts_node_end_point(child);

  TSNode* proxy = malloc(sizeof(TSNode));
  *proxy = child;

  CAMLlocal4(astNode, typString, startPointCaml, endPointCaml);

  astNode = caml_alloc(7,0);
  startPointCaml = caml_alloc(2, 0);
  endPointCaml = caml_alloc(2, 0);

  const char* typ = ts_node_type(child, (TSDocument *) document);
  typString = caml_copy_string(typ);
  uint32_t startByte = ts_node_start_byte(child); 
  uint32_t endByte = ts_node_end_byte(child);

  TSPoint startPoint = ts_node_start_point(child);
  TSPoint endPoint = ts_node_end_point(child);

  Store_field(startPointCaml, 0, Val_int(startPoint.row));
  Store_field(startPointCaml, 1, Val_int(startPoint.column));
  Store_field(endPointCaml, 0, Val_int(endPoint.row));
  Store_field(endPointCaml, 1, Val_int(endPoint.column));

  Store_field(astNode, 0, (value) proxy);
  Store_field(astNode, 1, document);
  Store_field(astNode, 2, typString);
  Store_field(astNode, 3, Val_int(startByte)); 
  Store_field(astNode, 4, Val_int(endByte));
  Store_field(astNode, 5, startPointCaml);
  Store_field(astNode, 6, endPointCaml);

  CAMLreturn(astNode);
}

CAMLprim value caml_ts_node_next_sibling(value n, value document) {
  CAMLparam2(n, document);

  TSNode *node = (TSNode*) n;

  TSNode result = ts_node_next_sibling(*node);

  TSNode* proxy = malloc(sizeof(TSNode));
  *proxy = result;

  CAMLlocal4(astNode, typString, startPointCaml, endPointCaml);

  astNode = caml_alloc(7,0);
  startPointCaml = caml_alloc(2, 0);
  endPointCaml = caml_alloc(2, 0);

  const char* typ = ts_node_type(result, (TSDocument*) document);
  typString = caml_copy_string(typ);
  uint32_t startByte = ts_node_start_byte(result); 
  uint32_t endByte = ts_node_end_byte(result);

  TSPoint startPoint = ts_node_start_point(result);
  TSPoint endPoint = ts_node_end_point(result);

  Store_field(startPointCaml, 0, Val_int(startPoint.row));
  Store_field(startPointCaml, 1, Val_int(startPoint.column));
  Store_field(endPointCaml, 0, Val_int(endPoint.row));
  Store_field(endPointCaml, 1, Val_int(endPoint.column));

  Store_field(astNode, 0, (value) proxy);
  Store_field(astNode, 1, document);
  Store_field(astNode, 2, typString);
  Store_field(astNode, 3, Val_int(startByte)); 
  Store_field(astNode, 4, Val_int(endByte));
  Store_field(astNode, 5, startPointCaml);
  Store_field(astNode, 6, endPointCaml);

  CAMLreturn(astNode);
}

CAMLprim value caml_ts_node_next_named_sibling(value n, value document) {
  CAMLparam2(n, document);

  TSNode *node = (TSNode*) n;

  TSNode result = ts_node_next_named_sibling(*node);

  TSNode* proxy = malloc(sizeof(TSNode));
  *proxy = result;

  CAMLlocal4(astNode, typString, startPointCaml, endPointCaml);

  astNode = caml_alloc(7,0);
  startPointCaml = caml_alloc(2, 0);
  endPointCaml = caml_alloc(2, 0);

  const char* typ = ts_node_type(result, (TSDocument *) document);
  typString = caml_copy_string(typ);
  uint32_t startByte = ts_node_start_byte(result); 
  uint32_t endByte = ts_node_end_byte(result);

  TSPoint startPoint = ts_node_start_point(result);
  TSPoint endPoint = ts_node_end_point(result);

  Store_field(startPointCaml, 0, Val_int(startPoint.row));
  Store_field(startPointCaml, 1, Val_int(startPoint.column));
  Store_field(endPointCaml, 0, Val_int(endPoint.row));
  Store_field(endPointCaml, 1, Val_int(endPoint.column));

  Store_field(astNode, 0, (value) proxy);
  Store_field(astNode, 1, document);
  Store_field(astNode, 2, typString);
  Store_field(astNode, 3, Val_int(startByte)); 
  Store_field(astNode, 4, Val_int(endByte));
  Store_field(astNode, 5, startPointCaml);
  Store_field(astNode, 6, endPointCaml);

  CAMLreturn(astNode);
}

CAMLprim value caml_ts_node_prev_named_sibling(value n, value document) {
  CAMLparam2(n, document);

  TSNode *node = (TSNode*) n;

  TSNode result = ts_node_prev_named_sibling(*node);

  TSNode* proxy = malloc(sizeof(TSNode));
  *proxy = result;

  CAMLlocal4(astNode, typString, startPointCaml, endPointCaml);

  astNode = caml_alloc(7,0);
  startPointCaml = caml_alloc(2, 0);
  endPointCaml = caml_alloc(2, 0);

  const char* typ = ts_node_type(result, (TSDocument *)document);
  typString = caml_copy_string(typ);
  uint32_t startByte = ts_node_start_byte(result); 
  uint32_t endByte = ts_node_end_byte(result);

  TSPoint startPoint = ts_node_start_point(result);
  TSPoint endPoint = ts_node_end_point(result);

  Store_field(startPointCaml, 0, Val_int(startPoint.row));
  Store_field(startPointCaml, 1, Val_int(startPoint.column));
  Store_field(endPointCaml, 0, Val_int(endPoint.row));
  Store_field(endPointCaml, 1, Val_int(endPoint.column));

  Store_field(astNode, 0, (value) proxy);
  Store_field(astNode, 1, document);
  Store_field(astNode, 2, typString);
  Store_field(astNode, 3, Val_int(startByte)); 
  Store_field(astNode, 4, Val_int(endByte));
  Store_field(astNode, 5, startPointCaml);
  Store_field(astNode, 6, endPointCaml);

  CAMLreturn(astNode);
}

CAMLprim value caml_ts_node_prev_sibling(value n, value document) {
  CAMLparam2(n, document);

  TSNode *node = (TSNode*) n;

  TSNode result = ts_node_prev_sibling(*node);

  TSNode* proxy = malloc(sizeof(TSNode));
  *proxy = result;

  CAMLlocal4(astNode, typString, startPointCaml, endPointCaml);

  astNode = caml_alloc(7,0);
  startPointCaml = caml_alloc(2, 0);
  endPointCaml = caml_alloc(2, 0);

  const char* typ = ts_node_type(result, (TSDocument *)document);
  typString = caml_copy_string(typ);
  uint32_t startByte = ts_node_start_byte(result); 
  uint32_t endByte = ts_node_end_byte(result);

  TSPoint startPoint = ts_node_start_point(result);
  TSPoint endPoint = ts_node_end_point(result);

  Store_field(startPointCaml, 0, Val_int(startPoint.row));
  Store_field(startPointCaml, 1, Val_int(startPoint.column));
  Store_field(endPointCaml, 0, Val_int(endPoint.row));
  Store_field(endPointCaml, 1, Val_int(endPoint.column));

  Store_field(astNode, 0, (value) proxy);
  Store_field(astNode, 1, document);
  Store_field(astNode, 2, typString);
  Store_field(astNode, 3, Val_int(startByte)); 
  Store_field(astNode, 4, Val_int(endByte));
  Store_field(astNode, 5, startPointCaml);
  Store_field(astNode, 6, endPointCaml);

  CAMLreturn(astNode);
}
