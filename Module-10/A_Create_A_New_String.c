#include <stdio.h>
#include <string.h>

int main()
{
    char s[100], t[100];
    scanf("%s", s);
    scanf("%s", t);

    int sts = strlen(s);
    int stt = strlen(t);

    printf("%d %d\n", sts, stt);
    printf("%s %s\n", s, t);

    return 0;
}