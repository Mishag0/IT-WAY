#include <stdio.h>

int main(void) {
  char c;
  scanf("%c\n", &c);
  char str[100];
  fgets(str, 100, stdin);
  int i = 0;
  while (c != str[i]) {
    if (str[i] == '\n') {
      printf("-1");
      return 0;
    }
    i++;
  }
  printf("%d", i);
  return 0;
}