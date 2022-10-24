// – Modifique o programa anterior de forma a ler um numero n. Imprima os n primeiros números primos.

#include <stdio.h>

int ehPrimo(int num)
{
    int i = 1;
    do
    {
        if ((i != 1 && num % i == 0) || num < 2 || (num != 2 && num % 2 == 0))
        {
            return 0;
        }
        i += 2;
    } while (i <= (num / 2) + 1);
    return 1;
}
int main()
{
    int num;
    printf("Digite até quanto se quer conferir os números primos: ");
    scanf("%i", &num);
    num = num < 0 ? -num : num;
    for (int i = 0; i < num; i++)
        if (ehPrimo(i))
            printf("%d ", i);
    return 0;
}
