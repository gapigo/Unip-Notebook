#include <stdio.h>

struct item
{
    int a;
    char b;
};

char *funcao()
{
    return "Olá mundo!";
}

int main()
{
    printf("%s", funcao());
    struct item c;
    // printf(c);

    return 0;
}