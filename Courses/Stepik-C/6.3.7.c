#include <stdio.h>

int main() {
  int a;
  scanf("%d", &a);
  if (a <= 500) {
    printf("350");
  }
  if (a > 500) {
    a = 350 + (a - 500) * 2;
    printf("%d", a);
  }
  return 0;
}