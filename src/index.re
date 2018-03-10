/* multiplication/division is not supported because we're aliasing  signed ints */
module Uint32 = {
  type t = int32;
};

let () = {
  let doc = Treesitter.ts_document_new();
  Treesitter.ts_set_language(doc, Treesitter.tree_sitter_reason());
  Treesitter.ts_document_set_input_string(doc, "log(1) let x = 1");
  Treesitter.ts_document_parse(doc);
  let rootNode = Treesitter.getRootNode(doc);
  print_endline("");
  open Treesitter.AstNode;
  print_endline(rootNode.type_);
  print_int(rootNode.startByte);
  print_newline();
  print_int(rootNode.endByte);
  print_newline();
  print_endline(Treesitter.AstNode.toString(rootNode));
  print_newline();
  print_newline();
  print_int(getChildCount(rootNode));
  print_newline();
  print_newline();
  print_endline(string_of_bool(Treesitter.AstNode.equals(rootNode, rootNode)));
  print_endline(string_of_bool(rootNode.type_ == "program"));
  print_endline(rootNode.type_);
  Gc.full_major();
  /* print_endline(Treesitter.AstNode.ts_node_string(rootNode, doc)); */
  Treesitter.ts_document_free(doc);
};
