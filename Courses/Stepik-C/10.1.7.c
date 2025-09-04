#include <stdio.h>

void square(int x, char c)
{
    char arr[x][x];
    for (int i = 0;i < x;i++){
        for(int j = 0; j < x;j++){
            printf("%c",arr[i][j] = c);
        }
        printf("\n");
    }

}
int main()
{ 
    int a;
    char b;
    scanf("%d %c", &a,&b);
    square(a,b);
    return 0;
}