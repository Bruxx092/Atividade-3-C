#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,""); 
    double x;
    int n;
    double resultado = 1.0;

    printf("Digite um n�mero real (x): ");
    scanf("%lf", &x);
    printf("Digite um n�mero natural (n): ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Por favor, digite um n�mero natural (n >= 0).\n");
    } else {
        for (int i = 0; i < n; i++) {
            resultado *= x;
        }
        printf("%.2lf elevado a %d � %.2lf.\n", x, n, resultado);
    }

    return 0;
}
