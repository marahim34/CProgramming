#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);

    int M1, M2, D;
    int required_days, additional_days;

    for (int i = 0; i < T; i++)
    {
        scanf("%d %d %d", &M1, &M2, &D);
        int new_workforce = M1 + M2;
        required_days = (M1 * D) / new_workforce;
        additional_days = D - required_days;
        printf("%d\n", additional_days);
    }

    return 0;
}
