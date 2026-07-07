 // C program to calculate Compound Interest

 #include<stdio.h>
#include<math.h>


 int main() {

    int p;
    int t;
    float r;

    printf("Enter Principal: ");
    scanf("%d", &p);

    printf("Enter rate: ");
    scanf("%f", &r);

    printf("Enter time: ");
    scanf("%d", &t);

    float CI= p* pow((1+r/100),t);
    printf("Compound Interest = %f", CI);


    return 0;
 }