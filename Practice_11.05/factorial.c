#include <stdio.h>

int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    long long ans = factorial(n - 1);
    return ans * n;
}

int main()
{
    long long n;
    scanf("%lld", &n);

    long long ans = factorial(n);
    printf("%lld", ans);
    return 0;
}