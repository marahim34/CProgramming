#include <stdio.h>

int main()
{
    long long a, b, c;
    scanf("%lld %lld %lld", &a, &b, &c);

    // printf("%lld %lld %lld", e, m, b);
    long long count = 0;

    long long kat_from_third;

    if (a < b)
    {
        if (a < c)
        {
            kat_from_third = a;
            // printf("%lld", a);
        }
        else
        {
            kat_from_third = c;
            // printf("%lld", c);
        }
    }
    else
    {
        if (a < c)
        {
            kat_from_third = a;
            // printf("%lld", a);
        }
        else
        {
            kat_from_third = b;
            // printf("%lld", b);
        }
    }

    count = count + kat_from_third;
    // printf("%lld ", count);

    a = a - kat_from_third;
    b = b - kat_from_third;
    c = c - kat_from_third;

    // printf("\n%lld %lld %lld", a, b, c);
    long long kat_from_second;

    long long d = a / 2;
    // printf("%lld", d);

    if (d < c)
    {
        kat_from_second = d;
        // printf("%lld", d);
    }
    else
    {
        kat_from_second = c;
        // printf("%lld", d);
    }

    count = count + kat_from_second;
    printf("%lld", count);

    return 0;
}