#include <stdio.h>

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};

    printf("value of 0 index - %d\n", arr[0]);
    printf("address of 0 index - %p\n", &arr[0]);
    printf("address of 0 index - %p\n", &arr);
    printf("address of 0 index - %p\n", &arr[1]);

    printf("value of 0 index - %d\n", *arr);

    printf("Value of first index - %d\n", arr[1]);
    printf("Value of first index - %d\n", *(arr + 1));

    // other ways to get the value
    printf("%d\n", *(arr + 1));
    printf("%d\n", *(1 + arr));
    printf("%d\n", arr[1]);
    printf("%d\n", 1 [arr]);

    return 0;
}