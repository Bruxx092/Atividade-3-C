#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, ""); 
    int num, max, min;
    int first = 1; 

    printf("Digite uma sequ�ncia de n�meros naturais (0 para terminar):\n");

    while (1) {
        scanf("%d", &num);
        
        if (num == 0) {
            break; 
        }
        if (first) {
            max = min = num;
            first = 0; 
        } else {
            if (num > max) {
                max = num;
            }
            if (num < min) {
                min = num;
            }
        }
    }

    if (!first) { 
        printf("M�ximo: %d\n", max);
        printf("M�nimo: %d\n", min);
    } else {
        printf("Nenhum n�mero foi inserido.\n");
    }

    return 0;
}
