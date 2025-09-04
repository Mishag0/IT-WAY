#include <stdio.h>

int main(void) {
  char str[102];
  fgets(str, 102, stdin);
  int i = 0;
  if (str[i] == ' ')
    i++;
  char temp;
  while (str[i] != '\n') {
    while (str[i] == ' ' && str[i + 1] == ' ') {
      if (str[i] == ' ' && str[i + 1] == ' ') {
        for (int k = i; str[k] != '\0'; k++) {
          str[k] = str[k + 1];
        }
      }
    }
    i++;
  }
  fputs(str, stdout);
  return 0;
}