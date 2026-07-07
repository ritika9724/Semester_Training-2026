// Write a C program to find maximum between two numbers using conditional operator.

#include<stdio.h>

int main() {

    int num1 , num2;

    scanf("%d %d", &num1, &num2);

    printf("%d",(num1 > num2)? num1 : num2);

    return 0;
}