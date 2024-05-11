#include <stdio.h>

int main()
{
    long long n, k, a;
    scanf("%lld %lld %lld", &n, &k, &a);

    if (a == 0)
    {
        return 1;
    }

    double result = (double)n * k / a;

    if (result != (long long)result)
    {
        printf("double");
    }
    else
    {
        long long intResult = (long long)result;
        if (intResult >= -2147483648LL && intResult <= 2147483647LL)
        {
            printf("int");
        }
        else
        {
            printf("long long");
        }
    }
    return 0;
}
