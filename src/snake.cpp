#include "snake.h"

// Snake's position and tail
int x, y;
int tailX[100], tailY[100];
int nTail = 0;

// Snake movement direction
Direction dir = STOP;

void initSnake() {
    x = width / 2;
    y = height / 2;
    nTail = 0;
    dir = STOP;
}

void moveSnake() {
    // Move tail — shift each segment to the position of the previous one
    int prevX = tailX[0];
    int prevY = tailY[0];
    int prev2X, prev2Y;
    tailX[0] = x;
    tailY[0] = y;

    for (int i = 1; i < nTail; i++) {
        prev2X = tailX[i];
        prev2Y = tailY[i];
        tailX[i] = prevX;
        tailY[i] = prevY;
        prevX = prev2X;
        prevY = prev2Y;
    }

    // Move head based on direction
    switch (dir) {
        case LEFT:  x--; break;
        case RIGHT: x++; break;
        case UP:    y--; break;
        case DOWN:  y++; break;
        default:    break;
    }
}

bool checkSelfCollision() {
    for (int i = 0; i < nTail; i++) {
        if (tailX[i] == x && tailY[i] == y)
            return true;
    }
    return false;
}
