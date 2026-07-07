// Write a C program to count total number of duplicate elements in an array.

#include <stdio.h>

int main()
{
    int arr[100], n, i, j, count = 0;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for(i = 0; i < n; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
                break;
            }
        }
    }

    printf("\nTotal duplicate elements: %d", count);

    return 0;
}