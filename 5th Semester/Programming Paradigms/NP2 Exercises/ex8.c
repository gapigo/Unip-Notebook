// Escreva um programa que leia dois números e que pergunte qual operação você deseja realizar. Você
// deve poder calcular soma (+), subtração (-), multiplicação (*) e divisão (/). Exiba o resultado da operação
// solicitada.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM_EXPRESSAO 20

const char* tirarEspacos(char expressao[]) {
    char expressaoAux[TAM_EXPRESSAO] = {};
    char *str = expressaoAux;
    int j = 0;
    for (int i = 0; expressao[i] != '\0'; i++) {
        if (expressao[i] != ' ' && expressao[i] != '\0' && expressao[i] != '\n') expressaoAux[j++] = expressao[i];
    }
    return str;
}

int main() {
    printf("Programa calculadora.\n");
    printf("Adição: NUM1 + NUM2\n");
    printf("Subtração: NUM1 - NUM2\n");
    printf("Multiplicação: NUM1 * NUM2\n");
    printf("Divisão: NUM1 / NUM2\n");
    printf("Sair: Espaço vazio");

    float num1, num2, res;
    char opc;
    char expressao[TAM_EXPRESSAO];
    while (1) {
        printf("\n>> ");
        fgets(expressao, TAM_EXPRESSAO, stdin);
        strcpy(expressao, tirarEspacos(expressao));
        if (expressao[0] == '\0') break;
        sscanf(expressao, "%f%c%f", &num1, &opc, &num2);
        switch (opc)
        {
        case '+':
            res = num1 + num2;
            break;
        case '-':
            res = num1 - num2;
            break;
        case '*':
            res = num1 * num2;
            break;
        case 'x':
            res = num1 * num2;
            break;
        case '/':
            res = num1 / num2;
            break;
        default:
            opc = 'e';
            break;
        }
        if (opc == 'e') printf("Expressão inválida! Tente novamente.\n");
        else printf("%.3f %c %.3f = %.3f", num1, opc == '*' ? 'x' : opc, num2, res);
    }
    return 0;
}