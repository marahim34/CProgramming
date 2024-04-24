#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    int arr[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }

    int positive_count = 0;
    int negative_count = 0;

    for (int i = 0; i < N; i++)
    {
        if (arr[i] > 0)
        {
            positive_count += arr[i];
        }
        if (arr[i] < 0)
        {
            negative_count += arr[i];
        }
    }
    printf("%d %d", positive_count, negative_count);
    return 0;
}