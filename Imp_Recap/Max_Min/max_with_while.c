#include <stdio.h>
#include <limits.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n], i = 0;
    while (i < n)
    {
        scanf("%d", &arr[i]);
        i++;
    }

    int max = INT_MIN;
    i = 0;
    while (i < n)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        i++;
    }

    printf("%d", max);

    return 0;
}