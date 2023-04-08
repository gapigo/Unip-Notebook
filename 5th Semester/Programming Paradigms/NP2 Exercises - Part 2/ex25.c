// Escreva um programa que calcule a raiz quadrada de um número. Utilize o método de Newton para
// obter um resultado aproximado. Sendo n o numero a obter a raiz quadrada, considera a base b=2. Calcule
// p usando a formula p=(b+(n/b))/2. Agora, calcule o quadrado de p. A cada passo, faça b=p e recalcule p
// usando a formula apresentada. Pare quando a diferença absoluta entre n e o quadrado de p for menor que
// 0,001.

#include <stdio.h>

int main()
{
    float p, b, n, d;
    printf("Informe o número que se deseja consultar a raiz quadrada: ");
    scanf("%f", &n);
    b = 2;
    do
    {
        p = (b + (n / b)) / 2;
        b = p;
        d = n - p * p;
        d = d < 0 ? -d : d;
        // printf("%f %f %f %f\n", n, p, b, d);
    } while (d > 0.001);
    printf("√%.0f ≅ %.4f", n, p);
    return 0;
}