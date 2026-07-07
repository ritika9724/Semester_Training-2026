// Write a C program to convert a given integer (in seconds) to hours, minutes and seconds.

#include<stdio.h>

int main () {

    int seconds=25300;

    int hrs=seconds/3600;
    int rem=seconds%3600;

    int min=rem/60;
    int sec=rem%60;

    printf("H:M:S - %d:%d:%d",hrs,min,sec);

    return 0;

}