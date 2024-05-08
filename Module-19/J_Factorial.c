#include <stdio.h>

long long factorialCheck(long long n)
{
    if (n == 0)
        return 1;
    long long ans = factorialCheck(n - 1);
    return ans * n;
}

int main()
{
    long long n;
    scanf("%lld", &n);

    long long ans = factorialCheck(n);
    printf("%lld", ans);
    return 0;
}