#include <stdio.h>

int main() {
    float nota1, nota2, media;

    printf("Digite a nota 1: ");
    scanf("%f", &nota1);
    printf("Digite a nota 2: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;
    printf("Media: %.2f\n", media);

    if (media >= 7)
        printf("Aprovado\n");
    else
        printf("Reprovado\n");

    return 0;
}
