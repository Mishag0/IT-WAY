int gcd(int x, int y)
{
    int m;
    for (int i = 1; i < x + y;i++){
        if (x % i == 0 && y % i == 0){
            m = i;
        }
    }
    return m;
}

void reduce_fraction(int *a, int *b)
{


}