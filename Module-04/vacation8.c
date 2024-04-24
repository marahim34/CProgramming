#include<stdio.h>

int main(){
   int gifts, children;
   scanf("%d %d", &gifts, &children);

   int gifted = gifts / children;
   int remainder = gifts % children;

   printf("%d %d", gifted, remainder); 
   
    return 0;
}