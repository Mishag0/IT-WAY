#include <stdio.h>

int main(void) {
  char str[100];
  fgets(str,100,stdin);
  int i = 0;
  int c = 1;
    while (str[i] != '\0'){
        if (str[i] == ' ' && str[i+1] != ' ' && str[i+1] != '\n')c++;
        i++;
    }
    if (str[0] == ' ')c--;
    printf("%d", c);
  return 0;
}