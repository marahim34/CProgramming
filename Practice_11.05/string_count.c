#include <stdio.h>

int printing_count(char s[], int i)
{
    if (s[i] == '\0')
    {
        return 0;
    }

    int ans = printing_count(s, i + 1);
    if (s[i] >= 'A' && s[i] <= 'Z')
    {
        s[i] = s[i] + 32;
    }

    if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
    {
        return ans + 1;
    }
    else
    {
        return ans;
    }
}

int main()
{
    char s[205];
    fgets(s, 205, stdin);

    // printf("%s", s);
    int count = printing_count(s, 0);
    printf("%d", count);

    return 0;
}