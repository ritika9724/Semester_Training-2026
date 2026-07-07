 // Write a C program to display a menu for arithmetic operations and perform the selected operation using switch case

 #include<stdio.h>

 int main() {

    printf("-----MENU-----\n");
    printf("1 Addition\n");
    printf("2 Subtraction\n");
    printf("3 Multiplication\n");
    printf("4 Division\n");

    printf("Enter your choice : ");

    int choice;
    scanf("%d",&choice);

    int a,b;
    printf("Enter two numbers :");
    scanf("%d %d", &a, &b);

    switch(choice){

        case 1:
        printf("Sum = %d", a+b);
        break;

        case 2:
        printf("Sub = %d", a-b);
        break;

        case 3:
        printf("Multiply = %d", a*b);
        break;

        case 4:
        if(b!=0){
        printf("Division = %.2f", (float) a/b);
        }
        else{
            printf("Division is not possible");
        }
        break;

        default:
        printf("Invalid choice");
        break;
    }

    return 0;

 }