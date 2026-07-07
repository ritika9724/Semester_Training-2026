#include <stdio.h>

int sum(int a, int b){
    return a+b;
}

int main(){
    int *p; // not assign address - wild pointer
    // printf("%d\n", *p);

    p = NULL;

    int x = 20;
    int y = 30;

    int *const ptr = &x; // constant pointer
    // ptr = &y; // cannot change address
    // printf("%d\n", *ptr);

    const int *p1;
    p1 = &x;
    p1 = &y;
    // *p1 = 20; // cannot change value

    char s[] = "Hello"; // string literal
    s[0] = 'p';

    int (*fp)(int,int);
    fp = sum;

    printf("%d\n", fp(3,5));

    return 0;
}