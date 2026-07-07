// Write a C program to create Simple Calculator using switch case.

#include<stdio.h>

int main() {

    float a , b;

    printf("Enter the first Number : ");
    scanf("%f", &a);

    printf("Enter the Second Number : ");
    scanf("%f", &b);

    printf("Enter the operator : ");
    char op;
    scanf(" %c", &op);


    switch(op){

        case '+':
        printf("%f", a+b);
        break;

         case '-':
        printf("%f", a-b);
        break;

         case '*':
        printf("%f", a*b);
        break;

         case '/':
         if(b!=0){
        printf("%f", a/b);
         }
         else{
            printf("Division is possible");
         }
         break;

        default:
        printf("Invalid operator");
        break;
    }

    return 0;
}