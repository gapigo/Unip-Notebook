#include <stdio.h>
#include <string.h>
#define n 3
struct item
{
    char chave[10];
    char conteudo[20];
};

int main()
{
    struct item vetor[3];
    // vetor[0].chave = "janela";
    // vetor[0].conteudo = "aberta";
    strcpy(vetor[0].chave, "janela");
    strcpy(vetor[0].conteudo, "aberta");
    printf("%s", vetor[0].chave);
    printf("%s", vetor[0].conteudo);

    return 0;
}