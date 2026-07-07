// Write a C program to categorize a grade based on marks using switch case.

#include<stdio.h>

int main() {

    int num;
    printf("Enter the number : ");
    scanf(" %d",&num);


    switch(num/10){

        case 10:
        case 9:
        printf("Grade A");
        break;

        case 8:
        case 7:
        case 6:
        printf("Grade B");
        break;

        case 5:
        case 4:
        case 3:
        printf("Grade C");
        break;

        default:
        printf("Failed");
        break;
    }
    return 0;
}