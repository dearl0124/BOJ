#include <stdio.h>
#include <string.h>

int main()
{
    int t, r, len;
    scanf("%d", &t);
    char s[21] = { 0, };
    for (int i = 0; i < t; i++)
    {
        scanf("%d %s", &r , s);
        len = strlen(s);
        for (int j = 0; j < len; j++)
        {
            for (int k = 0; k < r; k++)
            {
                printf("%c", s[j]);
            }
        }
        printf("\n");
    }
    return 0;
}
