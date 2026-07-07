// Dynamic Memory Allocation (DMA)
// This program demonstrates memory allocation using malloc()
// and shows the addresses of variables stored in different
// memory segments (Heap, Stack, and Data Segment).

#include <stdio.h>
#include <stdlib.h>

int main() {

    // Allocate memory for one integer on the Heap
    int *ptr1 = (int *)malloc(sizeof(int));
    int *ptr2 = (int *)malloc(sizeof(int));

    // Heap Memory Addresses
    printf("Heap Memory Addresses:\n");
    printf("%p\n", ptr1);
    printf("%p\n\n", ptr2);

    // Local variables are stored in Stack Memory
    int a, b;

    printf("Stack Memory Addresses:\n");
    printf("%p\n", &a);
    printf("%p\n\n", &b);

    // Static variables are stored in the Data Segment
    static int x, y;

    printf("Data Segment Addresses:\n");
    printf("%p\n", &x);
    printf("%p\n", &y);

    // Free dynamically allocated memory
    free(ptr1);
    free(ptr2);

    return 0;
}