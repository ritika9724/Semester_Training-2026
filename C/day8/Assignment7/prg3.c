// Write a C program to find frequency of each digit in a given integer.

#include <stdio.h>

int main() {
    int num, freq[10] = {0};

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num > 0) {
        freq[num % 10]++;
        num /= 10;
    }

    for (int i = 0; i < 10; i++) {
        printf("Frequency of %d: %d\n", i, freq[i]);
    }

    return 0;
}