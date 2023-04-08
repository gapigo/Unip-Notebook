// Escreva um programa que corrija um teste de múltiplas escolhas de três questões. A resposta da
// primeira questão a resposta é “b”; da segunda, “a”; e da terceira, “d”. O programa conta um ponto a cada
// resposta correta. Considere a possibilidade do programa aceitar respostas com letra maiúsculas e minúsculas
// em todas as questões.

#include <stdio.h>
#include <string.h>

int main()
{
    char respostas[] = "bad";
    int nota = 0;
    char assinalada;

    printf("Programa prova, insira o gabarito da\n");

    for (int i = 0; i < strlen(respostas); i++)
    {
        printf("Questão %d: ", i + 1);
        scanf(" %c", &assinalada);
        if (assinalada == respostas[i] || assinalada + 32 == respostas[i])
            nota++;
    }
    printf("Você tirou %d/3\n", nota);
    if (nota == 3)
        printf("Parabéns!");
    else if (nota == 2)
        printf("Bom.");
    else if (nota == 1)
        printf("Tem que melhorar.");
    else
        printf("Horroroso!!!");
    return 0;
}