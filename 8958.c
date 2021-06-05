#include <stdio.h>
#include <string.h>
int main()
{
    char s1[80] = { 0, };
    int n;
    scanf("%d", &n);
    int i, j;
    int sum, score;
    for (i = 0; i < n; i++)
    {
        score = 1;
        sum = 0;
        scanf("%s", s1);
        for (j = 0; j < strlen(s1); j++)
        {
            if (s1[j] == 'O')
            {
                sum += score;
                score++;
            }
            if (s1[j] == 'X')
                score = 1;
        }
        printf("%d\n", sum);
    }
    return 0;
}
