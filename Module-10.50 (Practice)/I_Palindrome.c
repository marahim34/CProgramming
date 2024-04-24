#include <stdio.h>
#include <string.h>

int main()
{
    char s[1001];
    scanf("%s", s);

    int len = strlen(s);

    int isPalindrome = 1;

    int i = 0, j = len - 1;

    while (i < j)
    {
        int temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        if (s[i] != s[j])
        {
            isPalindrome = 0;
        }
        i++;
        j--;
    }

    if (isPalindrome == 1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}