#include <stdio.h>

#include <caml/mlvalues.h>
#include <caml/memory.h>
#include <caml/alloc.h>

#include <tree_sitter/runtime.h>

TSLanguage *tree_sitter_reason();

typedef struct {
  TSNode node;
} AstNode;

CAMLprim value caml_tree_sitter_reason(value unit) {
  CAMLparam1(unit);
  TSLanguage* l = tree_sitter_reason();   
  CAMLreturn(l);
}

CAMLprim value caml_ts_document_new(value unit) {
  CAMLparam1(unit);
  TSDocument *doc = ts_document_new();
  CAMLreturn(doc);
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

  TSNode root_node = ts_document_root_node(document);

  // store on heap, otherwise segfaults
  // because root_node sits in stack memory
  // stack memory gets reassigned
  TSNode* node = malloc(sizeof(TSNode));
  node->data = root_node.data;
  memcpy(node->offset, root_node.offset, 2);

  CAMLlocal2(astNode, typString);

  astNode = caml_alloc(5, 0);

  const char* typ = ts_node_type(root_node, document);
  typString = caml_copy_string(typ);
  uint32_t startByte = ts_node_start_byte(root_node); 
  uint32_t endByte = ts_node_end_byte(root_node);

  Store_field(astNode, 0, node);
  Store_field(astNode, 1, document);
  Store_field(astNode, 2, typString);
  Store_field(astNode, 3, Val_int(startByte)); 
  Store_field(astNode, 4, Val_int(endByte));

  CAMLreturn(astNode);
}


CAMLprim value caml_ts_node_string(value node, value document) {
  CAMLparam2(node, document);
  CAMLlocal1(mls);

  TSNode* n = (TSNode*) node;
  char *s = ts_node_string(*n, document);

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
  proxy->data = parent.data;
  memcpy(proxy->offset, parent.offset, 2);

  CAMLlocal2(astNode, typString);

  astNode = caml_alloc(5, 0);

  const char* typ = ts_node_type(parent, document);
  typString = caml_copy_string(typ);
  uint32_t startByte = ts_node_start_byte(parent); 
  uint32_t endByte = ts_node_end_byte(parent);

  Store_field(astNode, 0, proxy);
  Store_field(astNode, 1, document);
  Store_field(astNode, 2, typString);
  Store_field(astNode, 3, Val_int(startByte)); 
  Store_field(astNode, 4, Val_int(endByte));

  CAMLreturn(astNode);
}

CAMLprim value caml_ts_node_child(value n, value document, value i) {
  CAMLparam3(n, document, i);

  TSNode *node = (TSNode*) n;

  TSNode child = ts_node_child(*node, i);

  TSNode* proxy = malloc(sizeof(TSNode));
  proxy->data = child.data;
  memcpy(proxy->offset, child.offset, 2);

  CAMLlocal2(astNode, typString);

  astNode = caml_alloc(5, 0);

  const char* typ = ts_node_type(child, document);
  typString = caml_copy_string(typ);
  uint32_t startByte = ts_node_start_byte(child); 
  uint32_t endByte = ts_node_end_byte(child);

  Store_field(astNode, 0, proxy);
  Store_field(astNode, 1, document);
  Store_field(astNode, 2, typString);
  Store_field(astNode, 3, Val_int(startByte)); 
  Store_field(astNode, 4, Val_int(endByte));

  CAMLreturn(astNode);
}

CAMLprim value caml_ts_node_named_child(value n, value document, value i) {
  CAMLparam3(n, document, i);

  TSNode *node = (TSNode*) n;

  TSNode child = ts_node_named_child(*node, i);

  TSNode* proxy = malloc(sizeof(TSNode));
  proxy->data = child.data;
  memcpy(proxy->offset, child.offset, 2);

  CAMLlocal2(astNode, typString);

  astNode = caml_alloc(5, 0);

  const char* typ = ts_node_type(child, document);
  typString = caml_copy_string(typ);
  uint32_t startByte = ts_node_start_byte(child); 
  uint32_t endByte = ts_node_end_byte(child);

  Store_field(astNode, 0, proxy);
  Store_field(astNode, 1, document);
  Store_field(astNode, 2, typString);
  Store_field(astNode, 3, Val_int(startByte)); 
  Store_field(astNode, 4, Val_int(endByte));

  CAMLreturn(astNode);
}

