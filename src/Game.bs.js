// Generated by BUCKLESCRIPT VERSION 4.0.18, PLEASE EDIT WITH CARE
'use strict';

var Css = require("bs-css/src/Css.js");
var Block = require("bs-platform/lib/js/block.js");
var Curry = require("bs-platform/lib/js/curry.js");
var React = require("react");
var ReasonReact = require("reason-react/src/ReasonReact.js");
var Board$ReactTemplate = require("./Board.bs.js");
var Utils$ReactTemplate = require("./Utils.bs.js");

var game_000 = Css.background(Css.red);

var game_001 = /* :: */[
  Css.fontFamily("Courier New, arial"),
  /* :: */[
    Css.color(Css.white),
    /* [] */0
  ]
];

var game = /* :: */[
  game_000,
  game_001
];

var initialState = /* record */[
  /* board : :: */[
    /* :: */[
      /* Empty */0,
      /* :: */[
        /* Empty */0,
        /* :: */[
          /* Empty */0,
          /* [] */0
        ]
      ]
    ],
    /* :: */[
      /* :: */[
        /* Empty */0,
        /* :: */[
          /* Empty */0,
          /* :: */[
            /* Empty */0,
            /* [] */0
          ]
        ]
      ],
      /* :: */[
        /* :: */[
          /* Empty */0,
          /* :: */[
            /* Empty */0,
            /* :: */[
              /* Empty */0,
              /* [] */0
            ]
          ]
        ],
        /* [] */0
      ]
    ]
  ],
  /* gameState : Playing */Block.__(0, [/* Cross */0])
];

var component = ReasonReact.reducerComponent("Game");

function make(_children) {
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
              var send = param[/* send */3];
              return React.createElement("div", {
                          className: Css.style(game)
                        }, Utils$ReactTemplate.toString("Game Board"), ReasonReact.element(undefined, undefined, Board$ReactTemplate.make(param[/* state */1], (function (id) {
                                    return Curry._1(send, /* ClickSquare */[id]);
                                  }), (function (_evt) {
                                    return Curry._1(send, /* Restart */0);
                                  }), /* array */[])));
            }),
          /* initialState */(function (param) {
              return initialState;
            }),
          /* retainedProps */component[/* retainedProps */11],
          /* reducer */(function (action, state) {
              if (action) {
                return /* Update */Block.__(0, [/* record */[
                            /* board */state[/* board */0],
                            /* gameState : Playing */Block.__(0, [/* Circle */1])
                          ]]);
              } else {
                return /* Update */Block.__(0, [/* record */[
                            /* board */state[/* board */0],
                            /* gameState : Playing */Block.__(0, [/* Cross */0])
                          ]]);
              }
            }),
          /* jsElementWrapped */component[/* jsElementWrapped */13]
        ];
}

exports.game = game;
exports.initialState = initialState;
exports.component = component;
exports.make = make;
/* game Not a pure module */
