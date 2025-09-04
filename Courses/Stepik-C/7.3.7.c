#include <stdio.h>
int main(void) {
  int a, b = 0;
  while (1) {
    while (scanf("%d", &a) && a != 0)
      ;
    while (scanf("%d", &a) && a != 0)
      b += a;
    while (scanf("%d", &a) && a != -9999)
      ;
    break;
  }
  printf("%d", b);
  return 0;
}