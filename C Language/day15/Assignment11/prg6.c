// Write a C program to multiply two matrices.
#include <stdio.h>

int main() {

    int row1, col1, row2, col2;

    printf("Enter rows and columns of First Matrix: ");
    scanf("%d %d", &row1, &col1);

    printf("Enter rows and columns of Second Matrix: ");
    scanf("%d %d", &row2, &col2);

    // Matrix multiplication condition
    if(col1 != row2) {
        printf("Matrix multiplication is not possible.\n");
        return 0;
    }

    int a[row1][col1], b[row2][col2], multiply[row1][col2];

    printf("\nEnter elements of First Matrix:\n");
    for(int i = 0; i < row1; i++) {
        for(int j = 0; j < col1; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nEnter elements of Second Matrix:\n");
    for(int i = 0; i < row2; i++) {
        for(int j = 0; j < col2; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Matrix Multiplication
    for(int i = 0; i < row1; i++) {
        for(int j = 0; j < col2; j++) {

            multiply[i][j] = 0;

            for(int k = 0; k < col1; k++) {
                multiply[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printf("\nMultiplication of Matrices:\n");

    for(int i = 0; i < row1; i++) {
        for(int j = 0; j < col2; j++) {
            printf("%d ", multiply[i][j]);
        }
        printf("\n");
    }

    return 0;
}