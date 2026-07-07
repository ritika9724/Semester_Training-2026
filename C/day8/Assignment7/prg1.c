// Write a C program to enter a number and print its reverse.

#include<stdio.h>
int main() {

    int n;
    scanf("%d", &n);

    int digit = 0;
    while(n>0){
        digit=n%10;
        n=n/10;
        printf("%d",digit);
    }
    return 0;
}