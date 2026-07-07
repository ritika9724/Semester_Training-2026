// Write a C program to check whether year is leap year or not using conditional operator.

#include <stdio.h>

int main()
{

    int year;

    printf("Enter the Year : ");
    scanf("%d", &year);

    printf("%s", (year%400==0)? "Leap year" : 
    (year%100==0) ? "Not a leap year" : 
    (year%4==0) ? "Leap year" : "Not a leap year");
    return 0;
}