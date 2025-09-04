void minmax(int *x, int *y)
{
    int min = *x;
    if (min > *y) min = *y;
    int max = *x;
    if (max < *y)max = *y;
    *x = min;
    *y = max; 
}
