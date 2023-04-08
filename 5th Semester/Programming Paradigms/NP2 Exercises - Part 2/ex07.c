// Escreva um programa que exiba a tabuada do número digitado, onde o usuário possa escolher o inicio
// e o fim da tabuada.

#include <stdio.h>

int main()
{
    int inicio, fim, tabuada;
    printf("Digite o numero que se deseja mostrar a tabuada: ");
    scanf("%d", &tabuada);
    printf("Digite o inicio da tabuada: ");
    scanf("%d", &inicio);
    printf("Digite o fim da tabuada: ");
    scanf("%d", &fim);
    for (int i = inicio; i <= fim; i++)
        printf("%d x %d = %d\n", tabuada, i, i * tabuada);
    return 0;
}