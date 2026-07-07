// Dynamic Memory Allocation using malloc()
// This program dynamically allocates memory for an integer array,
// stores values, and prints the array elements.

#include <stdio.h>
#include <stdlib.h>

int main() {

    // Allocate memory for 5 integers
    int *arr = (int *)malloc(5 * sizeof(int));

    // Check if memory allocation was successful
    if (arr == NULL) {
        printf("Memory Allocation Failed!\n");
        return 1;
    }

    // Store values in the dynamically allocated array
    for (int i = 0; i < 5; i++) {
        arr[i] = i + 10;
    }

    printf("Array Elements:\n");

    // Display array elements
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    // Free allocated memory
    free(arr);

    return 0;
}