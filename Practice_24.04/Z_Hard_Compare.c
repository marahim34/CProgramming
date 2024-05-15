#include <stdio.h>
#include <math.h>

int main()
{
    long long a, b, c, d;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);

    double log_a = log((double)a);
    double log_c = log((double)c);

    double result1 = b * log_a;
    double result2 = d * log_c;

    if (result1 > result2)
    {
        printf("YES");
    }
    else if (result1 <= result2)
    {
        printf("NO");
    }

    return 0;
}
