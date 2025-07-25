#include <stdio.h>
#include <string.h>

int main() {

  char str[100];
  fgets(str, 100, stdin);
  int k, l;
  int count = 0;
  if (str[0] == '*' && str[1] == '/')
    count -= 2;
  for (int i = 0; str[i] != '\n'; i++) {
    if (str[i] == '/' && str[i + 1] == '*' && str[i + 2] != '/') {
      k = i;
      count += 2;
    }
    if (str[i] == '*' && str[i + 1] == '/') {
      l = i + 2;
      count += 2;
    }
  }
  if (count == 4) {
    for (int i = 0; i < k; i++) {
      printf("%c", str[i]);
    }
    for (int i = l; str[i] != '\n'; i++) {
      printf("%c", str[i]);
    }
    return 0;
  }
  fputs(str, stdout);
  return 0;
}