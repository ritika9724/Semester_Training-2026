// Write a C program to check whether a number is Prime number or not.

#include <stdio.h>

int main() {
    int num, i, prime = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(num <= 1)
        prime = 0;

    for(i = 2; i <= num / 2; i++) {
        if(num % i == 0) {
            prime = 0;
            break;
        }
    }

    if(prime)
        printf("%d is Prime", num);
    else
        printf("%d is Not Prime", num);

    return 0;
}