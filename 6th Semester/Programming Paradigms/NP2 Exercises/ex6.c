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
    printf("Programa descobrir valor da viagem.\n");
    float distancia = lerFloat("Insira a distância que se deseja percorrer em kilometros: ");
    printf("O valor da passagem da sua viagem é R$ R$%.2f\n", distancia > 200 ? distancia*0.45 : distancia*0.5);
    return 0;
}