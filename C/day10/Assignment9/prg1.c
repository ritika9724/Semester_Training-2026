// Write a C program to read and print elements of array.

#include <stdio.h>

int main() {
    int n, i;

    printf("Enter size of array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter array elements: ");

    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Array elements are: ");

    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}