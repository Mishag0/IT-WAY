#include <stdio.h>
int main(void) {

  int N;
  scanf("%d", &N);

  int arr[N];
  for (int i = 0; i < N; i++) {
    scanf("%d", &arr[i]);
  }
  int a = N/2,b = N/2;
  int arr2[a], arr3[b];

  for (int j = N/2; j < N; j++) {
    arr2[j] = arr[j];
    printf("%d ", arr2[j]);
  }

  for (int i = 0; i < N/2; i++) {
    arr3[i] = arr[i];
    printf("%d ", arr3[i]);
  }
  return 0;
}