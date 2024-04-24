#include <stdio.h>

int main()
{
    // int a[5];
    char b[5];
    // int sz = sizeof(a) / sizeof(int);
    int sz1 = sizeof(b) / sizeof(char);
    // printf("%d\n", sizeof(a));
    // printf("%d\n", sizeof(int));
    // printf("%d\n", sizeof(long long int));
    // printf("%d\n", sz);
    printf("%d", sz1);
    return 0;
}