#include <stdio.h>

int min(int a, int b,int c) {
  int min = a;
  if (min > b)min = b;
  if (min > c)min = c;
  return (min);
}
int main(){
    int q,w,e,j;
    scanf("%d %d %d", &q, &w, &e);
    j = min(q,w,e);
    printf ("%d", j);
    return 0;
}
