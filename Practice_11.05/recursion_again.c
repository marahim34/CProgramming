#include <stdio.h>

void increment(int n)
{
    if (n == 0)
        return;
    increment(n - 1);
    printf("%d ", n);
}

void decrement(int n)
{
    printf("%d ", n);
    decrement(n - 1);
}

int main()
{
    int n;
    scanf("%d", &n);

    increment(n);
    printf("\n");
    decrement(n);

    return 0;
}