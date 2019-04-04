// Generated by BUCKLESCRIPT VERSION 4.0.18, PLEASE EDIT WITH CARE
'use strict';

var Css = require("bs-css/src/Css.js");
var List = require("bs-platform/lib/js/list.js");
var $$Array = require("bs-platform/lib/js/array.js");
var React = require("react");
var ReasonReact = require("reason-react/src/ReasonReact.js");
var Utils$ReactTemplate = require("./Utils.bs.js");
var BoardRow$ReactTemplate = require("./BoardRow.bs.js");

var board_000 = Css.fontFamily("arial");

var board_001 = /* :: */[
  Css.width(Css.px(600)),
  /* [] */0
];

var board = /* :: */[
  board_000,
  board_001
];

var component = ReasonReact.statelessComponent("Board");

function make(state, onMark, onRestart, _children) {
  return /* record */[
          /* debugName */component[/* debugName */0],
          /* reactClassInternal */component[/* reactClassInternal */1],
          /* handedOffState */component[/* handedOffState */2],
          /* willReceiveProps */component[/* willReceiveProps */3],
          /* didMount */component[/* didMount */4],
          /* didUpdate */component[/* didUpdate */5],
          /* willUnmount */component[/* willUnmount */6],
          /* willUpdate */component[/* willUpdate */7],
          /* shouldUpdate */component[/* shouldUpdate */8],
          /* render */(function (param) {
              return React.createElement("div", {
                          className: Css.style(board)
                        }, $$Array.of_list(List.mapi((function (index, row) {
                                    return ReasonReact.element(String(index), undefined, BoardRow$ReactTemplate.make(state[/* gameState */1], row, onMark, index, List.length(state[/* board */0]) === (index + 1 | 0), /* array */[]));
                                  }), state[/* board */0])), React.createElement("div", undefined, Utils$ReactTemplate.toString("TODO: Game State Here")));
            }),
          /* initialState */component[/* initialState */10],
          /* retainedProps */component[/* retainedProps */11],
          /* reducer */component[/* reducer */12],
          /* jsElementWrapped */component[/* jsElementWrapped */13]
        ];
}

exports.board = board;
exports.component = component;
exports.make = make;
/* board Not a pure module */
