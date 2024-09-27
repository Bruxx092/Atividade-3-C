#include <stdio.h>
#include <locale.h>  

int main() {
    setlocale(LC_ALL,"");
    for (int i = 0; i < 15; i++) {
        printf("\033[0;3%dm%d\033[0m ", i % 7, i); //usando códigos ANSI para mudar a cor do texto
    }
    printf("\n");
    return 0;
}

