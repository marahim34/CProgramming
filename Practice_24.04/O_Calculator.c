#include <stdio.h>

int main()
{
    int a, b;
    char expression;
    scanf("%d %c%d", &a, &expression, &b);

    int result = 0; // Initialize to a default value

    if (expression == '+')
    {
        result = a + b;
    }
    else if (expression == '-')
    {
        result = a - b;
    }
    else if (expression == '*')
    {
        result = a * b;
    }
    else if (expression == '/')
    {
        result = a / b;
    }

    printf("%d", result);
    return 0;
}
