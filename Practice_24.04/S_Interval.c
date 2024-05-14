#include <stdio.h>
#include <math.h>

int main()
{
    float x;
    scanf("%f", &x);

    int ceilx = ceil(x);

    if (ceilx > 0 && ceilx <= 25)
    {
        printf("Interval [0,25]");
    }
    else if (ceilx > 25 && ceilx <= 50)
    {
        printf("Interval (25,50]");
    }
    else if (ceilx > 50 && ceilx <= 75)
    {
        printf("Interval (50,75]");
    }
    else if (ceilx > 75 && ceilx <= 100)
    {
        printf("Interval (75,100]");
    }
    else
    {
        printf("Out of Intervals");
    }

    return 0;
}