// Struc com gancho

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

struct Pessoa
{
    int idade;
    char *nome;
    float peso;
    struct Pessoa *proximo;
};

int main(int argc, char *argv[]) {
    setlocale(LC_ALL, "Portuguese");
    struct Pessoa p1, p2, p3;
    struct Pessoa *ponteiro;

    p1.nome = "Marcos";
    p1.idade = 47;
    p1.peso = 62.5;
    p1.proximo = &p2;

    p2.nome = "Gervasio";
    p2.idade = 21;
    p2.peso = 100.5;
    p2.proximo = &p3;

    p3.nome = "Elcio";
    p3.idade = 35;
    p3.peso = 50.5;
    p3.proximo = NULL;

    printf("\n Exibindo os elementos: \n\n");
    ponteiro = &p1;
    printf("\n Nome = %s", ponteiro->proximo->proximo->nome);
    do {
        printf("\n\nNome = %s\t Idade = %d \t Peso = %.2f \n", (*ponteiro).nome, (*ponteiro).idade, (*ponteiro).peso);
        ponteiro = (*ponteiro).proximo;
    
    } while(ponteiro != NULL);

    return 0;
}
