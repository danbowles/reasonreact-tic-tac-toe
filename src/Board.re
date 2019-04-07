open Utils;
open SharedTypes;

let board =
  Css.[
    backgroundColor(white),
    margin2(~v=px(0), ~h=auto),
    width(px(600)),
  ];

let statusText =
  Css.[
    fontFamily("'Righteous', cursive;"),
    fontSize(em(1.3)),
    margin2(em(2.0), em(0.0)),
    textAlign(center),
    selector(
      "& .playerCross",
      [
        color(hex("00796b")),
      ]
    ),
    selector(
      "& .playerCircle",
      [
        color(hex("c2185b")),
      ],
    ),
  ];

let endGameModal =
  Css.[
    background(rgba(255, 255, 255, 0.9)),
    fontFamily("'Righteous', cursive;"),
    left(pct(50.0)),
    height(pct(100.0)),
    position(absolute),
    top(pct(50.0)),
    transform(translate(pct(-50.0), pct(-50.0))),
    width(pct(100.0)),
    selector(
      "& .modalInner",
      [
        display(flexBox),
        flexDirection(column),
        margin(em(3.0)),
        justifyContent(center),
      ],
    ),
    selector(
      "h3",
      [
        color(hex("37474f")),
        fontSize(em(3.0)),
        textAlign(center),
      ]
    ),
    selector(
      "& button",
      [
        background(hex("62727b")),
        borderRadius(px(12)),
        color(white),
        fontSize(em(2.0)),
        margin2(em(2.0), auto),
        padding2(em(0.6), em(0.0)),
        width(px(200)),
      ]
    )
  ];

let getPlayerClass = (gameState: gameState) =>
switch(gameState) {
  | Playing(Circle) => "playerCircle"
  | _ => "playerCross"
  };

let setStatus = (gameState: gameState) =>
switch(gameState) {
  | Playing(Cross) => "X"
  | Playing(Circle) => "O"
  | _ => "X"
  };

let component = ReasonReact.statelessComponent("Board");

let make = (~state: state, ~onMark, ~onRestart, _children) => {
  ...component,
  render: (_) =>
    <div>
      <div className=(Css.style(statusText))>
        <span>
          (toString("Turn: "))
        </span>
        <span className=(getPlayerClass(state.gameState))>
          (
            state.gameState |> setStatus |> toString
          )
        </span>
      </div>
      <div className={Css.style(board)}>
        (
          state.board
          |> List.mapi((index: int, row: row) =>
            <BoardRow
              key=(string_of_int(index))
              gameState=state.gameState
              row
              onMark
              index
              isLastRow=(List.length(state.board) == (index + 1))
            />
            )
          |> Array.of_list
          |> ReasonReact.array
        )
      </div>
      (
        switch(state.gameState) {
        | Playing(_) => ReasonReact.null
        | _ =>
          <div className=(Css.style(endGameModal))>
            <div className="modalInner">
              <h3>
                (
                  toString(
                    switch(state.gameState) {
                    | Winner(Circle) => "Circle Won!"
                    | Winner(Cross) => "Cross Won!"
                    | Draw => "Draw!"
                    | _ => "Circle Won!"
                    }
                  )
                )
              </h3>
              <button onClick=onRestart>
                (toString("RESTART"))
              </button>
            </div>
          </div>
        }
      )
    </div>,
};
