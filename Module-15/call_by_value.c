#include <stdio.h>

void fun(int x)
{
    printf("Address of fun x - %p\n", &x);
    printf("%d", x);

    x = 500;
    printf("value of fun x = %d\n", x);
}

int main()
{
    int x = 10;
    printf("Address of main x - %p\n", &x);
    fun(x);
    printf("value of main x = %d\n", x);

    return 0;
}