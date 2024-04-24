#include<stdio.h>

int main(){
   long long n, sum;
   scanf("%lld", &n);

   sum = 0;
   int i;

for(i = 1; i <= n; i++){
sum += i;
}
printf("%lld", sum);


   return 0;
}