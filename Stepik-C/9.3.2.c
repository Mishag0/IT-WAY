#include <stdio.h>
#include <string.h>
int main(void) {
    char str1[25];
    char str2[10];
    char str3[] = ".";    
    scanf("%s", str1);
    scanf("%s", str2);
    strcat(str1,str3);
    strcat(str1,str2);
    printf("%s",str1);
    return 0;
}