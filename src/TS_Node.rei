module R = TS_Runtime;

module Point = TS_Point;

type t = {
  node: R.ts_node,
  document: R.ts_document,
  type_: string,
  startByte: int,
  endByte: int,
  startPoint: Point.t,
  endPoint: Point.t
};

let free: t => unit;

let toString: t => string;

let childIndex: t => int;

let childCount: t => int;

let namedChildCount: t => int;

let equals: (t, t) => bool;

let isNamed: t => bool;

let isMissing: t => bool;

let hasChanges: t => bool;

let hasError: t => bool;

let parent: t => t;

let child: (t, int) => t;

let namedChild: (t, int) => t;

let nextSibling: t => t;

let nextNamedSibling: t => t;

let prevSibling: t => t;

let prevNamedSibling: t => t;
