#include <stdio.h>

int main()
{
    int n, a, y = 0, m = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a);
        for (int j = 1; j < 334; j++)
        {
            if (a >= 30 * (j - 1) && a < 30 * j)
            {
                y += 10 * j;
                break;
            }
        }
        for (int j = 1; j < 334; j++)
        {
            if (a >= 60 * (j - 1) && a < 60 * j)
            {
                m += 15 * j;
                break;
            }
        }
    }

    if (y > m)
        printf("M %d\n", m);
    else if (m > y)
        printf("Y %d\n", y);
    else if (m == y)
        printf("Y M %d\n", y);

    return 0;
}
