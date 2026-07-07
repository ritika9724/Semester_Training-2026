// Write a C program to read an amount (integer value) and break the amount into smallest possible number of bank notes.

#include<stdio.h>

int main() {

    int amount=375;
    
    printf("3 Note(s) of 100.00 %d\n", amount/100);
    amount %= 100;

    printf("1 Note(s) of 50.00 %d\n", amount/50);
    amount %= 50;

    printf("1 Note(s) of 20.00 %d\n", amount/20);
    amount %= 2;

    printf("0 Note(s) of 10.00 %d\n", amount/10);
    amount %= 10;

     printf("1 Note(s) of 5.00 %d\n", amount/5);
    amount %= 5;

     printf("0 Note(s) of 2.00 %d\n", amount/2);
    amount %= 2;

     printf("0 Note(s) of 1.00 %d\n", amount);

    return 0;

}