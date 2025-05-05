#include <stdio.h>

int main() {
    float salarioFixo, vendas, salarioFinal;

    printf("Salario fixo: ");
    scanf("%f", &salarioFixo);
    printf("Valor das vendas: ");
    scanf("%f", &vendas);

    if (vendas <= 1500)
        salarioFinal = salarioFixo + vendas * 0.03;
    else
        salarioFinal = salarioFixo + 1500 * 0.03 + (vendas - 1500) * 0.05;

    printf("Salario total: R$ %.2f\n", salarioFinal);
    return 0;
}
