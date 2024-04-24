#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i <= 4; i++)
    {
        scanf("%d", &arr[i]);
    }
    int count = 0;

    for (int i = 0; i <= 4; i++)
    {
        printf("%d\n", arr[i]);
        count = count + arr[i];
    }
    printf("%d", count);
    return 0;
}