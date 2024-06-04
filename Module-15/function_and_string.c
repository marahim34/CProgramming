#include <stdio.h>
#include <string.h>

void fun(char arr[])
{
    // int sz = sizeof(arr) / sizeof(char);
    // printf("%d\n", sz);

    printf("%d - with null", strlen(arr));
}

int main()
{
    char arr[20] = "Hello";

    fun(arr);

    return 0;
}