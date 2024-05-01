#include <stdio.h>

int main()
{
    double x = 5.26;

    double *ptr = &x;
    *ptr = 10.20;

    double *ptr2 = ptr;
    *ptr2 = 100;
    printf("x er value - %.2lf\n", x);
    printf("x er value - %.2lf\n", *ptr);
    printf("ptr er size - %d bytes\n", sizeof(ptr));
    printf("x er size - %d bytes", sizeof(x));
    return 0;
}