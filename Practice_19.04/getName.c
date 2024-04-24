#include <stdio.h>

int main()
{
    char name[50];

    printf("Enter your name: ");
    // gets(name);
    fgets(name, sizeof(name), stdin);

    printf("Hello, ");
    puts(name);
    return 0;
}