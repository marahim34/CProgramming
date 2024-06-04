#include <stdio.h>

void odd_even(void)
{
    int n;
    scanf("%d", &n);

    long long a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &a[i]);
    }

    int odd_count = 0;
    int even_count = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            even_count++;
        }
        else
        {
            odd_count++;
        }
    }
    printf("%d %d", even_count, odd_count);
}

int main()
{
    odd_even();
    return 0;
}