#include <stdio.h>

int main() {
  int a;
  scanf("%d", &a);
  double b = a * (454.0 / 1000.0);
  printf("%.2lf", b);
  return 0;
}