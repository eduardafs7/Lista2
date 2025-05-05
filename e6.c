#include <stdio.h>

int main() {
    int a, b;
    printf("Digite dois valores diferentes: ");
    scanf("%d %d", &a, &b);

    if (a > b)
        printf("Maior valor: %d\n", a);
    else
        printf("Maior valor: %d\n", b);

    return 0;
}
