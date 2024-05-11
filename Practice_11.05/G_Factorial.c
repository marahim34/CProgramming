#include <stdio.h>

int main()
{
    int test;
    scanf("%d", &test);

    for (int testIndex = 0; testIndex < test; testIndex++)
    {
        int n;
        scanf("%d", &n);

        if (n < 0)
        {
            printf("Factorial not defined\n");
            continue;
        }

        long long result = 1;
        for (int factor = 1; factor <= n; factor++)
        {
            result *= factor;
        }

        printf("%lld\n", result);
    }

    return 0;
}
