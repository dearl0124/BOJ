int main()
{
    int a, b, c, d, sumi = 0, summ = 0;
    scanf("%d", &a);
    int mini = a;
    sumi += a;
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &b);
        if (b < mini)
        {
            mini = b;
        }
        sumi += b;
    }
    scanf("%d %d", &c, &d);
    if (c > d)
        summ = c;
    else
        summ = d;
    printf("%d", sumi - mini + summ);
    return 0;
}
