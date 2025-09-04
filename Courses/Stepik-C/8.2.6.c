#include <stdio.h>

int main(void) {
  int N;
  scanf("%d", &N);

  if (N > 10) {
    printf("N must be <= 10\n");
    return 0;
  }

  int arr[N][N];
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      scanf("%d", &arr[i][j]);
    }
  }

  int sum = 0;
  int sum2 = 0;

  for (int i = 0; i < N; i++) {
    for (int j = N - 1; j > 0; j--) {
      if (N - 1 - i == j)
        break;
      sum += arr[i][j];
    }
  }

  for (int i = 0; i < N; i++) {
    for (int j = N - 1; j > 0; j--) {
      if (i == j)
        break;
      sum2 += arr[i][j];
    }
  }
  printf("%d %d", sum <= sum2 ? sum : sum2, sum <= sum2 ? sum2 : sum);
  return 0;
}