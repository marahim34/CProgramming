#include <stdio.h>
#include <ctype.h>

int main()
{
    char c;
    scanf(" %c", &c);

    char lower = tolower(c);

    printf("%c", lower);

    return 0;
}