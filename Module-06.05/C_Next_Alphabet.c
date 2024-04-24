#include <stdio.h>

int main()
{
    char a;
    scanf(" %c", &a);

    // printf("%c", a);

    if (a == 'z')
    {
        printf("%c", 'a');
    }
    else if (a >= 'a' && a <= 'z')
    {
        int next_char = (a + 1);
        printf("%c", next_char);
    }
    else
    {
        printf("Invalid Input");
    }

    return 0;
}