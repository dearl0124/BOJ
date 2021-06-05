#include <stdio.h>

int main()
{
    int n1, n2, n3 = 0, n4 = 0;
    scanf("%d %d", &n1, &n2);

        n3 += (n2 / 100);
        n3 += (n2 / 10) % 10 * 10;
        n3 += (n2 % 10) * 100;

        n4 += (n1 / 100);
        n4 += (n1 / 10) % 10 * 10;
        n4 += (n1 % 10) * 100;

        if (n3 > n4)
            printf("%d\n", n3);
        if (n3 < n4)
            printf("%d\n", n4);

    return 0;
}
