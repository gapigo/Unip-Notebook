// Escreva um programa que mostre os números de 1 a 100, utilizando o comando while.

#include <stdio.h>

int main()
{
    int i = 0;
    while (i++ < 100)
    {
        printf("%d", i);
        if (i < 100)
            printf(", ");
    }
    return 0;
}
