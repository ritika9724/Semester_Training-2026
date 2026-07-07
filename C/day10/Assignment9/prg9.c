// Write a C program to insert an element in an array.

#include <stdio.h>

int main() {
    int n, i, pos, value;
    int count = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);
    
    int arr[100];
    
    printf("Enter array elements: ");

    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
        
    printf("Enter position: ");
    scanf("%d", &pos);

    printf("Enter value: ");
    scanf("%d", &value);

    for(i = n; i >= pos; i--)
        arr[i] = arr[i - 1];

    arr[pos - 1] = value;
    n++;

    printf("Array after insertion: ");

    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    
    return 0;
}