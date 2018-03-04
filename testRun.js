const { Document } = require("tree-sitter");

const document = new Document();

document.setLanguage(require("./index.js"));

// let x = a **! b
const src = `
  let z = <div click=((a) => 123)> (apply(123)) </div>

  let y = <div pobrecito="123" />

  let x = <> </>

  let z = </>


`;
document.setInputString(src);
document.parse();

console.log(document.rootNode.toString());
