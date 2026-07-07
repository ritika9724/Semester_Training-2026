#include <stdio.h>

int main(){
    int a;

    printf("Enter the value of a: ");
    scanf("%d",&a);


    switch(a){
        case 1:
            printf("one");
            break;

        case 2:
            printf("two");
            break;

        case 3:
            printf("three");
            break;

        case 4:
            printf("four");
            break;

        case 5:
            printf("five");
            break;

        default:
            printf("out of range");

    }


    return 0;
}