#include <stdio.h>

int main()
{
    int x, l, r;
    scanf("%d %d %d", &x, &l, &r);
    if (x >= l && x <= r)
        printf("%d\n", x);
    else if (x > r)
        printf("%d\n", r);
    else
        printf("%d\n", l);

    return 0;
}
