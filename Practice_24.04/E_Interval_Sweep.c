#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    if (b - a == 1 || a - b == 1)
    {
        printf("YES");
    }
    else if (a != 0 && b != 0 && b - a == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}