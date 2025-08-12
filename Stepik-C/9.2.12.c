#include <stdio.h>

int main() {

  char str[20];

  while (scanf("%s", str) == 1) {
    int imax = -1;
    for (int i = 0; str[i] != '\0'; i++) {
      imax++;
    }
    for (int i = imax; imax != -1; imax--) {
      printf("%c", str[imax]);
      if (imax == 0)
        printf(" ");
    }
    if (getchar() == '\n')
      break;
  }
  return 0;
}