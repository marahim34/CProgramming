#include <stdio.h>

int printBinary(int number)
{
    // Determine the number of bits in the integer
    int num_bits = sizeof(int) * 8; // size of int is 4 bit; it is converting to 32 bits by multiplying 8;

    // printf("%d\n", sizeof(int));

    // Iterate through each bit position from most significant to least significant
    for (int i = num_bits - 1; i >= 0; i--)
    {
        int bit_value = (number >> i) & 1;
        printf("%d", bit_value);
    }
    printf("\n");
}

int main()
{
    int n;
    scanf("%d", &n);

    printBinary(n);

    return 0;
}