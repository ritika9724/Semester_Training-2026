// Write a C program to check whether triangle is equilateral, scalene or isosceles. (Input all sides of the triangle)

#include<stdio.h>

int main()  {

    int side1, side2, side3;

    scanf("%d %d %d",&side1, &side2, &side3);

    if(side1 == side2 && side2 == side3){
        printf("It is a Equilateral triangle");
    }
    else if (side1 == side2 || side2==side3 || side3==side1){
        printf("It is isosceles triangle");
    }
    else if(side1 != side2 && side2 != side3 && side1!= side3){
        printf("It is Scalene Triangle");
    }
    else{
        printf("Invalid triangle");
    }
    return 0;
}