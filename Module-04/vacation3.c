#include<stdio.h>

int main(){
    int X, Y;
    scanf("%d %d", &X, &Y);

    int mina, rina;
    int sum = X + Y;
    mina = sum / 2;
    rina = X - mina;

    printf("%d %d", mina, rina);
   
    return 0;
}