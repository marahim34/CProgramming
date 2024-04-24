#include <stdio.h>
#include <limits.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int minimum = INT_MAX;
    int maximum = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < minimum)
        {
            minimum = arr[i];
        }
        if (arr[i] > maximum)
        {
            maximum = arr[i];
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == minimum)
        {
            arr[i] = maximum;
        }
        else if (arr[i] == maximum)
        {
            arr[i] = minimum;
        }
        printf("%d ", arr[i]);
    }

    return 0;
}