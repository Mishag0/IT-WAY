#include <stdio.h>
int main(void) {

  int N;
  scanf("%d", &N);

  int arr[N];
  for (int i = 0; i < N; i++) {
    scanf("%d", &arr[i]);
  }
  for (int j = N - 1; j >= 0; j--) {
    printf("%d ", arr[j]);
  }
  return 0;
}