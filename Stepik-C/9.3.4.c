#include <stdio.h>
#include <string.h>
int main(void) {
    char str1[50];
    char str2[50];
    fgets(str1,50,stdin);
    fgets(str2,50,stdin);
    int a = strcmp(str1,str2);
    printf ((a != 0) ? "no" : "yes");
    return 0;
}