#include <stdio.h>
int main(void) {

long double a;
scanf ("%Lf", &a);
long double temp = 1;
long double k = 1;
long double b = 1;
  while (a < 1./temp){
  temp = temp * k;
  b = b + 1./temp;
  k++;
  }
  printf ("%.8Lf", b) ;
return 0;
}