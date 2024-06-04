#include <stdio.h>

void numbers(int n)
{
    if (n <= 0)
        return;
    if (n > 1)
    {
        printf("%d ", n);
        numbers(n - 1);
    }
    else
    {
        printf("%d", n);
    }
}

int main()
{
    int n;
    scanf("%d", &n);

    numbers(n);

    return 0;
}