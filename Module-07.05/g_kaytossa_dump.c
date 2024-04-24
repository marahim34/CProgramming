#include <stdio.h>

int main()
{
    long long n, m, k;
    scanf("%lld %lld %lld", &n, &m, &k);

    int ans = 0;

    int Katryoshka_from_third;
    if (n < m)
    {
        if (n < k)
        {
            Katryoshka_from_third = n;
        }
        else
        {
            Katryoshka_from_third = k;
        }
    }
    else
    {
        if (m < k)
        {
            Katryoshka_from_third = m;
        }
        else
        {
            Katryoshka_from_third = k;
        }
    }

    ans += Katryoshka_from_third;

    n -= Katryoshka_from_third;
    m -= Katryoshka_from_third;
    k -= Katryoshka_from_third;

    int Katryoshka_from_first;
    if (n / 2 < k)
    {
        Katryoshka_from_first = n / 2;
    }
    else
    {
        Katryoshka_from_first = k;
    }
    ans += Katryoshka_from_first;

    printf("%d\n", ans);

    return 0;
}
