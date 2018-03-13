module R = TS_Runtime;

module Doc = TreeSitter.Document;

module Node = TreeSitter.Node;

external tree_sitter_arithmetic : unit => R.ts_language =
  "caml_ts_arithmetic_test_lang";

let doc = {
  let doc = Doc.newDoc();
  Doc.setLanguage(doc, tree_sitter_arithmetic());
  Doc.setInputString(doc, "a + b * 5");
  Doc.parse(doc);
  doc;
};

let root = {
  let root = Doc.rootNode(doc);
  assert (root.type_ == "expression");
  assert (Node.namedChildCount(root) == 1);
  root;
};

let sumNode = {
  let sumNode = Node.namedChild(root, 0);
  assert (sumNode.type_ == "sum");
  assert (Node.namedChildCount(sumNode) == 2);
  assert (Node.childCount(sumNode) == 3);
  sumNode;
};

let () = {
  let sum = Node.child(sumNode, 1);
  assert (sum.type_ == "+");
  assert (Node.childCount(sum) == 0);
};

let productNode = {
  let productNode = Node.child(Node.namedChild(sumNode, 1), 0);
  assert (productNode.type_ == "product");
  assert (Node.namedChildCount(productNode) == 2);
  assert (Node.childCount(productNode) == 3);
  productNode;
};

let () = {
  let mult = Node.child(productNode, 1);
  assert (mult.type_ == "*");
  assert (Node.childCount(mult) == 0);
};

Doc.free(doc);

let run = () => print_endline("tests passed");
