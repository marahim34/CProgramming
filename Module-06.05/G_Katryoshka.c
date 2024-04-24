#include <stdio.h>

int main()
{
    long long n, m, k;
    scanf("%lld %lld %lld", &n, &m, &k);

    long long count = 0;

    // Determine which type to prioritize based on the availability of mouths
    if (m < k)
    { // If mouths are less than bodies, try balancing Type C and Type A
        // Try making Type C first as it uses fewer eyes and might balance the use of mouths better
        while (n >= 1 && m >= 1 && k >= 1)
        {
            count++; // Make one Katryoshka of Type C
            n -= 1;  // Use 1 eye
            m -= 1;  // Use 1 mouth
            k -= 1;  // Use 1 body
        }

        // Then make as many Type A as possible
        while (n >= 2 && k >= 1)
        {
            count++; // Make one Katryoshka of Type A
            n -= 2;  // Use 2 eyes
            k -= 1;  // Use 1 body
        }
    }
    else
    { // If bodies are not the limiting factor
        // Make as many Type A as possible
        while (n >= 2 && k >= 1)
        {
            count++;
            n -= 2;
            k -= 1;
        }

        // Then try making Type C
        while (n >= 1 && m >= 1 && k >= 1)
        {
            count++;
            n -= 1;
            m -= 1;
            k -= 1;
        }
    }

    printf("%lld\n", count); // Output the total number of Katryoshkas made
    return 0;
}
