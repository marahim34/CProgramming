#include <stdio.h>

int main()
{
    long long n, m, k;
    scanf("%lld %lld %lld", &n, &m, &k);

    long long totalKatryoshkas = 0;

    long long combo1 = n;
    if (combo1 > m)
        combo1 = m;
    if (combo1 > k)
        combo1 = k;

    totalKatryoshkas += combo1;
    n -= combo1;
    m -= combo1;
    k -= combo1;

    long long combo2 = n / 2;
    if (combo2 > m)
        combo2 = m;
    if (combo2 > k)
        combo2 = k;

    totalKatryoshkas += combo2;
    n -= 2 * combo2;
    m -= combo2;
    k -= combo2;

    long long combo3 = n / 2;
    if (combo3 > k)
        combo3 = k;

    totalKatryoshkas += combo3;

    printf("%lld\n", totalKatryoshkas);

    return 0;
}
