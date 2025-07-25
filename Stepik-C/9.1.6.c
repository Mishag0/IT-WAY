#include <stdio.h>

int main() {
  int k;
  scanf("%d", &k);

  char arr[26];
  for (char i = 0; i < 26; i++) {
    arr[i] = i + 65;
  }
  for (int i = 26 - k; i < 26; i++) {
    printf("%c", arr[i]);
  }
  return 0;
}