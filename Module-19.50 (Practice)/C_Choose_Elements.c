#include <stdio.h>
#include <limits.h>

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);

    long long arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] < arr[j])
            {
                long long temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    long long sum = 0;
    int count = 0;
    for (int i = 0; i < n && count < k; i++)
    {
        if (arr[i] > 0)
        {
            sum += arr[i];
            count++;
        }
    }

    printf("%lld\n", sum);

    return 0;
}
