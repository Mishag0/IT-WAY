#include <stdio.h>

int main() {

  char str[20];

  while (scanf("%s", str) == 1) {
    int imax = -1;
    for (int i = 0; str[i] != '\0'; i++) {
      imax++;
    }
    if (str[0] == str[imax])
      printf("%s ", str);
    if (getchar() == '\n')
      break;
  }
  return 0;
}