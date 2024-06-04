#include <stdio.h>

int main()
{
    int discount_percent;
    int discounted_price;

    scanf("%d %d", &discount_percent, &discounted_price);

    double discount_fraction = (double)discount_percent / 100.0;
    double discounted_rate = 1.0 - discount_fraction;
    double original_price = (double)discounted_price / discounted_rate;

    if (original_price < 0)
    {
        original_price = -original_price;
    }

    printf("%.2lf\n", original_price);
    return 0;
}
