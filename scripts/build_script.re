let gcc = Bsb_internals.gcc;

let (+/) = Filename.concat;

let cLibDir = "lib" +/ "c";

let () =
  try (ignore(Sys.is_directory(cLibDir))) {
  | Sys_error(_) => Unix.mkdir(cLibDir, 0o777)
  };

let tsIncludeDir =
  "node_modules" +/ "tree-sitter" +/ "vendor" +/ "tree-sitter" +/ "include";

gcc(
  ~includes=[tsIncludeDir],
  cLibDir +/ "ts_reason_parser.o",
  ["languages" +/ "reason_parser.c"]
);

gcc(
  ~includes=[tsIncludeDir],
  cLibDir +/ "ts_arithmetics_parser.o",
  ["languages" +/ "arithmetics_parser.c"]
);

gcc(
  ~includes=[tsIncludeDir],
  cLibDir +/ "ts_arithmetics_test_lang.o",
  ["bindings" +/ "ts_arithmetics_test_lang.c"]
);

gcc(
  ~includes=[tsIncludeDir],
  cLibDir +/ "ts_runtime_bridge.o",
  ["bindings" +/ "ts_runtime_bridge.c"]
);
