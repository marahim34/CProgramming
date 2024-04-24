#include<stdio.h>

int main(){
    int D, Q, R;
    scanf("%d %d %d", &D, &Q, &R);

    int findingDivisor = D % Q; 
    printf("%d", findingDivisor);
    return 0;
}