// Write a C program to perform Scalar matrix multiplication.

#include <stdio.h>

int main() {

    int row, col, scalar;

    printf("Enter number of rows: ");
    scanf("%d", &row);

    printf("Enter number of columns: ");
    scanf("%d", &col);

    int matrix[row][col];

    printf("Enter matrix elements:\n");
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Enter scalar value: ");
    scanf("%d", &scalar);

    printf("\nResultant Matrix:\n");

    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            printf("%d ", matrix[i][j] * scalar);
        }
        printf("\n");
    }

    return 0;
}