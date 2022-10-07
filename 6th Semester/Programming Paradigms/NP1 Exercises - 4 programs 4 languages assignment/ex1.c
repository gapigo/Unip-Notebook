#include <stdio.h>

void main() {
    float vel, multa;
    printf("Qual a velocidade do carro: ");
    scanf("%f", &vel);
    multa = vel > 80 ? (vel-80)*5 : 0;
    if (!multa) printf("Velocidade abaixo de 80km/h. Você não foi multado (>ω<)\n");
    else printf("Velocidade acima do permitido!!!!! (# ﾟДﾟ)\nVocê pagará uma multa de R$%.2f\n", multa);
}