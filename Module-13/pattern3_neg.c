#include <stdio.h>

int main()
{
    int n, k = 1;
    scanf("%d", &n);

    for (int i = n; i >= 1; i--)
    {
        // line start
        for (int j = n; j >= k; j--)
        {
            printf("%d", j);
        }
        n--;
        printf("\n");
    }
    return 0;
}