#include "game.h"
#include "snake.h"
#include "food.h"

// Game state variables
bool gameOver;
int score;

void setupGame()
{
    gameOver = false;
    score = 0;
    initSnake();
    spawnFood();
}

void drawGame()
{
    system("cls");

    // Draw top wall
    for (int i = 0; i < width + 2; i++)
        cout << "#";
    cout << endl;

    // Draw game grid
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            if (j == 0)
                cout << "#"; // Left wall

            if (i == y && j == x)
                cout << "O"; // Snake head
            else if (i == fruitY && j == fruitX)
                cout << "F"; // Fruit
            else
            {
                bool printed = false;

                for (int k = 0; k < nTail; k++)
                {
                    if (tailX[k] == j && tailY[k] == i)
                    {
                        cout << "o"; // Snake tail
                        printed = true;
                        break;
                    }
                }

                if (!printed)
                    cout << " ";
            }

            if (j == width - 1)
                cout << "#"; // Right wall
        }
        cout << endl;
    }

    // Draw bottom wall
    for (int i = 0; i < width + 2; i++)
        cout << "#";
    cout << endl;

    cout << "Score: " << score << endl;
}

void handleInput()
{
    if (_kbhit())
    {
        switch (_getch())
        {
        case 'a':
        case 'A':
            if (dir != RIGHT)
                dir = LEFT;
            break;
        case 'd':
        case 'D':
            if (dir != LEFT)
                dir = RIGHT;
            break;
        case 'w':
        case 'W':
            if (dir != DOWN)
                dir = UP;
            break;
        case 's':
        case 'S':
            if (dir != UP)
                dir = DOWN;
            break;
        case 'x':
        case 'X':
            gameOver = true;
            break;
        }
    }
}

void updateGame()
{
    moveSnake();

    // Wall collision
    if (x < 0 || x >= width || y < 0 || y >= height)
        gameOver = true;

    // Self collision
    if (checkSelfCollision())
        gameOver = true;

    // Fruit eaten
    if (isFoodEaten(x, y))
    {
        score += 10;
        nTail++;
        spawnFood();
    }
}
