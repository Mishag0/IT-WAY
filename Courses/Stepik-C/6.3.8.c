#include <stdio.h>

int main() {
  int a, b;
  if ((scanf("%d %d", &a, &b) != 2 || a < 1 || b < 1 || getchar() != '\n')) {
    printf("error");
    return 1;
  }
  if ((b == 1 || b == 3 || b == 5 || b == 7 || b == 8 || b == 10 || b == 12) &&
      (a <= 31)) {
    printf("correct");
  } else if ((b == 4 || b == 6 || b == 9 || b == 11) && (a <= 30)) {
    printf("correct");
  } else if (b == 2 && a <= 29) {
    printf("correct");
  } else {
    printf("error");
  }
  return 0;
}