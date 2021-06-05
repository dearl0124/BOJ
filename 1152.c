#include <stdio.h>
#include <string.h>

int main()
{
    int count = 0;
    char s1[1000001];
    gets(s1);
    int n = strlen(s1);

    for (int i = 0; i < n; i++)
    {
        if (s1[i] == 0)
            break;
       else if ((s1[i] != 32) && (s1[i + 1] == 32 || s1[i + 1] == 0))
            count++;
    }
    printf("%d", count);

    return 0;
}
