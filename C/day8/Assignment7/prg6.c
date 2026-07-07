// Write a C program to find power of a number using for loop.

#include <stdio.h>

int main() {
    int base, exponent;
    long long power = 1;

    printf("Enter base: ");
    scanf("%d", &base);

    printf("Enter exponent: ");
    scanf("%d", &exponent);

    for (int i = 1; i <= exponent; i++) {
        power *= base;
    }

    printf("%d^%d = %lld", base, exponent, power);

    return 0;
}