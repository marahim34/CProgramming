#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);

    for (int i = 1; i <= 12; i++)
    {
        int multiply = (a * i);
        printf("%d * %d = %d\n", a, i, multiply);
    }

    return 0;
}