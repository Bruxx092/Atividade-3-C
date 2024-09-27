#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"");
    int n;
    unsigned long long resultado = 1;

    printf("Digite um número natural: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Por favor, digite um número natural (n >= 0).\n");
    } else {
        for (int i = 2; i <= n; i++) {
            resultado *= i;
        }
        printf("O fatorial de %d é %llu.\n", n, resultado);
    }

    return 0;
}


