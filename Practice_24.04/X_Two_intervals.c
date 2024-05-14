#include <stdio.h>

int main()
{
    long long l1, r1, l2, r2;

    scanf("%lld %lld %lld %lld", &l1, &r1, &l2, &r2);

    if (r1 >= l2 && r2 >= l1)
    {
        long long start;
        long long end;

        if (l1 > l2)
        {
            start = l1;
        }
        else
        {
            start = l2;
        }

        if (r1 < r2)
        {
            end = r1;
        }
        else
        {
            end = r2;
        }

        printf("%lld %lld", start, end);
    }
    else
    {
        printf("-1");
    }

    return 0;
}
