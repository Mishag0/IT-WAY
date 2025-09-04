#include <stdio.h>
#include <string.h>
int main(void) {
  char str[50];
  fgets(str, 50, stdin);
  if (str[0] + str[1] + str[2] == str[3] + str[4] + str[5]) {
    printf("yes");
  } else
    printf("no");
  return 0;
}