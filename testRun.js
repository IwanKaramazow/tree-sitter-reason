const { Document } = require("tree-sitter");

const document = new Document();

document.setLanguage(require("./index.js"));

const src = `
#!/usr/bin/env reason

open React

let y = 2

let x = 1

let z = {
  let a = 1
  a
}

let z = 
  let a = 1
  a

let f =
  fun
  | a when 1 => 1
  

`;
document.setInputString(src);
document.parse();

console.log(document.rootNode.toString());
