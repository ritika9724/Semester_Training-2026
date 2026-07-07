// Write a C program to check whether character is an alphabet or not using conditional operator.

#include<stdio.h>

int main() {

    char alpha;

    printf("Enter the alphabet: ");
    scanf(" %c",&alpha);
    printf( "%s",((alpha>='A' && alpha<='Z') ||
    (alpha>='a' && alpha<='z')) ? "Alphabet" : "Not a alphabet");
    return 0;
}