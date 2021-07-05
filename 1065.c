#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int a, b, c, count = 0;
    
    for (int i = 1; i <= n; i++)
    {
        a = (i / 100);
        b = (i / 10 % 10);
        c = (i % 10);
        
        if (i < 100)
            count++;
        else if (i >= 100)
        {
            if (c == (b - a + b))
                count++;
            else if (a == (b - c + b))
                count++;
        }
    }

    printf("%d", count);
    return 0;
}
