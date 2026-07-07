// Write a C program to calculate the distance between the two points.

#include<stdio.h>
#include<math.h>
int main() {

    int x1,y1,x2,y2;
    float distance;

    printf("Enter value x1: ");
    scanf("%d",&x1);

    printf("Enter value y1: ");
    scanf("%d",&y1);

    printf("Enter value x2: ");
    scanf("%d",&x2);

    printf("Enter value y2: ");
    scanf("%d",&y2);

    distance=sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));

    printf("Distance between the said points:%.4f",distance);

    return 0;
}