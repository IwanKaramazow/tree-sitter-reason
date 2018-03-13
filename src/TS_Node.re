module R = TS_Runtime;

module Point = TS_Point;

type t = {
  node: R.ts_node,
  document: R.ts_document,
  type_: string,
  startByte: int,
  endByte: int,
  startPoint: Point.t,
  endPoint: Point.t
};

external ts_node_string : (R.ts_node, R.ts_document) => string =
  "caml_ts_node_string";

external ts_node_child_count : R.ts_node => int = "caml_ts_node_child_count";

external ts_node_named_child_count : R.ts_node => int =
  "caml_ts_node_named_child_count";

external ts_node_child_index : R.ts_node => int = "caml_ts_node_child_index";

let childIndex = ({node}) => ts_node_child_index(node);

external free_ts_node : R.ts_node => unit = "caml_free_ts_node";

let free = ({node}) => free_ts_node(node);

let toString = ({node, document}) => ts_node_string(node, document);

let childCount = ({node}) => ts_node_child_count(node);

let namedChildCount = ({node}) => ts_node_named_child_count(node);

external ts_node_eq : (R.ts_node, R.ts_node) => bool = "caml_ts_node_eq";

let equals = (n1, n2) => ts_node_eq(n1.node, n2.node);

external ts_node_is_named : R.ts_node => bool = "caml_ts_node_is_named";

let isNamed = ({node}) => ts_node_is_named(node);

external ts_node_is_missing : R.ts_node => bool = "caml_ts_node_is_missing";

let isMissing = ({node}) => ts_node_is_missing(node);

external ts_node_has_changes : R.ts_node => bool = "caml_ts_node_has_changes";

let hasChanges = ({node}) => ts_node_has_changes(node);

external ts_node_has_error : R.ts_node => bool = "caml_ts_node_has_error";

let hasError = ({node}) => ts_node_has_error(node);

external ts_node_parent : (R.ts_node, R.ts_document) => t =
  "caml_ts_node_parent";

let parent = ({node, document}) => {
  let parent = ts_node_parent(node, document);
  Gc.finalise(free, parent);
  parent;
};

external ts_node_child : (R.ts_node, R.ts_document, int) => t =
  "caml_ts_node_child";

let child = ({node, document}, i) => {
  let child = ts_node_child(node, document, i);
  Gc.finalise(free, child);
  child;
};

external ts_node_named_child : (R.ts_node, R.ts_document, int) => t =
  "caml_ts_node_named_child";

let namedChild = ({node, document}, i) => {
  let namedChild = ts_node_named_child(node, document, i);
  Gc.finalise(free, namedChild);
  namedChild;
};

external ts_node_next_sibling : (R.ts_node, R.ts_document) => t =
  "caml_ts_node_next_sibling";

let nextSibling = ({node, document}) => {
  let nextSibling = ts_node_next_sibling(node, document);
  Gc.finalise(free, nextSibling);
  nextSibling;
};

external ts_node_next_named_sibling : (R.ts_node, R.ts_document) => t =
  "caml_ts_node_next_named_sibling";

let nextNamedSibling = ({node, document}) => {
  let nextNamedSibling = ts_node_next_named_sibling(node, document);
  Gc.finalise(free, nextNamedSibling);
  nextNamedSibling;
};

external ts_node_prev_sibling : (R.ts_node, R.ts_document) => t =
  "caml_ts_node_prev_sibling";

let prevSibling = ({node, document}) => {
  let prevSibling = ts_node_prev_sibling(node, document);
  Gc.finalise(free, prevSibling);
  prevSibling;
};

external ts_node_prev_named_sibling : (R.ts_node, R.ts_document) => t =
  "caml_ts_node_prev_named_sibling";

let prevNamedSibling = ({node, document}) => {
  let prevNamedSibling = ts_node_prev_named_sibling(node, document);
  Gc.finalise(free, prevNamedSibling);
  prevNamedSibling;
};
