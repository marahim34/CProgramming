#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t); // Read the number of test cases

    for (int i = 0; i < t; i++)
    {
        int w, h;
        scanf("%d %d", &w, &h);

        if (w == h)
        {
            printf("Square\n");
        }
        else
        {
            printf("Rectangle\n");
        }
    }

    return 0;
}
