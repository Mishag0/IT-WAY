#include <stdio.h>
#include <string.h>
int main(void) {
  char str1[50];
  char str2[50];
  fgets(str1, 50, stdin);
  fgets(str2, 50, stdin);
  int a = strlen(str1);
  if (str1[strlen(str1) - 2] == str2[0] + 32 ||
      str1[0] + 32 == str2[strlen(str2) - 2]) {
    printf("yes");
  } else
    printf("no");
  return 0;
}