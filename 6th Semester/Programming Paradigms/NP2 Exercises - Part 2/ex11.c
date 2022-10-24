// – Escreva um programa que pergunte o deposito inicial e a taxa de juros de uma poupança. Exiba os
// valores mês a mês para os 24 primeiros meses. Escreva o total ganho com juros no período.

#include <stdio.h>

int main()
{
    float montante, taxaJuros;
    printf("Digite o depósito inicial: ");
    scanf("%f", &montante);
    printf("Agora informe a taxa de juros (%): ");
    scanf("%f", &taxaJuros);
    taxaJuros /= 100;
    char meses[12][20] = {"Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};
    for (int i = 0; i < 24; i++)
    {
        printf("%s ", meses[i % 12]);
        printf("ano %d ", (i / 12) + 1);
        printf(": R$%.2f\n", montante *= (1 + taxaJuros));
    }
    return 0;
}