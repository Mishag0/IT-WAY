#include <stdio.h>

int main(void) {
  int a, k, res;

  scanf("%d %d", &a, &k);
  int temp = k;
  res = 1;
  if (k % 2 == 0) {
    res = a;
  }
  while (k > 0) {

    if (k % 2 == 0) {
      res = res * res;
      k = k / 2;
    } else {
      res = res * a;
      k = k - 1;
    }
  }
  printf("%d\n", temp % 2 ? res : res / a);

  return 0;
}