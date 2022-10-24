// – Escreva um programa que exiba uma lista de opções (menu): adição, subtração, divisão, multiplicação
// e sair. Imprima a tabuada da operação escolhida. Repita até que a opção saída seja escolhida.
#include <stdio.h>
#include <stdlib.h>

void mostrarOpcoes()
{
    printf("Escolha uma opção:");
    printf("  + | adição \n");
    printf("  - | subtração\n");
    printf("  x | multiplicação\n");
    printf("  / | divisão\n");
    printf("  q | sair\n");
    printf(">> ");
}

void mostrarTabuada(int operacao, int operando)
{
    for (int i = 1; i <= 10; i++)
    {
        switch (operacao)
        {
        case 1:
            printf("%d + %d = %d\n", operando, i, operando + i);
            break;
        case 2:
            printf("%d - %d = %d\n", operando, i, operando - i);
            break;
        case 3:
            printf("%d x %d = %d\n", operando, i, operando * i);
            break;
        case 4:
            printf("%d ÷ %d = %d\n", operando, i, operando / i);
            break;
        }
    }
}

int main()
{
    char opc;
    int num;
    do
    {
        printf("Programa tabuada\n");
        printf("Insira um número inteiro: ");
        scanf("%d", &num);
        mostrarOpcoes();
        scanf(" %c", &opc);
        switch (opc)
        {
        case '+':
            mostrarTabuada(1, num);
            break;
        case '-':
            mostrarTabuada(2, num);
            break;
        case 'x':
            mostrarTabuada(3, num);
            break;
        case '/':
            mostrarTabuada(4, num);
            break;
        default:
            printf("Opção inválida, tente novamente.\n");
            break;
        }

        printf("(Digite nada para continuar e 'q' para sair) \n>> ");
        scanf(" %c", &opc);
#ifdef _WIN32
        system("cls");
#else
        system("clear");
#endif

    } while (opc != 'q' && opc + 32 != 'q');
    return 0;
}