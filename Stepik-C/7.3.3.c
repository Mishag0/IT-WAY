#include <stdio.h>

int main(void) {
  int a, b;
  scanf("%d %d", &a, &b);
  printf("%d ", b);
  if (a == 1) {
    return 0;
  }
  int count = 0;
  count++;
  int temp = b;
  do {
    scanf("%d", &b);
    count++;
    if (temp != b) {
      temp = b;
      printf("%d ", b);
    }
  } while (count != a);
  return 0;
}