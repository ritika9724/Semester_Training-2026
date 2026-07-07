// Write a C program to count total number of negative elements in an array.

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
        
    for(i = 0; i < n; i++) {
        if(arr[i] < 0)
            count++;
    }

    printf("Total negative elements: %d", count);

    
    return 0;
}