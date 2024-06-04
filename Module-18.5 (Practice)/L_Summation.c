#include <stdio.h>

long long sum = 0;

void summation(long long arr[], int i, int n)
{
    if (i >= n)
        return;
    sum += arr[i];
    summation(arr, i + 1, n);
}

int main()
{
    int n;
    scanf("%d", &n);

    long long arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
    }

    summation(arr, 0, n);
    printf("%lld", sum);

    return 0;
}
