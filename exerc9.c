#include <stdio.h>
#include <conio.h>
#include <windows.h>  
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");
    printf("Pressione qualquer tecla para parar.\n");

    while (!_kbhit()) {
        printf("TESTE\n");
        Sleep(500); 
    }
    _getch();

    printf("Programa encerrado.\n");
    return 0;
}


