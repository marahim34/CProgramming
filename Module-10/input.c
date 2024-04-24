#include <stdio.h>

int main()
{
    char a[5];

    scanf("%s", &a);
    // For string or character use of ampersent & is not required. Because array itself is considered as an address.

    printf("%s\n", a);

    return 0;
}