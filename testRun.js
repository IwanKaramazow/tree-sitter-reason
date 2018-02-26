const { Document } = require("tree-sitter");

const document = new Document();

document.setLanguage(require("./index.js"));

const src = `
  type x = .. 
    and y = ..

`;
document.setInputString(src);
document.parse();

console.log(document.rootNode.toString());
