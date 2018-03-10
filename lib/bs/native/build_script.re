open Bsb_internals;

/* gcc( */
/* ~includes=[ */
/* "vendor/tree-sitter/include", */
/* "vendor/tree-sitter/out/Release/libruntime.a" */
/* ], */
/* "./lib/c/reason_bridge.o", */
/* ["./src/parser.c", "./src/reason_bridge.c"] */
/* ); */
gcc(
  ~includes=["vendor/tree-sitter/include"],
  ~flags=["-w"],
  "./lib/c/ts_reason_parser.o",
  ["./src/parser.c"]
);

gcc(
  ~includes=["./vendor/tree-sitter/include"],
  ~flags=["-w"],
  "./lib/c/reason_bridge.o",
  [
    "./lib/c/ts_reason_parser.o",
    "./src/reason_bridge.c"
  ]
);
