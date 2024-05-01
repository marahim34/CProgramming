#include <stdio.h>

void fun(int *p)
{
    printf("value of fun x - %p\n", p);

    *p = 300;
    printf("value of fun x - %d\n", *p);
}

int main()
{
    int x = 10;
    printf("address of main x - %p\n", &x);
    printf("value of main x - %d\n", x);

    fun(&x);
    printf("value of main x - %d\n", x);

    return 0;
}