#include <stdio.h>

int main(void) {

  int a;
  scanf("%d", &a);
  while (a > 0) {
    if (a % 10 == 0) {
      printf("0");
      a /= 10;
    } else {
      printf("%d", a % 10);
      a /= 10;
    }
  }
  return 0;
}