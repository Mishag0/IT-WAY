#include <stdio.h>

int main() {

  int a, b;
  scanf("%d %d", &a, &b);
  if (a <= 0 && b <= 0) {
    printf("0");
    return 0;
  }
  int sum = 0;
  for (int k = a; k <= b; k++) {
    if (k > 0) {
      printf("%d ", k);
      sum++;
    }
  }
  printf("\n%d", sum);
  return 0;
}