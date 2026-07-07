// Write a C program to swap two numbers using bitwise operator.

#include<stdio.h>

int main() {

    int a , b , temp;

    printf("Enter the value of a: ");
    scanf("%d",&a);

     printf("Enter the value of b: ");
    scanf("%d",&b);

    // temp = a;
    // a = b;
    // b = temp;

    a = a^b;
    b = a^b;
    a = a^b;      // (a^b)^b = a     (a^b)^a = b

    printf("a = %d\n",a);
    printf("b = %d",b);
    
    return 0;
}