#include <stdio.h>

int main(){

    int k,s = 1;
    scanf ("%d", &k);

    for (int i = 1;i <= k;i++){
        s = s * i;
    }
    printf ("%d", s);
    return 0;
}