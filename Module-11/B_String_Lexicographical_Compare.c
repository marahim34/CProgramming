#include <stdio.h>

int main()
{
    char a[100], b[100];
    scanf("%s %s", a, b);

    int i = 0;
    while (1)
    {
        if (a[i] == '\0' && b[i] == '\0')
        {
            printf("Same\n");
            break;
        }
        else if (a[i] == '\0')
        {
            printf("A is smaller");
            break;
        }
        else if (b[i] == '\0')
        {
            printf("B is smaller");
            break;
        }

        if (a[i] == b[i])
        {
            i++;
        }
        else if (a[i] < b[i])
        {
            printf("A is smaller");
            break;
        }
        else
        {
            printf("B is smaller");
            break;
        }
    }

    return 0;
}

// Done before the code shown by the instruction
// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char a[100], b[100];
//     scanf("%s %s", a, b);

//     for (int i = 0; i < strlen(a); i++)
//     {
//         if (a[i] == b[i])
//         {
//             i++;
//         }
//         else if (a[i] != b[i])
//         {
//             int diff = a[i] - b[i];
//             printf("%d", diff);
//         }
//     }
//     // printf("%s %s", a, b);

//     return 0;
// }