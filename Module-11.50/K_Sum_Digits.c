#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    char numbers[n + 1];
    scanf("%s", numbers);

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += numbers[i] - '0';
    }

    printf("%d\n", sum);

    return 0;
}
