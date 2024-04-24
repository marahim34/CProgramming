#include <stdio.h>
#include <string.h>

int main()
{
    char f1[100], l1[100];
    scanf("%s %s", f1, l1);

    char f2[100], l2[100];
    scanf("%s %s", f2, l2);

    int val = strcmp(l1, l2);

    if (val == 0)
    {
        printf("ARE Brothers");
    }
    else
    {
        printf("NOT");
    }

    return 0;
}