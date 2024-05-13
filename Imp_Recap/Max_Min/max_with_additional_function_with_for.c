#include <stdio.h>
#include <limits.h>

int finding_max(int arr[], int n, int i)
{

    int max = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    printf("%d", max);
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

    finding_max(arr, n, 0);

    return 0;
}