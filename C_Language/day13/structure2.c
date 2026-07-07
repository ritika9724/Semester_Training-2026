// Array of Structures
// Used to store multiple records of the same structure efficiently

#include <stdio.h>

struct Employee {
    int empID;
    char empName[50];
    int empSalary;
    char empPost[20];
};

int main() {

    struct Employee emp[2];

    // Taking input
    for (int i = 0; i < 2; i++) {

        printf("\nEnter Employee %d Details\n", i + 1);
        printf("ID Name Salary Post : ");

        scanf("%d %s %d %s",
              &emp[i].empID,
              emp[i].empName,
              &emp[i].empSalary,
              emp[i].empPost);
    }

    printf("\nEmployee Records\n");

    // Displaying records
    for (int i = 0; i < 2; i++) {

        printf("%d %s %d %s\n",
               emp[i].empID,
               emp[i].empName,
               emp[i].empSalary,
               emp[i].empPost);
    }

    return 0;
}