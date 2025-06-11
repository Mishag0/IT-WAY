#include <stdio.h>

int main (void){
  int a;
  scanf ("%d", &a);
  int temp = a;
  int c = 0;
  while (1){
    scanf ("%d", &a);
    if (a == -9999){break;}
    if (temp >= a){c++;}
      temp = a;
  }
    printf ("%s", c > 0 ? "NO":"YES"); 
    return 0;    
}