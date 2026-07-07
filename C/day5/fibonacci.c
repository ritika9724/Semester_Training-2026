#include<stdio.h>

int main() {

    int n=10;
    int a=0;
    int b=1;

    printf("%d\n",a);
    printf("%d\n",b);

    for(int n=0; n<=10; n++){
         int c=a+b;
        printf("%d\n",c);

        a=b;
        b=c;
    }
    return 0;
}

// 0 1 1 2 3 5 8 13 21 34