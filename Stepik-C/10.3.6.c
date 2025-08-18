#include <stdio.h>
int gcd(int x, int y)
{
    int m;
    for (int i = 1; i < x + y;i++){
        if (x % i == 0 && y % i == 0){
            m = i;
        }
    }
    return m;
}
int main (){
    int x,y;
    scanf ("%d %d", &x,&y);
    gcd(x,y);
    return 0;
}