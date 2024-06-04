#include <stdio.h>
#include <string.h>

int is_palindrome(char *s)
{
    int len = strlen(s);

    int isPalindrome = 1;

    int i = 0, j = len - 1;

    while (i < j)
    {
        if (s[i] != s[j])
        {
            isPalindrome = 0;
            break;
        }
        i++;
        j--;
    }

    return isPalindrome;
}

int main()
{
    char s[1001];
    scanf("%1000s", s);
    if (is_palindrome(s) == 1)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    };

    return 0;
}