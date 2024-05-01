#include <stdio.h>

// return_type name (){

// }
int sum(int x, int y)
{
    int sum = x + y;

    return sum;
}

int main()
{
    int result = sum(10, 30);
    printf("%d", result);
    return 0;
}