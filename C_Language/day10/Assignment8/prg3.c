// Write a C program to swap first and last digits of a number.

#include <stdio.h>
#include <math.h>

int main() {
    int num, first, last, digits;
    int middle, swapped;

    printf("Enter a number: ");
    scanf("%d", &num);

    last = num % 10;

    int temp = num;
    digits = 0;

    while(temp > 0) {
        digits++;
        temp /= 10;
    }

    first = num / (int)pow(10, digits - 1);

    middle = num % (int)pow(10, digits - 1);
    middle /= 10;

    swapped = (last * (int)pow(10, digits - 1)) + (middle * 10) + first;

    printf("Swapped Number: %d\n", swapped);

    return 0;
}