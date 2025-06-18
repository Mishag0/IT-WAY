#include <stdio.h>
int main(void){

    int N;
    scanf("%d",&N);

    int arr[N];
    for(int i = 0;i < N;i++){
        scanf("%d",&arr[i]);
    }

    int a[N];
    int b[N];
    int k = 0, m = 0;
    for(int j = 0; j < N;j++){
        if (arr[j] % 2 == 0){
            a[k] = arr[j];
            k++;}
            else {
            b[m] = arr[j];
            m++;
            }
        } 
    for(int i = 0; i < k; i++) {
        printf("%d ", a[i]);
    }
    for(int j = 0; j < m; j++) {
        printf("%d ", b[j]);
    }    
    return 0;
}
