
open Utils;

Css.(
  global(
    "html, body",
    [
      backgroundColor(hex("F4F4F4"))
    ]
  )
);

let appTitle =
  Css.[
    color(hex("0277bd")),
    fontFamily("'Righteous', cursive;"),
    fontSize(px(48)),
    textAlign(center),
    selector(
      "& > span",
      [
        textShadow(~y=px(0), ~x=px(-2), ~blur=px(0), hex("58a5f0")),
      ]
    ),
  ];

let component = ReasonReact.statelessComponent("App");
let make = _children => {
  ...component,
  render: _self =>
    <div>
      <h1 className={Css.style(appTitle)}>
        <span>(toString("Tic Tac Toe"))</span>
      </h1>
      <Game />
    </div>,
};
