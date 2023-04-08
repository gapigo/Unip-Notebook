// Escreva um programa que verifique se um numero é palíndromo. Um número palíndromo se continua
// o mesmo caso seus dígitos sejam invertidos. Exemplo: 454, 10501.

#include <stdio.h>

int num_digitos(int num)
{
    num = num < 0 ? -num : num;
    if (num < 10)
        return 1;
    if (num < 100)
        return 2;
    if (num < 1000)
        return 3;
    if (num < 10000)
        return 4;
    if (num < 100000)
        return 5;
    if (num < 1000000)
        return 6;
    if (num < 10000000)
        return 7;
    if (num < 100000000)
        return 8;
    return -1;
}

int potenciaDe10(int expoente)
{
    int res = 1;
    for (int i = 0; i < expoente; i++)
    {
        res *= 10;
    }
    // printf("i → %d", i);
    return res;
}

int main()
{
    // int num1 = 0;
    //  printf("Insira um número e confira se ele é palíndromo: ");
    int num1, num2, aux;
    printf("Insira o primeiro número: ");
    scanf("%d", &num1);
    printf("Leu\n");
    int d = num_digitos(num1);
    printf("d %d Pot10 %d", d, potenciaDe10(d - 1));
    int digitos[d];
    for (int i = 0, divisor = potenciaDe10(d - 1), aux = num1; i < d; i++, divisor /= 10)
    {
        // digitos[i] = aux / divisor;
        //  aux -= (aux / divisor) * potenciaDe10(d - 1 - i);
    }

    // for (int i = d - 1; i >= 0; i--)
    // {
    //     printf("%d ", digitos[i]);
    // }

    // for (int i = 0, j = d - 1; i < d / 2; i++, j--)
    // {
    //     if (digitos[i] != digitos[j])
    //     {
    //         printf("Não é palíndromo");
    //         return 0;
    //     }
    // }

    // printf("É palíndromo");
    return 0;
}