// Write a C program to find all prime factors of a number.

#include <stdio.h>

int main() {
    int num, i, j, flag;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Prime factors are: ");

    for(i = 2; i <= num; i++) {
        if(num % i == 0) {   // factor found

            flag = 1;

            for(j = 2; j <= i / 2; j++) {
                if(i % j == 0) {
                    flag = 0;
                    break;
                }
            }

            if(flag)
                printf("%d ", i);
        }
    }

    return 0;
}