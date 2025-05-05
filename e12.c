#include <stdio.h>

int main() {
    int conta;
    float saldo, debito, credito, saldoAtual;

    printf("Numero da conta: ");
    scanf("%d", &conta);
    printf("Saldo: ");
    scanf("%f", &saldo);
    printf("Debito: ");
    scanf("%f", &debito);
    printf("Credito: ");
    scanf("%f", &credito);

    saldoAtual = saldo - debito + credito;
    printf("Saldo atual: R$ %.2f\n", saldoAtual);

    if (saldoAtual >= 0)
        printf("Saldo Positivo\n");
    else
        printf("Saldo Negativo\n");

    return 0;
}
