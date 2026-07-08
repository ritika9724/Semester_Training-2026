// Write a C program to left rotate an array.

#include<stdio.h>

int main(){
    int arr[100], n , temp;

    printf("Enter the sizeof array :");
    scanf("%d",&n);

    printf("Enter array elements : ");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    temp = arr[0];

    for(int i =0; i<n-1; i++){
        arr[i]=arr[i+1];
    }
    arr[n-1]=temp;

    printf("Array after left rotation :\n");
    for(int i=0; i<n; i++){
        printf("%d",arr[i]);
    }
    return 0;
}