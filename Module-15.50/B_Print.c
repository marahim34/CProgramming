#include <stdio.h>

void print_numbers(void)
{
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        if (i < n)
        {
            printf("%d ", i);
        }
        if (i == n)
        {
            printf("%d", i);
        }
    }
}

int main()
{
    print_numbers();
    return 0;
}