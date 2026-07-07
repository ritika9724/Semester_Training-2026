// Write a C program to print all negative elements in an array.

#include <stdio.h>

int main() {
    int n, i;

    printf("Enter size of array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter array elements: ");

    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Negative Array elements are: ");

    for(i = 0; i < n; i++) {
        if(arr[i] < 0)
            printf("%d ", arr[i]);
    }

    return 0;
}