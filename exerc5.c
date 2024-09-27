#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"");
    int n;
    unsigned long long resultado = 1;

    printf("Digite um n�mero natural: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Por favor, digite um n�mero natural (n >= 0).\n");
    } else {
        for (int i = 2; i <= n; i++) {
            resultado *= i;
        }
        printf("O fatorial de %d � %llu.\n", n, resultado);
    }

    return 0;
}


