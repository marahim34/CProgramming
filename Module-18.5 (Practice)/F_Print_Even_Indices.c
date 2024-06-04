#include <stdio.h>

void evenIndices(int arr[], int i, int n)
{
    if (i >= n)
        return;

    evenIndices(arr, i + 2, n);
    if (i % 2 == 0)
    {
        printf("%d ", arr[i]);
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

    evenIndices(arr, 0, n);

    return 0;
}