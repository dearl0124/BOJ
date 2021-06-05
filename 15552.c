#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    for(int i = 0; i < t; i++)
    {
        int b, c;
        scanf("%d %d", &b, &c);
        printf("%d\n", b + c);
    }
    
    return 0;
}
