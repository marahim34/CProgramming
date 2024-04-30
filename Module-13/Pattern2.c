#include <stdio.h>

int main()
{
    int n, s, k;
    scanf("%d", &n);

    s = n - 1;
    k = 1;

    for (int j = 1; j <= n; j++)
    {
        for (int i = 1; i <= s; i++)
        {
            printf(" ");
        }
        for (int i = 1; i <= k; i++)
        {
            printf("*");
        }
        s--;
        k = k + 2;
        printf("\n");
    }

    s += 2;
    k -= 4;

    for (int j = n - 1; j >= 1; j--)
    {
        for (int i = 1; i <= s; i++)
        {
            printf(" ");
        }
        for (int i = 1; i <= k; i++)
        {
            printf("*");
        }
        s++;
        k -= 2;
        printf("\n");
    }

    return 0;
}
