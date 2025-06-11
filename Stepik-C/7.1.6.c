#include <stdio.h>

int main(){

    int x, f1 = 1, f2 = 1, temp;
    scanf ("%d", &x);
    for(int i = 1;i <= x;i++){
        temp = f1;f1 = f2;f2 = f2 + temp;
    }
    printf("%d", temp);
    return 0;
}