// Write a C program to copy all elements from an array to another array.

#include <stdio.h>

int main() {
    int n, i;
    int count = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter array elements: ");

    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
        
    int arr2[n];
        
    for(i = 0; i < n; i++)
        arr2[i] = arr[i];

    printf("Copied array: ");

    for(i = 0; i < n; i++)
        printf("%d ", arr2[i]);
    
    return 0;
}