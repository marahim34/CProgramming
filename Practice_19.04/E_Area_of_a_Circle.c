#include <stdio.h>

int main()
{
    double R, area;
    double pi = 3.141592653;

    if (scanf("%lf", &R) != 1)
    {
        fprintf(stderr, "Failed to read the radius\n");
        return 1;
    }

    area = pi * R * R;

    printf("%.9f\n", area);

    return 0;
}
