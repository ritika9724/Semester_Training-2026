// Write a C program to put even and odd elements of array in two separate array.

#include <stdio.h>

int main()
{
    int arr[100], even[100], odd[100];
    int n, i, e = 0, o = 0;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for(i = 0; i < n; i++)
    {
        if(arr[i] % 2 == 0)
            even[e++] = arr[i];
        else
            odd[o++] = arr[i];
    }

    printf("\nEven array: ");
    for(i = 0; i < e; i++)
        printf("%d ", even[i]);

    printf("\nOdd array: ");
    for(i = 0; i < o; i++)
        printf("%d ", odd[i]);

    return 0;
}