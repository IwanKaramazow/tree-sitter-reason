module R = TS_Runtime;

module Node = TS_Node;

type t;

let newDoc: unit => t;

let setLanguage: (t, R.ts_language) => unit;

let setInputString: (t, string) => unit;

let parse: t => unit;

let rootNode: t => Node.t;

let tree_sitter_reason: unit => R.ts_language;

let free: t => unit;
