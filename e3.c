#include <stdio.h>

int main() {
    int quantidade;
    float total;

    printf("Quantidade de macas: ");
    scanf("%d", &quantidade);

    if (quantidade < 12)
        total = quantidade * 1.30;
    else
        total = quantidade * 1.00;

    printf("Total a pagar: R$ %.2f\n", total);
    return 0;
}
