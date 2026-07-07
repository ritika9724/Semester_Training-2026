// Write a C program to check whether a number is positive, negative or zero using switch case.

#include<stdio.h>
int main() {

    int num;

    printf("Enter the number : ");
    scanf("%d",&num);

    switch (num<0)
    {
    case 1:
       printf("Number is Negative");
        break;

        case 0:
        if(num==0){
            printf("Number is Zero");
        }
       else{
        printf("Number is Positive");
       }
    }
    return 0;
}