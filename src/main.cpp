#include "game.h"
#include <ctime>

int main()
{
    srand(time(0)); // Random seed for food spawn
    setupGame();    // Initialize snake, food, etc.

    while (!gameOver)
    {
        drawGame();    // Renders game screen
        handleInput(); // Checks for keyboard input
        updateGame();  // Logic: move, eat, collide
        Sleep(100);    // Controls game speed
    }

    cout << "\nGame Over! Final Score: " << score << endl;
    system("pause");
    return 0;
}
