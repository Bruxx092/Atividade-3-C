#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"");
    int n;
    int termial = 0;

    printf("Digite um número natural: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Por favor, digite um número natural (n >= 0).\n");
    } else {
        for (int i = 1; i <= n; i++) {
            termial += i;
        }
        printf("O termial de %d é %d.\n", n, termial);
    }

    return 0;
}
