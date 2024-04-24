#include <stdio.h>
#include <string.h>

int main()
{
    char a[21];
    // With gets function. But it is not recommended to use gets function, because this might not work with all compilers.
    // gets(a);
    // So fgets function is recommended
    // Remember that for fgets function you have to first put the array name, than its size and at last the word stdin. This is the given format of c programming to use fgets
    fgets(a, 21, stdin);

    printf("%s", a);

    return 0;
}