#include<stdio.h>
#include<ctype.h>

int main(){
char X;
scanf(" %c", &X);
if(X >= 'A' && X <= 'Z'){
    X = tolower(X);
    printf("%c", X);
}
else{
    X = toupper(X);
    printf("%c", X);
}
    return 0;
}