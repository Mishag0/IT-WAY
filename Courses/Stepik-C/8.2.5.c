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
      scanf("%d", &arr[i][j]);
    }
  }
  int sum = 1;
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      if (i == j)
        sum *= arr[i][j];
    }
  }
  int sum2 = 1;
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      if (i + j == N - 1)
        sum2 *= arr[i][j];
    }
  }
  printf("%d %d", sum >= sum2 ? sum : sum2, sum >= sum2 ? sum2 : sum);
  return 0;
}