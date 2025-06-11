#include <stdio.h>

int main() {
  int n,m;
  scanf( "%d", &n,&m);
  int c = n % m;
  printf ("%d", c);
  return 0;
}