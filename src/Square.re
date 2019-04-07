open SharedTypes;
open Utils;

Css.insertRule(cssButtonReset);

let buttonSquare =
  Css.[
    fontFamily("'Righteous', cursive;"),
    fontSize(em(4.0)),
    height(pct(100.0)),
    width(pct(100.0)),
  ];
    
let square =
  Css.[
    borderRight(px(5), solid, hex("DDDDDD")),
    flexBasis(em(33.3)),
    height(px(200)),
    position(relative),
  ];

let crossSquare =
  Css.[
    after([
      contentRule(""),
      position(absolute),
      height(px(20)),
      width(pct(100.0)),
      background(hex("00796b")),
      left(px(0)),
      top(pct(45.0)),
      transform(rotate(deg(-45))),
    ]),
    before([
      contentRule(""),
      position(absolute),
      height(px(20)),
      width(pct(100.0)),
      background(hex("00796b")),
      left(px(0)),
      top(pct(45.0)),
      transform(rotate(deg(45))),
    ])
  ];

let crossCircle =
  Css.[
    after([
      border(px(20), solid, hex("c2185b")),
      contentRule(""),
      position(absolute),
      height(pct(60.0)),
      width(pct(60.0)),
      background(white),
      left(pct(10.0)),
      top(pct(10.0)),
      borderRadius(pct(100.0))
    ])
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

let getButtonClass = (field: field) =>
  switch (field) {
  | Marked(Cross) => Css.style(crossSquare)
  | Marked(Circle) => Css.style(crossCircle)
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
    let classNameButton = [
      Css.style(buttonSquare),
      getButtonClass(value),
    ]
    |> String.concat(" ");
    <div className>
      <button
        className=classNameButton
        onClick=(_evt => onMark())
      >
        (value |> toValue |> toString)
      </button>
    </div>
  },
};
