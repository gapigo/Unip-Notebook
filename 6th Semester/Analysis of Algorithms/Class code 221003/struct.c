#include <stdio.h>
#include <locale.h>

struct Pessoa
{
    int idade;
    char *nome;
    float peso;
    float altura;
    char *mensagem;
};

int main(int argc, char *argv[]) {
    setlocale(LC_ALL, "Portuguese");
    struct Pessoa p1, p2;
    p1.nome = "Maria";
    p1.idade = 25;
    p1.peso = 62.5;
    p1.altura = 1.73;
    p1.mensagem = "Suave";
    p2.nome = "Miguel";
    p2.idade = 16;
    p2.peso = 100.5;
    p2.altura = 1.95;
    p2.mensagem = "Blz";
    printf("\n Pessoa 1: nome = %s \t idade = %d \t peso = %.2f \t altura = %.2 \t mensagem = %s\n", p1.nome, p1.idade, p1.peso, p1.altura, p1.mensagem);
    printf("\n Pessoa 2: nome = %s \t idade = %d \t peso = %.2f \t altura = %.2 \t mensagem = %s\n", p2.nome, p2.idade, p2.peso, p2.altura, p2.mensagem);
    return 0;
}
