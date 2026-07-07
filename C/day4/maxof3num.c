#include<stdio.h>

int main() {

    int a,b,c;

    printf("Enter the value of a: ");
    scanf("%d",&a);

    printf("Enter the value of b: ");
    scanf("%d",&b);

    printf("Enter the value of c: ");
    scanf("%d",&c);

    if(a>b) {
        printf("%d is Maximum number",a);
    }
    else if (b>c){
        printf("%d is Maximum Number",b);
    }
    else {
        printf("%d is maximum Number",c);
    }

    return 0;


}