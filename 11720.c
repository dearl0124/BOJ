#include <stdio.h>

int main()
{
    int n, sum = 0, s1;
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++)
    {
        scanf("%1d", &s1);
        sum += s1;
    }

    printf("%d\n", sum);
    return 0;
}
