const { Document } = require("tree-sitter");

const document = new Document();

document.setLanguage(require("./index.js"));

const src = `
let x = (~a as y :int=?) => a


`;
document.setInputString(src);
document.parse();

console.log(document.rootNode.toString());
