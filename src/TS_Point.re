type t = {
  row: int,
  column: int
};

let toString = ({column, row}) =>
  "(Point.t {:row "
  ++ string_of_int(row)
  ++ " :column "
  ++ string_of_int(column)
  ++ "})";
