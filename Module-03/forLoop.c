#include<stdio.h>

int main(){
    int i;
    for(i=10; i<= 20; i++){
        printf("Hoiice Namki\t");
        printf("%d\n", i);
    }

int sum = 0;
int n;
scanf("%d", &n);
for(i=1; i<= n; i++){
sum+=i;
}
printf("%d", sum);
return 0;
}
