// Write a C program to find sum of first and last digit of a number.

#include <stdio.h>

int main() {
    int num, first, last;

    printf("Enter a number: ");
    scanf("%d", &num);

    last = num % 10;

    while(num >= 10) {
        num /= 10;
    }

    first = num;
    
    int sum = first + last;

    printf("Sum: %d", sum);

    return 0;
}