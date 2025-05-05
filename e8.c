#include <stdio.h>

int main() {
    int inicio, fim, duracao;

    printf("Hora de inicio do jogo (0-23): ");
    scanf("%d", &inicio);
    printf("Hora de fim do jogo (0-23): ");
    scanf("%d", &fim);

    if (fim >= inicio)
        duracao = fim - inicio;
    else
        duracao = 24 - inicio + fim;

    printf("Duracao do jogo: %d horas\n", duracao);
    return 0;
}
