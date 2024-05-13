#include <stdio.h>

long long factorial(long long n)
{
    if (n == 0)
        return 1;

    long long result = factorial(n - 1);
    return result * n;
}

int main()
{
    long long n;
    scanf("%lld", &n);

    long long result = factorial(n);

    printf("%lld", result);
    return 0;
}