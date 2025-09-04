#include <stdio.h>
int main(void) {

  int N;
  scanf("%d", &N);

  int arr[N];
  for (int i = 0; i < N; i++) {
    scanf("%d", &arr[i]);
  }

  int max = arr[0], min = arr[0];
  for (int i = 0; i < N; i++) {
    if (max < arr[i])
      max = arr[i];
    if (min > arr[i])
      min = arr[i];
  }
  for (int i = 0; i < N; i++) {
    if (arr[i] == max) {
      arr[i] = min;
      continue;
    }
    if (arr[i] == min)
      arr[i] = max;
  }
  for (int i = 0; i < N; i++) {
    printf("%d ", arr[i]);
  }
  return 0;
}