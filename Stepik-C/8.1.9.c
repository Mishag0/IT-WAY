#include <stdio.h>
int main(void) {

  int N;
  scanf("%d", &N);

  int arr[N];
  for (int i = 0; i < N; i++) {
    scanf("%d", &arr[i]);
  }
  int count = 0;
  int max = arr[N-1];
  int min = arr [0];
  for (int i = 0;i<N;i++){
    if(max > arr[i] && min < arr[i] ){
        printf("%d ", arr[i]);
        count++;
    }
  }
if (count == 0) printf("0");
  return 0;
}
