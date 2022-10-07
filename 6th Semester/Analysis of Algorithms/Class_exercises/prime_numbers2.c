#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int ehPrimo(int num) {
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

int main(int argc, char *argv[]) {
    setlocale(LC_ALL, "Portuguese");

    int limitePrimo;
    printf("Até que número você quer ver os primos? ");
    scanf("%d", &limitePrimo);
    for (int numAtual = 2; numAtual <= limitePrimo; numAtual++) {
        if (ehPrimo(numAtual)) printf("%d ", numAtual);
    }
    return 0;
}
