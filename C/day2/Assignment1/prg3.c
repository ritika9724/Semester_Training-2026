// Write a C program that accepts an employee's ID, total worked hours of a month and the amount he received per hour. Print the employee's ID and salary (with two decimal places) of a particular month.


#include <stdio.h>

int main() {

    int empID=342;
    int hrs=8;
    int rate=15000;

    float salary=hrs*rate;

    printf("Employees ID=%d\n",empID);
    printf("Salary=%.2f",salary);

    return 0;
}