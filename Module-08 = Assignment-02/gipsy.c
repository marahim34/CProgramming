#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    // printf("%d", N);
    int arr[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }
    int x, v;
    scanf("%d %d", &x, &v);

    arr[x] = v;

    for (int i = N - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}