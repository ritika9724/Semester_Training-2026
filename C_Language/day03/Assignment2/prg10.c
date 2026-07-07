// Write a C program to input principle, time and rate (P, T, R) from user and find Simple Interest.

#include<stdio.h>

int main() {

    int p , t ;
    float r, SI;

    printf("Enter the Principle Value: ");
    scanf("%d",&p);

    printf("Enter the Rate: ");
    scanf("%f", &r);

    printf("Enter the time: ");
    scanf("%d",&t);

    SI = (p*r*t)/100;

    printf("%.1f",SI);

    return 0;
}