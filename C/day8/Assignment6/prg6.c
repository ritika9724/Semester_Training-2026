// Write a C program to find sum of all natural numbers between 1 to n.

#include<stdio.h>

int main () {

    int n;
    scanf("%d", &n);

    int i = 1, sum = 0;

    while(i<=n){
        sum = sum + i;
        i++;
    }
    printf("Sum is = %d", sum);
    return 0;
}