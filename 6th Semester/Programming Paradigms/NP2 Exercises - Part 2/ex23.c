// Escreva um programa que leia um numero e verifique se é ou não um numero primo. Para fazer essa
// verificação, calcule o resto da divisão do numero por 2 e depois por todos os números impares até o numero
// lido. Se o resto de uma dessas divisões for igual a zero, o numero não é primo. Observe que 0 e 1 não são
// primos e que 2 é o único número primo que é par.

#include <stdio.h>

int main()
{
    int num;
    printf("Digite um número inteiro para conferir se ele é primo: ");
    scanf("%i", &num);
    num = num < 0 ? -num : num;
    int i = 1;
    do
    {
        if ((i != 1 && num % i == 0) || num < 2 || (num != 2 && num % 2 == 0))
        {
            printf("Não é primo");
            return 0;
        }
        i += 2;
    } while (i <= (num / 2) + 1);
    printf("É primo");
    return 0;
}
