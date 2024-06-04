#include <stdio.h>

void printing(int n)
{
    if (n <= 0)
        return;
    printing(n - 1);
    printf("%d\n", n);
}

int main()
{
    int n;
    scanf("%d", &n);

    printing(n);

    return 0;
}