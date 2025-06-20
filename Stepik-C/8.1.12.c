#include <stdio.h>
int main(void) {

  int N;
  scanf("%d", &N);

  int arr[N];
  for (int i = 0; i < N; i++) {
    scanf("%d", &arr[i]);
  }
  int a = N / 2, b = N / 2;
  int arr2[a], arr3[b];

  for (int i = N / 2; i < N; i++) {
    arr2[i - (N / 2)] = arr[i];
    printf("%d ", arr2[i - (N / 2)]);
  }

  for (int i = 0; i < N / 2; i++) {
    arr3[i] = arr[i];
    printf("%d ", arr3[i]);
  }
  return 0;
}