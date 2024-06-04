#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    long long arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
    }

    int count_two = 0, count_three = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            count_two++;
        }
        if (arr[i] % 3 == 0 && arr[i] % 2 != 0)
        {
            count_three++;
        }
    }
    printf("%d %d", count_two, count_three);

    return 0;
}