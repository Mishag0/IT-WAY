#include <math.h>
#include <stdio.h>
int main() {
  int h;
  scanf("%d", &h);
  double z = 1.25 * pow(10, -4);
  double x = 1.29 * exp(-h * z);
  printf("%.2lf", x);
  return 0;
}