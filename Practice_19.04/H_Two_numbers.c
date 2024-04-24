#include <stdio.h>
#include <math.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    float result = (float)a / (float)b;

    float flr = floor(result);
    float cel = ceil(result);
    float rnd = round(result);

    printf("floor %d / %d = %.f\n", a, b, flr);
    printf("ceil %d / %d = %.f\n", a, b, cel);
    printf("round %d / %d = %.f\n", a, b, rnd);

    return 0;
}