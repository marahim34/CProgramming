#include <stdio.h>
#include <limits.h>

int max_n(int arr[], int n, int i)
{
    int max = INT_MIN;
    if (i == n)
    {
        return max;
    }

    int x = max_n(arr, n, i + 1);
    if (arr[i] > x)
    {
        return arr[i];
    }
    else
    {
        return x;
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

    int maxnum = max_n(arr, n, 0);
    printf("%d", maxnum);
    return 0;
}