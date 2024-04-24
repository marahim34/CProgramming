#include<stdio.h>

int main(){
    int N;
    scanf("%d", &N);
    
    int start = (N / 5) - 4;

    for(int i = start; i <= start + 8; i += 2){
        printf("%d ", i);
    }
    
    return 0;
}
