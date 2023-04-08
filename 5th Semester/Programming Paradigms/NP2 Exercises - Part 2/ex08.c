// Escreva um programa que leia dois números. Imprima o resultado da multiplicação do primeiro pelo
// segundo. Utilize apenas os operadores de soma e subtração para calcular o resultado. Lembre-se de que
// podemos entender a multiplicação de dois números como a soma sucessivas de um deles. Assim, 4 x 5 = 5
// + 5 + 5 + 5 = 4 + 4 + 4 + 4 + 4.

#include <stdio.h>

int main()
{
    int num1, num2, negativo = 0, res = 0;
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    printf("Digite o segundo número: ");
    scanf("%d", &num2);
    if (num2 < 0)
    {
        negativo = 1;
        num2 = -num2;
    }

    for (int i = 0; i < num2; i++)
        res += negativo ? -num1 : num1;
    printf("%d x %d = %d", num1, num2, res);
    return 0;
}