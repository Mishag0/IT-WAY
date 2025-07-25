#include <stdio.h>

int main(void) {

  char str1[15], str2[15];
  fgets(str1, 15, stdin);
  fgets(str2, 15, stdin);
  int count = 0;
  for (int i = 0; str1[i] && str2[i] != '\n'; i++) {
    if (str1[i] != str2[i])
      count++;
  }
  printf("%d", count);
  return 0;
}