#include <stdio.h>

int main()
{
    long long a, b, c, d;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);

    // Compute the product modulo 100 at each step to avoid overflow
    long long result = a % 100;
    result = (result * (b % 100)) % 100;
    result = (result * (c % 100)) % 100;
    result = (result * (d % 100)) % 100;

    // Print the last two digits of the product
    printf("%02lld\n", result);
    return 0;
}
