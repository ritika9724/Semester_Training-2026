// Write a C program to find maximum between two numbers using switch case.

#include<stdio.h>

int main() {


    int a , b , max;

    printf("Enter the number : ");
    scanf("%d %d", &a, &b);

    switch (a>b)
    {
       case 1:
       printf("Max is %d",a);
       break;

       case 0:
       printf("Max is %d",b);
       break;
    }
    return 0;
}