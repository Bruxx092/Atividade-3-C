#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL,"");
    int n, soma = 0;
    
    printf("Digite um número natural:");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) 
        soma += (2 * i + 1); 
    
    printf("O quadrado de %d é %d.\n", n, soma);
    return 0;
}
