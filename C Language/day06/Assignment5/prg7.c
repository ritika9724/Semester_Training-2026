// Write a C program to find roots of a quadratic equation using switch case.

#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c;
    float r1, r2, real, imag;
    float D;

    printf("Enter a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    D = b*b - 4*a*c;

    switch(D > 0 ? 1 : D == 0 ? 0 : -1)
    {
        case 1:
            r1 = (-b + sqrt(D)) / (2*a);
            r2 = (-b - sqrt(D)) / (2*a);

            printf("Root 1 = %.2f\n", r1);
            printf("Root 2 = %.2f\n", r2);
            break;

        case 0:
            r1 = -b / (2*a);

            printf("Both roots are equal = %.2f\n", r1);
            break;

        case -1:
            real = -b / (2*a);
            imag = sqrt(-D) / (2*a);

            printf("Root 1 = %.2f + %.2fi\n", real, imag);
            printf("Root 2 = %.2f - %.2fi\n", real, imag);
            break;
    }

    return 0;
}