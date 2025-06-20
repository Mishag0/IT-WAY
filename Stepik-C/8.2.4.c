#include <stdio.h>
int main(void) {

  int N, M;

  scanf("%d", &N);
  int count = 1;
  int arr[N][N];
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      if (i = j) arr [i][j] = N - 3;
      else
      if {(i == j + 1  || j == i + 1) arr [i][j] = N - 2;}
      else
      {if (i == j + 2  || j == i + 2) arr [i][j] = N - 1;}
      
  printf ("\n");
  }
  return 0;
}