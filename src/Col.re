type t;

[@bs.deriving abstract]
type colObj = {
  [@bs.optional]
  span: t,
  [@bs.optional]
  offset: int,
  [@bs.optional]
  order: int,
};

external bool: bool => t = "%identity";
external int: int => t = "%identity";
external string: string => t = "%identity";
external obj: colObj => t = "%identity";

[@bs.module "react-bootstrap"] [@react.component]
external make:
  (
    ~lg: t=?,
    ~md: t=?,
    ~sm: t=?,
    ~xl: t=?,
    ~xs: t=?,
    ~bsPrefix: string=?,
    ~children: React.element=?
  ) =>
  React.element =
  "Col";
