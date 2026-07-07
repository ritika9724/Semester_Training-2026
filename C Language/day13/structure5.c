// Taking Input using Structure Pointer

#include <stdio.h>

struct Student {

    int rollNo;
    char name[20];
    char branch[20];

};

int main() {

    struct Student s1;

    struct Student *ptr = &s1;

    printf("Enter Roll Number : ");
    scanf("%d", &ptr->rollNo);

    printf("Enter Name : ");
    scanf("%s", ptr->name);

    printf("Enter Branch : ");
    scanf("%s", ptr->branch);

    printf("\nStudent Details\n");

    printf("%d %s %s",
           ptr->rollNo,
           ptr->name,
           ptr->branch);

    return 0;
}