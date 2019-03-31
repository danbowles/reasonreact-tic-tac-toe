open Utils;
open SharedTypes;

let boardRow =
  Css.[
    border(px(2), solid, hex("475646"))
  ];

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
      (
        state.board
        |> List.mapi((index: int, row: row) =>
          <div className={Css.style{boardRow}}>
            <BoardRow
              key=(string_of_int(index))
              gameState=state.gameState
              row
              onMark
              index
            />
          </div>
          )
        |> Array.of_list
        |> ReasonReact.array
      )
      <div>
        (toString("TODO: Game State Here"))
      </div>
    </div>,
};
