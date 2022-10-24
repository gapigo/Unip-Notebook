// Faça um programa para escrever a contagem regressiva do lançamento de um foguete. O programa
// deve imprimir 10, 9, 8, ..., 1, 0 e Fogo! na tela.

#include <stdio.h>

void main()
{
    for (int i = 10; i >= 0; i--)
    {
        printf("%d", i);
        if (i != 0)
            printf(", ");
    }
    printf(" e Fogo!");
}