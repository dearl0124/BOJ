#include <stdio.h>
int main()
{
    int num1, num2;
    scanf("%d\n %d", &num1, &num2);
    printf("%d\n", num1 * (num2 % 10));
  
    int num3 = num2 % 10;
    int num4 = num3 % 10;
  
    printf("%d\n", num1 * (num2 / 10 % 10));
  
    num4 = num4 % 10;
    
    printf("%d\n", num1 * (num2 / 100 % 10));
    printf("%d\n", num1 * num2);
    return 0;

}
