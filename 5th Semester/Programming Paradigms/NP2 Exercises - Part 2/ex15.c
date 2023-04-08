// Escreva um programa para controlar uma pequena maquina registradora. Você solicita o usuário que
// digite o código do produto e a quantidade comprada. Utilize a tabela de código a seguir para obter o preço
// de cada produtor.
// • Código 1 – Preço R$ 0,50
// • Código 2 – Preço R$ 1,00
// • Código 4 – Preço R$ 4,00
// • Código 5 – Preço R$ 7,00
// • Código 9 – Preço R$ 8,00
// Seu programa deve exibir o total das compras depois que o usuário digitar 0. Quaisquer outros códigos
// devem gerar a mensagem de erro “Código Invalido”.

#include <stdio.h>
#include <stdlib.h>

float getPreco(char codigo)
{
    // float preco = 0;
    switch (codigo)
    {
    case '1':
        printf(" • Código 1 – Preço R$ 0,50\n\n");
        return 0.5;
    case '2':
        printf(" • Código 2 – Preço R$ 1,00\n\n");
        return 1.0;
    case '4':
        printf(" • Código 4 – Preço R$ 4,00\n\n");
        return 4.0;
    case '5':
        printf(" • Código 5 – Preço R$ 7,00\n\n");
        return 7.0;
    case '9':
        printf(" • Código 9 – Preço R$ 8,00\n\n");
        return 8.0;
    default:
        printf("Código inválido! Tente novamente.\n\n");
        return 0.0;
    }
}

int main()
{
    char codigo;
    float total;
    do
    {
        printf("Insira os produtos de códigos: 1, 2, 4, 5, 9 (0 para parar)");
        printf("\n>> ");
        scanf(" %c", &codigo);
#ifdef _WIN32 || _WIN64
        system("cls");
#else
        system("clear");
#endif
        total += getPreco(codigo);

    } while (codigo != '0');
    printf("O preço total dos produtos informados foi R$%.2f", total);

    return 0;
}