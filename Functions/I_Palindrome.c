#include <stdio.h>

int reversed = 0;

void reverseNumber(int n)
{
    if (n != 0)
    {
        int remainder = n % 10;
        reversed = reversed * 10 + remainder;
        printf("%d", remainder);
        reverseNumber(n / 10);
    }
}

int main()
{
    int n;
    scanf("%d", &n);

    reversed = 0;
    reverseNumber(n);
    printf("\n");

    if (n == reversed)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
