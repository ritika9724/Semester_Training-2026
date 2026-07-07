// Write a C program that accepts two item’s weight (floating points' values ) and number of purchase (floating points' values) and calculate the average value of the items.

#include<stdio.h>

int main() {

    float w1,w2,q1,q2,avg;


    printf("Weight item1: ");
    scanf("%f",&w1);

 
    printf("No. of item1: ");
    scanf("%f",&q1);

    printf("Weight item2: ");
    scanf("%f",&w2);

    printf("No. of item2: ");
    scanf("%f",&q2);

    avg=((w1*q1)+(w2*q2))/(q1+q2);

    printf("Average value= %f",avg);

    return 0;
}