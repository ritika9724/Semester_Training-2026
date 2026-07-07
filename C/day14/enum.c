#include<stdio.h>

enum day {

    MON,
    TUE,
    WED,

    MON = 20,
    TUE,
    WED = 25,

};

int main() {

    printf("%zu\n", sizeof(enum day));
    enum day d = MON;
    printf("%d" , d);

    printf("%zu\n", sizeof(enum day));
    enum day d = TUE;
    printf("%d" , d);
    return 0;

    char ch = 'a'+40;
    printf("%d", ch);
}
