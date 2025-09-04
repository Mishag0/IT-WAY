#include <stdio.h>
int factorial(int);
int main(void){
    int a,b;
    scanf("%d %d", &a,&b);
    printf ("%d", factorial(a)/(factorial(b)*factorial(a-b)));
    return 0;
}
int factorial(int k){
    int m = 1;
    for(int i = 1;i <= k;i++)
      m *= i;
    return m; 
}