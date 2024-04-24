#include<stdio.h>

int main(){

int savings;
scanf("%d", &savings);

if(savings >= 5000){
    printf("Cox's Bazar\n");
    if(savings >= 10000){
        printf("Saint Martin");
    }
    else{
        printf("Cox's Bazar To Dhaka");
    }
}
else{
    printf("Kothao Jabo na");
}

    return 0;
}