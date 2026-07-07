#include<stdio.h>


// union payment 
typedef union
{
    int card;
    double upi;
    long scanner;
}payment;

int main() {
    payment p;
                       

    p.card = 20;
    p.scanner = 30;
    int x = sizeof(p);
    printf("%zu\n",x);

    printf("%d", p.card);

    return 0;
}