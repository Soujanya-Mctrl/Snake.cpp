#ifndef GAME_H
#define GAME_H

#include "utils.h"

// Game state
extern bool gameOver;
extern int score;

// Functions to manage the game
void setupGame();      // Initialize snake, food, etc.
void drawGame();       // Renders the game board
void handleInput();    // Handles user keyboard input
void updateGame();     // Updates logic: movement, collisions, fruit

#endif
