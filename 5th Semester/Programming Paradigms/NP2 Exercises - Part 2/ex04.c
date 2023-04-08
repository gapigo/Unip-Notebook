// Escreva um programa que mostre os números de 1 até um numero digitado pelo usuário, mas, apenas
// os números impares.

#include <stdio.h>

void main()
{
    int range;
    printf("Até que número? ");
    scanf("%d", &range);
    for (int i = 1; i <= range; i += 2)
        printf("%d ", i);
}