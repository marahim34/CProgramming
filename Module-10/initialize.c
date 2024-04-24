#include <stdio.h>

int main()
{
    char a[] = "Raihan";
    // Remember to keep the arrray size 0 or size + 1 to avoid garbage values in output
    int sizeo = sizeof(a) / sizeof(char);
    // char a[5] = {'R', "A", 'H', 'I', 'M'};
    // for (int i = 0; i < 6; i++)
    // {
    //     printf("%c\n", a[i]);
    // }

    printf("%s\n", a);
    printf("%d", sizeo);

    return 0;
}