
// using goto

#include<stdio.h>

int main()  {

    int a=0, b=1;
    int i=1;

    loop:

    if(i<=10);
    {
        printf("%d",a);
        int c=a+b;
        a=b;
        b=c;
        i++;
    }
        goto loop;

    return 0;
}