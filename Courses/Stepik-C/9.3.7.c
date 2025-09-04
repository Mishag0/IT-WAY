#include <stdio.h>
#include <string.h>
int main(void) {
  char str1[50];
  char str2[50];
  fgets(str1, 50, stdin);
  fgets(str2, 50, stdin);
  int a = strlen(str2) - 1;
  int b = 0;
  for (int i = 0; str1[i] != '\n'; i++) {
    for (int j = 0; str2[j] != '\n'; j++) {
      if (str1[i] == str2[j]) {
        str2[j] = ' ';
        b++;
        break;
      }
    }
  }
  if (a == b) {
    printf("yes");
  } else
    printf("no");
  return 0;
}