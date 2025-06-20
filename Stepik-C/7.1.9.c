#include <stdio.h>

int main() {
  int a;
  scanf("%d", &a);
  int count = 0;
  for (int i = 1; i <= a; i++) {
    if (a % i == 0) {
      printf("%d ", i);
      count++;
    }
  }
  printf("\n%d", count);
  return 0;
}