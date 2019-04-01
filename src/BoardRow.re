open SharedTypes;
open Utils;

let boardRow =
  Css.[
    borderBottom(px(5), dotted, rgb(0, 0, 0)),
    display(flexBox),
    selector(
      "&::last-child",
      [
        borderWidth(px(0))
      ],
    ),
  ];

let lastBoardRow =
  Css.[
    borderWidth(px(0)),
  ];

let component = ReasonReact.statelessComponent("BoardRow");

let make = (
  ~gameState: gameState,
  ~row: row,
  ~onMark,
  ~index: int,
  ~isLastRow: bool,
  _children
) => {
  ...component,
  render: _ => {
    let className = [
      Css.style(boardRow),
      isLastRow ? Css.style(lastBoardRow) : "",
    ]
    |> String.concat(" ");
    <div className>
      (
        row
        |> List.mapi((ind: int, value: field) => {
            let id = string_of_int(index) ++ string_of_int(ind);
            <Square
              key=id
              onMark=(() => onMark(id))
              value
              gameState
            />
           })
        |> Array.of_list
        |> ReasonReact.array
      )
    </div>
  },
};