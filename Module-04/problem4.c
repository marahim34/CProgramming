#include<stdio.h>

int main(){
    int X, first;
    scanf("%d", &X);
    first = X/1000;
   
    if(first % 2 ==0){
printf("EVEN");
    }
else{
    printf("ODD");
}
    return 0;
}