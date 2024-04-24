#include<stdio.h>

int main(){
    int a, b;    
    scanf("%d %d", &a, &b);
    int sum = a + b;
    int subtract = a - b;
    int multiply = a * b;
    float division = (float)a / b;
// Remember to change the number conversion system if you want to find the exact value

    printf("%d %d %d %.2f", sum, subtract, multiply, division);
// If you want to get the exact precised floating value, specify it in your printf function as written here in %.2f in the above solution 
    return 0;
}