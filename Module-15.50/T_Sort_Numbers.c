#include <stdio.h>

void original(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }
}

void ascending(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main()
{
    int n = 3;

    int arr[n];
    int arrCopy[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        arrCopy[i] = arr[i];
    }

    ascending(arrCopy, n);

    for (int i = 0; i < n; i++)
    {
        printf("%d\n", arrCopy[i]);
    }

    printf("\n");
    original(arr, n);

    return 0;
}
