#include <stdio.h>

int main() {
  int a;
  do{
    scanf("%d", &a);
    if (a == 0){
    break;}
    if (a > 0){printf("%d ", a);
  }
  }
  while (1);
  return 0;
}