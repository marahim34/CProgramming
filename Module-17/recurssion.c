// a function that calls itself to perform a task is known as a "recursive function." Recursion is a programming technique where a function calls itself one or more times in its body, usually with a different input. This method can simplify the code for tasks that can be broken down into similar subtasks, such as sorting, searching, or traversing complex structures like trees and graphs.

void fun()
{
    printf("Fun\n");
}

#include <stdio.h>

int main()
{
    fun();

    return 0;
}