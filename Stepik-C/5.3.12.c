#include <stdio.h>

int main() {
    int a,b,c,d;
    scanf ("%1d%1d%1d%1d", &a,&b,&c,&d);
    a = (a +3) % 10;
    b = (b +3) % 10;
    c = (c +3) % 10;
    d = (d +3) % 10;
    printf ("%d%d%d%d", c,d,a,b);
return 0;
}