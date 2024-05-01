#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    double x;
    scanf("%lf", &x);
    // ceil
    int ans = ceil(x);
    // Floor
    int floorA = floor(x);
    // round
    int roundA = round(x);

    printf("%d %d %d\n", ans, floorA, roundA);

    double y;
    scanf("%lf", &y);

    // Root over
    double rootOver = sqrt(y);

    // Power function
    double a, b;
    scanf("%lf %lf", &a, &b);

    int poWer = pow(a * 1.0, b * 1.0);

    printf("%.2lf %d\n", rootOver, poWer);

    int c;
    scanf("%d", &c);

    int abSolute = abs(c);

    printf("%d", abSolute);

    return 0;
}