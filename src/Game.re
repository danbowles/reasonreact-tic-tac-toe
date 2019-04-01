open Utils;
open SharedTypes;

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
    <Board
      state
      onRestart=(_evt => send(Restart))
      onMark=(id => send(ClickSquare(id)))
    />
};
