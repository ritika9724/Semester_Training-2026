
                            // decimal to binary
                            
#include<stdio.h>

int main() {

    int n, rem, binary;

    printf("Enter the decimal Value: ");
    scanf("%d", &n);

    binary = 0;
     int base= 1;

     while(n>0){
        rem= n % 2;
        n = n / 2;

        binary = binary + (rem * base);
        base = base * 10;
     }
    
      printf("%d",binary);

    return 0;
}