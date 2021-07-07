/* 처음 시도 */

#include<stdio.h>
#include<string.h>
int s[500000];
int s2[500000];
int main()
{
    int n, m;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &m);
        s[i] = m;
    }
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &m);
        s2[i] = 0;
        for (int j = 0; j < n; j++)
        {
            if (s[j] == m)
                s2[i] = 1;
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", s2[i]);
    }
    return 0;
}

/* 시간 초과로 실패 */

/* 두 번째 시도 */

#include<stdio.h>
#include<string.h>
int s1[20000001];
int s2[20000001];
int main()
{
    int n, m, num;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num);
        s1[num + 10000000]++;
    }
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num);
        s2[i] = num + 10000000;
    }
    for (int i = 0; i < n; i++)
    {
        if (s1[s2[i]] == 0)
            printf("0 ");
        else
            printf("1 ");
    }
    return 0;
}
