#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);

    char arr[n][101];
    for (int i = 0; i < n; i++)
    {
        scanf("%100s", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        int len = strlen(arr[i]);
        // printf("%s %d\n", arr[i], len);
        if (len <= 10)
        {
            printf("%s\n", arr[i]);
        }
        else if (len > 10)
        {
            char first_word = arr[i][0];
            int newlength = len - 2;
            char last_word = arr[i][len - 1];
            // int last_word = arr[i][len - 1];
            printf("%c%d%c\n", first_word, newlength, last_word);
        }
    }

    return 0;
}