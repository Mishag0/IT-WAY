#include <stdio.h>

int main (void){
  int a;
  scanf("%d", &a);
  for (int b = 1; b <= a; b++){
    for (int i = 1; i <= b; i++){
      printf("%d ", i);
    }
    printf("\n");
  }
  return 0;
}