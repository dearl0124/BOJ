#include <stdio.h>

int main()
{
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    printf("%d.", (num1 / num2));
    num1 = num1 % num2;
    for (int i = 0; num1 > 0 && i <= 1000; i++)
    {
        num1 *= 10;
        printf("%d", num1 / num2);
        num1 = (num1 - (num1 / num2) * num2); 
       
    }
    printf("\n");

    return 0;
}
