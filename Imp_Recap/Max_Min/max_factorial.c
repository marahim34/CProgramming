#include <stdio.h>
#include <limits.h>

int max(int arr[], int n, int i)
{
    int max_num = INT_MIN;

    if (i == n)
    {
        return max_num;
    }

    int result = max(arr, n, i + 1);

    if (arr[i] > result)
    {
        return arr[i];
    }
    else
    {
        return result;
    }
}

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int result = max(arr, n, 0);
    printf("%d", result);

    return 0;
}