open SharedTypes;
open Utils;

Css.insertRule(cssButtonReset);

let buttonSquare =
  Css.[
    flexBasis(em(33.3)),
    padding(em(3.0)),
  ];

let component = ReasonReact.statelessComponent("Square");

let make = (~value: field, ~gameState, ~onMark, _children) => {
  ...component,
  render: (_) =>
    <button className={Css.style(buttonSquare)}>(toString("Hi"))</button>,
};
