#include<stdio.h>

int main(){
    long long X;
    scanf("%lld", &X);

    long long yearlyIncome = X * 365;
    printf("%lld", yearlyIncome);

    return 0;
}