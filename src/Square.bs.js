// Generated by BUCKLESCRIPT VERSION 4.0.18, PLEASE EDIT WITH CARE
'use strict';

var Css = require("bs-css/src/Css.js");
var Curry = require("bs-platform/lib/js/curry.js");
var React = require("react");
var $$String = require("bs-platform/lib/js/string.js");
var ReasonReact = require("reason-react/src/ReasonReact.js");
var Utils$ReactTemplate = require("./Utils.bs.js");

Css.insertRule(Utils$ReactTemplate.cssButtonReset);

var buttonSquare_000 = Css.fontFamily("'Righteous', cursive;");

var buttonSquare_001 = /* :: */[
  Css.fontSize(Css.em(4.0)),
  /* :: */[
    Css.height(Css.pct(100.0)),
    /* :: */[
      Css.width(Css.pct(100.0)),
      /* [] */0
    ]
  ]
];

var buttonSquare = /* :: */[
  buttonSquare_000,
  buttonSquare_001
];

var square_000 = Css.borderRight(Css.px(5), Css.solid, Css.hex("DDDDDD"));

var square_001 = /* :: */[
  Css.flexBasis(Css.em(33.3)),
  /* :: */[
    Css.height(Css.px(200)),
    /* :: */[
      Css.position(Css.relative),
      /* [] */0
    ]
  ]
];

var square = /* :: */[
  square_000,
  square_001
];

var crossSquare_000 = Css.after(/* :: */[
      Css.contentRule(""),
      /* :: */[
        Css.position(Css.absolute),
        /* :: */[
          Css.height(Css.px(20)),
          /* :: */[
            Css.width(Css.pct(100.0)),
            /* :: */[
              Css.background(Css.hex("00796b")),
              /* :: */[
                Css.left(Css.px(0)),
                /* :: */[
                  Css.top(Css.pct(45.0)),
                  /* :: */[
                    Css.transform(Css.rotate(Css.deg(-45))),
                    /* [] */0
                  ]
                ]
              ]
            ]
          ]
        ]
      ]
    ]);

var crossSquare_001 = /* :: */[
  Css.before(/* :: */[
        Css.contentRule(""),
        /* :: */[
          Css.position(Css.absolute),
          /* :: */[
            Css.height(Css.px(20)),
            /* :: */[
              Css.width(Css.pct(100.0)),
              /* :: */[
                Css.background(Css.hex("00796b")),
                /* :: */[
                  Css.left(Css.px(0)),
                  /* :: */[
                    Css.top(Css.pct(45.0)),
                    /* :: */[
                      Css.transform(Css.rotate(Css.deg(45))),
                      /* [] */0
                    ]
                  ]
                ]
              ]
            ]
          ]
        ]
      ]),
  /* [] */0
];

var crossSquare = /* :: */[
  crossSquare_000,
  crossSquare_001
];

var crossCircle_000 = Css.after(/* :: */[
      Css.border(Css.px(20), Css.solid, Css.hex("c2185b")),
      /* :: */[
        Css.contentRule(""),
        /* :: */[
          Css.position(Css.absolute),
          /* :: */[
            Css.height(Css.pct(60.0)),
            /* :: */[
              Css.width(Css.pct(60.0)),
              /* :: */[
                Css.background(Css.white),
                /* :: */[
                  Css.left(Css.pct(10.0)),
                  /* :: */[
                    Css.top(Css.pct(10.0)),
                    /* :: */[
                      Css.borderRadius(Css.pct(100.0)),
                      /* [] */0
                    ]
                  ]
                ]
              ]
            ]
          ]
        ]
      ]
    ]);

var crossCircle = /* :: */[
  crossCircle_000,
  /* [] */0
];

var lastSquare_000 = Css.borderRightWidth(Css.px(0));

var lastSquare = /* :: */[
  lastSquare_000,
  /* [] */0
];

function toValue(field) {
  if (field) {
    if (field[0]) {
      return "O";
    } else {
      return "X";
    }
  } else {
    return "";
  }
}

function getButtonClass(field) {
  if (field) {
    if (field[0]) {
      return Css.style(crossCircle);
    } else {
      return Css.style(crossSquare);
    }
  } else {
    return "";
  }
}

var component = ReasonReact.statelessComponent("Square");

function make(value, gameState, onMark, isLastSquare, _children) {
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
              var className = $$String.concat(" ", /* :: */[
                    Css.style(square),
                    /* :: */[
                      isLastSquare ? Css.style(lastSquare) : "",
                      /* [] */0
                    ]
                  ]);
              var classNameButton = $$String.concat(" ", /* :: */[
                    Css.style(buttonSquare),
                    /* :: */[
                      getButtonClass(value),
                      /* [] */0
                    ]
                  ]);
              return React.createElement("div", {
                          className: className
                        }, React.createElement("button", {
                              className: classNameButton,
                              onClick: (function (_evt) {
                                  return Curry._1(onMark, /* () */0);
                                })
                            }, Utils$ReactTemplate.toString(toValue(value))));
            }),
          /* initialState */component[/* initialState */10],
          /* retainedProps */component[/* retainedProps */11],
          /* reducer */component[/* reducer */12],
          /* jsElementWrapped */component[/* jsElementWrapped */13]
        ];
}

exports.buttonSquare = buttonSquare;
exports.square = square;
exports.crossSquare = crossSquare;
exports.crossCircle = crossCircle;
exports.lastSquare = lastSquare;
exports.toValue = toValue;
exports.getButtonClass = getButtonClass;
exports.component = component;
exports.make = make;
/*  Not a pure module */
