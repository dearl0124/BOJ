#include <stdio.h>
#include <string.h>

char a[10002] = { 0, };
char b[10002] = { 0, };
char ans[10003] = { 0, };

void reverse(char arr[])
{
    int len = strlen(arr);
    for (int i = 0; i < len / 2; i++)
    {
        char temp = arr[i];
        arr[i] = arr[len - 1 - i];
        arr[len - 1 - i] = temp;
    }
}
int main() 
{
    scanf("%s %s", a, b);
    int carry = 0;
    int len = strlen(a) > strlen(b) ? strlen(a) : strlen(b);
    reverse(a);
    reverse(b);

    for (int i = 0; i < len; i++)
    {
        int sum = a[i] - '0' + b[i] - '0' + carry;
        while (sum < 0)
            sum += '0';
        if (sum > 9)
            carry = 1;
        else
            carry = 0;
        ans[i] = sum % 10 + '0';
    }

    if (carry == 1)
        ans[len] = '1';
    reverse(ans);
    printf("%s", ans);

    return 0;
}
