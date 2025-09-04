#include <stdio.h>

int main() {
  int a, b;
  scanf("%d %d", &a, &b);
  int count = 0;
  for (int i = a; b >= i; i++) {
    count++;
    for (int k = 1; k <= count; k++) {
      printf("%5d", i);
    }
  }
  return 0;
}