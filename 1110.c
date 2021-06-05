#include <stdio.h>

int main()
{
    int n;
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    int count = 0;

    scanf("%d", &n);

    b = n % 10;
    a = (n - b) / 10;
    c = a + b;
    if (c >= 10)
    {
        c %= 10;
    }
    d = b * 10 + c;

    count += 1;
    while (n != d)
    {
        b = d % 10;
        a = (d - b) / 10;
        c = a + b;
        if (c >= 10)
        {
            c %= 10;
        }
        d = b * 10 + c;

        count += 1;
    }
    printf("%d", count);

    return 0;
}
