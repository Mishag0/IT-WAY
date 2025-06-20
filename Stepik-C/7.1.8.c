#include <stdio.h>

int main() {
  int a, b;
  scanf("%d %d", &a, &b);
  int count = 0;
  for (int i = a; b >= i; i++) {
    count = i;
    for (int k = 1; k <= count; k++) {
      printf("%4d", i);
    }
  }
  return 0;
}