// Modifique o programa da questão 16 para trabalhar com nota de R$ 100,00

// Como é bom programar dinamicamente ^^

#include <stdio.h>

int main()
{
    int cedulas[] = {100, 50, 20, 10, 4, 1};
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