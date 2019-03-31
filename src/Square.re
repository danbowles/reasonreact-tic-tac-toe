open SharedTypes;
open Utils;

let component = ReasonReact.statelessComponent("Square");

let make = (~value: field, ~gameState, ~onMark, _children) => {
  ...component,
  render: (_) =>
    <button>(toString("Hi"))</button>,
};
