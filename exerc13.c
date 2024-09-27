#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");
    int opcao;
    double saldo = 1000.00; 

    do {
        printf("\n=== Caixa Eletr�nico ===\n");
        printf("1 - Dep�sito\n");
        printf("2 - Saque\n");
        printf("3 - Saldo\n");
        printf("4 - Sair\n");
        printf("Escolha uma op��o: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1: { 
                double valor;
                printf("Digite o valor do dep�sito: R$ ");
                scanf("%lf", &valor);
                if (valor > 0) {
                    saldo += valor;
                    printf("Dep�sito realizado com sucesso!\n");
                } else {
                    printf("Valor inv�lido para dep�sito.\n");
                }
                break;
            }
            case 2: { 
                double valor;
                printf("Digite o valor do saque: R$ ");
                scanf("%lf", &valor);
                if (valor > 0 && valor <= saldo) {
                    saldo -= valor;
                    printf("Saque realizado com sucesso!\n");
                } else if (valor > saldo) {
                    printf("Saldo insuficiente para realizar o saque.\n");
                } else {
                    printf("Valor inv�lido para saque.\n");
                }
                break;
            }
            case 3: 
                printf("Seu saldo atual �: R$ %.2f\n", saldo);
                break;
            case 4: 
                printf("Saindo do caixa eletr�nico. Obrigado!\n");
                break;
            default:
                printf("Op��o inv�lida! Tente novamente.\n");
        }
    } while (opcao != 4);

    return 0;
}
