#include <stdio.h>

int main() {

  char str[20];
  fgets(str, 20, stdin);
  int a0, a1, a2, a3;
  a0 = a1 = a2 = a3 = 0;
  int imax = -1;
  for (int i = 0; str[i] != '\n'; i++) {
    if (str[i] < 45 || str[i] > 57)
      a1++;
    if (str[i] >= 48 && str[i] <= 57)
      a0++;
    if (str[i] == 45)
      a2++;
    if (str[i] == 46)
      a3++;
    imax++;
  }
  if (a1 > 0) {
    printf("error");
    return 0;
  }
  if (a2 > 1) {
    printf("error");
    return 0;
  }
  if (a3 > 1) {
    printf("error");
    return 0;
  }
  if (a2 == 1 && str[0] != 45) {
    printf("error");
    return 0;
  }
  if (str[0] == 46 || str[imax] == 46) {
    printf("error");
    return 0;
  } else if (a3 == 1) {
    printf("float");
    return 0;
  }
  printf("int");
  return 0;
}