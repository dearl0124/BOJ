#include <stdio.h>
int arr[10001];
int main()
{
    int a = 0, b = 0, c = 0, d = 0, e = 0, i, sum = 0;

    for (i = 1; i <= 10000; i++)
    {
        a = i % 10;
        b = (i / 10) % 10;
        c = (i / 100) % 10;
        d = (i / 1000) % 10;
        e = (i / 10000) % 10;
        sum = a + b + c + d + e + i;
        arr[sum] = 1;
    }
    for (i = 1; i <= 10001; i++)
    {
        if (!arr[i])
            printf("%d\n", i);
    }

    return 0;
}
