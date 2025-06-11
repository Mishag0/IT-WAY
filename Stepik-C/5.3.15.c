#include <stdio.h>
#include <math.h>
int main(){
int h;
scanf("%d", &h);
double l = log(2) / 5570.;
double N = 7.5 * pow (10,10);
double f = N * exp (-l * h);
printf("%.2lf", f/10e8);
return 0;
}