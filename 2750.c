#include <stdio.h>

int main()
{
    int n, i, j, temp;
    int n1[1001] = { 0 , };
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &n1[i]);
    }
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 1; j++)
        {
            if (n1[j] > n1[j + 1])
            {
                temp = n1[j];
                n1[j] = n1[j + 1];
                n1[j + 1] = temp;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        printf("%d\n", n1[i]);
    }

    return 0;
}
