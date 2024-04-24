#include <stdio.h>

int main()
{
    long long a, b, sum;
    scanf("%lld %lld", &a, &b);

    long long remA = (a % 10);
    long long remB = (b % 10);

    int summation = remA + remB;

    printf("%d", summation);

    return 0;
}