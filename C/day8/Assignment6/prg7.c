// Write a C program to find sum of all even numbers between 1 to n.

#include<stdio.h>

int main () {

    int n;
    scanf("%d", &n);

    int i = 2, sum = 0;

    while(i<=n){
        sum = sum + i;
        i = i+2;
    }
    printf("Sum is = %d", sum);
    return 0;
}