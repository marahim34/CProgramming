#include <stdio.h>

int main()
{
    long long n;
    scanf("%lld", &n);

    long long count = n * (n + 1) / 2; // Efficient calculation using the formula
    printf("%lld", count);

    return 0;
}

// The below code was not accepted becuase of time limitation. Therefore the above code submitted;
// #include <stdio.h>

// int main()
// {
//     long long n;
//     scanf("%lld", &n);

//     long long count = 0;
//     for (int i = 1; i <= n; i++)
//     {
//         count = count + i;
//     }
//     printf("%lld", count);

//     return 0;
// }
