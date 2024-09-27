#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <time.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");
    int x = 1, y = 1, dx = -1, dy = -1, color;

    srand(time(NULL));

    do {
        COORD coord;
        coord.X = x;
        coord.Y = y;
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);

        printf("O"); 
        Sleep(100); 

        coord.X = x;
        coord.Y = y;
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
        printf(" ");

        if (x == 1 || x == 80) {
            dx = -dx; // 
            color = rand() % 15 + 1; 
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color); 
        }
        if (y == 1 || y == 24) {
            dy = -dy; 
            color = rand() % 15 + 1; 
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color); 
        }
        x += dx;
        y += dy;

    } while (!_kbhit());

    return 0;
}
