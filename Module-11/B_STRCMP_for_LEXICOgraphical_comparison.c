#include <stdio.h>
#include <string.h>

int main()
{
    char a[100], b[100];
    scanf("%s %s", a, b);

    int val = strcmp(a, b);

    if (val < 0)
    {
        printf("A is smaller");
    }
    else if (val > 0)
    {
        printf("B is samller");
    }
    else
    {
        printf("A and B is same");
    }

    // printf("%d", val);

    return 0;
}