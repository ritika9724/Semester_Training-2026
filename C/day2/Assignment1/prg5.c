// Write a C program that converts kilometers per hour to miles per hour.

#include <stdio.h>

int main() {

    int km=15;
    float miles;

    miles=km*0.621371;

    printf("Input kilometers per hour : %d\n",km);
    printf("%.6f miles per hour",miles);

    return 0;
}