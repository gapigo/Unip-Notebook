// Escreva um programa que leia um valor e que imprima a quantidade de cédulas necessárias para pagar
// esse mesmo valor. Para simplificar utilize números inteiros e com cédulas de R$50, R$20, R$10, R$4 e R$1.
// Após concluído, testes com os seguintes valores: 50, 745, 384, 2, 7 e 1.

#include <stdio.h>

int main()
{
    int cedulas[] = {50, 20, 10, 4, 1};
    float valor;
    int aux;
    printf("Digite um valor em R$");
    scanf("%f", &valor);
    aux = (int)valor;
    printf("O valor informado pode ser pago em ");
    if (aux <= 0)
        printf("0 cédulas");
    else
        for (int i = 0; i < sizeof(cedulas) / sizeof(cedulas[0]) && aux > 0; i++)
        {
            if (aux / cedulas[i] > 0)
            {
                printf("\n%d cédulas de R$%d,00", aux / cedulas[i], cedulas[i]);
                aux = aux % cedulas[i];
            }
        }
    return 0;
}