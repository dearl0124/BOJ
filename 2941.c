#include <stdio.h>
#include <string.h>
int main()
{
    char s[101] = { 0, };
    scanf("%s", s);
    int count = strlen(s);
    for (int i = 0; i < strlen(s); i++)
    {
        if ((s[i] == 'l' || s[i] == 'n') && s[i + 1] == 'j')
            count--;
        else if (s[i] == 'd' && s[i + 1] == 'z' && s[i + 2] == '=')
            count--;
        else if (s[i] == '=' || s[i] == '-')
            count--;
    }
    printf("%d", count);
    return 0;
}
