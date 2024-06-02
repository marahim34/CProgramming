#include <stdio.h>

void calculate_the_maximum(int n, int k)
{
    int max_and = 0;
    int max_or = 0;
    int max_xor = 0;

    for (int i = 1; i < n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            int and_output = i & j;
            int or_output = i | j;
            int xor_output = i ^ j;

            if (and_output < k && and_output > max_and)
            {
                max_and = and_output;
            }
            if (or_output < k && or_output > max_or)
            {
                max_or = or_output;
            }
            if (xor_output < k && xor_output > max_xor)
            {
                max_xor = xor_output;
            }
        }
    }

    printf("%d\n", max_and);
    printf("%d\n", max_or);
    printf("%d\n", max_xor);
}

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);

    calculate_the_maximum(n, k);

    return 0;
}
