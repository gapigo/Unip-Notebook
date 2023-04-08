// 10–Escreva um programa que calcule o preço a pagar pelo fornecimento de energia elétrica. 
// Pergunte a quantidade de kWh consumida e o tipo de instalação: R para residencial, I para industrial e C para comércios.
// Calcule o preço a pagar de acordo com a tabela a seguir:
//  - Residencial: Até 500 kWh –R$ 0,40 e acima de 500 kWh –R$ 0,65. 
//  - Comercial: Até 1000 kWh –R$ 0,55 e acima de 1000 kWh –R$ 0,60. 
//  - Industrial: Até 5000 kWh –R$ 0,55 e acima de 5000 kWh –R$ 0,60. 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAMANHO_OUTPUT 20

float lerFloat(char mensagem[]) {
    char output[TAMANHO_OUTPUT];
    float numFloat;
    while(1) {
        printf("%s", mensagem);
        fgets(output, TAMANHO_OUTPUT, stdin);
        if (!((numFloat = atof(output)) == 0 && output[0] != '0'))
            return numFloat;
        printf("Por favor insira um número real válido!\n");
    }
}

char lerTipo(char mensagem[]) {
    char output[TAMANHO_OUTPUT];
    float numFloat;
    while(1) {
        printf("%s", mensagem);
        fgets(output, TAMANHO_OUTPUT, stdin);
        if(output[0] == 'C' || output[0] == 'c') return 'C';
        if(output[0] == 'I' || output[0] == 'i') return 'I';
        if(output[0] == 'R' || output[0] == 'r') return 'R';
        printf("Valor inválido, insira somente [R, I ou C] por favor.\n\n");
    }
}

int main() {
    printf("Programa calcula energia elétrica\n");
    float gasto = lerFloat("Informe em kWh o gasto de energia: ");
    char tipo = lerTipo("Informe o tipo de instalação\nR - Residencial\nI - Industrial\nC - Comercios\n>> ");
    float preco;
    if (tipo == 'R') preco = gasto <= 500 ? gasto * 0.4 : gasto * 0.65;
    else if (tipo == 'C') preco = gasto <= 1000 ? gasto * 0.55 : gasto * 0.6;
    else preco = gasto <= 5000 ? gasto * 0.55 : gasto * 0.6;
    printf("O preço da sua conta de luz foi R$%.2f\n", preco);

    return 0;
}