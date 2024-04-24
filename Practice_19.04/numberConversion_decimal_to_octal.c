#include <stdio.h>

int main()
{
    int decimal_num;
    scanf("%d", &decimal_num);

    printf("Octal Number = %o\n", decimal_num);
    // getch();

    int octal_num;
    scanf("%o", &octal_num);

    printf("Decimal Number = %d", octal_num);

    return 0;
}