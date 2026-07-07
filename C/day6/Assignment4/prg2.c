// Write a C program to check whether a number is even or odd.

#include<stdio.h>

int main()  {

    int i;

    scanf("%d",&i);
    
    if(i%2==0){
        printf("Even Number");
    }
    else{
        printf("Odd number");
    }
    return 0;
}