// Write a C program to find the absolute value of a number using conditional operator.

#include<stdio.h>

int main() {

    int num;

    printf("Enter the number: ");
    scanf("%d", &num);

    printf("Absolute value: %d", (num<0)? -num : num);
    return 0;
}