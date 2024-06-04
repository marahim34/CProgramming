#include <stdio.h>

int main() {
    int n;
    int factorial = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    int i = 1;
    while (i <= n) {
        factorial *= i;
        i++;
    }

    printf("Factorial of %d is %d\n", n, factorial);

    return 0;
}
