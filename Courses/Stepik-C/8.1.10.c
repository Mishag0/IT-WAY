#include <stdio.h>
int main(void) {

  int N;
  scanf("%d", &N);

  int arr[N];
  for (int i = 0; i < N; i++) {
    scanf("%d", &arr[i]);
  }
  int f = 0;
  for (int i = 0; i < N; i++) {
    f += arr[i];
  }
  printf("%.2lf", (double)f / N);
  return 0;
}