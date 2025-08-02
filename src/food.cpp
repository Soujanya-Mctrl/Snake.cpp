#include "food.h"
#include <cstdlib>  // for rand()

// Fruit position
int fruitX, fruitY;

void spawnFood() {
    fruitX = rand() % width;
    fruitY = rand() % height;
}

bool isFoodEaten(int headX, int headY) {
    return (headX == fruitX && headY == fruitY);
}
