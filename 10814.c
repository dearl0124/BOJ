#include <stdio.h>
#include <string.h>
#include <stdlib.h>

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
typedef struct info {
    int age;
    char name[101];
}member;

int main()
{
    int n;
    scanf("%d", &n);
    member *s = (member*)malloc(sizeof(member) * n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d %s", &s[i].age, s[i].name);
    }
    qsort(s, n, sizeof(member), cmp);
    for (int i = 0; i < n; i++)
    {
        printf("%d %s\n", s[i].age, s[i].name);
    }
    free(s);
    return 0;
}
