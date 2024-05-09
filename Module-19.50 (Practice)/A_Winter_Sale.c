#include <stdio.h>

int main()
{
    int discount_percent, discounted_price;

    scanf("%d %d", &discount_percent, &discounted_price);

    float discount_percent_float = (float)discount_percent / 100.0;
    float discounted = (1.0 - discount_percent_float);
    float original_price = (float)discounted_price / discounted;

    printf("%.2f", original_price);

    return 0;
}