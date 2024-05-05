#include <stdio.h>

void fun(int i)
{
    if (i == 6)
        return; // base case which is used to stop the recursion
    printf("%d", i);
    fun(i + 1); // what would be condition for increment
}

int main()
{
    fun(4); // i is the starting point from where it should start

    return 0;
}