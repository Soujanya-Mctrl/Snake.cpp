#ifndef UTILS_H
#define UTILS_H

#define WIN32_LEAN_AND_MEAN
#define NOMINMAX
#if defined(_WIN32) || defined(_WIN64)
#include <windows.h>
#include <conio.h>
#undef byte
#endif

#include <iostream>
using namespace std;

// Dimensions of the game board
const int width = 30;
const int height = 20;

// Movement directions
enum Direction { STOP = 0, LEFT, RIGHT, UP, DOWN };

#endif
