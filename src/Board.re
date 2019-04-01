open Utils;
open SharedTypes;

let board =
  Css.[
    background(hex("de3ac9")),
    color(white),
    fontFamily("arial"),
  ];

let component = ReasonReact.statelessComponent("Board");

let make = (~state: state, ~onMark, ~onRestart, _children) => {
  ...component,
  render: (_) =>
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
      <div>
        (toString("TODO: Game State Here"))
      </div>
    </div>,
};
