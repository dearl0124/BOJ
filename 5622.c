#include <stdio.h>

int main() 
{
    char s[15] = { 0, }, count = 0;;
    for (int i = 0; s[i] == '\0' ; i++)
    {
        scanf("%s", &s[i]);
    }
    for (int i = 0; i < 15; i++)
    {
        if (s[i] == 'A' || s[i] == 'B' || s[i] == 'C')
            count += 3;
        else if (s[i] == 'D' || s[i] == 'E' || s[i] == 'F')
            count += 4;
        else if (s[i] == 'G' || s[i] == 'H' || s[i] == 'I')
            count += 5;
        else if (s[i] == 'J' || s[i] == 'K' || s[i] == 'L')
            count += 6;
        else if (s[i] == 'M' || s[i] == 'N' || s[i] == 'O')
            count += 7;
        else if (s[i] == 'P' || s[i] == 'Q' || s[i] == 'R' || s[i] == 'S')
            count += 8;
        else if (s[i] == 'T' || s[i] == 'U' || s[i] == 'V')
            count += 9;
        else if (s[i] == 'W' || s[i] == 'X' || s[i] == 'Y' || s[i] == 'Z')
            count += 10;
    }

    printf("%d\n", count);
    return 0;
}
