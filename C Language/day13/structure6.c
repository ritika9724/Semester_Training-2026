// Self-Referential Structure
// A structure containing a pointer to the same structure type.
// This concept is used to implement Linked Lists.

#include <stdio.h>

struct Student {

    int rollNo;
    char name[20];

    struct Student *next;

};

int main() {

    struct Student s1 = {101, "Ritika", NULL};
    struct Student s2 = {102, "Sauram", NULL};
    struct Student s3 = {103, "Riya", NULL};

    // Linking the structures
    s1.next = &s2;
    s2.next = &s3;

    struct Student *temp = &s1;

    printf("Student Details\n\n");

    while (temp != NULL) {

        printf("%d %s\n",
               temp->rollNo,
               temp->name);

        temp = temp->next;
    }

    return 0;
}