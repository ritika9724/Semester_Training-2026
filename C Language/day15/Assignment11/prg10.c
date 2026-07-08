// Write a C program to find sum of each row and column of a matrix

#include <stdio.h>

int main() {

    int row, col;

    printf("Enter number of rows: ");
    scanf("%d", &row);

    printf("Enter number of columns: ");
    scanf("%d", &col);

    int a[row][col];

    printf("\nEnter matrix elements:\n");

    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Sum of each row
    printf("\nSum of each row:\n");

    for(int i = 0; i < row; i++) {
        int sum = 0;

        for(int j = 0; j < col; j++) {
            sum += a[i][j];
        }

        printf("Row %d = %d\n", i + 1, sum);
    }

    // Sum of each column
    printf("\nSum of each column:\n");

    for(int j = 0; j < col; j++) {
        int sum = 0;

        for(int i = 0; i < row; i++) {
            sum += a[i][j];
        }

        printf("Column %d = %d\n", j + 1, sum);
    }

    return 0;
}