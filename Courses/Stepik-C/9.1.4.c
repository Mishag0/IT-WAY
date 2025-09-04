#include <stdio.h>

int main() {
  char sim;
  scanf("%c", &sim);
  if (sim >= 65 && sim <= 90 || sim >= 97 && sim <= 122) {
    printf("en");
  } else if (sim >= 48 && sim <= 57) {
    printf("digit");
  } else
    printf("error");
  return 0;
}
