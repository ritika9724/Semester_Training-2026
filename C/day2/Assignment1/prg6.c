// Write a program in C that takes minutes as input, and display the total number of hours and minutes.

#include<stdio.h>

int main(){
   
    int minutes=546;
    int hours,min;

    hours=minutes/60;
    min=minutes%60;

    printf("Input minutes : %d\n",minutes);
    printf("%d Hours, %d Minutes",hours,min);
 
    return 0;
}