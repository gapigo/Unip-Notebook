#include <stdio.h>

int main(void){
  char x[10];
  int i = 0;

  while (x[i-1] != '\0' && i < 8) {
    x[i] = getchar();
    i++;
  }

  printf("String capturada: %s", x);
  return 0;
}
