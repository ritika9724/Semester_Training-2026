// Write a C program to convert specified days into years, weeks and days.

#include<stdio.h>

int main() {

    int days=1329;
    int year=days/365;
    int rem=days%365;

    int week=rem/7;
    int d=rem%7;

    printf("Years : %d\n",year);
    printf("Weeks : %d\n",week);
    printf("Days : %d",d);

    return 0;
}