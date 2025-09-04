#include <stdio.h>
int main(void) {
  int a, temp = 0;
  while (1) {
    scanf("%d", &a);
    if (a == -9999) {
      break;
    }
    if (a == 2517) {
      temp++;
    }
    if (temp > 0 && a != 2517) {
      printf("%d ", a);
    }
  }
  return 0;
}