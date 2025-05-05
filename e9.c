#include <stdio.h>

int main() {
    float horasTrabalhadas, salarioHora, salarioTotal;

    printf("Horas trabalhadas no mes: ");
    scanf("%f", &horasTrabalhadas);
    printf("Salario por hora: ");
    scanf("%f", &salarioHora);

    if (horasTrabalhadas > 160) {
        float extras = horasTrabalhadas - 160;
        salarioTotal = 160 * salarioHora + extras * salarioHora * 1.5;
    } else {
        salarioTotal = horasTrabalhadas * salarioHora;
    }

    printf("Salario total: R$ %.2f\n", salarioTotal);
    return 0;
}
