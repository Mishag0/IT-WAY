#include <stdio.h>
int main(void){
    int N;
    scanf("%d",&N);
    int arr[N];
    for (int i = 0;i < N;i++){
        scanf("%d", &arr[i]);
    }
    int k,m;
    scanf ("%d %d", &k,&m);
    printf ("%d", arr[k] + arr[m]);
    return 0;
}