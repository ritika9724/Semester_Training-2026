#include <stdio.h>

struct student {
    char name[100];
    int rollno;
    char add[100];
    char section[2];
};

int main(){
    struct student s1 = {"Ritika", 2305585, "Hoshiarpur", "B"};

    printf("%s %d %s %s\n", s1.name, s1.rollno, s1.add, s1.section);

    printf("%d", sizeof(s1));

    return 0;
}