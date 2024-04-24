#include<stdio.h>

int main(){
    int a, b;
    float c, d;
    scanf("%d %d", &a, &b);
    scanf("%f %f", &c, &d);
 
    // printf("%d %d\n%.1f %.1f", a, b, c, d);

    int sum = a + b;
    int diff = a - b;
    printf("%d %d\n", sum, diff);

    float float_sum = c + d;
    float float_diff = c - d;
    printf("%.1f %.1f", float_sum, float_diff);

    return 0;
}


