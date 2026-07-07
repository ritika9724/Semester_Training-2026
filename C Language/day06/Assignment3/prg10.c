// Write a C program to demonstrate the use of logical operators by checking whether a given number lies within a specified range (e.g., between 10 and 20).

#include<stdio.h>

int main() {

    int num;

    printf("Enter the value: ");
    scanf("%d",&num);

    if(num >=10 && num<=20){
        printf("Number is in range", num);
    }
    else{
        printf("Number is in not a range",num);
    }
    return 0;
}