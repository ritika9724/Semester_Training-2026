// Dynamic Memory Allocation for Structures
// This program allocates memory for a structure
// using malloc() and accesses its members using
// the arrow (->) operator.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure Declaration
struct Student {
    int rollNo;
    char name[30];
};

int main() {

    // Allocate memory for one Student structure
    struct Student *student =
        (struct Student *)malloc(sizeof(struct Student));

    // Check allocation
    if (student == NULL) {
        printf("Memory Allocation Failed!");
        return 1;
    }

    // Assign values
    student->rollNo = 101;
    strcpy(student->name, "Nilakshi");

    printf("Student Details\n");
    printf("----------------\n");
    printf("Roll Number : %d\n", student->rollNo);
    printf("Name        : %s\n", student->name);

    // Free allocated memory
    free(student);

    return 0;
}