#include <stdio.h>
int main()
{
    int x, count1 = 0, count2 = 0;
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &x);
        if (x == 1)
            count1++;
        else if (x == 2)
            count2++;
    }
    if (count1 > count2)
        printf("1\n");
    else
        printf("2\n");
    return 0;
}
