#include <stdio.h>
#include <conio.h> 
#include <windows.h>
#include <locale.h> 

void setColor(int color) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

int main() {
    setlocale(LC_ALL, ""); 
    int rastroAtivo = 1; 
    int cor = 1; 
    char tecla;

    printf("Pressione 'R' para ativar/desativar o rastro.\n");
    printf("Pressione 'C' para mudar a cor do rastro.\n");
    printf("Pressione 'ESC' para sair.\n");

    while (1) {
        if (_kbhit()) {
            tecla = _getch();

            if (tecla == 'R' || tecla == 'r') {
                rastroAtivo = !rastroAtivo; 
            } else if (tecla == 'C' || tecla == 'c') {
                cor = (cor % 15) + 1; 
            } else if (tecla == 27) { 
                break;
            }
        }
        if (rastroAtivo) {
            setColor(cor);
            printf("X");
        } else {
            printf("\b ");
        }

        Sleep(100); 
    }
    setColor(7); 
    printf("\nSaindo...\n");
    return 0;
}
