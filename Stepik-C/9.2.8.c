#include <stdio.h>
#include <string.h>

int main() {
  int N;
  scanf("%d", &N);

  int x = 0, y = 0;

  for (int i = 0; i < N; i++) {
    char direction[10];
    int steps;
    scanf("%s %d", direction, &steps);
    if (direction[0] == 'N')
      y += steps;
    else if (direction[0] == 'W')
      x -= steps;
    else if (direction[0] == 'S')
      y -= steps;
    else
      x += steps;
  }
  printf("%d %d", x, y);
  return 0;
}