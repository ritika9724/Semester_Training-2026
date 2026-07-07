// Dynamic Memory Allocation using calloc()
// calloc() allocates contiguous memory blocks
// and initializes all elements to zero.

#include <stdio.h>
#include <stdlib.h>

int main() {

    // Allocate memory for 5 integers
    int *arr = (int *)calloc(5, sizeof(int));

    // Check allocation
    if (arr == NULL) {
        printf("Memory Allocation Failed!\n");
        return 1;
    }

    // Assign values
    for (int i = 0; i < 5; i++) {
        arr[i] = i + 10;
    }

    printf("Array Elements:\n");

    // Display values
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    // Deallocate memory
    free(arr);

    return 0;
}