#include <stdio.h>
#define size 10001
n2[size] = { 0, };
int main()
{
    int n, n1;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &n1);
        n2[n1]++;
    }
    for (int i = 0; i <= size; i++)
    {
        if (n2[i] == 0)
            continue;
        for (int j = 0; j < n2[i]; j++)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}
