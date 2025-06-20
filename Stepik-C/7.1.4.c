#include <stdio.h>

int main() {

  int a, b;
  scanf("%d %d", &a, &b);

  for (int k = b; k >= a; k--) {
    printf("%d ", k);
  }
  return 0;
}