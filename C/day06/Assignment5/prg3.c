// Write a C program to check whether an alphabet is vowel or consonant using switch case.


#include<stdio.h>

int main() {

    char alphabet;
    scanf("%c", &alphabet);

    switch (alphabet)
    {
    case'a':
    case'e':
    case'i':
    case'o':
    case'u':
    printf("Vowel");
    break;

    default:
    printf("Consonant");
    }

    return 0;

}