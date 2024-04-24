#include <stdio.h>
#include <string.h>

int main()
{
    char a[11];
    scanf("%10s", a);

    char b[11];
    scanf("%10s", b);

    int lenA = strlen(a);
    int lenB = strlen(b);

    printf("%d %d\n", lenA, lenB);

    int newLen = lenA + lenB;

    char newLine[newLen + 1];

    for (int i = 0; i < lenA; i++)
    {
        newLine[i] = a[i];
    }

    for (int i = 0; i < lenB; i++)
    {
        newLine[lenA + i] = b[i];
    }

    newLine[newLen] = '\0';

    printf("%s\n", newLine);

    char temp = a[0];
    a[0] = b[0];
    b[0] = temp;

    char newString[12];

    int i = 0;
    while (a[i] != '\0')
    {
        newString[i] = a[i];
        i++;
    }

    newString[i++] = ' ';

    int j = 0;
    while (b[j] != '\0')
    {
        newString[i++] = b[j++];
    }

    newString[i] = '\0';

    printf("%s", newString);

    return 0;
}