#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int s, d;
    s = n - 1;
    d = 1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= s; j++)
        {
            printf(" ");
        }
        for (int j = d; j >= 1; j--)
        {
            printf("%d", j);
        }
        s--;
        d++;
        printf("\n");
    }

    return 0;
}