// Generated by BUCKLESCRIPT VERSION 5.0.3, PLEASE EDIT WITH CARE
'use strict';

var Css = require("bs-css/src/Css.js");
var React = require("react");
var ReasonReact = require("reason-react/src/ReasonReact.js");
var Game$ReactTemplate = require("./Game.bs.js");
var Utils$ReactTemplate = require("./Utils.bs.js");

var appTitle_000 = Css.color(Css.hex("0277bd"));

var appTitle_001 = /* :: */[
  Css.fontFamily("'Righteous', cursive;"),
  /* :: */[
    Css.fontSize(Css.px(48)),
    /* :: */[
      Css.textAlign(Css.center),
      /* :: */[
        Css.selector("& > span", /* :: */[
              Css.textShadow(Css.px(-2), Css.px(0), Css.px(0), Css.hex("58a5f0")),
              /* [] */0
            ]),
        /* [] */0
      ]
    ]
  ]
];

var appTitle = /* :: */[
  appTitle_000,
  appTitle_001
];

var component = ReasonReact.statelessComponent("App");

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
          /* render */(function (_self) {
              return React.createElement("div", undefined, React.createElement("h1", {
                              className: Css.style(appTitle)
                            }, React.createElement("span", undefined, Utils$ReactTemplate.toString("Tic Tac Toe"))), ReasonReact.element(undefined, undefined, Game$ReactTemplate.make(/* array */[])));
            }),
          /* initialState */component[/* initialState */10],
          /* retainedProps */component[/* retainedProps */11],
          /* reducer */component[/* reducer */12],
          /* jsElementWrapped */component[/* jsElementWrapped */13]
        ];
}

exports.appTitle = appTitle;
exports.component = component;
exports.make = make;
/* appTitle Not a pure module */
