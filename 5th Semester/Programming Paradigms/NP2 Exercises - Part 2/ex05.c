// Escreva um programa que mostre os números de 1 até o numero digitado pelo usuário, mas, apenas
// os números múltiplos de 3.

#include <stdio.h>

void main()
{
    int range;
    printf("Até que número? ");
    scanf("%d", &range);

    for (int i = 1; i <= range; i++)
    {
        if (i % 3 == 0)
            printf("%d ", i);
    }
}