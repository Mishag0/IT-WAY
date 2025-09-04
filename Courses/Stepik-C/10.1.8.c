#include <stdio.h>
void print_date(int d, int m, int y, int k)
{
   switch(k){
    case 0:
    printf ("%02d.%02d.%02d",d,m,y%100);break;
    case 1:
    printf ("%02d.%02d.%d",d,m,y);break;
    case 2:
    printf ("%d/%02d/%02d",y,m,d);break;
   } 
}
int main()
{
    int a,b,c,d;
    scanf("%d%d%d%d", &a,&b,&c,&d);
    print_date(a,b,c,d);
    return 0;
}