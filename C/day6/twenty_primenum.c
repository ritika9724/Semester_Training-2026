#include <stdio.h>

int main() {
    int count = 0;
    int number = 2;
    int isPrime = 1;
    
    while (count < 20){
        for(int i = 2; i <= number/2; i++){
            if(number % i == 0){
                isPrime = 0;
                break;
            }
        }
        
        if (isPrime){
            printf("%d ",number);
            count++;
        }
        
        isPrime = 1;
        number++;
    }
    return 0;
}