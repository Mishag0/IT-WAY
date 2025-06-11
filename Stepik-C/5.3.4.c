#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    double m = (a-32)*5./9.;
    printf ("%.2lf", m); 
  return 0;
}