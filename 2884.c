#include <stdio.h>
#include <stdlib.h>

int main()
{
    int H, M;
    int NH = 0;
    int NM = 0;
    scanf("%d %d", &H, &M);
    if (H >= 0 && H <= 23 && M <= 59 && M >= 0)
    {
        if (M < 45)
        {
            NM = abs(M - 45);
            NM = 60 - NM;
        }
        else
        {
            NM = M - 45;
        }

        if (H == 0 && M < 45)
        {
            NH = 23;
        }
        else if (M >= 45)
        {
            NH = H;
        }
        else
        {
            NH = H - 1;
        }
    }
    printf("%d %d", NH, NM);

    return 0;
}
