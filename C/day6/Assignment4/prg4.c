// Write a C program to check whether a character is uppercase or lowercase alphabet.

#include<stdio.h>

int main()  {

    char ch;

    scanf(" %c",&ch);
    if(ch>='A' && ch<='Z'){
        printf("UpperCase");
    }
    else if(ch>='a' && ch<='z'){
        printf("Lowercase");
    }
    else{
        printf("Alphabet Not Found");
    }
    return 0;
}