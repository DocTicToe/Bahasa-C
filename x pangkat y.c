#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define N 1000000007

long int pangkat(long int x, long int y){
    if (y == 0)
        return 1;
    if (y == 1)
        return x % N;
    long int t = pangkat(x, y / 2);
    t = (t * t) % N;
    // if exponent is even value
    if (y % 2 == 0)
        return t;
    // if exponent is odd value
    else
        return ((x % N) * t) % N;
}
int main()
{
int x;
int y;
    printf("");
    scanf("%ld%ld", &x, &y);

    long int hasil = pangkat(x, y);
    printf("%ld", hasil);
    return 0;
}
