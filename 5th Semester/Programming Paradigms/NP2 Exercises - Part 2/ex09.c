// Escreva um programa que leia dois números. Imprima a divisão inteira do primeiro pelo segundo, assim
// como o resto da divisão. Utilize apenas os operadores de soma e subtração para calcular o resultado.
// Lembre-se de que podemos entender o quociente da divisão de dois números como a quantidade de vezes que
// podemos retirar o divisor do dividendo. Logo, 20 ÷ 4 = 5, uma vez que podemos subtrair 4 cinco vezes de
// 20.

#include <stdio.h>

int main()
{
    int num1, num2, aux, negativo = 0, resultado = 0, resto = 0;
    int anum1, anum2;
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    printf("Digite o segundo número: ");
    scanf("%d", &num2);
    anum1 = num1;
    anum2 = num2;
    if (num1 < 0 && num2 < 0)
    {
        num1 = -num1;
        num2 = -num2;
    }
    else
    {
        if (num1 < 0 || num2 < 0)
        {
            negativo = 1;
            if (num1 < 0)
                num1 = -num1;
            else
                num2 = -num2;
        }
    }
    aux = num1;

    while (aux - num2 >= 0)
    {
        aux = aux - num2;
        resultado++;
    }
    resto = -(0 - aux);

    printf("%d ÷ %d = %d e resto %d", anum1, anum2, negativo ? -resultado : resultado, resto);

    return 0;
}