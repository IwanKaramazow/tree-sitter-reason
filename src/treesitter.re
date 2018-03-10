type ts_document;

type ts_language;

type ts_point;

type ts_node;

module AstNode = {
  type t = {
    node: ts_node,
    document: ts_document,
    type_: string,
    startByte: int,
    endByte: int
  };
  external ts_node_string : (ts_node, ts_document) => string =
    "caml_ts_node_string";
  external ts_node_child_count : ts_node => int = "caml_ts_node_child_count";
  external ts_node_named_child_count : ts_node => int =
    "caml_ts_node_named_child_count";
  external ts_node_child_index : ts_node => int = "caml_ts_node_child_index";
  external free_ts_node : ts_node => unit = "caml_free_ts_node";
  let free = ({node}) => free_ts_node(node);
  let toString = ({node, document}) => ts_node_string(node, document);
  let getChildCount = ({node}) => ts_node_child_count(node);
  let getNamedChildCount = ({node}) => ts_node_named_child_count(node);
  external ts_node_eq : (ts_node, ts_node) => bool = "caml_ts_node_eq";
  let equals = (n1, n2) => ts_node_eq(n1.node, n2.node);
  external ts_node_is_named : ts_node => bool = "caml_ts_node_is_named";
  let isNamed = ({node}) => ts_node_is_named(node);
  external ts_node_is_missing : ts_node => bool = "caml_ts_node_is_missing";
  let isMissing = ({node}) => ts_node_is_missing(node);
  external ts_node_has_changes : ts_node => bool = "caml_ts_node_has_changes";
  let hasChanges = ({node}) => ts_node_has_changes(node);
  external ts_node_has_error : ts_node => bool = "caml_ts_node_has_error";
  let hasError = ({node}) => ts_node_has_error(node);
  external ts_node_parent : (ts_node, ts_document) => t =
    "caml_ts_node_parent";
  let parent = ({node, document}) => {
    let parent = ts_node_parent(node, document);
    Gc.finalise(free, parent);
    parent;
  };
  external ts_node_child : (ts_node, ts_document, int) => t =
    "caml_ts_node_child";
  let child = ({node, document}, i) => {
    let child = ts_node_child(node, document, i);
    Gc.finalise(free, child);
    child;
  };
  external ts_node_named_child : (ts_node, ts_document, int) => t =
    "caml_ts_node_named_child";
  let namedChild = ({node, document}, i) => {
    let namedChild = ts_node_named_child(node, document, i);
    Gc.finalise(free, namedChild);
    namedChild;
  };
  external ts_node_next_sibling : (ts_node, ts_document) => t =
    "caml_ts_node_next_sibling";
  let nextSibling = ({node, document}) => {
    let nextSibling = ts_node_next_sibling(node, document);
    Gc.finalise(free, nextSibling);
    nextSibling;
  };
  external ts_node_next_named_sibling : (ts_node, ts_document) => t =
    "caml_ts_node_next_named_sibling";
  let nextNamedSibling = ({node, document}) => {
    let nextNamedSibling = ts_node_next_named_sibling(node, document);
    Gc.finalise(free, nextNamedSibling);
    nextNamedSibling;
  };
  external ts_node_prev_sibling : (ts_node, ts_document) => t =
    "caml_ts_node_prev_sibling";
  let prevSibling = ({node, document}) => {
    let prevSibling = ts_node_prev_sibling(node, document);
    Gc.finalise(free, prevSibling);
    prevSibling;
  };
  external ts_node_prev_named_sibling : (ts_node, ts_document) => t =
    "caml_ts_node_prev_named_sibling";
  let prevNamedSibling = ({node, document}) => {
    let prevNamedSibling = ts_node_prev_named_sibling(node, document);
    Gc.finalise(free, prevNamedSibling);
    prevNamedSibling;
  };
};

external ts_document_new : unit => ts_document = "caml_ts_document_new";

external ts_set_language : (ts_document, ts_language) => unit =
  "caml_ts_set_language";

external ts_document_set_input_string : (ts_document, string) => unit =
  "caml_ts_document_set_input_string";

external ts_document_parse : ts_document => unit = "caml_ts_document_parse";

external ts_document_root_node : ts_document => AstNode.t =
  "caml_ts_document_root_node";

let getRootNode = document => {
  let rootNode = ts_document_root_node(document);
  Gc.finalise(AstNode.free, rootNode);
  rootNode;
};

external tree_sitter_reason : unit => ts_language = "caml_tree_sitter_reason";

external ts_document_free : ts_document => unit = "caml_ts_document_free";
