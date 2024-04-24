#include <stdio.h>
#include <string.h>

int main()
{
    char a[100], b[100];
    scanf("%s %s", a, b);
    int k = strlen(a);
    for (int i = 0; i <= strlen(b); i++)
    {
        a[k] = b[i];
        k++;
    }

    printf("%s %s", a, b);

    return 0;
}

// my work before code
// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char a[10], b[10];
//     scanf("%s %s", a, b);

//     int lenA = strlen(a);
//     int lenB = strlen(b);

//     int newLength = lenA + lenB;

//     char newString[newLength];

//     for (int i = 0; i < newLength; i++)
//     {
//         newString[i] = a[i];
//     }
//     for (int i = 0; i < newLength; i++)
//     {
//         newString[lenA + i] = b[i];
//     }

//     newString[newLength] = '\0';

//     printf("%s %s %d %d %s", a, b, lenA, lenB, newString);

//     return 0;
// }