#include <stdio.h>

int main()
{
    char s[101] = { 0, };
    scanf("%s", s);
    for (int i = 97; i < 123; i++)
    {
        int count = 0;
        for (int j = 0; s[j] != NULL; j++)
        {
            if (s[j] == i)
            {
                printf("%d ", j);
                count++;
                break;
            }
        }
        if (count == 0)
            printf("-1 ");
    }
    return 0;
}
