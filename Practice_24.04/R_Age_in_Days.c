#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int years = n / 365;
    int remaining_days_after_years = n % 365;
    int months = remaining_days_after_years / 30;
    int days = remaining_days_after_years % 30;

    printf("%d years\n", years);
    printf("%d months\n", months);
    printf("%d days\n", days);

    return 0;
}