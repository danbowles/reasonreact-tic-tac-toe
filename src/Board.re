open Utils;
open SharedTypes;

let board =
  Css.[
    background(hex("de3ac9")),
    fontFamily("arial"),
    color(white),
  ];

let component = ReasonReact.statelessComponent("Board");

let make = (~state: state, ~onMark, ~onRestart, _children) => {
  ...component,
  render: (_) =>
    <div className={Css.style(board)}>
      (toString("Board Component"))
    </div>,
};
