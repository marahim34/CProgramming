#include <stdio.h>

int main()
{
    int x = 10;
    printf("%p\n", &x);

    int *ptr = &x;
    *ptr = 50;
    // printf("%p", x);
    return 0;
}