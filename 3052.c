#include <stdio.h>

int main()
{
    int s1[11] = { 0, };
    int i, count = 0;
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &s1[i]);
    }
    int num[43] = { 0, };
    for (i = 0; i < 10; i++)
    {
        num[s1[i] % 42]++;
    }
    for (i = 0; i < 43; i++)
    {
        if (num[i] != 0)
            count++;
    }
    printf("%d", count);
    return 0;
}
