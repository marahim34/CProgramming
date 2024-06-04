#include <stdio.h>
#include <stdlib.h>

int main()
{
    int test;
    scanf("%d", &test);

    for (int i = 0; i < test; i++)
    {
        int n;
        scanf("%d", &n);

        int arr[n];
        int brr[n];
        int crr[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
            brr[i] = arr[i];
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                int temp;
                if (brr[i] > brr[j])
                {
                    temp = brr[i];
                    brr[i] = brr[j];
                    brr[j] = temp;
                }
            }
        }

        for (int i = 0; i < n; i++)
        {
            crr[i] = abs(arr[i] - brr[i]);
            printf("%d ", crr[i]);
        }
        printf("\n");
    }

    return 0;
}