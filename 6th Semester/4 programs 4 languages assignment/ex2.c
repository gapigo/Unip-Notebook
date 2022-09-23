#include <stdio.h>

void main() {
    float peso, altura, imc;
    printf("Exemplo: 86.4 195\n");
    printf("Insira seu peso em kg: ");
    scanf("%f", &peso);
    printf("Insira seu altura em cm: ");
    scanf("%f", &altura);
    altura = altura / 100;
    imc = peso / (altura * altura);

    printf("Seu IMC calculado foi %.2f\nDe acordo a OMS, sua classificação é: ", imc);
    if (imc < 18.5) {printf("Abaixo do peso normal\n"); return;}
    if (imc < 24.9) {printf("Peso normal\n"); return;}
    if (imc < 29.9) {printf("Excesso de peso\n"); return;}
    if (imc < 34.9) {printf("Obesidade classe I\n"); return;}
    if (imc < 39.9) {printf("Obesidade classe II\n"); return;}
    printf("Obesidade classe III\n");
}