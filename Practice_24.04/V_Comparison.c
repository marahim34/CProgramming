#include <stdio.h>

int main()
{
    int a, b;
    char symbol;
    scanf("%d  %c %d", &a, &symbol, &b);

    // printf("%d %c %d", a, symbol, b);

    if (symbol == '>' && a > b)
    {
        printf("Right");
    }
    else if (symbol == '<' && a < b)
    {
        printf("Right");
    }
    else if (symbol == '=' & a == b)
    {
        printf("Right");
    }
    else
    {
        printf("Wrong");
    }
    return 0;
}