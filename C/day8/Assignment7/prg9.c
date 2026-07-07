// Write a C program to find HCF (GCD) of two numbers.

#include <stdio.h>

int hcf(int a, int b){
    int r;
    while(r != 0){
        r = b % a;
        b = a;
        a = r;
    }

    return b;
}

int main(){
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("HCF is: %d", hcf(a, b));
}