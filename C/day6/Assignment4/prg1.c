// Write a C program to check whether a number is negative, positive or zero.

#include<stdio.h>

int main() {

    int num;

     scanf("%d",&num);
     
    if(num>0){
        printf("Positive number");
    }
    else if(num<0){
        printf("Negative Number");
    }
    else{
        printf("Zero");
    }
    return 0;
}