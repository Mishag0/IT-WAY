#include <stdio.h>

int main(void) {
  int a;
  int count = 0;
  if (scanf("%d", &a) == -9999) {
    printf("NO");
    return 0;
  } else if (a < 0) {
    count++;
  }
  while (1) {
    scanf("%d", &a);
    if (a < 0 && a != -9999) {
      count++;
    }
    if (a == -9999) {
      break;
    }
  }
  printf("%s", count == 0 ? "YES" : "NO");
  return 0;
}