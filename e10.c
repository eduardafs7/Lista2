#include <stdio.h>

int main() {
    char sexo;
    float altura, pesoIdeal;

    printf("Sexo (M/F): ");
    scanf(" %c", &sexo);
    printf("Altura (em metros): ");
    scanf("%f", &altura);

    if (sexo == 'M' || sexo == 'm')
        pesoIdeal = (72.7 * altura) - 58;
    else
        pesoIdeal = (62.1 * altura) - 44.7;

    printf("Peso ideal: %.2f kg\n", pesoIdeal);
    return 0;
}
