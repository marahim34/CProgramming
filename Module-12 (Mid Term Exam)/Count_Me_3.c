#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);

    char s[T][10001];

    for (int i = 0; i < T; i++)
    {
        scanf("%10000s", s[i]);
    }

    int capital_count;
    int small_count;
    int digits_count;

    for (int i = 0; i < T; i++)
    {
        capital_count = 0;
        small_count = 0;
        digits_count = 0;

        for (int j = 0; s[i][j] != '\0'; j++)
        {
            if (s[i][j] >= 'A' && s[i][j] <= 'Z')
            {
                capital_count++;
            }
            else if (s[i][j] >= 'a' && s[i][j] <= 'z')
            {
                small_count++;
            }
            else if (s[i][j] >= '0' && s[i][j] <= '9')
            {
                digits_count++;
            }
        }

        printf("%d %d %d\n", capital_count, small_count, digits_count);
    }

    return 0;
}
