#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
    setlocale(LC_ALL, "Portuguese");

    int limitePrimo;
    int ehPrimo;
    printf("Até que número você quer ver os primos? ");
    scanf("%d", &limitePrimo);
    for (int numAtual = 2; numAtual <= limitePrimo; numAtual++) {
        ehPrimo = 1;
        for (int i = 2; i <= numAtual / 2; i++) {
            if (numAtual % i == 0) ehPrimo = 0;
        }
        if (ehPrimo) printf("%d ", numAtual);
    }
    return 0;
}
