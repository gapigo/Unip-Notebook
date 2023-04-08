// – Escreva um programa que exiba a tabuada do número digitado de 0 a 10.
#include <stdio.h>

int main()
{
    int tabuada;
    printf("Qual número deseja consultar a tabuada? ");
    scanf("%d", &tabuada);
    for (int i = 0; i <= 10; i++)
        printf("%d x %d = %d\n", tabuada, i, i * tabuada);
    return 0;
}