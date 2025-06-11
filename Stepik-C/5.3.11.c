#include <stdio.h>

int main() {
    int a,b,c,d;
    scanf ("%1d%1d%1d%1d", &a,&b,&c,&d);
    a = (a + 7) % 10;
    b = (b + 7) % 10;
    c = (c + 7) % 10;
    d = (d + 7) % 10;
    printf ("%d%d%d%d", c,d,a,b);
return 0;
}