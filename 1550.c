#include <stdio.h>

int main()
{
    int n[7] = { 0, };
    int m = 0;
    scanf("%s", &n);
    m = strtol(n, NULL, 16);
    printf("%d\n", m);
    return 0;
}
