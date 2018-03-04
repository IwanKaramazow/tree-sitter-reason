const { Document } = require("tree-sitter");

const document = new Document();

document.setLanguage(require("./index.js"));

// let x = a **! b
const src = `
  let z = if (a === b) {
    log("two")
  } else if (a === 3) {
    log("three")
  } else {
    log("okokok")
  }
`;
document.setInputString(src);
document.parse();

console.log(document.rootNode.toString());
