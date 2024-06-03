#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int size = (n * 2) - 1;

    for (int i = 1; i <= size; i++)
    {
        for (int j = 1; j <= size; j++)
        {
            int min;

            if (i < j)
            {
                min = i;
            }
            else
            {
                min = j;
            }

            if (min < size - i + 1)
            {
                min = min;
            }
            else
            {
                min = size - i + 1;
            }

            if (min < size - j + 1)
            {
                min = min;
            }
            else
            {
                min = size - j + 1;
            }

            printf("%d ", n - min + 1);
        }
        printf("\n");
    }

    return 0;
}
