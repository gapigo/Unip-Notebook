// Escreva um programa para aprovar o empréstimo bancário para compra de uma casa. O programa
// deve perguntar o valor da casa a comprar, o salário e a quantidade de anos a pagar. O valor da prestação 
// mensal não pode ser superior a 30% do salário. Calcule o valor da prestação como sendo o valor da casa a
// comprar dividido pelo numero de meses a pagar

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
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
    // Compilação do programa no linux: "gcc ex9.c -lm"
    printf("Programa aprova seguro.");
    float valorCasa = lerFloat("Insira o VALOR DA CASA a se comprar: ");
    float salario = lerFloat("Agora, por favor insira o valor do SALÁRIO: ");
    int anos = lerInteiro("Por fim, insira a quantidade de ANOS que se deseja quitar a dívida: ");
    float prestacao = valorCasa / (anos*12);
    if (prestacao > salario*0.3) {
        printf("Emprestimo recusado! O valor de R$%.2f da prestação é maior que R$%.2f correspondente a 30\% do salário.\n", prestacao, salario);
        printf("Por este valor, você precisaria de pelo menos %.0f anos para o empréstimo ser aprovado.\n", ceilf((valorCasa / (salario*3.6))));
        printf("Ou ganhar R$%.2f de salário.\n", prestacao/0.3);
    } else {
        printf("Emprestimo aprovado! Por causa do valor de R$%.2f da prestação ser menor que R$%.2f correspondente a 30\% do salário, você tem direito ao empréstimo.", prestacao, salario*0.3);
    }
    return 0;
}