#include <stdio.h>

void summation(void)
{
    int x, y;
    scanf("%d %d", &x, &y);
    int sum = x + y;
    printf("%d", sum);
}

int main()
{
    summation();
    return 0;
}