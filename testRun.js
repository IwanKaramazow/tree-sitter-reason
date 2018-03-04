const { Document } = require("tree-sitter");

const document = new Document();

document.setLanguage(require("./index.js"));

// let x = a **! b
const src = `
  for (i in 0 to 100) {
    log("test")
  }
`;
document.setInputString(src);
document.parse();

console.log(document.rootNode.toString());
