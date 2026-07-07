// Write a C program to find sum of all array elements.

#include <stdio.h>

int main() {
    int n, i;

    printf("Enter size of array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter array elements: ");

    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
        
    int sum = 0;

    for(i = 0; i < n; i++)
        sum += arr[i];

    printf("Sum of Array elements is %d ", sum);
    
    return 0;
}