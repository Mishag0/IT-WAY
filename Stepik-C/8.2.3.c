#include <stdio.h>
int main(void) {

  int N, M;

  scanf("%d", &N);
  int count = 1;
  int arr[N][N];
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      if (i % 2 == 0) {
        arr[i][j] = count++;
      }
      if (i % 2 != 0) {
        arr[i][j] = N - j;
        count = 1;
      }
      printf("%d ", arr[i][j]);
    }
    printf("\n");
  }
  return 0;
}