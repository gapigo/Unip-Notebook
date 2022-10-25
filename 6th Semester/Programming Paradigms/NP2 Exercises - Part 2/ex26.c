// Escreva um programa que calcule o resto da divisão inteira entre dois números. Utilize apenas as
// operações de soma e subtração para calcular o resultado.

#include <stdio.h>

int main()
{
    int num1, num2, aux;
    printf("Insira o primeiro número: ");
    scanf("%d", &num1);
    aux = num1;
    printf("Insira o segundo número: ");
    scanf("%d", &num2);

    int resto = 0;
    int resultado = 0;
    while (aux - num2 >= 0)
    {
        aux -= num2;
        resultado++;
    };
    resto = aux;
    printf("%d / %d tem resto %d e, só por curiosidade, dá %d / %d = %d", num1, num2, resto, num1, num2, resultado);
    return 0;
}