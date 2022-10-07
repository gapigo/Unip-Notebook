#include <stdio.h>
#include <string.h>

void main() {
    int idade;
    printf("Insira sua idade: ");
    scanf("%i", &idade);
    char res[50]; 
    (idade < 16) ? strcpy(res, "Sem idade para votar") : 
    (idade < 18 || idade >= 65) ? strcpy(res, "Eleitor facultativo") : 
    strcpy(res, "Eleitor obrigatório");
    printf("%s\n", res);
}