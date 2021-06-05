#include <stdio.h>

int main()
{
    long a, b, c;
    long bep = 0, sum = 0;
    scanf("%ld %ld %ld", &a, &b, &c);
    if (b >= c)
        printf("-1\n");
    else
        printf("%d\n", a / (c - b) + 1);
    
    return 0;
}
