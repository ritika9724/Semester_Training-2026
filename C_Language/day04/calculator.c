#include<stdio.h>

int main() {

    float a,b;
    printf("Enter Two no. : ");
    scanf("%f%f", &a,&b);
    printf("Enter a operator : ");
    char op;
    scanf(" %c",&op);


    switch(op) {
        case '+' :
        printf("%f", a+b);
        break;

        case '-' :
        printf("%f", a-b);
        break;

        case '*' :
        printf("%f", a*b);
        break;

        case '/' :
        if (b!=0){
            printf("%f",a/b);
        }
        else {
            printf("Division is not possible");
        }
        break;

        default : 
        printf("Invalid Operator");
    }
    return 0;
}