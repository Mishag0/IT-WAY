#include <stdio.h>

int main() {
  int a, b;
  scanf("%d %d", &a, &b);
  if (a <= 6) {
    printf("дошкольник");
  } else if (a >= 7 && a <= 18) {
    printf("школьник");
  } else if (a >= 19 && a <= 59) {
    printf("рабочий");
  } else {
    printf("пенсионер");
  }
  return 0;
}