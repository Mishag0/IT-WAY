#include <stdio.h>
int main(void) {
  int a;
  scanf("%d", &a);
  int temp = a;
  int c = 0, count = 1;
  while (1) {
    scanf("%d", &a);
    if (a == -9999) {
      break;
    }
    count++;
    if (temp >= a) {
      c++;
      break;
    }
    temp = a;
  }
  printf("%d", c > 0 ? count : c);
  return 0;
}