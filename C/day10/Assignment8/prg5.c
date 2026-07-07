// Write a C program to calculate product of digits of a number

#include <stdio.h>

int main() {
    int num, digit;
    long long product = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    while(num > 0) {
        digit = num % 10;
        product *= digit;
        num /= 10;
    }

    printf("Product: %lld\n", product);

    return 0;
}