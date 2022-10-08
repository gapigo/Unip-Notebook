// Escreva um programa que leia três números e que imprima o maior e o menor
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAMANHO_OUTPUT 100
#define QUANTIDADE_NUMS 3

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
    printf("Programa compara números (inteiros)\n");
    int maior, menor, numInteiro, diferentes;
    char mensagem[40];
    for (int i = 0; i < QUANTIDADE_NUMS; i++) {
        sprintf(mensagem, "Digite o número %i: ", i+1);
        numInteiro = lerInteiro(mensagem);
        if (i == 0) {
            maior = numInteiro;
            menor = numInteiro;
            diferentes = 0;
        }
        if (maior > numInteiro) {
            maior = numInteiro;
            diferentes = 1;
        }
        else if (menor < numInteiro) {
            maior = numInteiro;
            diferentes = 1;
        }
    }
    if (!diferentes) printf("Não tem menor ou maior, todos os números são %d iguais.\n", numInteiro);
    else {
        printf("O menor número é %d e o maior é %d.\n", menor, maior);
    }
    return 0;
}