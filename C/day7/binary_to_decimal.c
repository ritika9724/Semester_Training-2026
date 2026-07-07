
                            // binary to decimal

#include<stdio.h>

int main()  {

    int n, rem;
    long long binary;

    printf("Enter the binary Value: ");
    scanf("%d", &n);

    binary = 0;
    int base = 1;

    while(n>0){
        rem = n % 10;
        n = n / 10;

        binary = binary + (rem*base);
        base = base*2;
    }

    printf("%lld",binary);
    return 0;
}