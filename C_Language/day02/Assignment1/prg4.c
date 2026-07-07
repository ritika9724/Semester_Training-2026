// Write a C program that calculates the volume of a sphere.


#include <stdio.h>

int main() {

    float r=2.56;
    float volume;

    volume=(4.0/3.0)*3.14159*r*r*r;

    printf("The radius of the sphere : %.2f\n",r);
    printf("The volume of the sphere : %.6f\n",volume);

    return 0;
}