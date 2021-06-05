#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int num;
    int max = -1000001;
    int min = 1000001;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num);
        if (num < min)
            min = num;
        if(num > max)
            max = num;
    }
    printf("%d %d", min, max);


    return 0;
}
