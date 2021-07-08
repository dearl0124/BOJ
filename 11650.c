#include<stdio.h>
#include <stdlib.h>

typedef struct Point {
    int x;
    int y;
} point;

int cmp(const void* a, const void* b)
{
    point* num1 = (point*)a;
    point* num2 = (point*)b;

    if (num1->x > num2->x)
        return 1;
    else if (num1->x < num2->x)
        return -1;
    else
    {
        if (num1->y < num2->y)
            return -1;
        else
            return 1;
    }
    return 0;
}

int main()
{
    int n;
    point* tag;
    scanf("%d", &n);

    tag = (point*)malloc(n * sizeof(point));
    for (int i = 0; i < n; i++)
    {
        scanf(" %d %d", &tag[i].x, &tag[i].y);
    }
    qsort(tag, n, sizeof(tag[0]), cmp);

    for (int i = 0; i < n; i++)
    {
        printf("%d %d\n", tag[i].x, tag[i].y);
    }
    return 0;
}
