#include <stdio.h>

int main()
{
    int s1[3] = { 0, };
    int i;
    for (i = 0; i < 3; i++)
    {
        scanf("%d", &s1[i]);
    }
    int sum = s1[0] * s1[1] * s1[2];
    int num[10] = { 0, };
    while (sum != 0)
    {
        num[sum % 10]++;
        sum /= 10;
    }
    for (i = 0; i < 10; i++)
    {
        printf("%d\n", num[i]);
    }
    return 0;
}
