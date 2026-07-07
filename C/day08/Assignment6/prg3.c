// Write a C program to print all alphabets from a to z using while loop

#include<stdio.h>

int main () {

    char alpha = 'A';
    // scanf("%c", &alpha);

    while(alpha<='Z'){
        printf(" %C\n",alpha);
        alpha++;
    }
    return 0;
}