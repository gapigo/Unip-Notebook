// Escreva um programa no qual leia dois valores numéricos e imprima o maior deles. Caso ambos os
// números forem iguais, imprima na tela “números iguais”.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
    int int1 = lerInteiro("Digite um número inteiro: ");
    int int2 = lerInteiro("Agora digite outro: ");
    printf(int1 == int2 ? "Números iguais.\n" : "O maior número é %d.\n", int1 > int2 ? int1 : int2);
    return 0;
}