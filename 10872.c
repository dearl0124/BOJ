#include <stdio.h>

int Facto(int n)
{
    if (n == 0)
        return 1;
    else
    {
        return (Facto(n - 1) * n);
    }
}
int main()
{
    int n = 0;
    scanf("%d", &n);
    printf("%d\n", Facto(n));
    return 0;
}
