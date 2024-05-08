#include <stdio.h>

void digitPrinting(int n)
{
    if (n == 0)
        return;
    int x = n % 10;
    digitPrinting(n / 10);
    printf("%d ", x);
}

int main()
{
    int test;
    scanf("%d", &test);

    for (int i = 0; i < test; i++)
    {
        int n;
        scanf("%d", &n);
        digitPrinting(n);
        if (n == 0)
        {
            printf("0");
        }
        printf("\n");
    }

    // digitPrinting(n);
    return 0;
}