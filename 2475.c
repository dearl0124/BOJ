#include <stdio.h>
#include <math.h>

int main() 
{
    int a, e, sum = 0;
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a);
        sum += pow(a, 2);
    }
    printf("%d\n", sum % 10);

    return 0;
}
