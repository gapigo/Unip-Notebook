//  Escreve um programa que pergunte o salário do funcionário e calcule o valor do aumento. Para salários
// superiores a R$ 1250,00, calcule um aumento de 10%. Para os inferiores ou iguais, de 15%.

#include <stdio.h>
#include <stdlib.h>
#define TAMANHO_OUTPUT 100

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

int main() {
    printf("Programa calcula aumento de salários.\n");
    float sal = lerFloat("Digite um salário: ");
    printf("O salário com aumento ficará %.2f\n", sal > 1250 ? sal*1.1 : sal*1.15);
    return 0;
}