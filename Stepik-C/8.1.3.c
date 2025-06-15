#include <stdio.h>
int main(void)
{ 
        int N = 0;
        scanf("%d", &N);

        int arr[N];

        for(int cnt=0; cnt<N; cnt++){
            scanf("%d", &arr[cnt]);
        }
        for(int i = 0;i<N;i++){
        printf("%d ",arr[i]);
        }
        return 0;
}