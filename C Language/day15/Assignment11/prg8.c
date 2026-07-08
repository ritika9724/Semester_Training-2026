// Write a C program to find sum of main diagonal elements of a matrix.


//print sum of diagonal from left to right 

#include <stdio.h>

int main() {

    int row, col, sum = 0;

    printf("Enter number of rows: ");
    scanf("%d", &row);

    printf("Enter number of columns: ");
    scanf("%d", &col);

    if(row != col) {
        printf("Main diagonal exists only for a square matrix.\n");
        return 0;
    }

    int a[row][col];

    printf("\nEnter matrix elements:\n");

    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for(int i = 0; i < row; i++) {
        sum = sum + a[i][i];
    }

    printf("\nSum of Main Diagonal Elements = %d", sum);

    return 0;
}