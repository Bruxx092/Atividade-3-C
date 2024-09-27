#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"");
    int n;
    int soma = 0;
    int digitoVerificador;

    printf("Digite um número natural (até 6 dígitos): ");
    scanf("%d", &n);

    int temp = n;
    while (temp > 0) {
        soma += temp % 10; 
        temp /= 10;        
    }

    digitoVerificador = soma % 10;

    printf("Número da conta: %06d-%d\n", n, digitoVerificador);

    return 0;
}
