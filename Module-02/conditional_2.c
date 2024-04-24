#include<stdio.h>

int main(){
int tk;
scanf("%d", &tk);
if(tk >= 100){
    printf("Bhuna Khicuri Khamu");
}
else if (tk > 50 && tk < 100){
    printf("Vat dal khamu");
}
else if(tk >=20){
printf("Muri Khamu");
}
else{
    printf("Kichu Khamu na");
}
    return 0;
}