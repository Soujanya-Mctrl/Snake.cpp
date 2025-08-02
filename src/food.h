#ifndef FOOD_H
#define FOOD_H

#include "utils.h"

// Fruit position on the board
extern int fruitX, fruitY;

// Function to spawn fruit at a random location
void spawnFood();

// Check if the snake's head is on the fruit
bool isFoodEaten(int headX, int headY);

#endif
