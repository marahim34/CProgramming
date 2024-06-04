#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    long long m;
    int a, b, c;

    for (int i = 0; i < t; i++)
    {
        scanf("%lld %d %d %d", &m, &a, &b, &c);

        long long multiplication_abc = (long long)a * b * c;

        if (m % multiplication_abc == 0)
        {
            long long result = m / multiplication_abc;

            if (result >= 0)
            {
                printf("%lld\n", result);
            }
            else
            {
                printf("-1\n");
            }
        }
        else
        {
            printf("-1\n");
        }
    }

    return 0;
}
