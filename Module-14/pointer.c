#include <stdio.h>

int main()
{
    int x = 10;

    printf("%p\n", &x);
    // Keeping the address in another value;
    int *p = &x;
    printf("%p\n", p);

    // dereference to bring value from reference p
    printf("%d\n", *p);

    // changing the value
    *p = 500;

    printf("%d\n", x);
    return 0;
}