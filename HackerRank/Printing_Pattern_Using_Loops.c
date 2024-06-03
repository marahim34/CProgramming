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
            int distance;

            if (i < j)
            {
                distance = i;
            }
            else
            {
                distance = j;
            }

            if (distance < size - i + 1)
            {
                distance = distance;
            }
            else
            {
                distance = size - i + 1;
            }

            if (distance < size - j + 1)
            {
                distance = distance;
            }
            else
            {
                distance = size - j + 1;
            }

            int value = n - distance + 1;
            printf("%d ", value);
        }
        printf("\n");
    }

    return 0;
}
