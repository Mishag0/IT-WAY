#include <stdio.h>

int main() {
  int k,b,c,d,e;
  scanf("%d %d %d %d %d", &k,&b,&c,&d,&e);
    printf ("%d %d %d %d", (k + b) % 26 , (k + c) % 26,(k + d) % 26,(k + e) % 26);
  return 0;
}