#include <stdio.h>
#include <string.h>

int s1[10001];
int a = 0;
void PUSH(int x)
{
    scanf("%d", &x);
    s1[a] = x;
    a++;
} 
void POP(int temp)
{
    if (a != 0)
    {
        a--;
        printf("%d\n", s1[a]);
        s1[a] = 0;
    }
    else
        printf("-1\n");
    
}
void SIZE()
{
    if (a != 0)
        printf("%d\n", a);
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
void TOP()
{
    if (a != 0)
        printf("%d\n", s1[a - 1]);
    else
        printf("-1\n");
}

int main()
{
    int n = 0, x = 0, temp = 0;
    char input[10] = { 0, };
    char* Push = "push";
    char* Pop = "pop";
    char* Size = "size";
    char* Empty = "empty";
    char* Top = "top";
    scanf("%d\n", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%s", &input);

        if (strcmp(Push, input) == 0)
            PUSH(x);
        else if (strcmp(Pop, input) == 0)
            POP(temp);
        else if (strcmp(Size, input) == 0)
            SIZE();
        else if (strcmp(Empty, input) == 0)
            EMPTY();
        else if (strcmp(Top, input) == 0)
            TOP();
    }
    return 0;
}
