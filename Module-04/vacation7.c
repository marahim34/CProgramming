#include<stdio.h>

int main(){
   int N;
   scanf("%d", &N);

   int start = (N / 4) - 3;
int i;
   for (i = start; i <= start + 6; i+= 2){
    printf("%d ", i);
   }
   
   return 0;
}