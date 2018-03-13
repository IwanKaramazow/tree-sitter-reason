/* multiplication/division is not supported because we're aliasing  signed ints */
module Uint32 = {
  type t = int32;
};

let () = {
  let doc = TreeSitter.Document.newDoc();
  TreeSitter.Document.setLanguage(
    doc,
    TreeSitter.Document.tree_sitter_reason()
  );
  TreeSitter.Document.setInputString(doc, "log(1) let x = 1");
  TreeSitter.Document.parse(doc);
  let rootNode = TreeSitter.Document.rootNode(doc);
  /* print_endline(""); */
  open TreeSitter.Node;
  print_endline(rootNode.type_);
  print_int(rootNode.startByte);
  print_newline();
  print_int(rootNode.endByte);
  print_newline();
  print_endline(TreeSitter.Node.toString(rootNode));
  print_newline();
  print_newline();
  print_int(childCount(rootNode));
  print_newline();
  print_int(namedChildCount(rootNode));
  print_newline();
  print_endline(string_of_bool(TreeSitter.Node.equals(rootNode, rootNode)));
  print_endline(string_of_bool(rootNode.type_ == "program"));
  print_endline(rootNode.type_);
  print_endline(TreeSitter.Point.toString(rootNode.startPoint));
  print_endline(TreeSitter.Point.toString(rootNode.endPoint));
  print_newline();
  let valueBinding = TreeSitter.Node.child(rootNode, 1);
  print_endline(TreeSitter.Point.toString(valueBinding.startPoint));
  print_endline(TreeSitter.Point.toString(valueBinding.endPoint));
  TreeSitter.Document.free(doc);
};
