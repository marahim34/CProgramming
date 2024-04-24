#include <stdio.h>

int main()
{
    int n;

    //    EOF Means END of FILES
    while (scanf("%d", &n) != EOF)
    {
        if (n == 1999)
        {
            printf("Correct\n");
            break;
        }
        else
        {
            printf("Wrong\n");
        }
    }

    return 0;
}