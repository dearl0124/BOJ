#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 1000001
int n[MAXSIZE] = { 0 , };

int cmp(const void* a, const void* b)
{
    int num1 = *(int*)a;
    int num2 = *(int*)b;

    if (num1 < num2)
        return -1;
    if (num1 > num2)
        return 1;
    return 0;

}
int main()
{
    int n1 = 0;
    scanf("%d", &n1);
    for (int i = 0; i < n1; i++)
    {
        scanf("%d", &n[i]);
    }
    qsort(n, n1, sizeof(int), cmp);
    for (int i = 0; i < n1; i++)
    {
        printf("%d\n", n[i]);
    }
    return 0;
}
