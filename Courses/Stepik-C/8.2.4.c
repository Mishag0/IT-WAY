#include <stdio.h>
#include <stdlib.h>
int main(void) {

  int N;
  scanf("%d", &N);
  if (N > 10) {
    return 0;
  }
  int arr[N][N];
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      arr[i][j] = abs(i - j) + 1;
      printf("%d ", arr[i][j]);
    }
    printf("\n");
  }
  return 0;
}