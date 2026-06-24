#include <stdio.h>
#include <conio.h>
#include <windows.h>

int x, y, fruitX, fruitY, score;
int gameOver;

int tailX[100], tailY[100];
int nTail;

enum eDirection { STOP = 0, LEFT, RIGHT, UP, DOWN };
enum eDirection dir;

// 🟢 Setup game
void setup() {
    gameOver = 0;
    dir = STOP;
    x = 10; 
    y = 10;

    fruitX = rand() % 20;
    fruitY = rand() % 20;
    score = 0;
}

// 🟢 Draw game
void draw() {
    system("cls");

    for (int i = 0; i < 22; i++) printf("#");
    printf("\n");

    for (int i = 0; i < 20; i++) {
        for (int j = 0; j < 20; j++) {
            if (j == 0) printf("#");

            if (i == y && j == x)
                printf("O"); // head
            else if (i == fruitY && j == fruitX)
                printf("F"); // fruit
            else {
                int print = 0;
                for (int k = 0; k < nTail; k++) {
                    if (tailX[k] == j && tailY[k] == i) {
                        printf("o"); // tail
                        print = 1;
                    }
                }
                if (!print) printf(" ");
            }

            if (j == 19) printf("#");
        }
        printf("\n");
    }

    for (int i = 0; i < 22; i++) printf("#");
    printf("\nScore: %d\n", score);
}

// 🟢 Input (direction control)
void input() {
    if (_kbhit()) {
        switch (_getch()) {
            case 'a': dir = LEFT; break;
            case 'd': dir = RIGHT; break;
            case 'w': dir = UP; break;
            case 's': dir = DOWN; break;
            case 'x': gameOver = 1; break;
        }
    }
}

// 🟢 Game logic
void logic() {
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

    // 🔥 Movement based on direction
    switch (dir) {
        case LEFT:  x--; break;
        case RIGHT: x++; break;
        case UP:    y--; break;
        case DOWN:  y++; break;
    }

    // Wall collision
    if (x < 0 || x >= 20 || y < 0 || y >= 20)
        gameOver = 1;

    // Self collision
    for (int i = 0; i < nTail; i++) {
        if (tailX[i] == x && tailY[i] == y)
            gameOver = 1;
    }

    // Fruit eaten
    if (x == fruitX && y == fruitY) {
        score += 10;
        fruitX = rand() % 20;
        fruitY = rand() % 20;
        nTail++;
    }
}

// 🟢 Main function
int main() {
    setup();

    while (!gameOver) {
        draw();
        input();
        logic();
        Sleep(100); // speed
    }

    printf("\nGame Over!\n");
    return 0;
}