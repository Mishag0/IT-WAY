#include <stdio.h>
#include <math.h>
int main(void){

    int N;
    scanf("%d",&N);

    int arr[N];
    for(int i = 0;i < N;i++){
        scanf("%d",&arr[i]);
    }
    int temp = N;
    for(int j = 0;j < ceil((N-1))/2;j++){
        if (arr[j] != arr[temp-1]){
            printf("NO");
            return 0;
        }
        temp--;
    }
    printf("YES");
    return 0;
}