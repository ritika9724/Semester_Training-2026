
#include <stdio.h>
#include <math.h>

int main(){
    int input, digit;

    printf("Enter a number: ");
    scanf("%d", &input);

    
    int sum = 0;
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
        int power = 1;
        for(int i = 0; i < size; i++) {
            power *= digit;
        }
        sum += power;
    }

    if (sum == originalInput)
        printf("%d is an Armstrong number.\n", originalInput);
    else
        printf("%d is not an Armstrong number.\n", originalInput);
    

    return 0;
}
