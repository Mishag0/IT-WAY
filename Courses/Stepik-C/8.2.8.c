#include <stdio.h>

int main(void) {
  int N, M;
  scanf("%d %d", &N, &M);
  if (N > 10 || M > 10) {
    return 0;
  }
  int arr[N][M];
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++) {
      scanf("%d", &arr[i][j]);
    }
  }
  int A = 0, B = 0;
  int max_sum, min_sum;
  int first_col_sum = 0;
  for (int i = 0; i < N; i++) {
    first_col_sum += arr[i][0];
  }
  max_sum = first_col_sum;
  min_sum = first_col_sum;
  for (int j = 1; j < M; j++) {
    int sum = 0;
    for (int i = 0; i < N; i++) {
      sum += arr[i][j];
    }

    if (sum > max_sum) {
      max_sum = sum;
      A = j;
    }
    if (sum < min_sum) {
      min_sum = sum;
      B = j;
    }
  }
  for (int i = 0; i < N; i++) {
    int temp = arr[i][A];
    arr[i][A] = arr[i][B];
    arr[i][B] = temp;
  }
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++) {
      printf("%d ", arr[i][j]);
    }
    printf("\n");
  }

  return 0;
}