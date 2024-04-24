#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char s[100001];
    scanf("%s", &s);

    int len = strlen(s);

    for (int i = 0; i < len; i++)
    {
        if (s[i] == ',')
        {
            s[i] = ' ';
            // printf("%s", s[i]);
        }
        else if (s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] = toupper(s[i]);
        }
        else
        {
            s[i] = tolower(s[i]);
        }
    }
    printf("%s", s);

    return 0;
}