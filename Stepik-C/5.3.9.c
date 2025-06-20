#include <stdio.h>

int main() {
  int n, k, x;
  scanf("%d %d %d", &n, &k, &x);
  n = n - 1;
  int z = (3 + x) % n;
  printf("%d", z);
  return 0;
}