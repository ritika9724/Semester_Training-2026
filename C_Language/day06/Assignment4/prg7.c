// Write a C program to find all roots of a quadratic equation.

#include<stdio.h>
#include<math.h>

int main()  {

    int a,b,c,d;

    printf("Enter the value of a: ");
     scanf("%d",&a);

     printf("Enter the value of b: ");
    scanf("%d",&b);

    printf("Enter the value of c: ");
    scanf("%d",&c);

    d = b*b - 4*a*c;

    float r1 = (-b + sqrt(d))/(2*a);
    float r2 = (-b - sqrt(d))/(2*a);

    printf("root = %f\n",r1);
    printf("root = %f\n",r2);
   
    return 0;

}