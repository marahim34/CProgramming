#include <stdio.h>

int main()
{
    long long n, k, a;
    scanf("%lld %lld %lld", &n, &k, &a);

    // Using double to preserve any fractional part if that was a requirement
    double result = (double)n * k / a;

    if (result == (int)result)
    {
        if ((int)result >= -2147483648 && (int)result <= 2147483647)
        {
            printf("int");
        }
        else
        {
            printf("long long");
        }
    }
    else
    {
        printf("double");
    }
    return 0;
}
