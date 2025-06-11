#include <stdio.h>

int main() {
    int a,b,c;
    scanf("%d %d %d", &a,&b,&c);
    if (a == 2 && b == 4 && c == 8){
        printf("open");}
    if (a == 2 && b == 8 && c == 4){
        printf("open");}
    if (a == 8 && b == 2 && c == 4){
        printf("open");}
    if (a == 8 && b == 4 && c == 2){
        printf("open");}
    if (a == 4 && b == 2 && c == 8){
        printf("open");}
    if (a == 4 && b == 8 && c == 2){
        printf("open");}
            // else printf ("closed");                
    return 0;
}