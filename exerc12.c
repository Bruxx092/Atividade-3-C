#include <stdio.h>
#include <locale.h>
#include <math.h> 

int main() {
    setlocale(LC_ALL, "");
    double num;

    while (1) {
        printf("Digite um n�mero real n�o negativo: ");
        scanf("%lf", &num);

        if (num >= 0) {
            break; 
        } else {
            printf("Entrada inv�lida. Por favor, digite um n�mero real n�o negativo.\n");
        }
    }

    double raiz = sqrt(num);
    printf("A raiz quadrada de %.2f � %.2f\n", num, raiz);

    return 0;
}
