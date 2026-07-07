// Write a C program to find maximum and minimum element in an array.

#include <stdio.h>

int main() {
    int n, i, min, max;

    printf("Enter size of array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter array elements: ");

    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
        
    max = min = arr[0];

    for(i = 1; i < n; i++) {
        if(arr[i] > max)
            max = arr[i];

        if(arr[i] < min)
            min = arr[i];
    }

    printf("Maximum: %d\n", max);
    printf("Minimum: %d\n", min);
    
    return 0;
}