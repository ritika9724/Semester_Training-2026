// Write a C program to print all unique elements in the array.

#include <stdio.h>

int main()
{
    int arr[100], n, i, j, count;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("\nUnique elements are:\n");

    for(i = 0; i < n; i++)
    {
        count = 0;

        for(j = 0; j < n; j++)
        {
            if(arr[i] == arr[j])
                count++;
        }

        if(count == 1)
            printf("%d ", arr[i]);
    }

    return 0;
}