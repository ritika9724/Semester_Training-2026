// Structure Padding
// Compiler may insert extra bytes between members for memory alignment.

#include <stdio.h>

#pragma pack(1)      // Removes padding

struct Student {

    int rollNo;
    char grade;

};

int main() {

    struct Student s1;

    printf("Size of Structure = %d Bytes", sizeof(s1));

    return 0;
}