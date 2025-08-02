# 🐍 Terminal Snake Game in C++

A classic Snake game built in pure C++ for the terminal — no graphics library required!
Move the snake with **WASD** keys, eat the fruit `F`, and try not to collide with yourself!

---

## 🤩 Features

* Snake movement & tail growth
* Randomly spawning food
* Score tracking
* Game over on wall or self collision
* Modular code (split into multiple files)

---

## 📁 Project Structure

```
SNAKE_GAME/
├── assets/        # (optional for future use)
├── build/         # Compiled binary output
├── src/           # All C++ source and header files
│   ├── main.cpp
│   ├── game.cpp / game.h
│   ├── snake.cpp / snake.h
│   ├── food.cpp / food.h
│   └── utils.h
└── README.md
```

---

## 🛠️ How to Compile & Run

### 🔧 Step 1: Compile

Make sure you're in the root directory (`SNAKE_GAME/`) and run:

```bash
g++ src/*.cpp -o build/snake
```

### ▶️ Step 2: Run the game

```bash
./build/snake      # Linux / macOS
```

```bash
build\snake.exe    # Windows
```

---

## 🎮 Controls

| Key | Action        |
| --- | ------------- |
| W   | Move Up       |
| A   | Move Left     |
| S   | Move Down     |
| D   | Move Right    |
| X   | Quit the Game |

---

## 🚀 Future Ideas

*

---

## 🧐 Built With

* C++11
* Windows Terminal
* `<conio.h>` and `<windows.h>` for input & delays
