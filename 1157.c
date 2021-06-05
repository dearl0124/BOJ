#include <stdio.h>
#define MAXLINE 1000001
char s1[MAXLINE];

int main()
{
    int i;
    int num[26] = { 0, };
    scanf("%s", s1);
    for (i = 0; s1[i] != 0; i++)
    {
        if (s1[i] < 97)
            s1[i] += 32;
        num[s1[i] - 97]++;
    }

    int max = num[0];
    int mi = 0;
    for (i = 1; i < 26; i++)
    {
        if (num[i] > max)
        {
            max = num[i];
            mi = i;
        }
        else if (num[i] != 0 && (max == num[i]))
            mi = -1;
    }
    if (mi != -1)
        printf("%c", mi + 65);
    else if(mi == -1)
        printf("?\n");

    return 0;
}
