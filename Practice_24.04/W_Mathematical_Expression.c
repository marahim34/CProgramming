#include <stdio.h>

int main()
{
    int a, b, c;

    char symbol;

    scanf("%d %c %d = %d", &a, &symbol, &b, &c);

    int sum = a + b;
    int difference = a - b;
    int multiplication = a * b;

    if (symbol == '+' && sum == c)
    {
        printf("Yes");
    }
    else if (symbol == '+' && sum != c)
    {
        printf("%d", sum);
    }
    else if (symbol == '-' && difference == c)
    {
        printf("Yes");
    }
    if (symbol == '-' && difference != c)
    {
        printf("%d", difference);
    }
    else if (symbol == '*' && multiplication == c)
    {
        printf("Yes");
    }
    else if (symbol == '*' && multiplication != c)
    {
        printf("%d", multiplication);
    }

    return 0;
}