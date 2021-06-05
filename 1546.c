#include <stdio.h>
#define MAXLINE 1001

int main()
{
    int n, i;
    float score[MAXLINE] = { 0, };
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%f", &score[i]);
    }
    float sum = 0;
    float max = score[0];
    for (i = 1; i < n; i++)
    {
        if (score[i] > max)
            max = score[i];
    }
    for (i = 0; i < n; i++)
    {
        score[i] = score[i] / max * 100;
        sum += score[i];
    }
    printf("%0.6f", sum / n);
    return 0;
}
