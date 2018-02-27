const { Document } = require("tree-sitter");

const document = new Document();

document.setLanguage(require("./index.js"));

const src = `
  type x = (string, string) as x;
  
  type l = int;
    

`;
document.setInputString(src);
document.parse();

console.log(document.rootNode.toString());
