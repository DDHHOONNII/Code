#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>

int width = 20, height = 20;
int gameOver, score;
int x, y, fruitX, fruitY, flag;
int tailX[100], tailY[100];
int countTail = 0;

// Function to set the cursor position
void gotoxy(int x, int y)
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

// Function to draw the grid
void draw()
{
    int i, j;
    system("cls");
    for (i = 0; i < width; i++)
    {
        for (j = 0; j < height; j++)
        {
            if (i == 0 || i == height - 1 || j == 0 || j == width - 1)
            {
                printf("#");
            }
            else
            {
                if (i == x && j == y)
                    printf("O");
                else if (i == fruitX && j == fruitY)
                    printf("F");
                else
                {
                    int print = 0;
                    for (int k = 0; k < countTail; k++)
                    {
                        if (tailX[k] == i && tailY[k] == j)
                        {
                            printf("o");
                            print = 1;
                        }
                    }
                    if (!print)
                        printf(" ");
                }
            }
        }
        printf("\n");
    }
    printf("Score: %d\n", score);
}

// Function to check for user input and move the snake
void input()
{
    if (_kbhit())
    {
        switch (_getch())
        {
        case 'w':
            flag = 1;
            break;
        case 's':
            flag = 2;
            break;
        case 'a':
            flag = 3;
            break;
        case 'd':
            flag = 4;
            break;
        case 'x':
            gameOver = 1;
            break;
        }
    }
}

// Function to handle the logic of the game
void logic()
{
    int prevX = tailX[0];
    int prevY = tailY[0];
    int prev2X, prev2Y;
    tailX[0] = x;
    tailY[0] = y;
    for (int i = 1; i < countTail; i++)
    {
        prev2X = tailX[i];
        prev2Y = tailY[i];
        tailX[i] = prevX;
        tailY[i] = prevY;
        prevX = prev2X;
        prevY = prev2Y;
    }
    switch (flag)
    {
    case 1:
        y--;
        break;
    case 2:
        y++;
        break;
    case 3:
        x--;
        break;
    case 4:
        x++;
        break;
    default:
        break;
    }

    if (x < 0 || x >= width || y < 0 || y >= height)
        gameOver = 1;

    for (int i = 0; i < countTail; i++)
    {
        if (tailX[i] == x && tailY[i] == y)
            gameOver = 1;
    }

    if (x == fruitX && y == fruitY)
    {
        score += 10;
        fruitX = rand() % width;
        fruitY = rand() % height;
        countTail++;
    }
}

int main()
{
    x = width / 2;
    y = height / 2;
    gameOver = 0;
    fruitX = rand() % width;
    fruitY = rand() % height;
    score = 0;

    while (!gameOver)
    {
        draw();
        input();
        logic();
        Sleep(100); // Control the speed of the snake
    }

    printf("Game Over! Final Score: %d\n", score);
    return 0;
}
