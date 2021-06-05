#include <stdio.h>

int main()
{
    int n, x;
    int i;
    scanf("%d %d", &n, &x);
    for (i = 1; i <= n; i++)
    {
        int b;
        scanf("%d", &b);
        if (b < x)
            printf("%d ", b);      
    }
    return 0;

}
