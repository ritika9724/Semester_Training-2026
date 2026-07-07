// Write a C program to enter a four digit number and print all digit.

#include<stdio.h>

int main() {

    int num;

    printf("Enter the four digit number: ");
    scanf("%d",&num);

    printf("First digit = %d\n",num / 1000);
    printf("Second digit = %d\n",(num / 100)%10); 
    printf("Third digit = %d\n",(num / 10)%10);
    printf("Fourth digit = %d",num % 10);

    return 0;
}