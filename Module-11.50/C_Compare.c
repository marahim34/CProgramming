#include <stdio.h>
#include <string.h>

int main()
{
    char x[21];
    scanf("%s", x);

    char y[21];
    scanf("%s", y);

    int result = strcmp(x, y);

    if (result != 0 && result < 0)
    {
        printf("%s", x);
    }
    else
    {
        printf("%s", y);
    }

    return 0;
}