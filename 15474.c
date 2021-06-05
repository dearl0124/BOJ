#include <stdio.h>

int main()
{
    int n, a, b, c, d, sumx, sumy;
    scanf("%d %d %d %d %d", &n, &a, &b, &c, &d);
    if (n % a == 0)
        sumx = (n / a) * b;
    else
        sumx = ((n / a) + 1) * b;
    if (n % c == 0)
        sumy = (n / c) * d;
    else
        sumy = ((n / c) + 1) * d;

    if (sumx > sumy)
        printf("%d\n", sumy);
    else
        printf("%d\n", sumx);
    return 0;
}
