#include<stdio.h>

int main(){
   int totalSteps;
   scanf("%d", &totalSteps); 

   int steps = totalSteps / 3;

   if(totalSteps % 3 > 0){
    steps+= 1;
   }
    printf("%d", steps);
   
   return 0;
}