#include <stdio.h>
int factorial(int);
int main(void){
    int a;
    scanf("%d", &a);
    printf ("%d", factorial(a));
    return 0;
}
int factorial(int k){
    int m = 1;
    for(int i = 1;i <= k;i++)
      m *= i;
    return m; 
}