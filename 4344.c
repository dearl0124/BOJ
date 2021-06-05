#include <stdio.h>
int arr[1001];

int main()
{
    int n, j, c, sum = 0;
    double p = 0;
    float score = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        sum = 0, score = 0, p = 0;
        scanf("%d", &c);
        for (j = 0; j < c; j++)
        {
            int s;
            scanf("%d", &s);
            sum += s;
            arr[j] = s;
        }
        score = (sum / c);
        for (int k = 0; k < c; k++)
        {
            if (score < arr[k])
                p++;
        }
        printf("%.3f%%\n", ((p / c) * 100));
    }
    return 0;
}
