// Write a C program to check whether a number is positive, negative, or zero using conditional operator.

#include<stdio.h>

int main() {

    int num;

    printf("Enter the number: ");
    scanf("%d",&num);

    printf("%s", (num<0)? "Negative number" : (num>0)?"Positive number" : "Zero");
    return 0;
}