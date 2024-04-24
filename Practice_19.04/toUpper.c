#include <stdio.h>
#include <ctype.h>

int main()
{
    char c;
    scanf(" %c", &c);

    int upper = toupper(c);

    printf("%c", upper);

    return 0;
}