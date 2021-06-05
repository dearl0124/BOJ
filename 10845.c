#include <stdio.h>
#include <string.h>

int s1[10001];
int a;
int first;

void PUSH(int x)
{
    scanf("%d", &x);
    s1[a] = x;
    a++;
}
void POP()
{
    if (a != 0)
    {
        printf("%d\n", s1[first]);
        s1[first] = 0;
        first++;
        if (first >= a)
            first = 0, a = 0;
    }
    else
        printf("-1\n");
}
void SIZE()
{
    if (a != 0)
        printf("%d\n", a - first);
    else
        printf("0\n");
}
void EMPTY()
{
    if (a != 0)
        printf("0\n");
    else
        printf("1\n");
}
void FRONT()
{
    if (a != 0)
    {
        printf("%d\n", s1[first]);
    }
    else
        printf("-1\n");
}
void BACK()
{
    if (a != 0)
    {
        printf("%d\n", s1[a - 1]);
    }
    else
        printf("-1\n");
}

int main()
{
    int n = 0, x = 0;
    scanf("%d", &n);
    char input[10];

    for (int i = 0; i < n; i++)
    {
        scanf("%s", input);
        if (strcmp(input, "push") == 0)
            PUSH(x);
        else if (strcmp(input, "pop") == 0)
            POP();
        else if (strcmp(input, "size") == 0)
            SIZE();
        else if (strcmp(input, "empty") == 0)
            EMPTY();
        else if (strcmp(input, "front") == 0)
            FRONT();
        else if (strcmp(input, "back") == 0)
            BACK();
    }

    return 0;
}
