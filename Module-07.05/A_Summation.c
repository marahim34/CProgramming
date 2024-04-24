#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    long long arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
    }

    long long count = 0;
    for (int i = 0; i < n; i++)
    {
        count += arr[i];
    }

    if (count < 0)
    {
        count -= 2 * count;
    }

    printf("%lld\n", count);
    return 0;
}
