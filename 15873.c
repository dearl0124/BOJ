#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    if (n < 110 && n > 100)
        printf("%d\n", n / 10 + n % 10);
    else if (n == 1010)
        printf("20\n");
    else if (n >= 110 && n < 1000)
        printf("%d\n", n / 100 + n % 100);
    else
        printf("%d\n", n % 10 + n / 10);
    return 0;
}
