// Escreva um programa que pergunte o valor inicial de uma divida e o juros mensal. Pergunte também o
// valor mensal que será pago. Imprima o número de meses para que a divida seja paga, o total pago e o total
// de juros pago.

#include <stdio.h>

int main()
{
    float juros, valor_inicial, valor_mensal;
    printf("Informe o valor inicial da dívida: R$");
    scanf("%f", &valor_inicial);

    printf("Informe o valor dos juros da dívida (%): ");
    scanf("%f", &juros);

    printf("Informe qual é o valor mensal que será pago: R$");
    scanf("%f", &valor_mensal);

    float montante_divida = valor_inicial;
    juros /= 100;
    if (montante_divida * (juros) > valor_mensal)
        printf("Não é possível pagar a dívida com este valor. É necessário um valor maior");
    else
    {
        int meses = 0;
        float total_pago = 0;
        float total_em_juros = 0;
        while (montante_divida > 0)
        {
            montante_divida *= (1 + juros);
            montante_divida -= valor_mensal;
            if (montante_divida < 0)
                total_pago += valor_mensal - montante_divida;
            else
                total_pago += valor_mensal;
            meses++;
        }
        printf("A dívida será paga em %d meses, com o total de R$%.2f sendo R$%.2f em juros", meses, total_pago, total_pago - valor_inicial);
    }

    return 0;
}