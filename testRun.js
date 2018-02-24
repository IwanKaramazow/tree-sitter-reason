const { Document } = require("tree-sitter");

const document = new Document();

document.setLanguage(require("./index.js"));

const src = `
#!/usr/bin/env reason

open React;

let x = 2.23e-10G;
`;
document.setInputString(src);
document.parse();

console.log(document.rootNode.toString());
