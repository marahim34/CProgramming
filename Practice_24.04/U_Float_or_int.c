#include <stdio.h>

int main()
{
    float n;
    scanf("%f", &n);

    float result = n - (int)n;

    if (result != 0.0)
    {
        printf("float %d %.3f", (int)n, result);
    }
    else if (result == 0.0)
    {
        printf("int %d", (int)n);
    }

    // printf("%.3f", result);

    return 0;
}