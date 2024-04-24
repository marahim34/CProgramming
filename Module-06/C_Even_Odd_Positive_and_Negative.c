#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int even = 0;
    int odd = 0;
    int positive = 0;
    int negative = 0;

    int a, i;
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &a);

        if (a % 2 == 0)
        {
            // even = even + 1;
            even++;
        }
        else
        {
            // odd = odd + 1;
            odd++;
        }

        if (a > 0)
        {
            positive++;
        }
        else if (a < 0)
        {
            negative++;
        }
    }
    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d", even, odd, positive, negative);
    return 0;
}