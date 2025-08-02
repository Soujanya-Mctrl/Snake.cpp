#ifndef SNAKE_H
#define SNAKE_H

#include "utils.h"

// Snake head position
extern int x, y;

// Snake tail positions
extern int tailX[100], tailY[100];
extern int nTail;

// Snake movement direction
extern Direction dir;

// Functions to manage the snake
void initSnake();         // Initialize snake state
void moveSnake();         // Move head & tail
bool checkSelfCollision(); // Returns true if head touches tail

#endif
