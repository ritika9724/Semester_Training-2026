// Accessing Structure Members using Structure Pointer

#include <stdio.h>

struct Student {

    int rollNo;
    char name[20];
    char branch[10];

};

int main() {

    struct Student s1 = {101, "Ritika", "CSE"};

    // Pointer to structure
    struct Student *ptr = &s1;

    // Arrow (->) operator is used with structure pointers
    printf("%d %s %s",
           ptr->rollNo,
           ptr->name,
           ptr->branch);

    return 0;
}