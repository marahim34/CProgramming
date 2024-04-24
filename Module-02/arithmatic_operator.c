#include<stdio.h>

int main(){
    int a =10, b=20;
    int sum = a+b;
    int subtract = b-a;
    int multiply = a*b;
    int division = b/a;
    int remainder = b%a;
    float dvd = b*1.00/a;
    printf("%d %d %d %d %d %f", sum, subtract, multiply, division, remainder, dvd);


    return 0;
} 