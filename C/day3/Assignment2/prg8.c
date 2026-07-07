// Write a C program to Swap two Numbers Without Using temporary variable.

#include<stdio.h>

int main()  {

    int a , b, temp;

    printf("Enter the value a: ");
    scanf("%d", &a);

    printf("Enter the value b: ");
    scanf("%d",&b);

    temp=a;
    a=b;
    b=temp;

    printf("a = %d\n",a);
    printf("b = %d",b);

    return 0;
}