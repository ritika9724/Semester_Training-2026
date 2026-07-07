// Write a C program to find the third angle of a triangle if two angles are given.

#include<stdio.h>

int main() {

    int a=50;
    int b=70;
    int c;

    c=180-(a+b);

    printf("Third angle of triangle: %d",c);

    return 0;
}