#include <stdio.h>

int main() {
    int anoAtual, anoNascimento, idade;

    printf("Ano atual: ");
    scanf("%d", &anoAtual);
    printf("Ano de nascimento: ");
    scanf("%d", &anoNascimento);

    idade = anoAtual - anoNascimento;

    if (idade >= 16)
        printf("Pode votar\n");
    else
        printf("Nao pode votar\n");

    return 0;
}
