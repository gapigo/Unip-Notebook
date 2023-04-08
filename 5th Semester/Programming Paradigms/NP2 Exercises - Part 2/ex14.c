// Escreva um programa que leia números inteiros do teclado. O programa deve ler os números até que
// o usuário digite 0 (zero). No final da execução, exiba a quantidade de números digitados, assim como a soma
// e a média aritmética.

#include <stdio.h>

int main()
{
    int num, quantidade = 0, total = 0;
    do
    {
        printf("(0 para parar)\nInsira numeros: ");
        scanf("%i", &num);
        total += num;
        quantidade++;
    } while (num != 0);
    printf("Você inseriu %i números e estes somam %i", quantidade, total);
    return 0;
}