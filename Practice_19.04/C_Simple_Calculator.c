#include <stdio.h>

int main()
{
    long long x, y;
    scanf("%lld %lld", &x, &y);

    long long sum = x + y;
    long long multiplication = x * y;
    long long subtraction = x - y;

    printf("%lld + %lld = %lld\n", x, y, sum);
    printf("%lld * %lld = %lld\n", x, y, multiplication);
    printf("%lld - %lld = %lld\n", x, y, subtraction);

    return 0;
}
