#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);

        char a[n + 1];

        for (int j = 0; j < n; j++)
        {
            scanf(" %c", &a[j]);
        }

        int pathan_count = 0;
        int tiger_count = 0;

        for (int j = 0; j < n; j++)
        {
            if (a[j] == 'T')
            {
                tiger_count++;
            }
            else if (a[j] == 'P')
            {
                pathan_count++;
            }
        }

        if (tiger_count > pathan_count)
        {
            printf("Tiger\n");
        }
        else if (pathan_count > tiger_count)
        {
            printf("Pathaan\n");
        }
        else if (pathan_count == tiger_count)
        {
            printf("Draw\n");
        }
    }

    return 0;
}
