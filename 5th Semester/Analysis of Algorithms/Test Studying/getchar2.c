#include<stdio.h>

int main(void) {
  char x[10];
  int i = 0;
  do {
    x[i] = getchar();
    i++;
  } while(x[i-1] != '\n' && i < 8);
  x[i] = '\0';
  printf("%s", x);
  return 0;
}
