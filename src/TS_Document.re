module R = TS_Runtime;

module Node = TS_Node;

type t = R.ts_document;

external newDoc : unit => t = "caml_ts_document_new";

external setLanguage : (t, R.ts_language) => unit = "caml_ts_set_language";

external setInputString : (t, string) => unit =
  "caml_ts_document_set_input_string";

external parse : t => unit = "caml_ts_document_parse";

external rootNode : t => Node.t = "caml_ts_document_root_node";

let rootNode = document => {
  let rootNode = rootNode(document);
  Gc.finalise(Node.free, rootNode);
  rootNode;
};

external tree_sitter_reason : unit => R.ts_language =
  "caml_tree_sitter_reason";

external free : t => unit = "caml_ts_document_free";
