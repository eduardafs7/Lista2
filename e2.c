#include <stdio.h>

int main() {
    int valor;
    printf("Digite um valor: ");
    scanf("%d", &valor);

    if (valor >= 0)
        printf("Positivo\n");
    else
        printf("Negativo\n");

    return 0;
}
