#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"");
    int n;
    int termial = 0;

    printf("Digite um n�mero natural: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Por favor, digite um n�mero natural (n >= 0).\n");
    } else {
        for (int i = 1; i <= n; i++) {
            termial += i;
        }
        printf("O termial de %d � %d.\n", n, termial);
    }

    return 0;
}
