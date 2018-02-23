const { Document } = require("tree-sitter");

const document = new Document();

document.setLanguage(require("./index.js"));
document.setInputString("xyz");
document.parse();

console.log(document.rootNode.toString());
