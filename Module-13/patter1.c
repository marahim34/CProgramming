#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n); // Read the total number of lines for the pattern

    // Print increasing pattern
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    // Print decreasing pattern
    for (int i = n - 1; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
