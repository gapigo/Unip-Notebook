/* 
Exemplo de implementação de Lista Ligada em Linguagem C
prof. Giovanni Rizzo
*/

#include <stdio.h> // Header file das principais funções de I/O
#include <stdlib.h> // Header file da biblioteca padrão da linguagem C
#include <conio.h> // Header file de funções auxiliares de I/O, como getch() e getche()
//#include <curses.h>
#include <ctype.h> // Header file com funções para caracteres. Como tolower() e toupper()

#define LIMITE_CARACTERES 30 // Limite de caracteres na string.

typedef struct { // Definição do tipo da lista ligada.
    char *nome; // Cada elemento possui uma string
    int id; // Cada elemento possui um número inteiro de ID
    struct Elemento *proximo; // Cada elemento possui um ponteiro para o próximo
} Elemento; // Nome do tipo do elemento.

// Função para ler nome formatado (somente letras) e número limitado de caracteres.
void ler_texto(char * texto) {
    int pos = 0; // Índice, ou posição do caractere na string.
    char caractere; // Caractere digitado.
    while (1) {
        caractere = getch(); // Aguarda um caractere ser digitado.

        // Se não ultrapassou o limite, e se o caractere for espaço ou letra:
        if (pos < LIMITE_CARACTERES && (caractere == ' ' ||
            ( tolower(caractere) >= 'a' && tolower( caractere) <= 'z')
        ))
        {
            putchar(caractere); // Imprime o caractere na tela.

            texto[pos++] = caractere; // Atribui à sua posição na string.
        }

        if (caractere == '\r') // Se Digitou ENTER:
        {
            texto[pos] = '\0'; // Adiciona o caractere de fim de string.
            break; // Sai do laço while.
        }

        // Se não for o primeiro caractere e pressionar BACKSPACE:

        if (pos > 0 && caractere == '\b')
        {
            --pos; //Decrementa o índice
            putchar('\b'); // Retrocede um caractere no prompt.
            putchar(' '); // Imprime um espaço, apagando o último caractere.
            putchar('\b'); // Retrocede um caractere no prompt.
        }
    }
}

void definirElemento(Elemento *ponteiro)  // Função para definir os atributos de um elemento.
{
    // Aloca memória para a string do nome (LIMITE_CARACTERES caracteres).
    ponteiro->nome = (char*) malloc(LIMITE_CARACTERES * sizeof(char));
    fflush(stdin); // Esvazia o buffer de entrada. Garantindo o funcionamento de scanf();

    // Solicita a digitação de uma string
    printf("\n\nDigite um nome (maximo de %d caracteres): ", LIMITE_CARACTERES);
    //scanf("%s[^\n]", ponteiro->nome); // Lê uma string de até 30 caracteres do teclado, armazenando no atributo nome.

    ler_texto(ponteiro-> nome);
    printf("\n\nDigite o id: "); // Solicita a digitação de um inteiro correspondente ao ID.
    scanf("%d", &(ponteiro->id)); // Lê um número inteiro do teclado e o armazena no atributo ID.
    ponteiro->proximo = NULL; // Define o ponteiro do próximo como NULL, indicando que o elmeneto atual é o último.

}

int main() { // Função principal do programa.
    char opcao; // Char que contém a opção (continuar ou parar).
    Elemento *primeiro = NULL; // Ponteiro para o primeiro elemento (início da lista ligada).
    Elemento *ponteiro; // Ponteiro para o elemento selecionado.
    do { // Início de um laço do-while de cadastro de elementos
        // Se o ponteiro para o primeiro for NULL, então a lista estpa vazia.
        // Nesse caso deve-se definir o primeiro elemento. Senão, deve-se definir o elemento
        // referenciado pelo ponteiro atual.
        if (primeiro == NULL) {
            primeiro = malloc( sizeof(Elemento)); // Aloca memória para o primeiro elemento.
            definirElemento(primeiro); // Invoca a função de definição dos atributos.
            ponteiro = primeiro; // O ponteiro aponta para o primeiro, selecionando-o
        }
        else { // Por outro lado, se a lista não estiver vazia..
            ponteiro->proximo = malloc(sizeof(Elemento)); // Aloca memória para o próximo elemento.
            ponteiro = (Elemento *) ponteiro -> proximo; // O ponteiro que aponta para o elemento criado.
            definirElemento(ponteiro); // Invoca a função de definição dos atributos.
        }

        do { // Início de um laço do-while de solicitação da opção.
            printf("\n\nDeseja inserir mais um elemento (s, n)?");
            opcao = getche(); // Lê um único caractere por meio da função getche();
            // Repete enquanto a opção na forma minúscula for diferente de 's' e de 'n'.

        } while(tolower(opcao) != 's' && tolower(opcao) != 'n');


    } while(tolower(opcao) == 's'); // Repete a solicitação enquanto não escolher 's' para parar.

    printf("\n\n Exibindo a sequencia: \n"); // Inicia a exibição da sequência.
    ponteiro = primeiro; // Aponta para o primeiro.

    // Enquanto não foi NULL, não chegou ao final da lista ligada.
    while(ponteiro != NULL) {
        // Exibe o nome e o ID.
        printf("Nome: %s\tId:%d\n", ponteiro-> nome, ponteiro->id);

        // Aponta para o próximo elemento da lista ligada.
        ponteiro = (Elemento *) ponteiro -> proximo;

        //Inicia o processo de liberação de memória alocada.
        printf("\n\n Deletando: \n\n");
        ponteiro = primeiro; // Aponta para o primeiro elemento.
        Elemento *seguinte; // Ponteiro que deverá apontar para o elemento seguinte.
        while (ponteiro != NULL) // Enquanto houver um elemento com memória alocada:
        {
            printf("Apagando %s \n", ponteiro->nome); // Exibe o nome do elemento a ser apagado.
            seguinte = (Elemento *) ponteiro -> proximo; // Armazena a referência ao próximo antes de apagar o atual

            free(ponteiro); // Libera memória do elemento

            ponteiro = seguinte; // O atual é o próximo (seguinte) da iteração anterior;
        }

        return 0; // Fim da função main
    }
}