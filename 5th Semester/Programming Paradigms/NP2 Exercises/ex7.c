//  Escreva um programa que calcular a categoria de um produto e determine o preço pela tabela: Categoria
// 1 valor de R$ 10,00; Categoria 2 valor de R$ 15,00; Categoria 3 valor de R$ 19,00; Categoria 4 valor de R$
// 23,00 e Categoria 5 valor de R$ 27,00.
#include <stdio.h>
#include <stdlib.h>

#define TAMANHO_OUTPUT 100

int lerInteiro(char mensagem[]) {
    char output[TAMANHO_OUTPUT];
    int inteiro;
    while(1) {
        printf("%s", mensagem);
        fgets(output, TAMANHO_OUTPUT, stdin);
        if (!((inteiro = atoi(output)) == 0 && output[0] != '0'))
            return inteiro;
        printf("Por favor insira um número inteiro válido!\n");
    }
}

int main() {
    printf("Programa consulta de preço da categoria do produto.\n");
    int categoria = lerInteiro("Insira o número de categoria do produto: ");
    printf("O produto de categoria %d ", categoria);
    switch (categoria) {
        case 1:
            printf("custa: R$10,00\n");
            break;
        case 2:
            printf("custa: R$15,00\n");
            break;
        case 3:
            printf("custa: R$19,00\n");
            break;
        case 4:
            printf("custa: R$23,00\n");
            break;
        case 5:
            printf("custa: R$27,00\n");
            break;
        default:
            printf("não foi encontrado.\n");
            break;
    }
    return 0;
}