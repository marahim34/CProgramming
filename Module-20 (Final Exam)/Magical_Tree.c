#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int f = 6 + (n - 1) / 2;
    int bottom_rows = 5;
    int bottom_stars = n;

    int k = 1;

    for (int i = 0; i < f; i++)
    {
        for (int j = 0; j <= f - i - 1; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= k; j++)
        {
            printf("*");
        }
        k += 2;
        printf("\n");
    }

    int center_column = f - 1;

    for (int i = 0; i < bottom_rows; i++)
    {
        for (int j = 0; j < center_column - (bottom_stars / 2); j++)
        {
            printf(" ");
        }
        for (int j = 0; j < bottom_stars; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
