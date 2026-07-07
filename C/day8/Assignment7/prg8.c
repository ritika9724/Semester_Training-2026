// Write a C program to calculate factorial of a number.

#include <stdio.h>

int main() {
    int num;
    long long fact = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++) {
        fact *= i;
    }

    printf("Factorial: %lld", fact);

    return 0;
}