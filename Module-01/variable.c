#include<stdio.h>

int main(){
int number = 100;


printf("%d\n", number);

 int age = 30;
    float weight = 72.5;
    char grade = 'A';
    char name[] = "John Doe";

    printf("Age: %d\n", age);
    printf("Weight: %.2f\n", weight); // .2 specifies 2 decimal places
    printf("Grade: %c\n", grade);
    printf("Name: %s\n", name);
    
    return 0;
}