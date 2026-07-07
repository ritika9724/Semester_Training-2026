// Write a C program to calculate a bike’s average consumption from the given total distance (integer value) traveled (in km) and spent fuel (in liters, float number – 2 decimal point).

#include<stdio.h>

int main() {

    int distance,fuel;
    float avg;
   

    printf("Input total distance in km: ");
    scanf("%d",&distance);

    printf("Input total fuel spent in liters: ");
    scanf("%d",&fuel);

    
    avg=distance/fuel;

    printf("Average consumption (km/l)%.2f",avg);

    return 0;
}