CAMLprim value caml_ts_node_next_sibling(value n, value document) {
  CAMLparam2(n, document);

  TSNode *node = (TSNode*) n;

  TSNode result = ts_node_next_sibling(*node);

  TSNode* proxy = malloc(sizeof(TSNode));
  proxy->data = result.data;
  memcpy(proxy->offset, result.offset, 2);

  CAMLlocal2(astNode, typString);

  astNode = caml_alloc(5, 0);

  const char* typ = ts_node_type(result, document);
  typString = caml_copy_string(typ);
  uint32_t startByte = ts_node_start_byte(result); 
  uint32_t endByte = ts_node_end_byte(result);

  Store_field(astNode, 0, proxy);
  Store_field(astNode, 1, document);
  Store_field(astNode, 2, typString);
  Store_field(astNode, 3, Val_int(startByte)); 
  Store_field(astNode, 4, Val_int(endByte));

  CAMLreturn(astNode);
}

CAMLprim value caml_ts_node_next_named_sibling(value n, value document) {
  CAMLparam2(n, document);

  TSNode *node = (TSNode*) n;

  TSNode result = ts_node_next_named_sibling(*node);

  TSNode* proxy = malloc(sizeof(TSNode));
  proxy->data = result.data;
  memcpy(proxy->offset, result.offset, 2);

  CAMLlocal2(astNode, typString);

  astNode = caml_alloc(5, 0);

  const char* typ = ts_node_type(result, document);
  typString = caml_copy_string(typ);
  uint32_t startByte = ts_node_start_byte(result); 
  uint32_t endByte = ts_node_end_byte(result);

  Store_field(astNode, 0, proxy);
  Store_field(astNode, 1, document);
  Store_field(astNode, 2, typString);
  Store_field(astNode, 3, Val_int(startByte)); 
  Store_field(astNode, 4, Val_int(endByte));

  CAMLreturn(astNode);
}

CAMLprim value caml_ts_node_prev_named_sibling(value n, value document) {
  CAMLparam2(n, document);

  TSNode *node = (TSNode*) n;

  TSNode result = ts_node_prev_named_sibling(*node);

  TSNode* proxy = malloc(sizeof(TSNode));
  proxy->data = result.data;
  memcpy(proxy->offset, result.offset, 2);

  CAMLlocal2(astNode, typString);

  astNode = caml_alloc(5, 0);

  const char* typ = ts_node_type(result, document);
  typString = caml_copy_string(typ);
  uint32_t startByte = ts_node_start_byte(result); 
  uint32_t endByte = ts_node_end_byte(result);

  Store_field(astNode, 0, proxy);
  Store_field(astNode, 1, document);
  Store_field(astNode, 2, typString);
  Store_field(astNode, 3, Val_int(startByte)); 
  Store_field(astNode, 4, Val_int(endByte));

  CAMLreturn(astNode);
}

CAMLprim value caml_ts_node_prev_sibling(value n, value document) {
  CAMLparam2(n, document);

  TSNode *node = (TSNode*) n;

  TSNode result = ts_node_prev_sibling(*node);

  TSNode* proxy = malloc(sizeof(TSNode));
  proxy->data = result.data;
  memcpy(proxy->offset, result.offset, 2);

  CAMLlocal2(astNode, typString);

  astNode = caml_alloc(5, 0);

  const char* typ = ts_node_type(result, document);
  typString = caml_copy_string(typ);
  uint32_t startByte = ts_node_start_byte(result); 
  uint32_t endByte = ts_node_end_byte(result);

  Store_field(astNode, 0, proxy);
  Store_field(astNode, 1, document);
  Store_field(astNode, 2, typString);
  Store_field(astNode, 3, Val_int(startByte)); 
  Store_field(astNode, 4, Val_int(endByte));

  CAMLreturn(astNode);
}
