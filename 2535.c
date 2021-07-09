#include <stdio.h>
#include <stdlib.h>

typedef struct Student {
    int country;
    int number;
    int score;
} stu;

int cmp(int const* a, int const* b)
{
    stu* num1 = (stu*)a;
    stu* num2 = (stu*)b;

    if (num1->score > num2->score)
        return -1;
    else if (num1->score, num2->score)
        return 1;
    else
        return 0;
}

int main()
{
    int n, count = 0, s1[100] = { 0, };
    stu* list;
    scanf("%d", &n);
    list = (stu*)malloc(sizeof(stu) * n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d %d", &list[i].country, &list[i].number, &list[i].score);
    }
    qsort(list, n, sizeof(list[0]), cmp);

    for (int i = 0; i < n; i++)
    {
        s1[list[i].country]++;
        if (s1[list[i].country] < 3)
        {
            printf("%d %d\n", list[i].country, list[i].number);
            count++;
        }
        if (count == 3)
            break;
    }
    return 0;
}
