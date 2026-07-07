// C program to find area of an equilateral triangle

#include<stdio.h>
#include<math.h>
int main() {

    int side;
    float area;

    scanf("%d",&side);
    area=(sqrt(3)/4)*side *side;
    printf("Area of equilateral triangle = %.2f",area);

return 0;

}