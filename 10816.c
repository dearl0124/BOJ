#include <stdio.h>
int s1[20000002];
int m1[20000002];

int main()
{
    int n, num, m;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num);
        if (num < 0)
            s1[10000000 + num]++;
        else
            s1[num + 10000000]++;
    }
    scanf("%d", &m);
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &m1[i]);
        if (m1[i] > 0)
            m1[i] += 10000000;
        else
            m1[i] += 10000000;
        
    }

    for (int i = 0; i < m; i++)
    {
        if (s1[m1[i]] == 0)
            printf("0 ");
        else if (s1[m1[i]] != 0)
            printf("%d ", s1[m1[i]]);
    }
    return 0;
}
