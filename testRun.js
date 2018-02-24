const { Document } = require("tree-sitter");

const document = new Document();

document.setLanguage(require("./index.js"));

const src = `
let f =
  fun
  | Reason.(element) => 1
  

`;
document.setInputString(src);
document.parse();

console.log(document.rootNode.toString());
