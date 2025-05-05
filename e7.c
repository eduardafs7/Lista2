#include <stdio.h>

int main() {
    int a, b;
    printf("Digite dois valores diferentes: ");
    scanf("%d %d", &a, &b);

    if (a < b)
        printf("Ordem crescente: %d %d\n", a, b);
    else
        printf("Ordem crescente: %d %d\n", b, a);

    return 0;
}
