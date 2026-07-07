// Write a C program to count total number of even and odd elements in an array.

#include <stdio.h>

int main() {
    int n, i;
    int even = 0, odd = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter array elements: ");

    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
        
    for(i = 0; i < n; i++) {
        if(arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("Even elements: %d\n", even);
    printf("Odd elements: %d\n", odd);
    
    return 0;
}