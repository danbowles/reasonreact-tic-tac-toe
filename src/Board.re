open Utils;
open SharedTypes;

let board =
  Css.[
    backgroundColor(white),
    margin2(~v=px(0), ~h=auto),
    width(px(600)),
  ];

let setStatus = (gameState: gameState) =>
switch(gameState) {
  | Playing(Cross) => "Turn: Cross"
  | Playing(Circle) => "Turn: Circle"
  | Winner(Circle) => "Circle Won!"
  | Winner(Cross) => "Cross Won!"
  | Draw => "Draw! :("
  };

let component = ReasonReact.statelessComponent("Board");

let make = (~state: state, ~onMark, ~onRestart, _children) => {
  ...component,
  render: (_) =>
    <div>
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
      <div>
        (
          state.gameState |> setStatus |> toString
        )
      </div>
      <div>
        (
          switch(state.gameState) {
          | Playing(_) => ReasonReact.null
          | _ => 
            <button onClick=onRestart>
              (toString("Restart!"))
            </button>
          }
        )
      </div>
    </div>,
};
