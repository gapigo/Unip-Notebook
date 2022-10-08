// Escreva um programa que pergunte a velocidade do carro de um usuário. Caso ultrapasse 80 km/h,
// exiba uma mensagem dizendo que o usuário foi multado. Neste caso, exiba o valor da multa, cobrando R$
// 5,00 por km acima de 80 km/h

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
    printf("Programa calcula multas.");
    float vel = lerFloat("Insira o valor da velocidade: ");
    float valorMulta = (vel - 80) * 5;
    if (valorMulta <= 0) printf("Você não foi multado :3\n");
    else printf("Você ultrapassou o limite permitido e terá que pagar R$%.2f\n", valorMulta);
    return 0;
}