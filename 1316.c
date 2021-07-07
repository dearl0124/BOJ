#include<stdio.h>
#include<string.h>
#include <stdbool.h>

int main()
{
    int n;
    scanf("%d", &n);
    char s[101] = { 0, };
    int count = 0;
    bool group = true;


    while (n--)
    {
        int alpha[26] = { 0, };
        group = true;
        
        scanf("%s", s);
        alpha[s[0] - 'a'] = 1;
        for (int i = 1; i < strlen(s); i++)
        {
            if (alpha[s[i] - 'a'] == 0) // 전에 등장 한 적이 없다면
                alpha[s[i] - 'a'] = 1;
            else
            {
                if (s[i] == s[i - 1]) // 전에 등장하였지만 바로 직전 글자와 똑같은 경우 패스
                    continue;
                else
                    group = false; // 다를 경우 false
            }
        }
        if (group)
            count++;
    }
    printf("%d", count);
    return 0;
}
