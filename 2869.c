#include <stdio.h>

int main()
{
    int a, b, v, count = 0;
    scanf("%d %d %d", &a, &b, &v);
    count = (v - b - 1) / (a - b) + 1;
    printf("%d\n", count);
    return 0;
}
