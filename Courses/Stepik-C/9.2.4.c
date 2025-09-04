#include <stdio.h>

int main(void) {
  char str[22];
  fgets(str, 22, stdin);
  int i = 0;
  while (str[i] != '\n') {
    i++;
  }
  int b = 0;
  int num = 0;
  for (int k = i - 1; k >= 0; k--) {
    num += str[k] % 48 * (1 << b);
    b++;
  }
  printf("%d", num);
  return 0;
}