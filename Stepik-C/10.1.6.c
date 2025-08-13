#include<stdio.h>
int sequence_multipliers(int k)
{
    for (int i = 0;i < 10;i++){
    if (i * (i + 1) * (i + 2) == k)
    return i;     
    }
    return -1;
}

int main(void)
{
    int q;
    scanf("%d", &q);
    printf("%d",sequence_multipliers(q));
    return 0;
}