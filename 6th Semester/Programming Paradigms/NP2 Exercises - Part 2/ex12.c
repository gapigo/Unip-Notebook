// Altere o programa anterior de forma a perguntar também o valor depositado mensalmente. Esse valor
// será depositado no inicio de cada mês, e você deve considera-lo para o calculo de juros do mês seguinte

// – Escreva um programa que pergunte o deposito inicial e a taxa de juros de uma poupança. Exiba os
// valores mês a mês para os 24 primeiros meses. Escreva o total ganho com juros no período.

#include <stdio.h>
#include <stdlib.h>
#define TAMANHO_OUTPUT 100

float lerFloat(char mensagem[])
{
    char output[TAMANHO_OUTPUT];
    float numFloat;
    while (1)
    {
        printf("%s", mensagem);
        fgets(output, TAMANHO_OUTPUT, stdin);
        if (!((numFloat = atof(output)) == 0 && output[0] != '0'))
            return numFloat;
        printf("Por favor insira um número real válido!\n");
    }
}

int main()
{
    float montante, deposito, taxaJuros;
    montante = lerFloat("Digite o depósito inicial: ");
    taxaJuros = lerFloat("Agora informe a taxa de juros (%): ");
    taxaJuros /= 100;
    char meses[12][20] = {"Jan", "Fev", "Mar", "Abr", "Mai", "Jun", "Jul", "Ago", "Set", "Out", "Nov", "Dez"};
    char output[TAMANHO_OUTPUT];
    for (int i = 0; i < 24; i++)
    {
        montante *= (1 + taxaJuros);
        printf("%s-%d: R$%.2f", meses[i % 12], (i / 12) + 1, montante);
        printf(" | Depositar este mês? (Branco para não) R$");
        fgets(output, TAMANHO_OUTPUT, stdin);
        fflush(stdin);
        if (!((deposito = atof(output)) == 0 && output[0] != '0'))
            montante += deposito;
    }
    return 0;
}