#include<stdio.h>

int main(){
    int savings;
    scanf("%d", &savings);

    if(savings >= 10000){
        printf("Gucci Bag\n");
        if(savings > 20000){
            printf("Gucci Belt");
        }
    }
    else if(savings >= 5000){
        printf("Levis Bag");
    }
    else{
        printf("Something");
    }
    return 0;
}