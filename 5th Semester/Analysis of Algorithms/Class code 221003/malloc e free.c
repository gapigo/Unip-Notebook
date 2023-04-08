#include <stdio.h>
#include <stdlib.h>

struct Pessoa {
    int idade;
    char *nome;
};

int main(){
    struct Pessoa *ponteiro;
    ponteiro = malloc(sizeof(struct Pessoa));
    ponteiro -> idade = 20;
    ponteiro -> nome = "Emilly";
    printf("Exibindo: \n");
    printf("\nNome: %s, Idade: %d", ponteiro->nome, ponteiro->idade);
    free(ponteiro);
    return 0;
}