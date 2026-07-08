// Write a C program to check whether two matrices are equal or not.

#include <stdio.h>

int main() {

    int row, col;

    printf("Enter number of rows: ");
    scanf("%d", &row);

    printf("Enter number of columns: ");
    scanf("%d", &col);

    int a[row][col], b[row][col];
    int equal = 1;

    printf("\nEnter elements of First Matrix:\n");
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nEnter elements of Second Matrix:\n");
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Check equality
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            if(a[i][j] != b[i][j]) {
                equal = 0;
                break;
            }
        }
        if(equal == 0)
            break;
    }

    if(equal)
        printf("\nMatrices are Equal.\n");
    else
        printf("\nMatrices are Not Equal.\n");

    return 0;
}