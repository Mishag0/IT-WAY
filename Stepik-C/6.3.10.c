#include <stdio.h>

int main() {
    int a,b,c;
    scanf("%d %d %d", &a,&b,&c);
    while (a > b || b > c){
    if (a > b) {int temp = a; a = b; b = temp;}
    if (b > c){int temp = c; c = b; b = temp;}
}
printf ("%d %d %d", a,b,c);
    return 0;
}