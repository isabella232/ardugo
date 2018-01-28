#include "ArduGo.h"
#include "Shell.h"
#include "Board.h"
#include "sidebar.h"

/*
 *  File: go-game.ino
 *  Purpose: Implementation of Arduino entry-points.
 *  Author: Don Anderson
 */

void setup() {
  Serial.begin(9600);
  while (!Serial);
  arduboy.start();
  ardugo_setup();
}

void loop() {
  previousButtonState = currentButtonState;
  currentButtonState = arduboy.buttonsState();

  shell.loop();
  board.loop();
  arduboy.clear();
  board.render();
  render_sidebar(cur_sidebar);
  arduboy.display();

  injectButtonState = 0;
}
