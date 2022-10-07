#include <stdio.h>

void main() {
    float salario;
    printf("Insira o salário do funcionário: ");
    scanf("%f", &salario);
    printf("O salário com aumento ficou R$%.2f\n", salario > 1250 ? salario*1.1 : salario*1.15);
}