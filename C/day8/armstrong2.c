#include <stdio.h>
#include <math.h>

int main(){
    int input, digit;

    printf("Enter a number: ");
    scanf("%d", &input);

    
    double sum = 0;
    int originalInput = input;

    int size = 0;

    while (input > 0){
        input /= 10;
        size++;
    }

    input = originalInput;

    while (input > 0){
        digit = input % 10;
        input /= 10;
        sum += pow(digit, size);
    }

    if (sum == originalInput)
        printf("%d is an Armstrong number.\n", originalInput);
    else
        printf("%d is not an Armstrong number.\n", originalInput);
    

    return 0;
}