// Reescreva o programa da questão 16 de forma a continuar executando até que o valor digitado seja 0.
// Utilize repetições aninhadas.

#include <stdio.h>

int main()
{
    int cedulas[] = {50, 20, 10, 4, 1};
    float valor;
    int aux;
    printf("Digite um valor em R$");
    scanf("%f", &valor);
    aux = (int)valor;
    int atual = 0;
    int vezes = 0;
    while (aux > 0)
    {
        vezes = 0;
        while (aux - cedulas[atual] >= 0)
        {
            aux -= cedulas[atual];
            vezes++;
        }
        if (vezes > 0)
            printf("\n%d cédulas de R$%d,00", vezes, cedulas[atual]);
        atual++;
    }

    return 0;
}