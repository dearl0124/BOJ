#include <stdio.h>
#include <math.h>

int hanoi(int n, int start, int path, int goal)
{
    if (n == 1)
        printf("%d %d\n", start, goal);
    else
    {
        hanoi(n - 1, start, goal, path);
        printf("%d %d\n", start, goal);
        hanoi(n - 1, path, start, goal);
    }
}
int main()
{
    int k, n = 0;
    scanf("%d", &n);
    k = pow(2, n);
    printf("%d\n", k - 1);
    hanoi(n, 1, 2, 3);
    return 0;
}
