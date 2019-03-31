open Utils;
open SharedTypes;

let game =
  Css.[
    background(red),
    fontFamily("Courier New, arial"),
    color(white),
  ];

type action = 
  | ClickSquare(string)
  | Restart;

let initialState = {
  board: [
    [Empty, Empty, Empty],
    [Empty, Empty, Empty],
    [Empty, Empty, Empty],
  ],
  gameState: Playing(Cross),
};

let component = ReasonReact.reducerComponent("Game");

let make = _children => {
  ...component,
  initialState: () => initialState,
  reducer: (action, state) =>
    switch(action) {
    /* TODO: update state */
    | ClickSquare(string) => ReasonReact.Update({ ...state, gameState: Playing(Circle) })
    | Restart => ReasonReact.Update(initialState)
    },
  render: ({state, send}) =>
  /* render: ({state, send}) => */
    <div className={Css.style(game)}>
      (toString("Game Board"))
      <Board
        state
        onRestart=(_evt => send(Restart))
        onMark=(id => send(ClickSquare(id)))
      />
      
    </div>,
};
