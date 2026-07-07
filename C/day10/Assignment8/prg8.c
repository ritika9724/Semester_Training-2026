// Write a C program to find sum of all prime numbers between 1 to n.

#include <stdio.h>

int main() {
    int n, i, j, isPrime;
    int sum = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    for(i = 2; i <= n; i++) {
        isPrime = 1;

        for(j = 2; j <= i / 2; j++) {
            if(i % j == 0) {
                isPrime = 0;
                break;
            }
        }

        if(isPrime)
            sum += i;
    }
    
    printf("Sum of prime numbers from 1 to %d is %d", n, sum);

    return 0;
}