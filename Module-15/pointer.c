#include <stdio.h>

int main()
{
    int x = 100;
    int *ptr = &x;

    printf("x er address - %p\n", &x);
    printf("ptr er value - %p\n", ptr);
    printf("ptr er address - %p\n", &ptr);
    printf("ptr er memory size - %d bytes\n", sizeof(ptr));

    // de reference
    x = 200;
    *ptr = 400;
    // (Remember that x and *ptr lekha same hobe)

    printf("x er value - %d\n", x);
    printf("x er value - %d\n", *ptr);

    return 0;
}