const { Document } = require("tree-sitter");

const document = new Document();

document.setLanguage(require("./index.js"));

// let x = a **! b
const src = `
let x = a != b
let y = a || b


`;
document.setInputString(src);
document.parse();

console.log(document.rootNode.toString());
