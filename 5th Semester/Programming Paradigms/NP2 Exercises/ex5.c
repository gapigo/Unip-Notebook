//  – Execute o programa no qual o usuário entre com a idade do carro e caso o valor seja menor ou igual a
// 3 anos imprima “Seu carro é novo”, caso contrario “Seu carro é velho”
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
    printf(lerInteiro("Digite a idade do seu carro: ") > 3 ? "Seu carro é velho\n" : "Seu carro é novo\n");
    return 0;
}