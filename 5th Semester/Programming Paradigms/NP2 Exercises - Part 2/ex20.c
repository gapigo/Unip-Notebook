// No programa da questão 19, o que acontece se digitarmos 0.001 no programa anterior? Caso ele não
// funcione, altere-o de forma a corrigir esse problema.

// – Modifique o programa da questão 16 para aceitar valores decimais, ou seja, também contar moedas de
// R$0.01, R$0.02, R$0.05, R$0.10, e R$0.50.

#include <stdio.h>

void fatorador(float valor, int cedulas[], int sizeArray)
{
    valor += 0.0005; // Retira aproximação ruim
    int moedas = valor < 1 ? 1 : 0;
    int aux = moedas ? (int)(valor * 100) : (int)valor;
    for (int i = 0; i < sizeArray && aux > 0; i++)
    {
        if (aux / cedulas[i] > 0)
        {
            if (moedas)
                printf("\n%d moedas de R$%.2f", aux / cedulas[i], (float)cedulas[i] / 100);
            else
                printf("\n%d cédulas de R$%d,00", aux / cedulas[i], cedulas[i]);
            aux = aux % cedulas[i];
        }
    }
}

int main()
{
    float valor;

    printf("Digite um valor em R$");
    scanf("%f", &valor);

    printf("O valor informado pode ser pago em ");
    if (valor > 0 && valor < 0.01)
        printf("1 moeda de R$0.01");
    else if (valor <= 0)
        printf("0 cédulas");
    else
    {
        int cedulas[] = {50, 20, 10, 4, 1};
        int moedas[] = {50, 10, 5, 2, 1};

        fatorador(valor, cedulas, 5);
        fatorador(valor - (int)valor, moedas, 5);
    }

    return 0;
}