#include <stdio.h>

int main()
{
    int a, b, c, max, mid;
    scanf("%d %d", &a, &b);
    if (a >= b)
    {
        max = a;
        mid = b;
    }
    else
    {
        max = b;
        mid = a;
    }
    scanf("%d", &c);
    if (c >= max)
    {
        mid = max;
        max = c;
    }
    else if (c < max && c >= mid)
        mid = c;
    printf("%d\n", mid + max);
    return 0;
}
