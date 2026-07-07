// Write a C program to check whether a number is even or odd using conditional operator.

#include<stdio.h>

int main() {

    int num;

    printf("Enter the number: ");
    scanf("%d", &num );

    printf("%s", (num % 2 == 0) ? "even" : "odd" );

     return 0;
    }
