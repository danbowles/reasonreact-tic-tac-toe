open SharedTypes;
open Utils;

Css.insertRule(cssButtonReset);

let buttonSquare =
  Css.[
    flexBasis(em(33.3)),
    padding(em(3.0)),
  ];

let square =
  Css.[
    borderRight(px(5), dotted, rgb(0, 0, 0)),
  ];

let lastSquare =
  Css.[
    borderRightWidth(px(0)),
  ];

let toValue = (field: field) =>
  switch (field) {
  | Marked(Cross) => "X"
  | Marked(Circle) => "O"
  | Empty => ""
};

let component = ReasonReact.statelessComponent("Square");

let make = (~value: field, ~gameState, ~onMark, ~isLastSquare: bool, _children) => {
  ...component,
  render: (_) => {
    let className = [
      Css.style(square),
      isLastSquare ? Css.style(lastSquare) : "",
    ]
    |> String.concat(" ");
    <div className>
      <button
        className={Css.style(buttonSquare)}
        onClick=(_evt => onMark())
      >
        (value |> toValue |> toString)
      </button>
    </div>
  },
};
