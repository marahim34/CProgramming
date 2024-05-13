#include <stdio.h>

void printing_digit(int n)
{
    if (n == 0)
        return;
    int x = n % 10;
    printing_digit(n / 10);
    printf("%d ", x);
}

int main()
{
    int t;
    scanf("%d", &t);

    int n;

    for (int i = 0; i < t; i++)
    {
        scanf("%d", &n);
        printing_digit(n);
        printf("\n");
    }

    return 0;
}