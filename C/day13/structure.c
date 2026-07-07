// Structure in C
// A structure is a user-defined data type used to store variables of different data types
// Structures are generally declared outside the main() function (global scope)

#include <stdio.h>

// Structure Declaration
struct Student {
    int rollNo;
    char name[20];
    char branch[10];
};

int main() {

    // Structure Initialization
    struct Student s1 = {101, "Ritika", "CSE"};
    struct Student s2 = {102, "Riya", "IT"};
    struct Student s3 = {103, "Sauram", "CSE"};

    // Accessing structure members using the dot (.) operator
    printf("%d %s %s\n", s1.rollNo, s1.name, s1.branch);
    printf("%d %s %s\n", s2.rollNo, s2.name, s2.branch);
    printf("%d %s %s\n", s3.rollNo, s3.name, s3.branch);

    return 0;
}