#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int reverse = 0;
    if (n >= 0)
    {
        for (int i = 0; i <= n; i++)
        {
            printf("%d", reverse * 10 + (n % 2));
        }
    }

    return 0;
}
