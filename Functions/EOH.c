#include <stdio.h>

int main()
{
    int n;
    ;

    int password = 1999;

    while (scanf("%d", &n) != EOF)
    {
        if (n == password)
        {
            printf("TRUE");
            break;
        }
        else
        {
            printf("Fal");
        }
    }

    return 0;
}